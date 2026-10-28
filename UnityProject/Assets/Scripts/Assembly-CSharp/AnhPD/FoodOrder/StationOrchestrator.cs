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
			// TODO(unrecovered): needs the StationGroupView virtual calls (vtable +0x1a8 float duration query and +0x218 start call) and the AutoProcessor duration write-back; the view member signatures are not in the stubs.
		}

		private void HandleComplete(bool success = true)
		{
			// TODO(unrecovered): completion VFX chain (PoolingParticle spawn via singleton lookups, ParticleRequest At/Volume/Play) is built from struct copies and singleton accessors that do not map cleanly to the stubs; not guessing.
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
