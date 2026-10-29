using System;

namespace AnhPD.FoodOrder
{
	public class StationOrchestrator
	{
		private readonly StationRuntimeState _state;

		private readonly StationInteractGroup[] _groups;

		private readonly AutoProcessor _processor;

		private readonly ProgressDriver _progress;

		private readonly Action<int, bool, int> _onComplete;

		private readonly Action<int, int> _onSpawnMore;

		private readonly Func<int, int, int> _getSpawnCount;

		private readonly Action<bool> _onWorkingChanged;

		private bool _waitingForCell;

		private int _pendingGroupIndex;

		private int _pendingRemaining;

		private bool _batchStarted;

		public bool IsWaitingForCell => _waitingForCell;

		public int PendingRemaining => _pendingRemaining;

		public int OwedResults
		{
			get
			{
				if (!_state.IsWorking || _state.IsResultSpawned)
				{
					return 0;
				}
				if (!_batchStarted && !_waitingForCell)
				{
					StationInteractGroup group = _groups[_state.Current.groupIndex];
					return Math.Max(1, group.GetResultNumber());
				}
				return _pendingRemaining;
			}
		}

		public StationOrchestrator(StationRuntimeState state, StationInteractGroup[] groups, AutoProcessor processor, ProgressDriver progress, Action<int, bool, int> onComplete, Func<int, int, int> getSpawnCount = null, Action<int, int> onSpawnMore = null, Action<bool> onWorkingChanged = null)
		{
			_state = state;
			_groups = groups;
			_processor = processor;
			_progress = progress;
			_onComplete = onComplete;
			_getSpawnCount = getSpawnCount;
			_onSpawnMore = onSpawnMore;
			_onWorkingChanged = onWorkingChanged;
		}

		public void TryStartProcess(InteractVector vector)
		{
			if (vector.groupIndex < 0 || vector.interactIndex < 0) return;
			if (_state.IsWorking) return;
			StationInteractGroup group = _groups[vector.groupIndex];
			if (group == null || !group.IsReadyToProcess()) return;
			_state.Current = vector;
			_state.IsWorking = true;
			_onWorkingChanged?.Invoke(true);
			StationGroupView view = group.View;
			if (view != null)
			{
				float duration = view.GetProcessDuration(_processor.GetExecutionContext().duration);
				if (duration > 0f) _processor.SetDuration(duration);
			}
			ExecutionContext ctx = _processor.GetExecutionContext();
			group.OnProcessStart(ctx);
			_processor.StartProcess(_progress, () => HandleComplete(true));
		}

		private void HandleComplete(bool success = true)
		{
			int groupIndex = _state.Current.groupIndex;
			if (groupIndex < 0 || groupIndex >= _groups.Length || _groups[groupIndex] == null) return;
			if (!success)
			{
				DoReset(groupIndex);
				return;
			}
			if (_state.IsResultSpawned)
			{
				_onComplete?.Invoke(groupIndex, true, 0);
				DoReset(groupIndex);
				return;
			}
			_pendingGroupIndex = groupIndex;
			_batchStarted = false;
			_pendingRemaining = Math.Max(1, _groups[groupIndex].GetResultNumber());
			PumpPending();
		}

		private void PumpPending()
		{
			if (!_state.IsResultSpawned)
			{
				int requested = _getSpawnCount != null ? _getSpawnCount(_pendingGroupIndex, _pendingRemaining) : _pendingRemaining;
				int granted = Math.Min(requested, _pendingRemaining);
				int take = requested >= 0 ? granted : 0;
				if (take > 0)
				{
					_pendingRemaining -= take;
					if (!_batchStarted)
					{
						_batchStarted = true;
						_onComplete?.Invoke(_pendingGroupIndex, false, take);
					}
					else
					{
						_onSpawnMore?.Invoke(_pendingGroupIndex, take);
					}
				}
				if (_pendingRemaining > 0)
				{
					_waitingForCell = true;
					return;
				}
				_state.IsResultSpawned = true;
			}
			if (_waitingForCell)
			{
				_waitingForCell = false;
			}
			DoReset(_pendingGroupIndex);
		}

		public bool TryResolveWaiting()
		{
			if (_waitingForCell)
			{
				int before = _pendingRemaining;
				PumpPending();
				return _pendingRemaining < before;
			}
			return false;
		}

		private void SetWaitingForCell(bool value)
		{
			_waitingForCell = value;
		}

		private void DoReset(int groupIndex)
		{
			_pendingRemaining = 0;
			_batchStarted = false;
			_groups[groupIndex].OnComplete();
			_state.Reset();
			_progress.Stop();
			_onWorkingChanged?.Invoke(false);
		}

		public void ForceSpawnResult()
		{
			_state.IsResultSpawned = true;
		}

		public void ForceComplete()
		{
			if (_waitingForCell)
			{
				_waitingForCell = false;
			}
			HandleComplete(false);
		}

		public void Cancel()
		{
			if (_waitingForCell)
			{
				_waitingForCell = false;
			}
			_pendingRemaining = 0;
			_batchStarted = false;
			foreach (StationInteractGroup group in _groups)
			{
				if (group.IsInteracting)
				{
					group.OnComplete();
				}
			}
			_state.Reset();
			_progress.Stop();
			_onWorkingChanged?.Invoke(false);
		}
	}
}
