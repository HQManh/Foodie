using System;
using CakeOrder.InGame;

namespace AnhPD.FoodOrder
{
	public class BoosterService
	{
		private const int ReorderRow = 2;

		private readonly AreaRefs _areaRefs;

		private readonly ManagerRefs _managerRefs;

		private readonly LevelInfo _info;

		private readonly AutoCompleteOrderFx _autoCompleteFx;

		private readonly Action<bool> _setBoosterDim;

		private const float AutoMakeRecheck = 0.2f;

		private float _autoMakeStamp;

		private bool _autoMakeUsable;

		private const int BoosterBlockId = 1008;

		private bool _holding;

		private int _pickableScanFrame;

		private bool _anyPickable;

		private int _beltScanFrame;

		private int _deepestBeltRow;

		private FCustomerLineHandle LineHandle => null;

		public bool IsHolding => false;

		public BoosterService(AreaRefs areaRefs, ManagerRefs managerRefs, LevelInfo info, AutoCompleteOrderFx autoCompleteFx, Action<bool> setBoosterDim)
		{
		}

		public bool CanUse(BoosterType boosterType, out bool handled)
		{
			handled = default;
			return false;
		}

		private bool CanAutoMakeOrder()
		{
			return false;
		}

		public void Apply(LevelBaseCakeOrderAbstract.BoosterData boosterData, Action<LevelBaseCakeOrderAbstract.BoosterData> onEnd = null)
		{
		}

		private void BeginHold()
		{
		}

		private void EndHold()
		{
		}

		public void PrepareTutorial(BoosterType boosterType)
		{
		}

		private bool AnyBeltItem(int minRow)
		{
			return false;
		}

		private bool AnyPickableBeltItem(int minRow)
		{
			return false;
		}

		private int DeepestBeltRow()
		{
			return 0;
		}

		private DragItem TutorialDirtyPlatePrefab()
		{
			return null;
		}
	}
}
