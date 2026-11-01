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
				// TODO(unrecovered): loop body depends on FUN_057e0998/FUN_057e251c/FUN_057e1004/FUN_053ebc3c helpers (list index/remove and plate-state probes) with unresolved offsets 0x78/0xa8/0xb1 on ServePlate.
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
				// TODO(unrecovered): needs ShelfMergeQueue.IndexOfOldest, which is private in ShelfMergeQueue.cs and not reachable from this nested type.
				return false;
			}

			private void RefreshReadyMarks(LevelInfo info)
			{
				// TODO(unrecovered): line enumeration goes through an unnamed service lookup (vtable call on LineHandle+0xe8) and OrderSpec field offsets are not identified; ready-set diffing and SetOrderReady calls depend on it.
			}

			private bool IsMarkedReady(FCustomerLine line, int index)
			{
				if (line == null) throw new NullReferenceException();
				return _ready.Contains((line, line.SpawnData, index));
			}

			private bool TryClaimReadyPlate(OrderSpec spec, LevelInfo info)
			{
				// TODO(unrecovered): ServePlate byte flag at +0xb1 and dish key at +0xb4 are not mapped to named members.
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
				// TODO(unrecovered): line enumeration goes through an unnamed service lookup on LineHandle, and ServeService reservation access is via an unnamed static; not reconstructed.
			}

			private ServePlate PickServePlate(FCustomerLine line, int index, LevelInfo info)
			{
				// TODO(unrecovered): depends on ServePlate +0xb1 flag, +0xb4 dish key and an unnamed ShelfMergeQueue/PieceSet copy chain; not reconstructed.
				return null;
			}

			private bool IsServable(ServePlate plate, FCustomerLine line)
			{
				// TODO(unrecovered): ServePlate byte flag at +0xb1 and ServePlate +0xa8 member not identified.
				return false;
			}

			private void RebindForServe(ServePlate plate, FCustomerLine line, int index)
			{
				// TODO(unrecovered): sequence lookup goes through an unnamed LevelInfo/FCustomerLine copy chain and a display-class lookup; not reconstructed.
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
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
				return false;
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
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
				return false;
			}

			private bool TryCapture(FCustomerLine line, int index, OrderSpec spec, LevelInfo info, bool dryRun)
			{
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
				return false;
			}

			private bool TryResume(Binding b, LevelInfo info, bool dryRun)
			{
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
				return false;
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
				// TODO(unrecovered): original also sets a byte flag at plate.Item+0x78 here; +0x78 on DragItem is the id string, so the flag's meaning is not identified yet.
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
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
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
				// TODO(unrecovered): pseudocode not reconstructed in this pass.
				next = default;
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
				// TODO(unrecovered): hover tween chain (DOMoveY lift/bob sequence, callback target, ease constants) not fully mapped from the display-class pseudocode.
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
				// TODO(unrecovered): condition on DragItem +0xa0 and +0xe9 fields not identified; drop-back target is _shelf.QueueDropBackToGrid with the _committingExtra comparison.
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
				// TODO(unrecovered): walks ShelfMergeQueue requests through unnamed vtable lookups and a Binding/flag at +0x2c; not reconstructed.
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

		public Vector2 Size => new Vector2(cellSize.x * LayoutSlots, cellSize.y);

		private int LayoutSlots => _wholeDishServing ? Mathf.Max(slotCount, _plates.Count) : slotCount;

		// Left edge of the slot row; the slot centres sit on the shelf's y.
		public Vector2 Origin => new Vector2(transform.position.x - cellSize.x * LayoutSlots * 0.5f, transform.position.y - cellSize.y * 0.5f);

		public int Capacity
		{
			get
			{
				int slots = Mathf.Max(slotCount, 0);
				return unlockedSlots < 1 ? slots : Mathf.Min(slots, unlockedSlots);
			}
		}

		public bool HasFreeSlot => _plates != null && _plates.Count < Capacity;

		public IReadOnlyList<ServePlate> Plates => _plates;

		private static LevelInfo Info => MessyController.Ins != null ? MessyController.Ins.Info : null;

		private static FCustomerLineHandle LineHandle => MessyController.Ins != null ? MessyController.Ins.LineHandle : null;

		private static bool IsInteractBlocked => LevelBaseCakeOrderAbstract.Instance == null || LevelBaseCakeOrderAbstract.Instance.PlayState != LevelPlayState.Playing;

		// TODO(unrecovered): depends on IsInteractBlocked and MessyController.Spawner, whose owner is not in this batch
		private static bool IsDirectTakeBlocked => false;

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
			if (item == null || _merges == null || !_merges.IsInFlight(item)) return;
			_forgetPlates.Clear();
			foreach (ServePlate plate in _merges.PlatesOf(item))
			{
				if (plate != null && !_forgetPlates.Contains(plate)) _forgetPlates.Add(plate);
			}
			_merges.RemoveAllOf(item);
			_snapshot.MarkDirty();
			foreach (ServePlate plate in _forgetPlates)
			{
				if (plate != null && plate.IsEmpty && !IsPlateBusy(plate)) RemovePlate(plate);
			}
			_forgetPlates.Clear();
			RefreshSlotFocus();
		}

		private readonly HashSet<DragItem> _directServing = new HashSet<DragItem>();

		private sealed class Assembly
		{
			public FCustomerLine Line;
			public int Index;
			public ServeTicket Ticket;
			public string OrderId;
			public FlexibleDragItem Dish;
			public ServePlate Plate;
			public bool DishReady;
			public bool Delivering;
			public readonly List<string> Remaining = new List<string>();
			public int InFlight;
		}

		private readonly List<Assembly> _assemblies = new List<Assembly>();

		// Plate prefab of the dish kind the id belongs to (RecipeConfigSO.dishInfos[].plate); null when the recipe has none.
		private ServePlate SpawnPlateFor(string id, Vector3 pos)
		{
			LevelInfo info = Info;
			RcDishInfo dish = info != null ? info.GetDishInfoOfId(FlexibleId.BaseOf(id)) : null;
			if (dish == null || dish.plate == null) return null;
			ServePlate plate = Instantiate(dish.plate, pos, Quaternion.identity);
			plate.SetVariant(dish.dishKind, dish.dirtyPlate);
			plate.SetSlot(pos, true);
			plate.ShowInstant();
			return plate;
		}

		private static void DestroyPlate(ServePlate plate)
		{
			if (plate == null) return;
			plate.Despawn();
			Destroy(plate.gameObject);
		}

		private Vector3 AssemblyPosition(int slot)
		{
			Vector3 origin = transform.position;
			float width = cellSize.x > 0.1f ? cellSize.x : 1.2f;
			int slots = Mathf.Max(1, slotCount);
			// Slots are centred on the shelf: Origin.x = position.x - cellSize.x * slots * 0.5 (see the Origin pseudocode note).
			return new Vector3(origin.x - width * slots * 0.5f + (slot + 0.5f) * width, origin.y, origin.z);
		}

		private void PruneAssemblies()
		{
			for (int i = _assemblies.Count - 1; i >= 0; i--)
			{
				Assembly a = _assemblies[i];
				if (a.Delivering) continue;
				bool alive = a.Line != null && a.Line.IsCustomerReady && a.Ticket != null && a.Ticket.IsValid;
				if (alive) continue;
				MessyController messy = MessyController.Ins;
				if (messy != null) messy.Serve.Release(a.Ticket);
				if (a.Dish != null && a.InFlight == 0) a.Dish.Despawn();
				if (a.InFlight == 0) DestroyPlate(a.Plate);
				_assemblies.RemoveAt(i);
			}
		}

		// Collects raw pieces for flexible orders (burgers etc.) onto a dish, then flies the finished dish to its customer.
		private bool TryGatherForFlexibleOrder(DragItem item)
		{
			MessyController messy = MessyController.Ins;
			FCustomerLineHandle handle = LineHandle;
			LevelInfo info = Info;
			if (messy == null || handle == null || info == null) return false;
			PruneAssemblies();
			string itemId = item.GetId();
			Assembly target = null;
			foreach (Assembly a in _assemblies)
			{
				if (!a.Delivering && a.Remaining.Contains(itemId)) { target = a; break; }
			}
			if (target == null)
			{
				if (_assemblies.Count >= Mathf.Max(1, Capacity)) return false;
				foreach (FCustomerLine line in handle.OrderLines)
				{
					if (line == null || !line.IsCustomerReady) continue;
					List<int> open = line.GetOpenOrderIndices();
					if (open == null) continue;
					foreach (int index in open)
					{
						string display = line.GetOrderIds(index).Item1;
						if (!FlexibleId.IsFlexible(display)) continue;
						DragItem prefab = info.GetIngredientPrefab(FlexibleId.BaseOf(display));
						FlexibleDragItem flexPrefab = prefab as FlexibleDragItem;
						if (flexPrefab == null) continue;
						List<string> need = flexPrefab.GetIngIds(display);
						if (need == null || !need.Contains(itemId)) continue;
						if (!messy.Serve.TryReserveOrder(this, line, index, out ServeTicket ticket)) continue;
						target = new Assembly { Line = line, Index = index, Ticket = ticket, OrderId = display };
						target.Remaining.AddRange(need);
						_assemblies.Add(target);
						break;
					}
					if (target != null) break;
				}
			}
			if (target == null) return false;
			int slot = _assemblies.IndexOf(target);
			Vector3 dishPos = AssemblyPosition(slot);
			if (target.Dish == null)
			{
				DragItem spawned = messy.SpawnAndGetDragItem(FlexibleId.BaseOf(target.OrderId), dishPos, false, false);
				target.Dish = spawned as FlexibleDragItem;
				if (target.Dish == null)
				{
					if (spawned != null) spawned.Despawn();
					_assemblies.Remove(target);
					messy.Serve.Release(target.Ticket);
					return false;
				}
				target.Plate = SpawnPlateFor(target.OrderId, dishPos);
				if (target.Plate != null) target.Plate.Adopt(target.Dish, false);
			}
			target.Remaining.Remove(itemId);
			target.InFlight++;
			_directServing.Add(item);
			item.UnregisterCell();
			messy.RefreshCellDishes();
			Assembly assembly = target;
			Tween tween = item.JumpToTargetTween(dishPos, true, 0.6f);
			Action arrive = () =>
			{
				_directServing.Remove(item);
				assembly.InFlight--;
				if (assembly.Dish != null && !(assembly.Dish is FlexibleBurger && itemId == "burger_bun")) assembly.Dish.AddIng(itemId); // the bun is the base of a burger, not a filling (it would put "00" into the id)
				if (item != null) item.Despawn();
				if (assembly.Remaining.Count == 0 && assembly.InFlight == 0) DeliverAssembly(assembly);
				RequestServe();
			};
			if (tween != null) tween.OnComplete(() => arrive()); else arrive();
			return true;
		}

		private void DeliverAssembly(Assembly a)
		{
			MessyController messy = MessyController.Ins;
			if (messy == null || a.Dish == null) return;
			if (a.Line == null || !messy.Serve.CanDeliverOrder(a.Ticket))
			{
				return;
			}
			a.Delivering = true;
			Transform target = a.Line.GetOrderTarget(a.Index);
			if (target == null) target = a.Line.targetPos;
			Tween tween = null;
			if (target != null)
			{
				// The plate carries the finished dish to the customer in a hop.
				Transform carrier = a.Plate != null ? a.Plate.transform : a.Dish.transform;
				tween = carrier.DOJump(target.position, 1.2f, 1, 0.5f).SetEase(Ease.Linear);
			}
			Action done = () =>
			{
				messy.Serve.DeliverOrder(a.Ticket);
				GlobalAudio.Play((GlobalSfx)3, 1f);
				if (a.Plate != null) a.Plate.DetachItem();
				if (a.Dish != null) a.Dish.Despawn();
				DestroyPlate(a.Plate);
				_assemblies.Remove(a);
				RequestServe();
			};
			if (tween != null) tween.OnComplete(() => done()); else done();
		}


		// Simplified serve path (the original routes through plates and merge queues): the dish flies straight to a customer order that accepts it.
		// Original path: the solver picks the plate that profits most from the item (or opens a new one), the item is booked on it and flies
		// over, and the plate is served to its customer once it holds a finished dish. Items the solver does not want take the direct path below.
		private bool TryAutoMergeToPlate(DragItem item, bool requireLanded = true, bool directTake = false)
		{
			return TryPlateMerge(item, requireLanded, directTake) || TryDirectServe(item, requireLanded, directTake);
		}

		private bool TryPlateMerge(DragItem item, bool requireLanded, bool directTake)
		{
			if (_wholeDishServing || item == null) return false;
			if (!directTake && IsInteractBlocked) return false;
			if (requireLanded && !item.IsLandedInCell) return false;
			if (_directServing.Contains(item) || _merges == null || _merges.IsInFlight(item)) return false;
			LevelInfo info = Info;
			if (info == null) return false;
			string id = item.GetId();
			PieceOffer offer = info.GetItemPieceOffer(item);
			if (!TryPickMergeTarget(offer, id, info, out ServePlate plate, out int newPlateDish, out int gain)) return false;
			if (item.Cell == null && !CanHandOverNow(plate)) return false;
			if (plate == null) plate = CreatePlate(newPlateDish);
			if (plate == null) return false;
			TryResolveMerge(plate, id, info, out string resultId);
			Reserve(plate, item, resultId);
			if (item.PlayWindUp() == null) PumpLaunches(plate);
			else SchedulePump(plate, mergePrimeDelay);
			return true;
		}

		// Simplified serve path: the dish flies straight to a customer order that accepts it.
		private bool TryDirectServe(DragItem item, bool requireLanded = true, bool directTake = false)
		{
			if (item == null || IsInteractBlocked) return false;
			if (requireLanded && !item.IsLandedInCell) return false;
			if (_directServing.Contains(item)) return false;
			FCustomerLineHandle handle = LineHandle;
			MessyController messy = MessyController.Ins;
			if (handle == null || messy == null) return false;
			if (!handle.TryGetServableLine(item, out FCustomerLine line) || line == null) return false;
			if (!messy.Serve.TryReserve(this, line, item, out ServeTicket ticket) || ticket == null) return false;
			Transform target = line.GetOrderTarget(ticket.Indices[0]);
			if (target == null) target = line.targetPos;
			if (target == null)
			{
				messy.Serve.Release(ticket);
				return false;
			}
			_directServing.Add(item);
			item.UnregisterCell();
			messy.RefreshCellDishes();
			ServePlate plate = SpawnPlateFor(item.GetId(), item.transform.position);
			Tween tween;
			if (plate != null)
			{
				plate.Adopt(item, false);
				tween = plate.transform.DOJump(target.position, 1.2f, 1, 0.5f).SetEase(Ease.Linear);
			}
			else
			{
				tween = item.JumpToTargetTween(target.position, true, 0.6f);
			}
			Action arrive = () =>
			{
				_directServing.Remove(item);
				if (plate != null) plate.DetachItem();
				if (item == null) { messy.Serve.Release(ticket); DestroyPlate(plate); return; }
				if (messy.Serve.Deliver(ticket, item))
				{
					GlobalAudio.Play((GlobalSfx)3, 1f);
					item.Despawn();
				}
				else
				{
					DropBackToGrid(item);
				}
				DestroyPlate(plate);
				RequestServe();
			};
			if (tween != null) tween.OnComplete(() => arrive()); else arrive();
			return true;
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
			if (evt.item == null) return;
			_snapshot.MarkDirty();
			if (!_wholeDishServing) TryAutoMergeToPlate(evt.item);
			RequestServe();
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
			LevelInfo info = Info;
			PieceOffer offer = info != null ? info.GetIdPieceOffer(id) : null;
			return offer != null ? ScoreGainForOffer(offer, id) : 0;
		}

		public int ScoreGainForOffer(PieceOffer offer, string baseId)
		{
			return TryPickMergeTarget(offer, baseId, Info, out _, out _, out int gain) ? gain : 0;
		}

		// Picks where an item should go: the plate whose solver score improves the most when the item joins it, or a new plate when that
		// beats the current score. gain is the score improvement; newPlateDish the dish of the plate to open (when plate stays null).
		private bool TryPickMergeTarget(PieceOffer itemOffer, string itemBaseId, LevelInfo info, out ServePlate plate, out int newPlateDish, out int gain)
		{
			plate = null;
			newPlateDish = -1;
			gain = 0;
			if (itemOffer == null || itemOffer.pieces.IsEmpty || info == null || !EnsureSnapshot() || _snapshot == null) return false;
			if (_snapshot.OrderCount == 0) return false;
			int baseScore = _snapshot.Solve();
			int itemDish = info.DishKeyOfId(itemBaseId);
			bool holdsFloor = HoldsTheFloor(_activeMergePlate);
			ServePlate best = null;
			int bestScore = 0;
			int bestMissing = 0;
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				ServePlate candidate = _plates[i];
				if (candidate == null || candidate.IsServing) continue;
				if (holdsFloor && candidate != _activeMergePlate) continue;
				if (_serving.Contains(candidate) || !DishFits(candidate.DishKey, itemDish)) continue;
				// An empty plate must be opened by the item; a plate that already holds (or is about to receive) something must be able to merge it.
				bool canJoin = candidate.IsEmpty && !_merges.HasInbound(candidate)
					? CanStartPlate(itemBaseId, itemOffer.pieces, candidate.DishKey, info)
					: TryResolveMerge(candidate, itemBaseId, info, out _);
				if (!canJoin) continue;
				PieceSet? has = _snapshot.PlateHas(i);
				if (!has.HasValue) continue;
				PieceSet merged = has.Value.Add(itemOffer.pieces);
				string sequence = _snapshot.PlateSequence(i);
				_snapshot.SetPlateHas(i, merged);
				_snapshot.SetPlateSequence(i, sequence + info.SequenceOf(itemBaseId));
				int score = _snapshot.Solve();
				int assigned = _snapshot.AssignOf(i);
				int missing = int.MaxValue;
				bool completes = true;
				if (assigned >= 0)
				{
					PieceSet want = _snapshot.OrderPieces(assigned);
					missing = want.MissingFrom(merged);
					completes = info.CanStillComplete(merged, want);
				}
				_snapshot.SetPlateHas(i, has);
				_snapshot.SetPlateSequence(i, sequence);
				if (score > baseScore && completes && (best == null || score > bestScore || (score == bestScore && missing < bestMissing)))
				{
					best = candidate;
					bestScore = score;
					bestMissing = missing;
				}
			}
			if (best == null && HasFreeSlot && CanStartPlate(itemBaseId, itemOffer.pieces, -1, info) &&
				IsWorthANewPlate(itemBaseId, itemOffer.pieces, itemDish, baseScore, info, out int bornDish, out int bornScore))
			{
				newPlateDish = bornDish;
				bestScore = bornScore;
				best = null;
				gain = bestScore - baseScore;
				_snapshot.Solve();
				return true;
			}
			_snapshot.Solve();
			plate = best;
			if (plate == null) return false;
			gain = bestScore - baseScore;
			return true;
		}

		private bool IsWorthANewPlate(string itemBaseId, PieceSet itemPieces, int itemDish, int baseScore, LevelInfo info, out int bornDish, out int bestScore)
		{
			bornDish = -1;
			bestScore = baseScore;
			if (_snapshot == null) return false;
			if (itemDish >= 0)
			{
				TryVirtualPlate(itemDish, itemBaseId, itemPieces, itemDish, baseScore, info, ref bestScore, ref bornDish);
			}
			else
			{
				for (int i = 0; i < _snapshot.OrderCount; i++)
				{
					if (IsDishSeenBefore(i, _snapshot.OrderDishKey(i))) continue;
					TryVirtualPlate(_snapshot.OrderDishKey(i), itemBaseId, itemPieces, itemDish, baseScore, info, ref bestScore, ref bornDish);
				}
				if (bestScore <= baseScore) TryVirtualPlate(-1, itemBaseId, itemPieces, itemDish, baseScore, info, ref bestScore, ref bornDish);
			}
			return bestScore > baseScore;
		}

		private bool IsDishSeenBefore(int order, int dish)
		{
			for (int j = 0; j < order; j++)
			{
				if (_snapshot.OrderDishKey(j) == dish) return true;
			}
			return false;
		}

		private void TryVirtualPlate(int plateDish, string itemBaseId, PieceSet itemPieces, int itemDish, int baseScore, LevelInfo info, ref int bestScore, ref int bornDish)
		{
			if (!DishFits(plateDish, itemDish)) return;
			int index = _snapshot.PushVirtualPlate(itemPieces, plateDish, info.SequenceOf(itemBaseId));
			int score = _snapshot.Solve();
			int assigned = _snapshot.AssignOf(index);
			bool completes = assigned >= 0 && info.CanStillComplete(itemPieces, _snapshot.OrderPieces(assigned));
			_snapshot.PopVirtualPlate();
			if (completes && score > bestScore)
			{
				bestScore = score;
				bornDish = plateDish;
			}
		}

		// Whether the item can join the plate (flexible dishes add in place, plain dishes combine into a result id).
		private bool TryResolveMerge(ServePlate plate, string itemBaseId, LevelInfo info, out string resultId)
		{
			resultId = null;
			if (string.IsNullOrEmpty(itemBaseId) || info == null || _merges == null) return false;
			_merges.Project(plate, info, out FlexibleDragItem flexible, out string projectedId);
			if (flexible == null)
			{
				if (string.IsNullOrEmpty(projectedId))
				{
					return info.TryGetDishResult(plate.DishKey, projectedId, itemBaseId, out resultId);
				}
				string dishBase = FlexibleId.BaseOf(projectedId);
				DragItem prefab = info.GetIngredientPrefab(dishBase);
				if (prefab is FlexibleDragItem)
				{
					return info.CanDishAdd(dishBase, _merges.InboundPieces(plate, info), itemBaseId);
				}
				return info.TryGetDishResult(plate.DishKey, projectedId, itemBaseId, out resultId);
			}
			if (!info.CanAddTo(flexible, itemBaseId)) return false;
			return info.CanDishAdd(flexible.GetBaseId(), flexible.Pieces.Add(_merges.InboundPieces(plate, info)), itemBaseId);
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

		// Plays the dish's own result animation when the merge produced one (juice pour, nigiri roll ...); the plate is held until it ends.
		private bool BeginResultAnim(ServePlate plate, string sourceId, bool merged)
		{
			if (plate == null || plate.Item == null) return false;
			ItemResultMergeAnim anim = plate.Item.ResultMergeAnim;
			if (anim == null || !anim.Handles(sourceId)) return false;
			_resultAnims[plate] = merged;
			plate.SetMergeAnimLifted(true);
			bool finished = false;
			Action finish = () =>
			{
				if (finished) return;
				finished = true;
				OnResultAnimDone(plate);
			};
			anim.Play(plate.Item, sourceId, finish);
			if (!finished)
			{
				// Safety net: if the animation never reports back, release the plate after its maximum duration.
				DOVirtual.DelayedCall(Mathf.Max(0.01f, anim.GetMaxDuration(sourceId)), () => finish(), true).SetTarget(this);
			}
			return true;
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
			if (_resultAnims.Count == 0) return;
			_staleAnimPlates.Clear();
			foreach (ServePlate plate in _resultAnims.Keys)
			{
				if (plate == null || !_plates.Contains(plate)) _staleAnimPlates.Add(plate);
			}
			foreach (ServePlate plate in _staleAnimPlates)
			{
				_resultAnims.Remove(plate);
				if (plate == null) continue;
				plate.SetMergeAnimLifted(false);
				if (plate.Item is FlexibleDragItem flexible) flexible.ResumeVisual();
			}
			_staleAnimPlates.Clear();
		}

		private bool CommitRequest(ShelfMergeQueue.Request request)
		{
			if (request == null) return false;
			if (request.Item == null || !CanPlateStillTake(request.Plate)) return false;
			MessyController messy = MessyController.Ins;
			if (messy == null || !messy.MergeIntoShelfPlate(request.Plate, request.Item, request.ResultId)) return false;
			request.Item.PlayUseSfx();
			return true;
		}

		private bool CanPlateStillTake(ServePlate plate)
		{
			if (plate == null) return false;
			if (!_plates.Contains(plate)) return false;
			return !plate.IsServing && !_serving.Contains(plate);
		}

		private void AbortRemaining(ServePlate plate)
		{
			if (_merges == null) return;
			_merges.AbortPlate(plate, QueueDropBackToGrid, StandDown);
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

		// A station announces that the item it is about to release will be taken: a plate is reserved for it in advance.
		public bool PromiseDirect(string id)
		{
			if (_wholeDishServing || string.IsNullOrEmpty(id)) return false;
			LevelInfo info = Info;
			if (info == null) return false;
			PieceOffer offer = info.GetIdPieceOffer(id);
			string baseId = FlexibleId.BaseOf(id);
			_snapshot.MarkDirty();
			if (!TryPickMergeTarget(offer, baseId, info, out ServePlate plate, out int newPlateDish, out _)) return false;
			if (plate == null) plate = CreatePlate(newPlateDish);
			if (plate == null) return false;
			TryResolveMerge(plate, baseId, info, out string resultId);
			if (offer == null) return false;
			_merges.AddPromise(plate, baseId, offer.pieces, resultId);
			_activeMergePlate = plate;
			_snapshot.MarkDirty();
			return true;
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
			if (item == null || _merges.IsInFlight(item)) return false;
			ShelfMergeQueue.Request promise = _merges.FindPromise(item.GetId());
			if (promise == null) return false;
			ServePlate plate = promise.Plate;
			if (!CanPlateStillTake(plate))
			{
				AbortRemaining(plate);
				FlushDropBacks();
				return false;
			}
			ShelfMergeQueue.Bind(promise, item);
			PieceLedger.Step(item, "keep promise " + _plates.IndexOf(plate));
			_snapshot.MarkDirty();
			if (item.PlayWindUp() == null) PumpLaunches(plate);
			else SchedulePump(plate, mergePrimeDelay);
			return true;
		}

		public Vector3 GetSlotWorldCenter(int index)
		{
			return SlotPosition(index);
		}

		private void Start()
		{
			FCustomerLineHandle handle = LineHandle;
			if (handle != null)
			{
				handle.onAnyOrderShown += RequestServe;
				handle.onAnyMysteryRevealed += RequestServe;
			}
			GameEventBus.Subscribe<GridItemLandedEvent>(OnGridItemLanded);
			if (LevelBaseCakeOrderAbstract.Instance != null)
			{
				LevelBaseCakeOrderAbstract.Instance.onBlockPlayerInteractChanged += OnBlockInteractChanged;
			}
		}

		private void OnDestroy()
		{
			FCustomerLineHandle handle = LineHandle;
			if (handle != null)
			{
				handle.onAnyOrderShown -= RequestServe;
				handle.onAnyMysteryRevealed -= RequestServe;
			}
			GameEventBus.Unsubscribe<GridItemLandedEvent>(OnGridItemLanded);
			if (LevelBaseCakeOrderAbstract.Instance != null)
			{
				LevelBaseCakeOrderAbstract.Instance.onBlockPlayerInteractChanged -= OnBlockInteractChanged;
			}
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
					RequestServe();
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
			// Every plate is labelled with the order it was assigned to (or cleared when it has none).
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				ServePlate plate = _plates[i];
				if (plate == null || _snapshot == null) continue;
				int assigned = _snapshot.AssignOf(i);
				PieceSet? label = assigned >= 0 ? _snapshot.OrderPieces(assigned) : (PieceSet?)null;
				if (label.HasValue == plate.Order.HasValue && (!label.HasValue || label.Value.Equals(plate.Order.Value))) continue;
				plate.Order = label;
				_snapshot.MarkDirty();
			}
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
				if (plate.IsEmpty && !IsPlateBusy(plate) && !plate.IsAdopting)
				{
					RemovePlate(plate);
				}
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
			if (slotFocusPrefab == null || slot < 0 || slot >= slotCount) return null;
			if (_slotFocus == null) _slotFocus = new BaseParticleElement[slotCount];
			if (_slotFocus[slot] == null)
			{
				_slotFocus[slot] = Instantiate(slotFocusPrefab, SlotPosition(slot), Quaternion.identity, transform);
			}
			return _slotFocus[slot];
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
			if (_plateHasReader == null) _plateHasReader = plate => PlateHas(plate, Info);
			if (_plateSequenceReader == null) _plateSequenceReader = plate => PlateSequence(plate, Info);
			if (_snapshot == null) return false;
			return _snapshot.Ensure(_plates, Info, LineHandle, _plateHasReader, _plateSequenceReader);
		}

		private string PlateSequence(ServePlate plate, LevelInfo info)
		{
			if (plate == null || info == null) return string.Empty;
			string own = !plate.IsEmpty && plate.Item != null ? info.SequenceOf(plate.Item.GetId()) : string.Empty;
			return own + _merges.InboundSequence(plate, info);
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

		// For each order: the pieces already on the plate that is labelled with it (empty when no plate is).
		public void GetGatheredPieces(IReadOnlyList<OrderSpec> orders, List<PieceSet> results)
		{
			if (results == null) return;
			results.Clear();
			if (orders == null) return;
			LevelInfo info = Info;
			_gatherClaimed.Clear();
			for (int i = 0; i < orders.Count; i++)
			{
				OrderSpec spec = orders[i];
				PieceSet gathered = PieceSet.Empty;
				if (info != null && spec.HasPieces && !spec.Pieces.IsEmpty)
				{
					gathered = GatherFor(spec.Pieces, info);
				}
				results.Add(gathered);
			}
		}

		private PieceSet GatherFor(PieceSet order, LevelInfo info)
		{
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				ServePlate plate = _plates[i];
				if (plate == null || !plate.Order.HasValue || !plate.Order.Value.Equals(order)) continue;
				if (!_gatherClaimed.Add(plate)) continue;
				PieceSet? has = PlateHas(plate, info);
				return has.HasValue ? has.Value : PieceSet.Empty;
			}
			return PieceSet.Empty;
		}

		// Like GetGatheredPieces, but an order with nothing gathered shows what the best compatible plate already holds.
		public void GetPotentialPieces(IReadOnlyList<OrderSpec> orders, List<PieceSet> results)
		{
			GetGatheredPieces(orders, results);
			LevelInfo info = Info;
			if (info == null || orders == null) return;
			for (int i = 0; i < orders.Count && i < results.Count; i++)
			{
				OrderSpec spec = orders[i];
				if (!spec.HasPieces || spec.Pieces.IsEmpty || !results[i].IsEmpty) continue;
				int dish = info.DishKeyOfOrder(spec);
				PieceSet best = PieceSet.Empty;
				int bestCount = 0;
				foreach (ServePlate plate in _plates)
				{
					if (plate == null || !DishFits(plate.DishKey, dish)) continue;
					PieceSet? has = PlateHas(plate, info);
					if (!has.HasValue || has.Value.IsEmpty || !spec.Pieces.Covers(has.Value)) continue;
					int count = has.Value.TotalCount;
					if (count > bestCount)
					{
						bestCount = count;
						best = has.Value;
					}
				}
				results[i] = best;
			}
		}

		private Vector3 SlotPosition(int index)
		{
			Vector2 origin = Origin;
			return new Vector3(origin.x + (index + 0.5f) * cellSize.x, origin.y + cellSize.y * 0.5f, transform.position.z);
		}

		private static bool DishFits(int plateDish, int itemDish)
		{
			return plateDish == itemDish || (plateDish | itemDish) < 0;
		}

		private ServePlate CreatePlate(int dishKey)
		{
			LevelInfo info = Info;
			if (dishKey < 0 || !HasFreeSlot || info == null) return null;
			if (!info.TryGetPlateVariant(dishKey, out ServePlate prefab, out DragItem dirty) || prefab == null) return null;
			Vector3 pos = SlotPosition(_plates.Count);
			ServePlate plate = Instantiate(prefab, pos, Quaternion.identity, transform);
			plate.gameObject.SetActive(true);
			plate.SetVariant(dishKey, dirty);
			plate.Order = null;
			plate.HideUntilFirstItem();
			_plates.Add(plate);
			plate.SetSlot(pos, true);
			if (_plates.Count < LayoutSlots) Compact();
			if (_snapshot != null) _snapshot.MarkDirty();
			SetSlotFocus(_plates.Count - 1, false);
			return plate;
		}

		public PlateTake TryTakePlateForOrder(PieceSet order, out DragItem dish)
		{
			dish = null;
			PlateTake take = FindPlateForOrder(order, out ServePlate plate, out _);
			if (take == PlateTake.Taken)
			{
				dish = plate.DetachItem();
				RemovePlate(plate);
			}
			return take;
		}

		public PlateTake PeekPlateForOrder(PieceSet order, out PieceSet onPlate)
		{
			return FindPlateForOrder(order, out _, out onPlate);
		}

		// The plate the solver labelled with this order: Taken when it holds a dish that can be handed over, Busy while it is moving.
		private PlateTake FindPlateForOrder(PieceSet order, out ServePlate found, out PieceSet onPlate)
		{
			found = null;
			onPlate = PieceSet.Empty;
			if (_wholeDishServing || !EnsureSnapshot() || _snapshot == null) return PlateTake.None;
			_snapshot.Solve();
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				ServePlate plate = _plates[i];
				if (plate == null) continue;
				int assigned = _snapshot.AssignOf(i);
				if (assigned < 0 || !_snapshot.OrderPieces(assigned).Equals(order)) continue;
				if (IsPlateBusy(plate)) return PlateTake.Busy;
				if (plate.IsEmpty) continue;
				found = plate;
				PieceSet? has = _snapshot.PlateHas(i);
				onPlate = has.HasValue ? has.Value : PieceSet.Empty;
				return PlateTake.Taken;
			}
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
			return plate != null && (_serving.Contains(plate) || IsResultAnimPlaying(plate) || _merges.HasInbound(plate));
		}

		// Plates holding a dish that no open order wants any more (used for the end-of-level clean-up effects).
		public void CollectOrphanPlatesForFx(List<ServePlate> into)
		{
			if (into == null || _wholeDishServing || !EnsureSnapshot() || _snapshot == null) return;
			_snapshot.Solve();
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				ServePlate plate = _plates[i];
				if (plate == null || plate.IsEmpty || IsPlateBusy(plate)) continue;
				if (_snapshot.AssignOf(i) < 0) into.Add(plate);
			}
		}

		public DragItem TakePlateDishForFx(ServePlate plate)
		{
			if (plate == null || plate.IsEmpty || !_plates.Contains(plate) || IsPlateBusy(plate)) return null;
			DragItem item = plate.DetachItem();
			RemovePlate(plate);
			return item;
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
			for (int i = 0; _plates != null && i < _plates.Count && i < LayoutSlots; i++)
			{
				if (_plates[i] != null) _plates[i].SetSlot(SlotPosition(i), false);
			}
		}

		public ServePlate FindPlate(DragItem item)
		{
			if (item == null) return null;
			for (int i = 0; _plates != null && i < _plates.Count; i++)
			{
				if (_plates[i] != null && _plates[i].Item == item) return _plates[i];
			}
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
			return _merges.Items;
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
			MessyController messy = MessyController.Ins;
			if (messy == null || plate == null || item == null || line == null) return false;
			ServeService serve = messy.Serve;
			ServeTicket ticket;
			bool reserved = orderIndex < 0 ? serve.TryReserve(plate, line, item, out ticket) : serve.TryReserveOrder(plate, line, orderIndex, out ticket);
			if (!reserved || ticket == null) return false;
			Transform target = line.GetOrderTarget(ticket.Indices[0]);
			_serving.Add(plate);
			PieceLedger.Step(item, "serve " + line.name);
			bool canDeliver = false;
			plate.ServeTo(target, () => line.PunchMatchingOrder(item), null, () =>
			{
				canDeliver = serve.CanDeliver(ticket, item);
				return canDeliver;
			}, () =>
			{
				_serving.Remove(plate);
				if (!canDeliver)
				{
					serve.Release(ticket);
					RemovePlate(plate);
				}
				else if (serve.Deliver(ticket, item, () => GlobalAudio.Play((GlobalSfx)3, 1f)))
				{
					RemovePlate(plate);
					if (item != null) item.Despawn();
				}
				else
				{
					messy.DropItemToGrid(item);
					PieceLedger.Finish(item, PieceLedger.End.Alive, plate != null ? plate.name : null);
					RemovePlate(plate);
				}
				RequestServe();
			});
			return true;
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
			if (IsDirectTakeBlocked && !planned) return false;
			_snapshot.MarkDirty();
			if (_wholeDishServing) return false;
			if (planned && TryKeepPromise(item)) return true;
			return TryAutoMergeToPlate(item, false, true);
		}

		public bool IsHeldAtSource(DragItem item)
		{
			return _wholeDishServing && item != null && _directServing.Contains(item);
		}

		public void WhenSourceFreed(DragItem item, Action onFreed)
		{
			// Plates take items straight off the source, so outside whole-dish mode the source is free at once.
			onFreed?.Invoke();
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
