using System;
using System.Collections.Generic;
using System.Text;
using MoreMountains.NiceVibrations;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorPickup
	{
		private readonly struct Handout
		{
			public readonly string Id;

			public readonly LevelInfo.HomePlan Plan;

			public Handout(string id, LevelInfo.HomePlan plan)
			{
				Id = id;
				Plan = plan;
			}
		}

		private readonly Action<IngredientConveyorItem> _removeItem;

		public bool PickAnyMode;

		public Action OnPicked;

		public Action<IngredientConveyorItem> OnPickedItem;

		public Action<IngredientConveyorItem> OnRejectedItem;

		private readonly List<IngredientConveyorItem> _batch = new List<IngredientConveyorItem>();

		private readonly List<string> _batchIds = new List<string>();

		private readonly List<LevelInfo.HomePlan> _batchPlan = new List<LevelInfo.HomePlan>();

		private readonly List<CookingStation> _busyStations = new List<CookingStation>();

		private bool _gridFull;

		public bool GridFullOnLastCheck => _gridFull;

		public int CellsNeededOnLastCheck
		{
			get
			{
				int count = 0;
				foreach (LevelInfo.HomePlan plan in _batchPlan)
				{
					if (plan.Kind == LevelInfo.HomeKind.Cell)
					{
						count++;
					}
				}
				return count;
			}
		}

		public ConveyorPickup(Action<IngredientConveyorItem> removeItem)
		{
			_removeItem = removeItem;
		}

		public bool AcceptsTap(IngredientConveyorItem item)
		{
			return Allows(item, requireChainReady: false);
		}

		public bool CanPick(IngredientConveyorItem item)
		{
			return Allows(item, requireChainReady: true);
		}

		public bool CanPickIgnoringAlert(IngredientConveyorItem item)
		{
			return Allows(item, requireChainReady: true, ignoreAlertLock: true);
		}

		public bool HasMoveFor(IngredientConveyorItem item)
		{
			if (item != null && !item.IsBusy && item.FreezeTurns < 1 && item.Slot != null && item.Slot.IsPickable)
			{
				return HasRoomFor(item, requireStationExit: true);
			}
			return false;
		}

		private bool Allows(IngredientConveyorItem item, bool requireChainReady, bool ignoreAlertLock = false)
		{
			if (item != null && !item.IsBusy)
			{
				MessyController level = MessyController.Ins;
				if (level != null && !level.IsAllowInteract && !PickAnyMode && !TutorialGate.IsActive)
				{
					return false;
				}
				if (TutorialGate.CanTapIngredient(item))
				{
					if (!ignoreAlertLock && MessyController.Ins != null)
					{
						LevelInfo info = MessyController.Ins.Info;
						if (info != null && info.IsBeltTapBlocked)
						{
							return false;
						}
					}
					ConveyorSlot slot = item.Slot;
					bool ok = false;
					if (requireChainReady)
					{
						if (slot != null)
						{
							ok = slot.IsPickable;
						}
					}
					else if (slot != null)
					{
						ok = slot.IsAtFrontRow;
					}
					return PickAnyMode || ok;
				}
			}
			return false;
		}

		public void Tap(IngredientConveyorItem item)
		{
			if (Allows(item, requireChainReady: false))
			{
				MMVibrationManager.Haptic(HapticTypes.LightImpact);
				if (item.FreezeTurns > 0)
				{
					item.PlayRejectBump(showOutline: true);
				}
				else if (Allows(item, requireChainReady: true))
				{
					TapRelease(item);
				}
				else
				{
					RejectChain(item);
				}
			}
		}

		private void RejectChain(IngredientConveyorItem item)
		{
			_batch.Clear();
			CollectBatch(item, _batch);
			foreach (IngredientConveyorItem batchItem in _batch)
			{
				batchItem.PlayRejectBump(showOutline: true);
			}
			OnRejectedItem?.Invoke(item);
		}

		private void TapRelease(IngredientConveyorItem item)
		{
			if (!HasRoomFor(item))
			{
				foreach (IngredientConveyorItem batchItem in _batch)
				{
					batchItem.PlayRejectBump();
				}
				BlinkBusyStations(item);
				if (_gridFull)
				{
					MessyController.Ins.Info.PulseGridFullAlert(item.RejectFlashDuration);
				}
				OnRejectedItem?.Invoke(item);
				return;
			}
			int index = 0;
			foreach (IngredientConveyorItem batchItem2 in _batch)
			{
				int total = 0;
				foreach (IngredientState state in batchItem2.Items)
				{
					total += CopiesOf(state);
				}
				List<Handout> handouts = new List<Handout>(total);
				for (int n = total; n > 0; n--)
				{
					if (_batchIds.Count <= index)
					{
						break;
					}
					handouts.Add(new Handout(_batchIds[index], _batchPlan[index]));
					index++;
				}
				ReleaseOne(batchItem2, handouts);
			}
			OnPickedItem?.Invoke(item);
			OnPicked?.Invoke();
		}

		public bool HasRoomFor(IngredientConveyorItem item, bool requireStationExit = false)
		{
			_gridFull = false;
			if (item != null && MessyController.Ins != null)
			{
				_batch.Clear();
				CollectBatch(item, _batch);
				if (!item.NeedsGridRoom)
				{
					return item.CanRelease();
				}
				LevelInfo info = MessyController.Ins.Info;
				_batchIds.Clear();
				foreach (IngredientConveyorItem batchItem in _batch)
				{
					foreach (IngredientState state in batchItem.Items)
					{
						for (int i = 0; i < state.amount; i++)
						{
							_batchIds.Add(state.id);
						}
					}
				}
				return info.HasHomeForAll(_batchIds, out _gridFull, _batchPlan, requireStationExit);
			}
			return true;
		}

		private static int CopiesOf(IngredientState state)
		{
			if (state == null)
			{
				return 0;
			}
			return state.amount;
		}

		public string DebugLastBatch()
		{
			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < _batchIds.Count; i++)
			{
				if (i != 0)
				{
					sb.Append(", ");
				}
				sb.Append(_batchIds[i]);
				if (i < _batchPlan.Count)
				{
					sb.Append('→').Append(_batchPlan[i].Kind);
				}
			}
			if (sb.Length != 0)
			{
				return sb.ToString();
			}
			return "<none>";
		}

		private void BlinkBusyStations(IngredientConveyorItem item)
		{
			if (item.NeedsGridRoom && MessyController.Ins != null)
			{
				MessyController.Ins.Info.CollectBusyStations(_batchIds, _busyStations);
				foreach (CookingStation station in _busyStations)
				{
					station.PlayRejectBlink(item.RejectFlashDuration);
				}
			}
		}

		private static void CollectBatch(IngredientConveyorItem item, List<IngredientConveyorItem> acc)
		{
			if (item.Slot != null && item.Slot.Chain != null && item.Slot.Chain.Members != null)
			{
				foreach (ConveyorSlot member in item.Slot.Chain.Members)
				{
					IngredientConveyorItem memberItem = ((member == null) ? null : member.Item);
					if (memberItem != null)
					{
						acc.Add(member.Item);
					}
				}
			}
			else
			{
				acc.Add(item);
			}
		}

		private void ReleaseOne(IngredientConveyorItem item, List<Handout> handouts)
		{
			int index = 0;
			LevelInfo info = null;
			Vector3 pos = default(Vector3);
			List<DragItem> spawned = null;
			item.BeginReleasePop();
			if (item.ReleaseSelf())
			{
				item.PlayReleasePop(delegate
				{
					_removeItem(item);
				});
				return;
			}
			pos = item.transform.position;
			info = MessyController.Ins.Info;
			foreach (Handout handout in handouts)
			{
				info.ReserveHome(handout.Id, handout.Plan);
			}
			foreach (IngredientState state in item.Items)
			{
				PieceLedger.BeltOut(state, PieceLedger.Source.Belt);
			}
			index = 0;
			spawned = new List<DragItem>();
			item.PlayReleaseSequence(CopiesOf, delegate(IngredientState state)
			{
				if (MessyController.Ins != null && index < handouts.Count)
				{
					Handout handout = handouts[index++];
					if (handout.Plan.Kind != LevelInfo.HomeKind.Shelf)
					{
						info.ReleaseHome(handout.Id, handout.Plan);
					}
					SpawnOne(state, handout.Plan, pos, spawned);
				}
			}, delegate
			{
				while (index < handouts.Count)
				{
					info.ReleaseHome(handouts[index].Id, handouts[index].Plan);
					index++;
				}
				KeyTag key = item.TakeKey();
				if (key != null && MessyController.Ins != null)
				{
					MessyController.Ins.UnlockColorWithKey(key);
				}
				item.PlayReleasePop(delegate
				{
					AfterShelfReleases(spawned, delegate
					{
						_removeItem(item);
					});
				});
			}, delegate
			{
				while (index < handouts.Count)
				{
					info.ReleaseHome(handouts[index].Id, handouts[index].Plan);
					index++;
				}
			});
		}

		private static void SpawnOne(IngredientState state, LevelInfo.HomePlan plan, Vector3 pos, List<DragItem> spawned)
		{
			using (PieceLedger.From(PieceLedger.Source.Belt, string.Format("handout {0}", plan.Kind)))
			{
				if (plan.Kind == LevelInfo.HomeKind.Shelf)
				{
					MessyController.Ins.SpawnToPlannedShelf(state.id, pos, DragOrigin.Conveyor, spawned.Add);
					return;
				}
				if (plan.Kind == LevelInfo.HomeKind.Station && plan.Station != null)
				{
					MessyController.Ins.SpawnToStation(state.id, pos, plan.Station, DragOrigin.Conveyor);
					return;
				}
				MessyController.Ins.SpawnIngredient(state.id, 1, pos, DragOrigin.Conveyor, spawned.Add);
			}
		}

		private static void AfterShelfReleases(List<DragItem> spawned, Action removeSlot)
		{
			int pending = 0;
			ServeShelfController shelf = null;
			if (MessyController.Ins != null)
			{
				shelf = MessyController.Ins.ServeShelf;
			}
			if (shelf != null && shelf.IsWholeDishServing)
			{
				pending = 0;
				foreach (DragItem item in spawned)
				{
					if (shelf.IsHeldAtSource(item))
					{
						pending++;
					}
				}
				if (pending == 0)
				{
					removeSlot();
					return;
				}
				foreach (DragItem item2 in spawned)
				{
					if (shelf.IsHeldAtSource(item2))
					{
						shelf.WhenSourceFreed(item2, delegate
						{
							pending--;
							if (pending == 0)
							{
								removeSlot();
							}
						});
					}
				}
			}
			else
			{
				removeSlot();
			}
		}
	}
}
