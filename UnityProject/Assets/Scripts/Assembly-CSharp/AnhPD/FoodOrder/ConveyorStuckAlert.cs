using System.Collections.Generic;
using System.Text;
using UnityEngine;

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

		private readonly List<IngredientConveyorItem> _front = new List<IngredientConveyorItem>();

		private readonly ConveyorLockoutCheck _lockout = new ConveyorLockoutCheck();

		private readonly List<IngredientConveyorItem> _locked = new List<IngredientConveyorItem>();

		private List<IngredientConveyorItem> _painted;

		private const float LastMoveHintDelay = 3f;

		private IngredientConveyorItem _lastMove;

		private float _lastMoveSince;

		private readonly List<IngredientConveyorItem> _hinted = new List<IngredientConveyorItem>();

		private readonly List<IngredientConveyorItem> _hintTarget = new List<IngredientConveyorItem>();

		private readonly HashSet<IngredientConveyorItem> _frontSeen = new HashSet<IngredientConveyorItem>();

		public ConveyorStuckAlert(ConveyorPickup pickup)
		{
			_pickup = pickup;
		}

		public void Tick(ConveyorGrid grid, float deltaTime)
		{
			if (!(MessyController.Ins != null))
			{
				return;
			}
			LevelInfo info = MessyController.Ins.Info;
			if (info != null)
			{
				_nextCheck -= deltaTime;
				if (!(_nextCheck > 0f))
				{
					_nextCheck = CheckInterval;
					StopFlash();
					grid.PruneOrphanChains();
					Verdict verdict = Classify(grid, info);
					_stuck = verdict == Verdict.OutOfSlot;
					_deadlocked = verdict == Verdict.OutOfMove;
					info.SetBeltStuck(verdict == Verdict.OutOfSlot);
					info.SetBeltDeadlocked(_deadlocked);
					info.SetBeltHasMove(HasAnyMove(grid));
					_lockout.Collect(grid, _locked);
					RefreshLastMoveHint(grid);
				}
				DriveFlash(info);
			}
		}

		public string DebugState()
		{
			StringBuilder sb = new StringBuilder();
			string state = string.Format("stuck={0} deadlocked={1} locked={2} flashing={3}", _stuck, _deadlocked, _locked.Count, _flashing);
			string next = string.Format(" next={0}", _nextCheck);
			bool kitchen = MessyController.Ins != null && IsKitchenAboutToFree();
			string kitchenText = string.Format(" kitchenFree={0} [", kitchen);
			sb.Append(state + next + kitchenText);
			foreach (IngredientConveyorItem item in _front)
			{
				if (!(item != null))
				{
					sb.Append("null");
				}
				else
				{
					IngredientState first = item.Items[0];
					sb.Append((first == null) ? null : first.id);
				}
				sb.Append(' ');
			}
			sb.Append(']');
			return sb.ToString();
		}

		private void DriveFlash(LevelInfo info)
		{
			bool blinking = ((!_deadlocked) ? info.IsGridAlertBlinking : info.IsGridDeadlockBlinking);
			List<IngredientConveyorItem> items;
			float phase;
			if ((_stuck || _deadlocked) && blinking)
			{
				items = _front;
				phase = info.GridAlertBlinkPhase;
			}
			else
			{
				items = _locked;
				if (items.Count < 1)
				{
					StopFlash();
					return;
				}
				phase = Mathf.Abs(Mathf.Sin(Time.time * (float)System.Math.PI * LockoutBlinksPerSecond));
			}
			Paint(items, phase);
		}

		private void Paint(List<IngredientConveyorItem> items, float phase)
		{
			if (_painted != items)
			{
				StopFlash();
			}
			foreach (IngredientConveyorItem item in items)
			{
				if (item != null)
				{
					item.SetDeadFlash(on: true);
					item.SetRejectFlashAmount(phase);
				}
			}
			_painted = items;
			_flashing = true;
		}

		private void StopFlash()
		{
			if (!_flashing)
			{
				return;
			}
			foreach (IngredientConveyorItem item in _painted)
			{
				if (item != null)
				{
					item.ClearRejectFlash();
					item.SetDeadFlash(on: false);
				}
			}
			_flashing = false;
		}

		private Verdict Classify(ConveyorGrid grid, LevelInfo info)
		{
			_front.Clear();
			if (IsKitchenAboutToFree())
			{
				return Verdict.None;
			}
			int minCellsNeeded = int.MaxValue;
			bool completed = true;
			foreach (ConveyorSlot slot in grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (!(item != null) || !slot.IsAtFrontRow)
				{
					continue;
				}
				_front.Add(item);
				if (item.FreezeTurns > 0 || item.Slot == null || !item.Slot.IsPickable)
				{
					continue;
				}
				if (!_pickup.CanPickIgnoringAlert(item) || _pickup.HasRoomFor(item) || !_pickup.GridFullOnLastCheck)
				{
					completed = false;
					break;
				}
				minCellsNeeded = Mathf.Min(minCellsNeeded, _pickup.CellsNeededOnLastCheck);
			}
			if (completed && _front.Count != 0)
			{
				if (minCellsNeeded != int.MaxValue && minCellsNeeded <= info.CountCellsFreeableBySaveMe())
				{
					return Verdict.OutOfSlot;
				}
				return Verdict.OutOfMove;
			}
			return Verdict.None;
		}

		private void RefreshLastMoveHint(ConveyorGrid grid)
		{
			_hintTarget.Clear();
			IngredientConveyorItem only = FindOnlyMove(grid);
			if (only != _lastMove)
			{
				_lastMove = only;
				_lastMoveSince = Time.time;
			}
			if (only != null && Time.time - _lastMoveSince >= LastMoveHintDelay)
			{
				foreach (ConveyorSlot slot in grid.Slots)
				{
					if (slot.Item != null && slot.IsAtFrontRow && slot.Item != only)
					{
						_hintTarget.Add(slot.Item);
					}
				}
			}
			foreach (IngredientConveyorItem item in _hinted)
			{
				if (item != null && !_hintTarget.Contains(item))
				{
					item.SetHintDim(on: false);
				}
			}
			foreach (IngredientConveyorItem item2 in _hintTarget)
			{
				item2.SetHintDim(on: true);
			}
			_hinted.Clear();
			_hinted.AddRange(_hintTarget);
		}

		private IngredientConveyorItem FindOnlyMove(ConveyorGrid grid)
		{
			IngredientConveyorItem only = null;
			if (!_stuck && !_deadlocked && !_pickup.PickAnyMode && !TutorialGate.IsActive)
			{
				MessyController level = MessyController.Ins;
				if (level != null && !level.IsAllowInteract)
				{
					return null;
				}
				_frontSeen.Clear();
				foreach (ConveyorSlot slot in grid.Slots)
				{
					if (!(slot.Item != null) || !slot.IsAtFrontRow)
					{
						continue;
					}
					IngredientConveyorItem item = slot.Item;
					if (item.IsBusy)
					{
						return null;
					}
					if (_frontSeen.Add(item) && _pickup.HasMoveFor(item))
					{
						if (only != null)
						{
							return null;
						}
						only = item;
					}
				}
				if (_frontSeen.Count < 2)
				{
					return null;
				}
				return only;
			}
			return null;
		}

		private bool HasAnyMove(ConveyorGrid grid)
		{
			foreach (ConveyorSlot slot in grid.Slots)
			{
				if (slot.IsAtFrontRow && _pickup.HasMoveFor(slot.Item))
				{
					return true;
				}
			}
			return false;
		}

		private static bool IsKitchenAboutToFree()
		{
			foreach (CookingStation station in MessyController.Ins.GetCookingStations())
			{
				if (station != null && station.IsCookingForShelf())
				{
					return true;
				}
			}
			return false;
		}
	}
}
