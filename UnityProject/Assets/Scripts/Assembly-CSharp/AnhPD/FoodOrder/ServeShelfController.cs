using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using CakeOrder.InGame;
using DG.Tweening;
using TrungKienPack.Particle;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ServeShelfController : MonoBehaviour
	{
		private sealed class WholeDishMode
		{
			private sealed class Binding
			{
				public ServePlate Plate;

				public FCustomerLine Line;

				public CustomerSpawnData Customer;

				public int Index;

				public PieceSet Order;

				public string OrderSequence;
			}

			private struct Candidate
			{
				public DragItem Item;

				public bool IsExtra;

				public string BaseId;

				public PieceSet Pieces;
			}

			private struct DishState
			{
				public bool HasBase;

				public int DishKey;

				public string ProjectedId;

				public FlexibleDragItem Flexible;

				public PieceSet Has;

				public PieceSet Inbound;

				public string Sequence;
			}

			private const int SearchBudget = 512;

			private readonly ServeShelfController _shelf;

			private readonly List<Binding> _bindings;

			private readonly List<Candidate> _candidates;

			private readonly List<bool> _claimed;

			private readonly List<int> _path;

			private readonly List<DragItem> _taken;

			private readonly List<DragItem> _fromBag;

			private int _budget;

			private int _extraIndex;

			private DragItem _committingExtra;

			private readonly Dictionary<DragItem, Action> _held;

			private readonly List<DragItem> _heldBuffer;

			private readonly HashSet<(FCustomerLine line, CustomerSpawnData customer, int index)> _ready;

			private readonly HashSet<(FCustomerLine line, CustomerSpawnData customer, int index)> _readyNext;

			private readonly HashSet<ServePlate> _readyLineClaimed;

			private readonly List<ServePlate> _servePlates;

			private readonly HashSet<ServePlate> _servePicked;

			private readonly List<DragItem> _gridItems;

			private readonly List<string> _bagIds;

			private const float HoverLift = 0.15f;

			private const float HoverLiftTime = 0.2f;

			private const float HoverBob = 0.06f;

			private const float HoverPeriod = 0.6f;

			private readonly Dictionary<DragItem, Tween> _hovers;

			public WholeDishMode(ServeShelfController shelf)
			{
				_shelf = shelf;
				_bindings = new List<Binding>();
				_candidates = new List<Candidate>();
				_claimed = new List<bool>();
				_path = new List<int>();
				_taken = new List<DragItem>();
				_fromBag = new List<DragItem>();
				_extraIndex = -1;
				_held = new Dictionary<DragItem, Action>();
				_heldBuffer = new List<DragItem>();
				_ready = new HashSet<(FCustomerLine line, CustomerSpawnData customer, int index)>();
				_readyNext = new HashSet<(FCustomerLine line, CustomerSpawnData customer, int index)>();
				_readyLineClaimed = new HashSet<ServePlate>();
				_servePlates = new List<ServePlate>();
				_servePicked = new HashSet<ServePlate>();
				_gridItems = new List<DragItem>();
				_bagIds = new List<string>();
				_hovers = new Dictionary<DragItem, Tween>();
			}

			public void Sync()
			{
				LevelInfo info = ServeShelfController.Info;
				PruneHeld();
				PruneBindings();
				RefreshReadyMarks(info);
			}

			private void PruneBindings()
			{
				for (int i = _bindings.Count - 1; i >= 0; i--)
				{
					Binding b = _bindings[i];
					if (!b.Plate || !_shelf._plates.Contains(b.Plate))
					{
						_bindings.RemoveAt(i);
						continue;
					}
					if (_shelf._serving.Contains(b.Plate))
					{
						continue;
					}
					if (!b.Plate.IsServing && !IsOrderStillOpen(b))
					{
						b.Plate.Order = null;
						_bindings.RemoveAt(i);
						_shelf._snapshot.MarkDirty();
					}
				}
			}

			private static bool IsOrderStillOpen(Binding b)
			{
				if (b == null) throw new NullReferenceException();
				if (b.Line == null || !b.Line.isShowingCustomer) return false;
				if (b.Line.SpawnData != b.Customer) return false;
				List<int> indices = b.Line.GetServableOrderIndices();
				if (indices == null) throw new NullReferenceException();
				return indices.Contains(b.Index);
			}

			private bool IsMerged(Binding b, LevelInfo info)
			{
				if (b == null) throw new NullReferenceException();
				return IsMergedAs(b.Plate, b.Order, info);
			}

			private bool IsMergedAs(ServePlate plate, PieceSet order, LevelInfo info)
			{
				if (!plate || plate.IsEmpty) return false;
				if (_shelf._merges.HasInbound(plate)) return false;
				if (_shelf.IsResultAnimPlaying(plate)) return false;
				PieceSet? has = _shelf.PlateHas(plate, info);
				return has.HasValue && has.Value == order;
			}

			private void RefreshReadyMarks(LevelInfo info)
			{
				_readyNext.Clear();
				FCustomerLineHandle handle = LineHandle;
				if (info != null && handle)
				{
					foreach (FCustomerLine line in handle.OrderLines)
					{
						if (!line || !line.isShowingCustomer)
						{
							continue;
						}
						_readyLineClaimed.Clear();
						foreach (int index in line.GetServableOrderIndices())
						{
							OrderSpec spec = line.GetOrderSpec(index);
							if (spec.IsValid && spec.HasPieces && !spec.Pieces.IsEmpty && TryClaimReadyPlate(spec, info))
							{
								_readyNext.Add((line, line.SpawnData, index));
							}
						}
					}
					_readyLineClaimed.Clear();
				}
				foreach ((FCustomerLine line, CustomerSpawnData customer, int index) mark in _ready)
				{
					if (!_readyNext.Contains(mark) && mark.line && mark.line.SpawnData == mark.customer)
					{
						mark.line.SetOrderReady(mark.index, false);
					}
				}
				foreach ((FCustomerLine line, CustomerSpawnData customer, int index) mark in _readyNext)
				{
					if (!_ready.Contains(mark))
					{
						mark.line.SetOrderReady(mark.index, true);
					}
				}
				_ready.Clear();
				_ready.UnionWith(_readyNext);
			}

			private bool IsMarkedReady(FCustomerLine line, int index)
			{
				if (line == null) throw new NullReferenceException();
				return _ready.Contains((line, line.SpawnData, index));
			}

			private bool TryClaimReadyPlate(OrderSpec spec, LevelInfo info)
			{
				if (info == null) return false;
				int dish = info.DishKeyOfOrder(spec);
				foreach (ServePlate plate in _shelf._plates)
				{
					if (!plate || plate.IsServing) continue;
					if (_shelf._serving.Contains(plate) || _readyLineClaimed.Contains(plate)) continue;
					if (!DishFits(plate.DishKey, dish)) continue;
					if (!IsMergedAs(plate, spec.Pieces, info)) continue;
					_readyLineClaimed.Add(plate);
					return true;
				}
				return false;
			}

			private Binding Find(FCustomerLine line, int index)
			{
				foreach (Binding b in _bindings)
				{
					if (b.Line == line && b.Index == index) return b;
				}
				return null;
			}

			private Binding Find(ServePlate plate)
			{
				foreach (Binding b in _bindings)
				{
					if (b.Plate == plate) return b;
				}
				return null;
			}

			public void Serve()
			{
				FCustomerLineHandle handle = LineHandle;
				LevelInfo info = Info;
				if (!handle || info == null)
				{
					return;
				}
				foreach (FCustomerLine line in handle.OrderLines)
				{
					if (!line || !line.IsCustomerReady)
					{
						continue;
					}
					if (MessyController.Ins.Serve.HasReservation(line))
					{
						continue;
					}
					List<int> open = line.GetOpenOrderIndices();
					if (open.Count == 0)
					{
						continue;
					}
					_servePlates.Clear();
					_servePicked.Clear();
					bool allPicked = true;
					foreach (int index in open)
					{
						ServePlate plate = PickServePlate(line, index, info);
						if (!plate)
						{
							allPicked = false;
							break;
						}
						_servePlates.Add(plate);
						_servePicked.Add(plate);
					}
					if (allPicked)
					{
						for (int i = 0; i < open.Count; i++)
						{
							ServePlate plate = _servePlates[i];
							RebindForServe(plate, line, open[i]);
							_shelf.ServePlateTo(plate, plate.Item, line, open[i]);
						}
					}
					_servePlates.Clear();
					_servePicked.Clear();
				}
			}

			private ServePlate PickServePlate(FCustomerLine line, int index, LevelInfo info)
			{
				if (line == null) return null;
				OrderSpec spec = line.GetOrderSpec(index);
				if (!spec.IsValid || !spec.HasPieces || spec.Pieces.IsEmpty) return null;
				Binding bound = Find(line, index);
				if (bound != null && IsMerged(bound, info))
				{
					if (_servePicked.Contains(bound.Plate)) return null;
					return IsServable(bound.Plate, line) ? bound.Plate : null;
				}
				if (info == null) return null;
				int dish = info.DishKeyOfOrder(spec);
				string sequence = info.SequenceOf(spec.DisplayId);
				foreach (ServePlate plate in _shelf._plates)
				{
					if (!plate || _servePicked.Contains(plate)) continue;
					if (!DishFits(plate.DishKey, dish)) continue;
					if (!info.SequenceFits(dish, _shelf.PlateSequence(plate, info), sequence)) continue;
					if (!IsMergedAs(plate, spec.Pieces, info)) continue;
					if (!IsServable(plate, line)) continue;
					return plate;
				}
				return null;
			}

			private bool IsServable(ServePlate plate, FCustomerLine line)
			{
				if (!plate || plate.IsServeHeld || plate.IsServing) return false;
				if (_shelf._serving.Contains(plate)) return false;
				return line.CanAccept(plate.Item);
			}

			private void RebindForServe(ServePlate plate, FCustomerLine line, int index)
			{
				Binding existing = Find(line, index);
				if (existing != null)
				{
					if (existing.Plate == plate) return;
					Unbind(existing);
				}
				Binding onPlate = Find(plate);
				if (onPlate != null)
				{
					_bindings.Remove(onPlate);
				}
				OrderSpec spec = line.GetOrderSpec(index);
				LevelInfo info = Info;
				string sequence = info != null ? info.SequenceOf(spec.DisplayId) : string.Empty;
				Bind(plate, line, index, spec.Pieces, sequence);
			}

			public void Capture()
			{
				if (IsInteractBlocked) return;
				// Guard inferred from MessyController.Ins usage elsewhere in the project (static at DAT_091881a0 +0xb8).
				if (MessyController.Ins == null) return;
				LevelInfo info = Info;
				FCustomerLineHandle handle = LineHandle;
				if (info == null || handle == null) return;
				CollectCandidates(info);
				RunCapture(info, handle, false);
				ClearCandidates();
			}

			public bool TryCaptureWith(DragItem item)
			{
				LevelInfo info = Info;
				FCustomerLineHandle handle = LineHandle;
				if (!item || info == null || !handle) return false;
				PieceOffer offer = info.GetItemPieceOffer(item);
				if (offer == null || offer.pieces.IsEmpty) return false;
				if (_shelf.grid && _shelf.grid.TryGetCell(item, out IngCell _)) return false;
				CollectCandidates(info);
				AddExtra(new Candidate { Item = item, IsExtra = true, BaseId = item.GetBaseId(), Pieces = offer.pieces });
				_committingExtra = item;
				bool ok = RunCapture(info, handle, false);
				_committingExtra = null;
				ClearCandidates();
				if (!ok) return false;
				if (IsPending(item))
				{
					Hold(item);
				}
				return true;
			}

			public bool CanCaptureWith(PieceSet pieces, string baseId)
			{
				LevelInfo info = Info;
				FCustomerLineHandle handle = LineHandle;
				if (pieces.IsEmpty || string.IsNullOrEmpty(baseId) || info == null || handle == null) return false;
				CollectCandidates(info);
				AddExtra(new Candidate { Item = null, IsExtra = true, BaseId = baseId, Pieces = pieces });
				bool ok = RunCapture(info, handle, true);
				ClearCandidates();
				return ok;
			}

			private bool RunCapture(LevelInfo info, FCustomerLineHandle handle, bool dryRun)
			{
				foreach (FCustomerLine line in handle.OrderLines)
				{
					if (!line || !line.isShowingCustomer) continue;
					foreach (int index in line.GetOpenOrderIndices())
					{
						OrderSpec spec = line.GetOrderSpec(index);
						if (!spec.IsValid || !spec.HasPieces || spec.Pieces.IsEmpty) continue;
						Binding bound = Find(line, index);
						bool ok;
						if (bound == null)
						{
							ok = TryCapture(line, index, spec, info, dryRun);
						}
						else
						{
							if (!IsStuck(bound.Plate, bound.Order, info)) continue;
							ok = TryResume(bound, info, dryRun);
						}
						if (_extraIndex < 0 || !ok) continue;
						return true;
					}
				}
				return false;
			}

			private bool TryCapture(FCustomerLine line, int index, OrderSpec spec, LevelInfo info, bool dryRun)
			{
				PieceSet order = spec.Pieces;
				string sequence = info.SequenceOf(spec.DisplayId);
				int orderDish = info.DishKeyOfOrder(spec);
				DishState done;
				foreach (ServePlate plate in _shelf._plates)
				{
					if (!plate || plate.IsEmpty || Find(plate) != null) continue;
					if (_shelf.IsPlateBusy(plate) || !DishFits(plate.DishKey, orderDish)) continue;
					PieceSet? has = _shelf.PlateHas(plate, info);
					if (!has.HasValue) continue;
					if (!order.Covers(has.Value) || !info.CanStillComplete(has.Value, order)) continue;
					DishState state = StateOf(plate, has.Value, info);
					if (!info.SequenceFits(orderDish, state.Sequence, sequence)) continue;
					if (!Plan(state, order, sequence, orderDish, info, out done)) continue;
					if (!dryRun)
					{
						Binding binding = Bind(plate, line, index, order, sequence);
						if (_path.Count != 0 && !Commit(plate, false, info))
						{
							Unbind(binding);
							return false;
						}
					}
					return true;
				}
				bool planned = Plan(default, order, sequence, orderDish, info, out done);
				if (!planned || dryRun)
				{
					return planned;
				}
				ServePlate born = _shelf.CreatePlate(done.DishKey);
				if (born)
				{
					Binding binding = Bind(born, line, index, order, sequence);
					if (Commit(born, true, info)) return true;
					_bindings.Remove(binding);
				}
				return false;
			}

			private bool TryResume(Binding b, LevelInfo info, bool dryRun)
			{
				if (b == null) return false;
				PieceSet? has = _shelf.PlateHas(b.Plate, info);
				if (!has.HasValue) return false;
				DishState state = StateOf(b.Plate, has.Value, info);
				bool ok = Plan(state, b.Order, b.OrderSequence, b.Plate.DishKey, info, out DishState _);
				if (ok && !dryRun)
				{
					ok = Commit(b.Plate, false, info);
				}
				return ok;
			}

			private bool IsStuck(ServePlate plate, PieceSet order, LevelInfo info)
			{
				if (!plate) return false;
				if (plate.IsEmpty) return false;
				if (_shelf.IsPlateBusy(plate)) return false;
				PieceSet? has = _shelf.PlateHas(plate, info);
				if (!has.HasValue) return false;
				return has.Value != order;
			}

			private Binding Bind(ServePlate plate, FCustomerLine line, int index, PieceSet order, string sequence)
			{
				if (plate == null)
				{
					return null;
				}
				Binding b = new Binding
				{
					Plate = plate,
					Line = line,
					Customer = line != null ? line.SpawnData : null,
					Index = index,
					Order = order,
					OrderSequence = sequence,
				};
				_bindings.Add(b);
				plate.Order = order;
				_shelf._snapshot.MarkDirty();
				return b;
			}

			private void Unbind(Binding b)
			{
				if (b == null)
				{
					return;
				}
				if (b.Plate != null)
				{
					b.Plate.Order = null;
				}
				_bindings.Remove(b);
			}

			private DishState StateOf(ServePlate plate, PieceSet has, LevelInfo info)
			{
				FlexibleDragItem flexible = plate.Item as FlexibleDragItem;
				// A plain item projects its id; a flexible one projects nothing.
				string projected = flexible == null && plate.Item != null ? plate.Item.GetBaseId() : null;
				return new DishState
				{
					HasBase = true,
					DishKey = plate.DishKey,
					ProjectedId = projected,
					Flexible = flexible,
					Has = has,
					Inbound = PieceSet.Empty,
					Sequence = _shelf.PlateSequence(plate, info),
				};
			}

			private void CollectCandidates(LevelInfo info)
			{
				ClearCandidates();
				if (info == null || info.Pieces == null) return;
				LevelPieceBook book = info.Pieces;
				book.CollectGridTakeables(_gridItems);
				foreach (DragItem item in _gridItems)
				{
					PieceOffer offer = info.GetItemPieceOffer(item);
					if (offer != null && !offer.pieces.IsEmpty)
					{
						Add(new Candidate { Item = item, IsExtra = false, BaseId = item.GetBaseId(), Pieces = offer.pieces });
					}
				}
				book.CollectBagEntries(_bagIds);
				foreach (string id in _bagIds)
				{
					PieceOffer offer = info.GetIdPieceOffer(id);
					if (offer != null && !offer.pieces.IsEmpty)
					{
						Add(new Candidate { Item = null, IsExtra = false, BaseId = FlexibleId.BaseOf(id), Pieces = offer.pieces });
					}
				}
			}

			private void Add(Candidate candidate)
			{
				_candidates.Add(candidate);
				_claimed.Add(false);
			}

			private void AddExtra(Candidate candidate)
			{
				_extraIndex = _candidates.Count;
				Add(candidate);
			}

			private void ClearCandidates()
			{
				_candidates.Clear();
				_claimed.Clear();
				_extraIndex = -1;
			}

			private bool IsSameKind(int a, int b)
			{
				Candidate ca = _candidates[a];
				Candidate cb = _candidates[b];
				if (ca.IsExtra || cb.IsExtra) return false;
				if (ca.Item is FlexibleDragItem || cb.Item is FlexibleDragItem) return false;
				return ca.BaseId == cb.BaseId && ca.Pieces == cb.Pieces;
			}

			private bool Plan(DishState start, PieceSet order, string sequence, int orderDish, LevelInfo info, out DishState done)
			{
				_path.Clear();
				_budget = SearchBudget;
				bool found = Search(start, order, sequence, orderDish, info, out done);
				if (!found)
				{
					_path.Clear();
				}
				return found;
			}

			private bool Search(DishState state, PieceSet order, string sequence, int orderDish, LevelInfo info, out DishState done)
			{
				done = state;
				if (state.HasBase)
				{
					PieceSet remaining = order.Subtract(state.Has);
					if (remaining.IsEmpty)
					{
						// A dry-run extra candidate must itself be claimed before the plan counts as complete.
						if (_extraIndex >= 0)
						{
							return _claimed[_extraIndex];
						}
						return true;
					}
				}
				if (--_budget < 0)
				{
					return false;
				}
				for (int i = 0; i < _candidates.Count; i++)
				{
					if (_claimed[i] || WasTriedAtThisDepth(i))
					{
						continue;
					}
					if (!TryStep(state, _candidates[i], order, sequence, orderDish, info, out DishState next))
					{
						continue;
					}
					_claimed[i] = true;
					_path.Add(i);
					if (Search(next, order, sequence, orderDish, info, out done))
					{
						return true;
					}
					_path.RemoveAt(_path.Count - 1);
					_claimed[i] = false;
				}
				return false;
			}

			private bool WasTriedAtThisDepth(int i)
			{
				if (i < 1) return false;
				for (int j = 0; j < i; j++)
				{
					if (!_claimed[j] && IsSameKind(i, j)) return true;
				}
				return false;
			}

			private static bool TryStep(DishState state, Candidate c, PieceSet order, string sequence, int orderDish, LevelInfo info, out DishState next)
			{
				next = state;
				PieceSet has = state.Has.Add(c.Pieces);
				if (!order.Covers(has)) return false;
				if (!info.CanStillComplete(has, order)) return false;
				string stepId = c.Item ? c.Item.GetId() : c.BaseId;
				string sequenceSoFar = state.Sequence + info.SequenceOf(stepId);
				if (!info.SequenceFits(orderDish, sequenceSoFar, sequence)) return false;
				next.Has = has;
				next.Inbound = state.Inbound.Add(c.Pieces);
				next.Sequence = sequenceSoFar;
				if (!state.HasBase)
				{
					int dish = orderDish;
					if (dish < 0)
					{
						dish = info.DishKeyOfId(c.BaseId);
						if (dish < 0) return false;
					}
					else if (!info.CanOpenDish(dish, c.BaseId, c.Pieces))
					{
						return false;
					}
					next.DishKey = dish;
					next.HasBase = true;
					next.Flexible = c.Item as FlexibleDragItem;
					next.ProjectedId = next.Flexible ? null : c.BaseId;
					return true;
				}
				if (state.Flexible)
				{
					if (!info.CanAddTo(state.Flexible, c.BaseId)) return false;
					return info.CanDishAdd(state.Flexible.GetBaseId(), state.Flexible.Pieces.Add(state.Inbound), c.BaseId);
				}
				if (string.IsNullOrEmpty(state.ProjectedId)) return false;
				string flexBase = FlexibleId.BaseOf(state.ProjectedId);
				if (info.GetIngredientPrefab(flexBase) is FlexibleDragItem)
				{
					return info.CanDishAdd(flexBase, state.Inbound, c.BaseId);
				}
				if (info.TryGetDishResult(state.DishKey, state.ProjectedId, c.BaseId, out string result))
				{
					next.ProjectedId = result;
					return true;
				}
				return false;
			}

			private bool Commit(ServePlate plate, bool born, LevelInfo info)
			{
				_taken.Clear();
				_fromBag.Clear();
				foreach (int index in _path)
				{
					Candidate cand = _candidates[index];
					DragItem item = cand.Item;
					DragItem taken = item;
					if (taken == null && !cand.IsExtra)
					{
						taken = TakeFromBag(cand.BaseId);
					}
					if (taken == null)
					{
						Rollback(plate, born);
						return false;
					}
					if (item == null)
					{
						_fromBag.Add(taken);
					}
					string resultId = null;
					bool needsMerge = !plate.IsEmpty || _shelf._merges.HasInbound(plate);
					if (needsMerge)
					{
						if (!_shelf.TryResolveMerge(plate, taken.GetBaseId(), info, out resultId))
						{
							Rollback(plate, born);
							return false;
						}
					}
					else
					{
						_shelf.Reserve(plate, taken, resultId);
						_taken.Add(taken);
					}
				}

				bool primed = false;
				foreach (DragItem item in _taken)
				{
					primed |= _shelf.PrimeForMerge(item);
				}
				if (primed)
				{
					_shelf.SchedulePump(plate, _shelf.mergePrimeDelay);
				}
				else
				{
					_shelf.PumpLaunches(plate);
				}

				foreach (DragItem item in _fromBag)
				{
					if (IsPending(item))
					{
						Hold(item);
					}
				}

				_taken.Clear();
				_fromBag.Clear();
				return true;
			}

			private bool Rollback(ServePlate plate, bool born)
			{
				_shelf.AbortRemaining(plate);
				// Iterate a copy so QueueDropBackToGrid cannot disturb the enumeration.
				foreach (DragItem item in new List<DragItem>(_fromBag))
				{
					_shelf.QueueDropBackToGrid(item);
				}
				if (born)
				{
					_shelf.RemovePlate(plate);
				}
				_taken.Clear();
				_fromBag.Clear();
				_shelf.FlushDropBacks();
				return false;
			}

			private static DragItem TakeFromBag(string baseId)
			{
				SpawnBagSaveMe bag = SpawnBagSaveMe.Active;
				if (bag == null || bag.IsEmpty)
				{
					return null;
				}
				// Predicate inferred: the taken item must carry the requested base id.
				if (bag.TryTakeUsable(item => item.GetBaseId() == baseId, out DragItem taken))
				{
					bag.CommitTake(taken);
					return taken;
				}
				return null;
			}

			public bool IsHeld(DragItem item)
			{
				if (item == null) return false;
				return _held.ContainsKey(item);
			}

			private void Hold(DragItem item)
			{
				if (item == null) return;
				if (_held.ContainsKey(item)) return;
				_held[item] = null;
				StartHover(item);
			}

			private void StartHover(DragItem item)
			{
				float baseY = item.Tf.position.y + HoverLift;
				Tween lift = item.Tf.DOMoveY(baseY, HoverLiftTime).SetEase(Ease.OutQuad).SetTarget(item.Tf).OnComplete(() =>
				{
					if (!_hovers.ContainsKey(item)) return;
					Tween bob = item.Tf.DOMoveY(baseY + HoverBob, HoverPeriod).SetEase(Ease.InOutSine).SetLoops(-1, LoopType.Yoyo).SetTarget(item.Tf);
					_hovers[item] = bob;
				});
				_hovers[item] = lift;
			}

			private void StopHover(DragItem item)
			{
				if (_hovers.TryGetValue(item, out Tween tween))
				{
					_hovers.Remove(item);
					if (tween.IsActive()) tween.Kill(false);
				}
			}

			public void WhenFreed(DragItem item, Action onFreed)
			{
				if (IsHeld(item))
				{
					_held[item] = (Action)Delegate.Combine(_held[item], onFreed);
					return;
				}
				if (onFreed != null) onFreed();
			}

			public void Free(DragItem item)
			{
				if (item == null) return;
				if (_held.TryGetValue(item, out Action onFreed))
				{
					_held.Remove(item);
					StopHover(item);
					if (onFreed != null)
					{
						DOVirtual.DelayedCall(0f, () => onFreed(), true).SetTarget(_shelf);
					}
				}
			}

			public void OnStoodDown(DragItem item)
			{
				if (!item) return;
				Free(item);
				if (item.Cell == null && !item.IsOnDishRow && item != _committingExtra)
				{
					_shelf.QueueDropBackToGrid(item);
				}
			}

			private void PruneHeld()
			{
				if (_held.Count == 0) return;
				_heldBuffer.Clear();
				foreach (DragItem item in _held.Keys)
				{
					if (item != null && item.gameObject.activeInHierarchy && IsPending(item)) continue;
					_heldBuffer.Add(item);
				}
				foreach (DragItem item in _heldBuffer)
				{
					Free(item);
				}
				_heldBuffer.Clear();
			}

			private bool IsPending(DragItem item)
			{
				foreach (ShelfMergeQueue.Request request in _shelf._merges.Requests)
				{
					if (request.Item == item && !request.Launched)
					{
						return true;
					}
				}
				return false;
			}

			public void AppendReport(StringBuilder sb)
			{
				// TODO(unrecovered): report body is about 750 lines of pseudocode; not reconstructed in this pass.
			}

			public int UncapturedOrderCount()
			{
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
				return 0;
			}
		}

		public enum PlateTake
		{
			None = 0,
			Taken = 1,
			Busy = 2
		}

		private bool _drawShelf;

		[Header("Merge")]
		[SerializeField]
		private float mergeStagger;

		[Tooltip("Chờ bấy nhiêu giây sau khi nhún + glow rồi mới cất cánh")]
		[SerializeField]
		private float mergePrimeDelay;

		private readonly List<ServePlate> _forgetPlates = new List<ServePlate>();

		private const float RepumpInterval = 0.1f;

		private ServePlate _activeMergePlate;

		private readonly Dictionary<ServePlate, bool> _resultAnims = new Dictionary<ServePlate, bool>();

		private readonly List<ServePlate> _staleAnimPlates = new List<ServePlate>();

		private readonly List<ServePlate> _stalePlates = new List<ServePlate>();

		private readonly List<DragItem> _pendingDrops = new List<DragItem>();

		private readonly List<DragItem> _dropBuffer = new List<DragItem>();

		private WholeDishMode _wholeDishMode;

		[Header("Shelf")]
		public Vector2 cellSize;

		public int slotCount;

		[SerializeField]
		private int unlockedSlots;

		[SerializeField]
		private GridIngController grid;

		[SerializeField]
		private float serveRecheckInterval;

		private bool _wholeDishServing;

		private readonly List<ServePlate> _plates = new List<ServePlate>();

		private readonly HashSet<ServePlate> _serving = new HashSet<ServePlate>();

		private readonly ShelfMergeQueue _merges = new ShelfMergeQueue();

		private readonly ShelfSnapshot _snapshot = new ShelfSnapshot();

		private bool _isServing;

		private bool _serveQueued;

		private float _nextRecheckTime;

		[SerializeField]
		private BaseParticleElement slotFocusPrefab;

		private BaseParticleElement[] _slotFocus;

		private bool[] _slotFocusOn;

		private Func<ServePlate, PieceSet?> _plateHasReader;

		private Func<ServePlate, string> _plateSequenceReader;

		private readonly HashSet<ServePlate> _gatherClaimed = new HashSet<ServePlate>();

		private readonly List<ServePlate> _serveBuffer = new List<ServePlate>();

		private readonly List<DragItem> _gridScanBuffer = new List<DragItem>();

		private string ToggleShelfLabel => _drawShelf ? "Hide Shelf" : "Show Shelf"; // literal recovered by guess

		public bool HasMergesInFlight => _merges.Any || _resultAnims.Count > 0;

		private WholeDishMode WholeDish => _wholeDishMode ??= new WholeDishMode(this);

		public int PendingMergeCount => _merges.Count;

		// the native return only carries x (Vector2 comes back in two float registers); y is taken as cellSize.y
		public Vector2 Size => new Vector2(cellSize.x * Mathf.Max(LayoutSlots, 1), cellSize.y);

		private int LayoutSlots => _wholeDishServing ? Mathf.Max(slotCount, _plates.Count) : slotCount;

		// only x is visible in the native return; y is taken as the shelf's own y
		public Vector2 Origin => new Vector2(transform.position.x - cellSize.x * Mathf.Max(LayoutSlots, 1) * 0.5f, transform.position.y);

		public int Capacity
		{
			get
			{
				int slots = Mathf.Max(slotCount, 0);
				return unlockedSlots < 1 ? slots : Mathf.Min(slots, unlockedSlots);
			}
		}

		public bool HasFreeSlot => _wholeDishServing || _plates.Count < Capacity;

		public IReadOnlyList<ServePlate> Plates => _plates;

		private static LevelInfo Info => MessyController.Ins != null ? MessyController.Ins.Info : null;

		private static FCustomerLineHandle LineHandle => MessyController.Ins != null ? MessyController.Ins.LineHandle : null;

		private static bool IsInteractBlocked
		{
			get
			{
				LevelBaseCakeOrderAbstract level = LevelBaseCakeOrderAbstract.Instance;
				return level != null && !level.IsAllowInteract;
			}
		}

		private static bool IsDirectTakeBlocked
		{
			get
			{
				if (!IsInteractBlocked)
				{
					return false;
				}
				MessyController messy = MessyController.Ins;
				if (messy != null && messy.Spawner != null)
				{
					return !messy.Spawner.IsPickAnyActive;
				}
				return true;
			}
		}

		public bool IsWholeDishServing => _wholeDishServing;

		public bool BlocksQueueLane => _wholeDishServing;

		private void ToggleDrawShelf()
		{
			_drawShelf = !_drawShelf;
		}

		public string BuildStateReport()
		{
			// TODO(unrecovered): several-thousand-line inlined report builder (ShelfSnapshot fields, StringBuilder formatting, inlined helpers); not recovered in this pass
			return null;
		}

		public bool IsBooked(DragItem item)
		{
			return item != null && _merges != null && _merges.IsInFlight(item);
		}

		public void ForgetItem(DragItem item)
		{
			// TODO(unrecovered): nested plate-component probes (vtable calls at +0x12e/+0xb0 plate slots, DragItem-state checks) and ShelfMergeQueue.RemoveAllOf/PlatesOf loop with unresolved offsets; not mapped in this pass
		}

		private bool TryAutoMergeToPlate(DragItem item, bool requireLanded = true, bool directTake = false)
		{
			// TODO(unrecovered): DragItem raw fields at +0xe9 (flag) and +0x78/+0xa0 (base id / booked ref) are not confirmed against the DragItem stub; TryPickMergeTarget result and SchedulePump argument order also unresolved
			return false;
		}

		private bool PrimeForMerge(DragItem item)
		{
			return item.PlayWindUp() != null;
		}

		private void StandDown(DragItem item)
		{
			if (item != null)
			{
				// TODO(unrecovered): the QueueDropBackToGrid branch depends on DragItem raw field +0xa0 (the same reference PumpLaunches reads as the cell); it is not confirmed as DragItem.Cell, so that branch is not applied here.
				item.ResetWindUp();
			}
			if (!_wholeDishServing) return;
			WholeDish.OnStoodDown(item);
		}

		private void PumpLaunches(ServePlate plate)
		{
			if (plate == null) return;
			if (IsResultAnimPlaying(plate) || _merges.HasInboundResultAnim(plate))
			{
				SchedulePump(plate, RepumpInterval);
				return;
			}
			ShelfMergeQueue.Request request = _merges.NextToLaunch(plate, mergeStagger);
			if (request == null)
			{
				if (_merges.HasPending(plate))
				{
					SchedulePump(plate, RepumpInterval);
				}
				return;
			}
			DragItem item = request.Item;
			if (item == null)
			{
				AbortRemaining(plate);
				FlushDropBacks();
				return;
			}
			request.OpensResultAnim = WillOpenResultAnim(plate, request);
			_merges.MarkLaunched(request);
			if (_wholeDishServing)
			{
				WholeDish.Free(item);
			}
			int index = _plates.IndexOf(plate);
			PieceLedger.Step(item, string.Format(/* literal recovered by guess */ "launch {0}", index));
			// TODO(unrecovered): when DragItem raw field +0xa0 is set, MessyController.Ins.PlayCellGlow is called with that cell's raw +0x10 coordinate; the field is not confirmed as DragItem.Cell and the coordinate type is unmapped, so the glow is skipped.
			item.UnregisterCell();
			MessyController messy = MessyController.Ins;
			if (messy == null) return;
			messy.RefreshCellDishes();
			Tween tween = item.JumpToMovingTargetTween(plate.ItemAnchor, false, 0.5f, false, false);
			tween.OnComplete(() =>
			{
				GlobalAudio.Play((GlobalSfx)3, 1f);
				OnMergeFlightArrived(plate, item);
			});
			SchedulePump(plate, mergeStagger);
		}

		private void SchedulePump(ServePlate plate, float delay)
		{
			float wait = delay < 0f ? 0f : delay;
			DOVirtual.DelayedCall(wait, () => PumpLaunches(plate), true).SetTarget(plate);
		}

		private void Reserve(ServePlate plate, DragItem item, string resultId)
		{
			int index = _plates.IndexOf(plate);
			PieceLedger.Step(item, string.Format(/* literal recovered by guess */ "reserve {0}", index));
			_merges.Add(plate, item, resultId);
			_activeMergePlate = plate;
			_snapshot.MarkDirty();
		}

		private bool HoldsTheFloor(ServePlate plate)
		{
			if (plate == null) return false;
			if (_activeMergePlate == plate && CanPlateStillTake(plate)) return StillBuilding(plate);
			return false;
		}

		private bool StillBuilding(ServePlate plate)
		{
			// TODO(unrecovered): deep scan over grid items (GetComponent-style vtable lookups on grid entries, DragItem flags at raw +0x92/+0xe9, ShelfMergeQueue.IsInFlight, LevelInfo.CanStillComplete and SequenceFits) whose offsets and helper owners are not all mapped; not reconstructed.
			return false;
		}

		private void OnGridItemLanded(GridItemLandedEvent evt)
		{
			// TODO(unrecovered): pseudocode takes a DragItem (marks the snapshot dirty, auto-merges to a plate when not whole-dish, then RequestServe); the GridItemLandedEvent-to-DragItem mapping is not confirmed.
		}

		public bool CanTakeIdDirect(string id)
		{
			return ScoreGainForId(id) > 0;
		}

		public bool CanTakeOfferDirect(PieceOffer offer, string baseId)
		{
			return ScoreGainForOffer(offer, baseId) > 0;
		}

		public int ScoreGainForId(string id)
		{
			// TODO(unrecovered): needs PieceOffer/PieceSet field names and WholeDishMode.CanCaptureWith argument mapping, which are not confirmed from this batch
			return 0;
		}

		public int ScoreGainForOffer(PieceOffer offer, string baseId)
		{
			return 0;
		}

		private bool TryPickMergeTarget(PieceOffer itemOffer, string itemBaseId, LevelInfo info, out ServePlate plate, out int newPlateDish, out int gain)
		{
			// TODO(unrecovered): plate loop depends on the unnamed ServePlate byte flag at +0xb1 (not a stub member), FUN_053ebc3c (plate-busy probe) and ShelfSnapshot indexing; PieceOffer field offsets unconfirmed.
			plate = null;
			newPlateDish = default;
			gain = default;
			return false;
		}

		private bool IsWorthANewPlate(string itemBaseId, PieceSet itemPieces, int itemDish, int baseScore, LevelInfo info, out int bornDish, out int bestScore)
		{
			bornDish = default;
			bestScore = default;
			return false;
		}

		private bool IsDishSeenBefore(int order, int dish)
		{
			return false;
		}

		private void TryVirtualPlate(int plateDish, string itemBaseId, PieceSet itemPieces, int itemDish, int baseScore, LevelInfo info, ref int bestScore, ref int bornDish)
		{
			// TODO(unrecovered): pseudocode (about 130 lines, LevelInfo/PieceSet helpers and unnamed ShelfSnapshot probes) not reconstructed in this pass.
		}

		private bool TryResolveMerge(ServePlate plate, string itemBaseId, LevelInfo info, out string resultId)
		{
			// TODO(unrecovered): the flexible-item branch reads an unnamed FlexibleDragItem field at +0x78 and a vtable call at +0x218; the subtype check on DragItem at +0x130 is not a stub member.
			resultId = null;
			return false;
		}

		private bool CanStartPlate(string itemBaseId, PieceSet itemPieces, int plateDish, LevelInfo info)
		{
			if (_snapshot == null) throw new NullReferenceException();
			if (_snapshot.OrderCount == 0) return false;
			for (int i = 0; i < _snapshot.OrderCount; i++)
			{
				int orderDish = _snapshot.OrderDishKey(i);
				if (orderDish != plateDish && (orderDish | plateDish) >= 0) continue;
				if (orderDish < 0)
				{
					PieceSet orderPieces = _snapshot.OrderPieces(i);
					if (!orderPieces.Covers(itemPieces)) continue;
					if (plateDish < 0) return true;
					if (!_snapshot.IsDishNeeded(plateDish)) return true;
				}
				else
				{
					if (info == null) throw new NullReferenceException();
					if (info.CanOpenDish(orderDish, itemBaseId, itemPieces)) return true;
				}
			}
			return false;
		}

		private void OnMergeFlightArrived(ServePlate plate, DragItem item)
		{
			if (_merges == null) return;
			ShelfMergeQueue.Request request = _merges.Find(plate, item);
			if (request != null)
			{
				request.Arrived = true;
				CommitArrived(plate, false);
				return;
			}
			_merges.RemoveAllOf(item);
			if (_snapshot != null)
			{
				_snapshot.MarkDirty();
				DropBackToGrid(item);
			}
		}

		private void CommitArrived(ServePlate plate)
		{
			CommitArrived(plate, false);
		}

		private void CommitArrived(ServePlate plate, bool merged)
		{
			if (plate == null || IsResultAnimPlaying(plate)) return;
			if (_merges == null) return;
			ShelfMergeQueue.Request arrived = _merges.TakeArrivedOldest(plate);
			if (arrived == null)
			{
				PumpLaunches(plate);
				if (!merged) return;
			}
			else
			{
				do
				{
					if (_snapshot == null) return;
					_snapshot.MarkDirty();
					bool plateEmpty = plate.IsEmpty;
					string sourceId = arrived.Item != null ? arrived.Item.GetBaseId() : null;
					if (!CommitRequest(arrived))
					{
						QueueDropBackToGrid(arrived.Item);
						AbortRemaining(plate);
						FlushDropBacks();
						return;
					}
					if (!plateEmpty && BeginResultAnim(plate, sourceId, true)) return;
					if (plate.Item is FlexibleDragItem flexible)
					{
						flexible.ResumeVisual();
					}
					if (_merges == null) return;
					arrived = _merges.TakeArrivedOldest(plate);
				} while (arrived != null);
				PumpLaunches(plate);
			}
			RequestServeAfterAssemble(plate);
		}

		private bool IsResultAnimPlaying(ServePlate plate)
		{
			return plate != null && _resultAnims.ContainsKey(plate);
		}

		private bool CanHandOverNow(ServePlate plate)
		{
			if (plate == null)
			{
				return true;
			}
			if (IsResultAnimPlaying(plate))
			{
				return false;
			}
			if (_merges.HasInboundResultAnim(plate))
			{
				return false;
			}
			return _merges.IsBaseDown(plate);
		}

		private bool WillOpenResultAnim(ServePlate plate, ShelfMergeQueue.Request request)
		{
			if (plate == null || request == null || request.Item == null) return false;
			if (plate.IsEmpty) return false;
			LevelInfo info = Info;
			DragItem prefab;
			if (!string.IsNullOrEmpty(request.ResultId) && info != null)
			{
				prefab = info.GetIngredientPrefab(FlexibleId.BaseOf(request.ResultId));
			}
			else
			{
				prefab = plate.Item;
			}
			if (prefab == null) return false;
			return prefab.HasResultMergeAnimFor(request.Item.GetBaseId());
		}

		private bool BeginResultAnim(ServePlate plate, string sourceId, bool merged)
		{
			return false;
		}

		private void OnResultAnimDone(ServePlate plate)
		{
			if (plate == null) return;
			if (!_resultAnims.TryGetValue(plate, out bool merged)) return;
			_resultAnims.Remove(plate);
			plate.SetMergeAnimLifted(false);
			if (plate.Item is FlexibleDragItem flexible)
			{
				flexible.ResumeVisual();
			}
			CommitArrived(plate, merged);
		}

		private void PruneStaleResultAnims()
		{
			// TODO(unrecovered): the stale-anim sweep walks _resultAnims keys and _staleAnimPlates through unnamed dictionary/list helpers (FUN_06f81e90, FUN_06f81ea0, FUN_06f836dc, FUN_057e0c68) with an inlined enumerator; branch semantics not confirmed.
		}

		private bool CommitRequest(ShelfMergeQueue.Request request)
		{
			return false;
		}

		private bool CanPlateStillTake(ServePlate plate)
		{
			if (plate == null) return false;
			if (!_plates.Contains(plate)) return false;
			// TODO(unrecovered): the remaining result depends on the ServePlate byte flag at +0xb1 (not a stub member): when clear it is !IsPlateBusy(plate), when set it is false. Returns false until the flag is mapped.
			return false;
		}

		private void AbortRemaining(ServePlate plate)
		{
			// TODO(unrecovered): pseudocode builds two closures (DAT_091d8bf8/DAT_091d8c08 targets) passed to ShelfMergeQueue.AbortPlate; closure bodies not recovered in this batch
		}

		private void PruneStaleMerges()
		{
			PruneStaleResultAnims();
			if (_merges == null || !_merges.Any) return;
			if (_stalePlates == null) return;
			_merges.CollectStalePlates(_plates, _stalePlates);
			if (_stalePlates == null) return;
			foreach (ServePlate plate in _stalePlates)
			{
				AbortRemaining(plate);
			}
			FlushDropBacks();
		}

		private void QueueDropBackToGrid(DragItem item)
		{
			if (item == null) return;
			if (_pendingDrops.Contains(item)) return;
			_pendingDrops.Add(item);
		}

		private void FlushDropBacks()
		{
			if (_pendingDrops.Count == 0)
			{
				return;
			}
			_dropBuffer.Clear();
			_dropBuffer.AddRange(_pendingDrops);
			_pendingDrops.Clear();
			foreach (DragItem item in _dropBuffer)
			{
				DropBackToGrid(item);
			}
		}

		private void DropBackToGrid(DragItem item)
		{
			if (item == null) return;
			MessyController messy = MessyController.Ins;
			if (messy == null) return;
			PieceLedger.Step(item, /* literal recovered by guess */ "drop back");
			messy.DropItemToGrid(item);
			messy.RefreshCellDishes();
			RequestServe();
		}

		public bool PromiseDirect(string id)
		{
			return false;
		}

		public void CancelPromise(string id)
		{
			ShelfMergeQueue.Request promise = _merges.FindPromise(FlexibleId.BaseOf(id));
			if (promise != null)
			{
				AbortRemaining(promise.Plate);
				FlushDropBacks();
			}
		}

		private bool TryKeepPromise(DragItem item)
		{
			return false;
		}

		public Vector3 GetSlotWorldCenter(int index)
		{
			// TODO(unrecovered): pseudocode returns a single float (Origin + (index + 0.5) * cellSize) but the stub signature is Vector3; the Vector2/Vector3 return shape is unclear
			return default;
		}

		private void Start()
		{
			// TODO(unrecovered): wires LineHandle.onAnyOrderShown/onAnyMysteryRevealed and MessyController.onBlockPlayerInteractChanged with delegate targets (DAT_091d8c00/DAT_091d8bf0/DAT_091d8be8) that are not mapped to stub methods; also copies _wholeDishServing from a singleton byte at +0x40 whose name is unknown.
		}

		private void OnDestroy()
		{
			// TODO(unrecovered): unsubscribe the LineHandle onAnyOrderShown/onAnyMysteryRevealed handlers; the delegate target (DAT_091d8c00) is not mapped to a stub method.
			// TODO(unrecovered): unsubscribe OnBlockInteractChanged from the level's block-interact event; owner chain (DAT_091b4c28 -> +0x20 -> +0xc0 -> +0x10 -> +0xb8) is not mapped.
			DOTween.Kill(this);
			StopAllFocus();
		}

		private void Update()
		{
			if (serveRecheckInterval > 0f && Time.time >= _nextRecheckTime)
			{
				_nextRecheckTime = Time.time + serveRecheckInterval;
				if (!_isServing && !IsInteractBlocked)
				{
					// TODO(unrecovered): the gate is MessyController.Ins plus LevelBaseCakeOrderAbstract.get_IsLevelSetupComplete, which is not present in the stubs; when it passes the body runs PruneStaleMerges, SweepOrphanPlates and RequestServe.
				}
			}
		}

		private void OnBlockInteractChanged()
		{
			if (IsInteractBlocked) return;
			RequestServe();
		}

		public void Setup(int initSlots)
		{
			unlockedSlots = initSlots;
		}

		public void UnlockNextSlot()
		{
			if (unlockedSlots > 0 && unlockedSlots < slotCount)
			{
				unlockedSlots++;
				RequestServe();
			}
		}

		private void SyncPlatesToOrders()
		{
			if (_wholeDishServing)
			{
				WholeDish.Sync();
				return;
			}
			if (!EnsureSnapshot()) return;
			if (_snapshot == null) return;
			_snapshot.Solve();
			// TODO(unrecovered): per-plate write-back of assigned order (ServePlate fields at +0x88..+0xa0 and the PieceSet/sequence compare) is not mapped to named members; plates are not updated.
		}

		private void SweepOrphanPlates()
		{
			if (_plates == null) return;
			for (int i = _plates.Count - 1; i >= 0; i--)
			{
				ServePlate plate = _plates[i];
				if (plate == null)
				{
					_plates.RemoveAt(i);
					if (_snapshot != null) _snapshot.MarkDirty();
					continue;
				}
				// TODO(unrecovered): orphan test needs ServePlate byte flags at +0xb1/+0xb2 (not stub members); removal of empty unreferenced plates (not in _serving, no inbound merge) is not applied.
			}
		}

		private void RefreshSlotFocus()
		{
			if (_plates == null) return;
			int focus = 0;
			if (!_wholeDishServing)
			{
				int room = Capacity - _plates.Count;
				if (room >= 1 && EnsureSnapshot())
				{
					if (_snapshot == null) return;
					_snapshot.Solve();
					if (_plates == null || _snapshot == null) return;
					int uncovered = _snapshot.UncoveredOrderCount(_plates.Count);
					focus = Mathf.Min(room, uncovered);
				}
			}
			else
			{
				int room = slotCount - _plates.Count;
				if (room > 0)
				{
					int uncovered = WholeDish.UncapturedOrderCount();
					focus = Mathf.Min(room, uncovered);
				}
			}
			int count = _plates.Count;
			for (int i = 0; i < slotCount; i++)
			{
				SetSlotFocus(i, count <= i && i < count + focus);
			}
		}

		private void SetSlotFocus(int slot, bool on)
		{
			if (slot < 0 || slot >= slotCount) return;
			if (_slotFocusOn == null) _slotFocusOn = new bool[slotCount];
			if (slot >= _slotFocusOn.Length) return;
			if (_slotFocusOn[slot] == on) return;
			if (!on)
			{
				BaseParticleElement stopping = _slotFocus != null ? _slotFocus[slot] : null;
				_slotFocusOn[slot] = false;
				if (stopping != null) stopping.Stop();
				return;
			}
			BaseParticleElement focus = GetOrCreateSlotFocus(slot);
			if (focus == null) return;
			_slotFocusOn[slot] = true;
			focus.Play(null, 1f);
		}

		private BaseParticleElement GetOrCreateSlotFocus(int slot)
		{
			return null;
		}

		private void StopAllFocus()
		{
			for (int i = 0; i < slotCount; i++)
			{
				SetSlotFocus(i, false);
			}
		}

		private bool EnsureSnapshot()
		{
			// TODO(unrecovered): pseudocode is void (ShelfSnapshot.Ensure(info, lineHandle, plateHasReader, plateSequenceReader) once _snapshot exists, else throw); stub return type is bool and the true/false meaning is not in the pseudocode. Reader delegate targets (DAT_091d8bd0/DAT_091d8bd8) not mapped.
			return false;
		}

		private string PlateSequence(ServePlate plate, LevelInfo info)
		{
			return null;
		}

		private PieceSet? PlateHas(ServePlate plate, LevelInfo info)
		{
			if (plate == null) return null;
			PieceSet basis = PieceSet.Empty;
			if (!plate.IsEmpty)
			{
				PieceOffer offer = info.GetItemPieceOffer(plate.Item);
				if (offer == null) return null;
				basis = offer.pieces;
			}
			PieceSet inbound = _merges.InboundPieces(plate, info);
			return basis.Add(inbound);
		}

		public void GetGatheredPieces(IReadOnlyList<OrderSpec> orders, List<PieceSet> results)
		{
			// TODO(unrecovered): pseudocode (about 300 lines of inlined PieceSet arithmetic and OrderSpec offsets) not reconstructed in this pass.
		}

		private PieceSet GatherFor(PieceSet order, LevelInfo info)
		{
			return default;
		}

		public void GetPotentialPieces(IReadOnlyList<OrderSpec> orders, List<PieceSet> results)
		{
			// TODO(unrecovered): pseudocode (inlined PieceSet/OrderSpec arithmetic and list enumeration through unnamed helpers) not reconstructed in this pass.
		}

		private static bool DishFits(int plateDish, int itemDish)
		{
			return plateDish == itemDish || (plateDish | itemDish) < 0;
		}

		private ServePlate CreatePlate(int dishKey)
		{
			// TODO(unrecovered): the plate prefab comes from a static/singleton chain (DAT_091898c0 and LevelInfo +0xb8 -> +0x20 -> +0xc0) whose owner types are outside this batch; instantiate helper FUN_04c37c04 is unnamed.
			return null;
		}

		public PlateTake TryTakePlateForOrder(PieceSet order, out DragItem dish)
		{
			dish = null;
			return PlateTake.None;
		}

		public PlateTake PeekPlateForOrder(PieceSet order, out PieceSet onPlate)
		{
			onPlate = default;
			return PlateTake.None;
		}

		private PlateTake FindPlateForOrder(PieceSet order, out ServePlate found, out PieceSet onPlate)
		{
			found = null;
			onPlate = default;
			return PlateTake.None;
		}

		private PlateTake FindBoundPlateForOrder(PieceSet order, out ServePlate found, out PieceSet onPlate)
		{
			found = null;
			onPlate = default;
			return PlateTake.None;
		}

		private bool IsPlateBusy(ServePlate plate)
		{
			return false;
		}

		public void CollectOrphanPlatesForFx(List<ServePlate> into)
		{
			// TODO(unrecovered): orphan test needs ServePlate flags and the stale-plate sweep helpers (unnamed list/dictionary calls); not reconstructed in this pass.
		}

		public DragItem TakePlateDishForFx(ServePlate plate)
		{
			return null;
		}

		public void RemovePlate(ServePlate plate)
		{
			if (plate == null) return;
			if (_serving == null) return;
			_serving.Remove(plate);
			AbortRemaining(plate);
			if (_plates == null) return;
			if (_plates.Remove(plate)) Compact();
			if (_snapshot == null) return;
			_snapshot.MarkDirty();
			plate.Despawn();
			RefreshSlotFocus();
		}

		public void Compact()
		{
			// TODO(unrecovered): pseudocode walks _plates and calls ServePlate.SetSlot(x, y, ...) for plates below LayoutSlots, with a starting Y passed as a float argument that this stub signature does not carry; the SetSlot parameter meaning and the Origin component are not confirmed.
		}

		public ServePlate FindPlate(DragItem item)
		{
			return null;
		}

		public IEnumerable<DragItem> GetRemainingItems()
		{
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				ServePlate plate = _plates[i];
				if (plate == null)
				{
					continue;
				}
				DragItem item = plate.Item;
				if (item != null)
				{
					yield return item;
				}
			}
		}

		public IEnumerable<DragItem> GetMergingItems()
		{
			return null;
		}

		private void RequestServeAfterAssemble(ServePlate plate)
		{
			// TODO(unrecovered): when plate.Item reports a positive wait (virtual call at vtable +0x1c8, not named in the stubs), the pseudocode raises a ServePlate float at +0x84 and schedules a delayed callback via DOVirtual.DelayedCall (ease/target set from unnamed statics); not reconstructed. The trailing RequestServe is applied.
			RequestServe();
		}

		public void RequestServe()
		{
			if (IsInteractBlocked) return;
			if (_isServing)
			{
				_serveQueued = true;
				return;
			}
			_isServing = true;
			int guard = -8;
			do
			{
				_serveQueued = false;
				_snapshot.MarkDirty();
				SyncPlatesToOrders();
				ServeToCustomers();
			} while (_serveQueued && guard++ != 0);
			_isServing = false;
			_serveQueued = false;
			FlushDropBacks();
			RefreshSlotFocus();
		}

		private void ServeToCustomers()
		{
			FCustomerLineHandle handle = LineHandle;
			if (handle == null) return;
			if (!_wholeDishServing)
			{
				if (_serveBuffer == null) return;
				_serveBuffer.Clear();
				_serveBuffer.AddRange(_plates);
				foreach (ServePlate plate in _serveBuffer)
				{
					if (plate == null || plate.IsEmpty) continue;
					if (_serving.Contains(plate)) continue;
					// TODO(unrecovered): ServePlate float at +0x84 (serve-not-before time, not a stub member) must be <= Time.time for the plate to serve; the gate is assumed open here.
					if (IsResultAnimPlaying(plate)) continue;
					if (_merges.HasInbound(plate)) continue;
					if (handle.TryGetServableLine(plate.Item, out FCustomerLine line))
					{
						ServePlateTo(plate, plate.Item, line, -1);
					}
				}
				_serveBuffer.Clear();
				TryMergeFromSaveMeBag();
				ScanGridItems();
				return;
			}
			WholeDish.Serve();
			WholeDish.Capture();
		}

		private bool ServePlateTo(ServePlate plate, DragItem item, FCustomerLine line, int orderIndex = -1)
		{
			return false;
		}

		private void ScanSources()
		{
			TryMergeFromSaveMeBag();
			ScanGridItems();
		}

		private void TryMergeFromSaveMeBag()
		{
			// TODO(unrecovered): reads the SpawnBagSaveMe singleton through an unnamed static (DAT_0918aec0 +0xb8) and a display-class predicate; not reconstructed.
		}

		public bool TryTakeDirect(DragItem item, bool planned = false)
		{
			return false;
		}

		public bool IsHeldAtSource(DragItem item)
		{
			return false;
		}

		public void WhenSourceFreed(DragItem item, Action onFreed)
		{
			// TODO(unrecovered): when not whole-dish, the pseudocode invokes a delegate held in an unnamed source-owner object (+0x18 vtable call with +0x40/+0x28 args); owner type not identified.
		}

		private void ScanGridItems()
		{
			if (grid == null) return;
			if (MessyController.Ins == null) return;
			if (_gridScanBuffer == null) return;
			_gridScanBuffer.Clear();
			_gridScanBuffer.AddRange(grid.GetRemainingItems());
			foreach (DragItem item in _gridScanBuffer)
			{
				if (item != null && item.IsLandedInCell)
				{
					TryAutoMergeToPlate(item, true, false);
				}
			}
			_gridScanBuffer.Clear();
		}
	}
}
