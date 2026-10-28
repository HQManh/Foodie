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

		public bool IsWaitingForCell => false;

		public int PendingRemaining => 0;

		public int OwedResults => 0;

		public StationOrchestrator(StationRuntimeState state, StationInteractGroup[] groups, AutoProcessor processor, ProgressDriver progress, Action<int, bool, int> onComplete, Func<int, int, int> getSpawnCount = null, Action<int, int> onSpawnMore = null, Action<bool> onWorkingChanged = null)
		{
		}

		public void TryStartProcess(InteractVector vector)
		{
		}

		private void HandleComplete(bool success = true)
		{
		}

		private void PumpPending()
		{
		}

		public bool TryResolveWaiting()
		{
			return false;
		}

		private void SetWaitingForCell(bool value)
		{
		}

		private void DoReset(int groupIndex)
		{
		}

		public void ForceSpawnResult()
		{
		}

		public void ForceComplete()
		{
		}

		public void Cancel()
		{
		}
	}
}
