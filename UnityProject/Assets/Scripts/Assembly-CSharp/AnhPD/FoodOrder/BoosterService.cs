using System;
using CakeOrder.InGame;
using UnityEngine;

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

		private float _autoMakeStamp = -1f;

		private bool _autoMakeUsable;

		private const int BoosterBlockId = 1008;

		private bool _holding;

		private int _pickableScanFrame = -1;

		private bool _anyPickable;

		private int _beltScanFrame = -1;

		private int _deepestBeltRow = -1;

		private FCustomerLineHandle LineHandle => _managerRefs.lineHandle;

		public bool IsHolding => _holding;

		public BoosterService(AreaRefs areaRefs, ManagerRefs managerRefs, LevelInfo info, AutoCompleteOrderFx autoCompleteFx, Action<bool> setBoosterDim)
		{
			_areaRefs = areaRefs;
			_managerRefs = managerRefs;
			_info = info;
			_autoCompleteFx = autoCompleteFx;
			_setBoosterDim = setBoosterDim;
		}

		public bool CanUse(BoosterType boosterType, out bool handled)
		{
			handled = true;
			switch (boosterType)
			{
			case BoosterType.PickUp:
				return AnyPickableBeltItem(1);
			case BoosterType.CleanServeRow:
				return _areaRefs.ingGrid != null && _areaRefs.ingGrid.HasAnyDirtyPlate();
			case BoosterType.ReorderIngredientQueue:
				return DeepestBeltRow() > 1;
			case BoosterType.AutoMakeOrder:
				return CanAutoMakeOrder();
			default:
				handled = false;
				return false;
			}
		}

		private bool CanAutoMakeOrder()
		{
			if (Time.unscaledTime - _autoMakeStamp >= AutoMakeRecheck)
			{
				_autoMakeStamp = Time.unscaledTime;
				_autoMakeUsable = LineHandle != null && LineHandle.HasAutoCompletableOrder;
			}
			return _autoMakeUsable;
		}

		public void Apply(LevelBaseCakeOrderAbstract.BoosterData boosterData, Action<LevelBaseCakeOrderAbstract.BoosterData> onEnd = null)
		{
			bool finished = false;
			void Complete()
			{
				if (!finished)
				{
					finished = true;
					onEnd?.Invoke(boosterData);
				}
			}
			void EndHeldEffect()
			{
				if (!finished)
				{
					EndHold();
					Complete();
				}
			}
			void EndHoldOnce()
			{
				_autoCompleteFx.onFinished -= EndHoldOnce;
				if (!_autoCompleteFx.LastShowServed)
				{
					boosterData.appliedSuccessfully = false;
				}
				EndHeldEffect();
			}
			switch (boosterData.boosterEffect)
			{
			case BoosterType.PickUp:
				BeginHold();
				if (_managerRefs.spawnerController != null && _managerRefs.spawnerController.BeginPickAnyIngredient(EndHeldEffect))
				{
					return;
				}
				EndHeldEffect();
				return;
			case BoosterType.CleanServeRow:
				BeginHold();
				if (_areaRefs.ingGrid != null && _areaRefs.ingGrid.RunSpiderCleanBooster(EndHeldEffect))
				{
					return;
				}
				EndHeldEffect();
				return;
			case BoosterType.ReorderIngredientQueue:
				if (_managerRefs.spawnerController != null)
				{
					_managerRefs.spawnerController.PromoteRowToFront(ReorderRow);
				}
				Complete();
				return;
			case BoosterType.AutoMakeOrder:
			{
				FCustomerLine line = null;
				if (LineHandle != null)
				{
					line = LineHandle.PickAutoCompleteLine();
				}
				if (line != null && MessyController.Ins != null && MessyController.Ins.TryAutoCompleteOrderFx(line))
				{
					if (_autoCompleteFx.IsPlaying)
					{
						BeginHold();
						_autoCompleteFx.onFinished += EndHoldOnce;
						return;
					}
					if (_autoCompleteFx.LastShowServed)
					{
						Complete();
						return;
					}
				}
				boosterData.appliedSuccessfully = false;
				Complete();
				return;
			}
			default:
				Complete();
				return;
			}
		}

		private void BeginHold()
		{
			if (_holding)
			{
				return;
			}
			_holding = true;
			_setBoosterDim(true);
			if (LineHandle != null)
			{
				LineHandle.HoldTimers();
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level != null)
			{
				level.inputBlockers /* field recovered by guess (BoolModifier at +0x58) */.AddModifier(BoosterBlockId);
			}
			if (MessyController.Ins != null)
			{
				MessyController.Ins.SetStationsIntakeHeld(true);
			}
		}

		private void EndHold()
		{
			if (!_holding)
			{
				return;
			}
			_holding = false;
			if (MessyController.Ins != null)
			{
				MessyController.Ins.SetStationsIntakeHeld(false);
			}
			LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
			if (level != null)
			{
				level.inputBlockers /* field recovered by guess (BoolModifier at +0x58) */.RemoveModifier(BoosterBlockId);
			}
			if (LineHandle != null)
			{
				LineHandle.ReleaseTimers();
			}
			_setBoosterDim(false);
		}

		public void PrepareTutorial(BoosterType boosterType)
		{
			if (boosterType == BoosterType.ReorderIngredientQueue)
			{
				if (_managerRefs.spawnerController != null)
				{
					_managerRefs.spawnerController.PrepareReorderTutorial(ReorderRow);
				}
			}
			else if (boosterType == BoosterType.CleanServeRow && _areaRefs.ingGrid != null)
			{
				_areaRefs.ingGrid.SpawnFullDirtyStackAt(_areaRefs.ingGrid.transform.position, TutorialDirtyPlatePrefab());
			}
		}

		private bool AnyBeltItem(int minRow)
		{
			return minRow <= DeepestBeltRow();
		}

		private bool AnyPickableBeltItem(int minRow)
		{
			if (_pickableScanFrame == Time.frameCount)
			{
				return _anyPickable;
			}
			_pickableScanFrame = Time.frameCount;
			_anyPickable = false;
			IngredientSpawnerController spawner = _managerRefs.spawnerController;
			if (spawner == null || spawner.Grid == null || spawner.Pickup == null)
			{
				return false;
			}
			ConveyorPickup pickup = spawner.Pickup;
			foreach (ConveyorSlot slot in spawner.Grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (item != null && slot.Row >= minRow && !item.IsHidden && !item.IsFrozen && pickup.HasRoomFor(item, true))
				{
					_anyPickable = true;
					break;
				}
			}
			return _anyPickable;
		}

		private int DeepestBeltRow()
		{
			if (_beltScanFrame != Time.frameCount)
			{
				_beltScanFrame = Time.frameCount;
				_deepestBeltRow = -1;
				IngredientSpawnerController spawner = _managerRefs.spawnerController;
				if (spawner != null)
				{
					foreach (ConveyorSlot slot in spawner.Grid.Slots)
					{
						if (slot.Item != null && _deepestBeltRow < slot.Row)
						{
							_deepestBeltRow = slot.Row;
						}
					}
				}
			}
			return _deepestBeltRow;
		}

		private DragItem TutorialDirtyPlatePrefab()
		{
			if (_info != null)
			{
				foreach (RcDishInfo dishInfo in _info.GetDishInfosInLevelOrders())
				{
					if (dishInfo != null && dishInfo.dirtyPlate != null)
					{
						return dishInfo.dirtyPlate;
					}
				}
			}
			return null;
		}
	}
}
