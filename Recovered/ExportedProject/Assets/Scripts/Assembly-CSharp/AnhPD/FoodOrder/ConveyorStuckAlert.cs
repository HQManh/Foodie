using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class ConveyorStuckAlert
	{
		private enum Verdict
		{
			None = 0,
			OutOfSlot = 1,
			OutOfMove = 2
		}

		private readonly ConveyorPickup _pickup;

		private const float CheckInterval = 0.4f;

		private float _nextCheck;

		private bool _stuck;

		private bool _deadlocked;

		private bool _flashing;

		private const float LockoutBlinksPerSecond = 1f;

		private readonly List<IngredientConveyorItem> _front;

		private readonly ConveyorLockoutCheck _lockout;

		private readonly List<IngredientConveyorItem> _locked;

		private List<IngredientConveyorItem> _painted;

		private const float LastMoveHintDelay = 3f;

		private IngredientConveyorItem _lastMove;

		private float _lastMoveSince;

		private readonly List<IngredientConveyorItem> _hinted;

		private readonly List<IngredientConveyorItem> _hintTarget;

		private readonly HashSet<IngredientConveyorItem> _frontSeen;

		public ConveyorStuckAlert(ConveyorPickup pickup)
		{
		}

		public void Tick(ConveyorGrid grid, float deltaTime)
		{
		}

		public string DebugState()
		{
			return null;
		}

		private void DriveFlash(LevelInfo info)
		{
		}

		private void Paint(List<IngredientConveyorItem> items, float phase)
		{
		}

		private void StopFlash()
		{
		}

		private Verdict Classify(ConveyorGrid grid, LevelInfo info)
		{
			return Verdict.None;
		}

		private void RefreshLastMoveHint(ConveyorGrid grid)
		{
		}

		private IngredientConveyorItem FindOnlyMove(ConveyorGrid grid)
		{
			return null;
		}

		private bool HasAnyMove(ConveyorGrid grid)
		{
			return false;
		}

		private static bool IsKitchenAboutToFree()
		{
			return false;
		}
	}
}
