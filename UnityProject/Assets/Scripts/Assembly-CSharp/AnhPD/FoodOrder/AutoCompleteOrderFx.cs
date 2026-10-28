using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Text;
using CakeOrder.InGame;
using DG.Tweening;
using MoreMountains.NiceVibrations;
using TrungKienPack.Particle;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AutoCompleteOrderFx : MonoBehaviour
	{
		private class Candidate
		{
			public PieceOffer offer;

			public ServePlate plate;

			public DragItem fieldItem;

			public string beltId;

			public string pendingId;

			public string id;

			public bool hard;

			public int planCopies;

			public int takenCopiesLeft;

			public Vector3 takenPos;

			public string SourceId => beltId ?? pendingId;
		}

		private class Orbiter
		{
			public DragItem flyer;

			public Vector3 from;

			public Vector3 scale;

			public float slotAngle;

			public float enterAt;

			public float collapseAt;

			public bool entered;
		}

		private static readonly Vector3 MergePoint = new Vector3(0f, 0.75f, 0f);

		private const float PlateAppearDuration = 0.2f;

		private const float EnterDelay = 0.1f;

		private const float EnterInterval = 0.12f;

		private const float EnterDuration = 0.3f;

		private const float EnterJumpPower = 1.25f;

		private const float OrbitRadius = 1f;

		private const float OrbitSpeed = 220f;

		private const float OrbitSpeedMax = 1100f;

		private const float OrbitHold = 0.15f;

		private const float CollapseDuration = 0.5f;

		private const float CollapseStagger = 0.06f;

		private const Ease CollapseEase = Ease.InBack;

		private const float MergeDuration = 0.25f;

		private const float TornadoShrinkDuration = 0.3f;

		private const int FxPlateSortingOrder = 40;

		private const int FxItemSortingOrder = 41;

		private const int BlockId = 1007;

		private readonly LevelInfo _info;

		private readonly GridIngController _grid;

		private readonly IngredientSpawnerController _spawner;

		private readonly ServeService _serve;

		private bool _isPlaying;

		private ServeTicket _ticket;

		private bool _served;

		[CompilerGenerated]
		private Action m_onFinished;

		private readonly List<CookingStation> _pausedStations = new List<CookingStation>();

		private readonly List<int> _completable = new List<int>();

		private const float ShelfPollInterval = 0.1f;

		private const float MaxShelfWait = 4f;

		private float _shelfWaited;

		private Tween _shelfWait;

		private bool _repicked;

		private readonly List<string> _builtForms = new List<string>();

		private readonly List<string> _missedTakes = new List<string>();

		private const int MaxRecipeDepth = 8;

		private readonly List<ServePlate> _orphanPlates = new List<ServePlate>();

		private readonly List<DragItem> _gridItems = new List<DragItem>();

		private const int OrphanPlatePriority = -1;

		private const int InputPriority = 2;

		private const int PendingPriority = 3;

		private const int FrozenBeltPriority = 4;

		private const int PendingHardPriority = 5;

		private readonly Dictionary<IngredientState, Vector3> _bundlePos = new Dictionary<IngredientState, Vector3>();

		private readonly List<Orbiter> _orbiters = new List<Orbiter>();

		private Tween _orbitTween;

		private float _orbitClock;

		private float _orbitAngle;

		private float _collapseStart;

		private float _showEnd;

		private ServePlate _plate;

		private BaseParticleElement _tornado;

		public bool IsPlaying => _isPlaying;

		public bool LastShowServed { get; private set; }

		public event Action onFinished
		{
			[CompilerGenerated]
			add
			{
				m_onFinished = (Action)Delegate.Combine(m_onFinished, value);
			}
			[CompilerGenerated]
			remove
			{
				m_onFinished = (Action)Delegate.Remove(m_onFinished, value);
			}
		}

		public AutoCompleteOrderFx(LevelInfo info, GridIngController grid, IngredientSpawnerController spawner, ServeService serve)
		{
			_info = info;
			_grid = grid;
			_spawner = spawner;
			_serve = serve;
		}

		private void Begin()
		{
			_served = false;
			_isPlaying = true;
			_repicked = false;
			if (LevelBaseCakeOrderAbstract.Instance)
			{
				LevelBaseCakeOrderAbstract.Instance.inputBlockers.AddModifier(BlockId);
			}
			_pausedStations.Clear();
			if ((bool)MessyController.Ins)
			{
				foreach (CookingStation station in MessyController.Ins.GetCookingStations())
				{
					if ((bool)station && !station.IsPaused)
					{
						station.SetPaused(true);
						_pausedStations.Add(station);
					}
				}
			}
		}

		private void Finish()
		{
			_isPlaying = false;
			_shelfWait?.Kill();
			_shelfWait = null;
			_orbitTween?.Kill();
			_orbitTween = null;
			DespawnPlate();
			StopTornado();
			_serve.Release(_ticket);
			_ticket = null;
			if (LevelBaseCakeOrderAbstract.Instance)
			{
				LevelBaseCakeOrderAbstract.Instance.inputBlockers.RemoveModifier(BlockId);
			}
			foreach (CookingStation station in _pausedStations)
			{
				if ((bool)station)
				{
					station.SetPaused(false);
				}
			}
			_pausedStations.Clear();
			LastShowServed = _served;
			m_onFinished?.Invoke();
		}

		public bool TryPlay(FCustomerLine line)
		{
			if (_isPlaying)
			{
				return true;
			}
			if (PickOrder(line, out var orderIndex, out var needed) && _serve.TryReserveOrder(this, line, orderIndex, out _ticket))
			{
				Begin();
				_shelfWaited = 0f;
				Resume(line, orderIndex, needed);
				return true;
			}
			return false;
		}

		public bool CanPlay(FCustomerLine line)
		{
			if (_isPlaying)
			{
				return false;
			}
			return CollectCompletableOrders(line, _completable);
		}

		private void DespawnPlate()
		{
			if ((bool)_plate)
			{
				_plate.transform.DOComplete();
				_plate.Despawn();
				_plate = null;
			}
		}

		private void StopTornado()
		{
			BaseParticleElement tornado = _tornado;
			_tornado = null;
			if ((bool)tornado)
			{
				tornado.TF.DOKill();
				tornado.TF.DOScale(0f, 0.3f).SetEase(Ease.InBack).OnKill(delegate
				{
					if ((bool)tornado)
					{
						tornado.Stop();
					}
				});
			}
		}

		private bool PickOrder(FCustomerLine line, out int orderIndex, out PieceSet needed)
		{
			orderIndex = -1;
			needed = PieceSet.Empty;
			if ((bool)line && line.IsCustomerReady)
			{
				List<int> list = ((!CollectCompletableOrders(line, _completable)) ? FreeServableOrders(line) : _completable);
				if (list.Count != 0)
				{
					orderIndex = list[UnityEngine.Random.Range(0, list.Count)];
					return OrderPieces(line, orderIndex, out needed);
				}
			}
			return false;
		}

		private void Resume(FCustomerLine line, int orderIndex, PieceSet needed)
		{
			_shelfWait = null;
			if (_ticket == null || !_ticket.IsValid)
			{
				_serve.Release(_ticket);
				_ticket = null;
				if (!PickOrder(line, out orderIndex, out needed))
				{
					Finish();
					return;
				}
				if (!_serve.TryReserveOrder(this, line, orderIndex, out _ticket))
				{
					Finish();
					return;
				}
			}
			ServeShelfController.PlateTake plateTake = TakePlateDish(needed, out var dish, out var onPlate);
			if (plateTake == ServeShelfController.PlateTake.Busy)
			{
				if (_shelfWaited < 4f)
				{
					_shelfWaited += 0.1f;
					_shelfWait = DOVirtual.DelayedCall(0.1f, delegate
					{
						Resume(line, orderIndex, needed);
					});
					return;
				}
				Debug.LogError(string.Format("[AutoCompleteOrderFx] shelf plate still busy after {0}s", 4f) + " - giving up" /* literal recovered by guess */);
				_serve.Release(_ticket);
				_ticket = null;
				if (!_repicked && TryPickReadyOrder(line, out orderIndex, out needed))
				{
					_repicked = true;
					Resume(line, orderIndex, needed);
					return;
				}
			}
			else
			{
				PieceSet remaining = needed.Subtract(onPlate);
				List<DragItem> list = GatherIngredients(remaining, dish, DishOf(line, orderIndex), OrderSequence(line, orderIndex));
				if (list.Count != 0)
				{
					PlayGather(line, orderIndex, list);
					return;
				}
				if ((bool)dish)
				{
					DragInteractionSystem.HandleDropFallback(Area(), dish);
				}
				Fallback();
			}
			Finish();
		}

		private bool CollectCompletableOrders(FCustomerLine line, List<int> into)
		{
			into.Clear();
			if (!line)
			{
				return false;
			}
			if (!line.IsCustomerReady)
			{
				return false;
			}
			ServeShelfController shelf = (MessyController.Ins ? MessyController.Ins.ServeShelf : null);
			foreach (int index in FreeServableOrders(line))
			{
				if (!OrderPieces(line, index, out var needed))
				{
					continue;
				}
				PieceSet onPlate = PieceSet.Empty;
				if ((bool)shelf)
				{
					ServeShelfController.PlateTake plateTake = shelf.PeekPlateForOrder(needed, out onPlate);
					if (plateTake == ServeShelfController.PlateTake.Busy)
					{
						continue;
					}
					if (plateTake != ServeShelfController.PlateTake.Taken || !needed.Covers(onPlate))
					{
						onPlate = PieceSet.Empty;
					}
				}
				PieceSet missing = needed.Subtract(onPlate);
				int dishKey = DishOf(line, index);
				if (!missing.IsEmpty)
				{
					List<Candidate> candidates = CollectCandidates(dishKey, OrderSequence(line, index));
					Plan(candidates, missing, dishKey, null, out missing);
				}
				if (missing.IsEmpty)
				{
					into.Add(index);
				}
			}
			return into.Count > 0;
		}

		private List<int> FreeServableOrders(FCustomerLine line)
		{
			List<int> servableOrderIndices = line.GetServableOrderIndices();
			servableOrderIndices.RemoveAll((int index) => _serve.IsReserved(line, index));
			return servableOrderIndices;
		}

		private bool OrderPieces(FCustomerLine line, int orderIndex, out PieceSet needed)
		{
			needed = PieceSet.Empty;
			string orderRecipe = line.GetOrderRecipe(orderIndex);
			if (!string.IsNullOrEmpty(orderRecipe) && _info.TryGetOrderPieces(orderRecipe, out needed))
			{
				return !needed.IsEmpty;
			}
			return false;
		}

		private int DishOf(FCustomerLine line, int orderIndex)
		{
			return _info.DishKeyOfOrder(line.GetOrderSpec(orderIndex));
		}

		private string OrderSequence(FCustomerLine line, int orderIndex)
		{
			return _info.SequenceOf(line.GetOrderIds(orderIndex).Item1);
		}

		private List<Candidate> CollectCandidates(int dishKey, string wantSequence)
		{
			List<Candidate> list = new List<Candidate>();
			LevelPieceBook pieces = _info.Pieces;
			if (pieces == null)
			{
				return list;
			}
			pieces.CollectOrphanPlates(_orphanPlates);
			foreach (ServePlate orphanPlate in _orphanPlates)
			{
				PieceOffer itemPieceOffer = _info.GetItemPieceOffer(orphanPlate.Item);
				if (itemPieceOffer != null && _info.SequenceFits(dishKey, _info.SequenceOf(orphanPlate.Item.GetId()), wantSequence))
				{
					list.Add(new Candidate
					{
						offer = new PieceOffer
						{
							pieces = itemPieceOffer.pieces,
							subsetOnly = true,
							priority = -1
						},
						plate = orphanPlate,
						planCopies = 1
					});
				}
			}
			pieces.CollectGridTakeables(_gridItems);
			foreach (DragItem gridItem in _gridItems)
			{
				Candidate candidate = new Candidate();
				candidate.offer = _info.GetItemPieceOffer(gridItem) ?? NoPieces(2);
				candidate.fieldItem = gridItem;
				candidate.id = gridItem.GetId();
				candidate.planCopies = 1;
				list.Add(candidate);
			}
			List<IngredientState> belt = new List<IngredientState>();
			pieces.CollectBelt(belt);
			foreach (IngredientState item in belt)
			{
				Candidate candidate2 = new Candidate();
				candidate2.offer = OfferForId(item.id);
				candidate2.beltId = item.id;
				candidate2.id = item.id;
				candidate2.planCopies = item.amount;
				list.Add(candidate2);
			}
			List<IngredientState> queued = new List<IngredientState>();
			pieces.CollectQueued(queued);
			foreach (IngredientState item2 in queued)
			{
				AddPendingCandidate(list, item2, 3, false);
			}
			List<IngredientState> frozen = new List<IngredientState>();
			pieces.CollectBelt(frozen, true);
			foreach (IngredientState item3 in frozen)
			{
				Candidate candidate3 = new Candidate();
				candidate3.offer = Reprioritised(OfferForId(item3.id), 4);
				candidate3.beltId = item3.id;
				candidate3.id = item3.id;
				candidate3.hard = true;
				candidate3.planCopies = item3.amount;
				list.Add(candidate3);
			}
			List<IngredientState> queuedHard = new List<IngredientState>();
			pieces.CollectQueuedHard(queuedHard);
			foreach (IngredientState item4 in queuedHard)
			{
				AddPendingCandidate(list, item4, 5, true);
			}
			return list;
		}

		private static List<Candidate> Plan(List<Candidate> candidates, PieceSet needed, int dishKey, List<string> builtForms, out PieceSet missing)
		{
			RecipeConfigSO recipeConfigSO = (MessyController.Ins ? MessyController.Ins.recipeConfig : null);
			LevelPieceBook levelPieceBook = (MessyController.Ins ? MessyController.Ins.Info?.Pieces : null);
			List<Candidate> list = PieceCandidatesFor(candidates, dishKey, levelPieceBook, recipeConfigSO);
			List<Candidate> list2 = BuildPlan(list, needed, out missing);
			if (!missing.IsEmpty && (bool)recipeConfigSO)
			{
				Dictionary<string, int> made = new Dictionary<string, int>();
				PieceSet stillMissing = PieceSet.Empty;
				foreach (var (kind, count) in missing)
				{
					for (int i = 0; i < count; i++)
					{
						string formId = null;
						string root;
						bool needsBuild;
						if (levelPieceBook != null && levelPieceBook.TryGetForm(dishKey, kind, out formId))
						{
							root = formId;
							needsBuild = PickById(list, formId) == null;
						}
						else
						{
							root = formId;
							if (!TryGetRootOf(recipeConfigSO, kind, out root))
							{
								stillMissing = stillMissing.Add(kind);
								continue;
							}
							needsBuild = false;
						}
						made.TryGetValue(formId ?? string.Empty, out var builtCount);
						if (needsBuild && !levelPieceBook.CanBuildForm(formId, builtCount))
						{
							stillMissing = stillMissing.Add(kind);
							continue;
						}
						int planSize = list2.Count;
						if (!TryReserve(recipeConfigSO, root, kind, list, list2, 0))
						{
							for (int j = planSize; j < list2.Count; j++)
							{
								list2[j].planCopies++;
							}
							list2.RemoveRange(planSize, list2.Count - planSize);
							stillMissing = stillMissing.Add(kind);
						}
						else if (needsBuild)
						{
							made[formId] = builtCount + 1;
							builtForms?.Add(formId);
						}
					}
				}
				missing = stillMissing;
			}
			return list2;
		}

		private ServeShelfController.PlateTake TakePlateDish(PieceSet needed, out DragItem dish, out PieceSet onPlate)
		{
			dish = null;
			onPlate = PieceSet.Empty;
			ServeShelfController serveShelfController = (MessyController.Ins ? MessyController.Ins.ServeShelf : null);
			if (!serveShelfController)
			{
				return ServeShelfController.PlateTake.None;
			}
			ServeShelfController.PlateTake plateTake = serveShelfController.TryTakePlateForOrder(needed, out dish);
			if (plateTake == ServeShelfController.PlateTake.Taken && (bool)dish)
			{
				PieceOffer itemPieceOffer = _info.GetItemPieceOffer(dish);
				if (itemPieceOffer != null && needed.Covers(itemPieceOffer.pieces))
				{
					onPlate = itemPieceOffer.pieces;
					PrepareFlyer(dish);
					return ServeShelfController.PlateTake.Taken;
				}
				DragInteractionSystem.HandleDropFallback(Area(), dish);
				dish = null;
				return ServeShelfController.PlateTake.None;
			}
			dish = null;
			return plateTake;
		}

		private bool TryPickReadyOrder(FCustomerLine line, out int orderIndex, out PieceSet needed)
		{
			orderIndex = -1;
			needed = PieceSet.Empty;
			if (!CollectCompletableOrders(line, _completable))
			{
				return false;
			}
			orderIndex = _completable[UnityEngine.Random.Range(0, _completable.Count)];
			if (!OrderPieces(line, orderIndex, out needed))
			{
				return false;
			}
			return _serve.TryReserveOrder(this, line, orderIndex, out _ticket);
		}

		private List<DragItem> GatherIngredients(PieceSet needed, DragItem plateDish, int dishKey, string wantSequence)
		{
			List<Candidate> list = new List<Candidate>();
			PieceSet missing = PieceSet.Empty;
			_builtForms.Clear();
			if (!needed.IsEmpty)
			{
				List<Candidate> candidates = CollectCandidates(dishKey, wantSequence);
				list = Plan(candidates, needed, dishKey, _builtForms, out missing);
			}
			if (!missing.IsEmpty)
			{
				Debug.LogError("[AutoCompleteOrderFx] cannot plan pieces: " + PieceNames(missing) + " (missing)" /* literal recovered by guess */);
				return new List<DragItem>();
			}
			List<DragItem> list2 = new List<DragItem>();
			List<IngredientState> leftovers = new List<IngredientState>();
			if ((bool)plateDish)
			{
				list2.Add(plateDish);
			}
			_missedTakes.Clear();
			StringBuilder stringBuilder = new StringBuilder("[AutoCompleteOrderFx] gather: " /* literal recovered by guess */);
			stringBuilder.Append(PieceNames(needed));
			stringBuilder.Append((bool)plateDish ? (" plate=" + PieceLedger.Describe(plateDish)) : string.Empty);
			stringBuilder.Append("\n");
			foreach (Candidate item in list)
			{
				string tag;
				if (item.beltId != null)
				{
					tag = (item.hard ? "belt-frozen" : "belt");
				}
				else if (item.pendingId != null)
				{
					tag = (item.hard ? "pending-hard" : "pending");
				}
				else
				{
					tag = (item.plate ? "plate" : "grid");
				}
				string desc = item.SourceId;
				if (desc == null)
				{
					if ((bool)item.fieldItem)
					{
						desc = PieceLedger.Describe(item.fieldItem);
					}
					else
					{
						desc = "?";
						if ((bool)item.plate && (bool)item.plate.Item)
						{
							desc = PieceLedger.Describe(item.plate.Item);
						}
					}
				}
				stringBuilder.Append("  " + tag + " " + desc);
				DragItem dragItem = TakeCandidate(item, leftovers, out var _);
				if ((bool)dragItem)
				{
					list2.Add(dragItem);
					needed = needed.Subtract(item.offer.pieces);
				}
				else
				{
					stringBuilder.Append(" MISSED\n");
					_missedTakes.Add(tag + " " + desc);
				}
			}
			PieceLedger.Note(stringBuilder.ToString());
			_bundlePos.Clear();
			ReturnUnspentBeltCopies(list, leftovers);
			FlushLeftovers(leftovers, true);
			if ((bool)_grid)
			{
				_grid.RefreshCellDishes();
			}
			return list2;
		}

		private void Fallback()
		{
			Debug.LogError("[AutoCompleteOrderFx] fallback: delivering order directly" /* literal recovered by guess */);
			ServeTicket ticket = _ticket;
			_ticket = null;
			_served = _serve.DeliverOrder(ticket);
			if (_served)
			{
				PieceLedger.Alert("fallback delivery" /* literal recovered by guess */);
			}
		}

		private void PlayGather(FCustomerLine line, int orderIndex, List<DragItem> flyers)
		{
			int dishKey = DishOf(line, orderIndex);
			_plate = SpawnPlate(dishKey);
			if (!PoolingParticle.Instance)
			{
				return;
			}
			ParticleRequest particleRequest = PoolingParticle.Instance.Spawn((ParticleType)7);
			_tornado = particleRequest.At(MergePoint).Play();
			int[] ranks = CollapseRanks(flyers, line.GetOrderIds(orderIndex).Item1, dishKey);
			_orbiters.Clear();
			int count = flyers.Count;
			for (int i = 0; i < count; i++)
			{
				DragItem dragItem = flyers[i];
				dragItem.SetSortingOrder(41);
				_orbiters.Add(new Orbiter
				{
					flyer = dragItem,
					from = dragItem.Tf.position,
					scale = dragItem.Tf.localScale,
					slotAngle = (float)i * 360f / (float)count,
					enterAt = (float)i * 0.12f + 0.1f
				});
			}
			_collapseStart = (float)(count - 1) * 0.12f + 0.1f + 0.3f + 0.15f;
			for (int j = 0; j < count; j++)
			{
				_orbiters[j].collapseAt = _collapseStart + (float)ranks[j] * 0.06f;
			}
			_orbitClock = 0f;
			_showEnd = (float)(count - 1) * 0.06f + _collapseStart + 0.5f;
			_orbitTween = DOVirtual.Float(0f, _showEnd, _showEnd, TickOrbit).SetEase(Ease.Linear).OnComplete(delegate
			{
				MergeAndServe(line, orderIndex, flyers);
			});
		}

		private static void PrepareFlyer(DragItem item)
		{
			item.Tf.DOKill();
			item.UnregisterCell();
			item.PushToTopLayer();
		}

		private static string PieceNames(PieceSet pieces)
		{
			RecipeConfigSO recipeConfigSO = (MessyController.Ins ? MessyController.Ins.recipeConfig : null);
			if ((bool)recipeConfigSO)
			{
				return pieces.ToString(recipeConfigSO.PieceName);
			}
			return pieces.ToString();
		}

		private DragItem TakeCandidate(Candidate candidate, List<IngredientState> leftovers, out bool stillUsable)
		{
			stillUsable = false;
			if ((bool)candidate.plate)
			{
				ServeShelfController serveShelfController = (MessyController.Ins ? MessyController.Ins.ServeShelf : null);
				DragItem dragItem = null;
				if ((bool)serveShelfController)
				{
					dragItem = serveShelfController.TakePlateDishForFx(candidate.plate);
				}
				if ((bool)dragItem)
				{
					PieceLedger.Step(dragItem, "autocomplete: orphan plate dish" /* literal recovered by guess */);
					PrepareFlyer(dragItem);
					return dragItem;
				}
				return null;
			}
			if ((bool)candidate.fieldItem)
			{
				PieceLedger.Step(candidate.fieldItem, "autocomplete: field item" /* literal recovered by guess */);
				PrepareFlyer(candidate.fieldItem);
				return candidate.fieldItem;
			}
			if (candidate.beltId != null)
			{
				return TakeFromBelt(candidate, leftovers, out stillUsable);
			}
			if (candidate.pendingId != null)
			{
				return TakeFromPending(candidate, out stillUsable);
			}
			return null;
		}

		private static void ReturnUnspentBeltCopies(List<Candidate> plan, List<IngredientState> leftovers)
		{
			HashSet<Candidate> seen = new HashSet<Candidate>();
			foreach (Candidate item in plan)
			{
				if (item.SourceId != null && item.takenCopiesLeft >= 1 && seen.Add(item))
				{
					leftovers.Add(new IngredientState(item.SourceId, item.takenCopiesLeft));
				}
			}
		}

		private void FlushLeftovers(List<IngredientState> leftovers, bool fxUnspent)
		{
			if (leftovers.Count != 0)
			{
				_spawner.AddToQueue(leftovers, fxUnspent);
				leftovers.Clear();
			}
		}

		private static List<Candidate> BuildPlan(List<Candidate> candidates, PieceSet needed, out PieceSet missing)
		{
			List<Candidate> pool = new List<Candidate>(candidates);
			List<Candidate> plan = new List<Candidate>();
			while (!needed.IsEmpty)
			{
				Candidate candidate = PickBestCandidate(pool, needed);
				if (candidate == null)
				{
					break;
				}
				plan.Add(candidate);
				candidate.planCopies--;
				if (candidate.planCopies < 1)
				{
					pool.Remove(candidate);
				}
				needed = needed.Subtract(candidate.offer.pieces);
			}
			missing = needed;
			return plan;
		}

		private static Candidate PickBestCandidate(List<Candidate> candidates, PieceSet needed)
		{
			Candidate best = null;
			foreach (Candidate candidate in candidates)
			{
				PieceOffer offer = candidate.offer;
				if ((!offer.subsetOnly || needed.Covers(offer.pieces)) && needed.IntersectCount(offer.pieces) != 0)
				{
					if (best == null || offer.priority <= best.offer.priority)
					{
						best = candidate;
					}
				}
			}
			return best;
		}

		private static List<Candidate> PieceCandidatesFor(List<Candidate> candidates, int dishKey, LevelPieceBook book, RecipeConfigSO config)
		{
			if (book != null && (bool)config)
			{
				List<Candidate> list = new List<Candidate>(candidates.Count);
				foreach (Candidate candidate in candidates)
				{
					if (!IsWrongForm(candidate, dishKey, book, config))
					{
						list.Add(candidate);
					}
				}
				return list;
			}
			return candidates;
		}

		private static bool IsWrongForm(Candidate candidate, int dishKey, LevelPieceBook book, RecipeConfigSO config)
		{
			PieceSet pieces = candidate.offer.pieces;
			if (candidate.id != null && pieces.TotalCount == 1)
			{
				RcPieceConfig pieceConfig = config.GetPieceConfig(candidate.id);
				if (pieceConfig == null)
				{
					return false;
				}
				if (pieceConfig.role != PieceRole.Prepared && pieceConfig.role != PieceRole.Refined)
				{
					return false;
				}
				foreach (var (kind, _) in pieces)
				{
					if (book.TryGetForm(dishKey, kind, out var formId))
					{
						return formId != candidate.id;
					}
					break;
				}
			}
			return false;
		}

		private static bool TryGetRootOf(RecipeConfigSO config, int kind, out string root)
		{
			if (config.TryGetPreparedOfPiece(kind, out root) && (bool)config.GetIngredientPrefab(root))
			{
				return true;
			}
			return config.TryGetRawOfPiece(kind, out root);
		}

		private static bool TryReserve(RecipeConfigSO config, string id, int kind, List<Candidate> candidates, List<Candidate> plan, int depth)
		{
			if (depth < 9)
			{
				Candidate candidate = PickById(candidates, id);
				if (candidate != null)
				{
					candidate.planCopies--;
					plan.Add(candidate);
					return true;
				}
				List<string> inputs = new List<string>();
				if (config.TryGetInputsOf(id, kind, inputs))
				{
					foreach (string input in inputs)
					{
						if (!TryReserve(config, input, kind, candidates, plan, depth + 1))
						{
							return false;
						}
					}
					return true;
				}
			}
			return false;
		}

		private static Candidate PickById(List<Candidate> candidates, string id)
		{
			Candidate best = null;
			foreach (Candidate candidate in candidates)
			{
				if (candidate.planCopies >= 1 && !(candidate.id != id))
				{
					if (best == null || candidate.offer.priority < best.offer.priority)
					{
						best = candidate;
					}
				}
			}
			return best;
		}

		private static PieceOffer NoPieces(int priority)
		{
			return new PieceOffer
			{
				pieces = PieceSet.Empty,
				subsetOnly = true,
				priority = priority
			};
		}

		private PieceOffer OfferForId(string id)
		{
			return _info.GetIdPieceOffer(id) ?? NoPieces(2);
		}

		private void AddPendingCandidate(List<Candidate> candidates, IngredientState state, int priority, bool hard)
		{
			Candidate candidate = new Candidate();
			candidate.offer = Reprioritised(OfferForId(state.id), priority);
			candidate.pendingId = state.id;
			candidate.id = state.id;
			candidate.hard = hard;
			candidate.planCopies = state.amount;
			candidates.Add(candidate);
		}

		private static PieceOffer Reprioritised(PieceOffer offer, int priority)
		{
			return new PieceOffer
			{
				pieces = offer.pieces,
				priority = priority,
				subsetOnly = offer.subsetOnly
			};
		}

		private DragItem TakeFromBelt(Candidate candidate, List<IngredientState> leftovers, out bool stillUsable)
		{
			Vector3 pos;
			int copies;
			if (candidate.takenCopiesLeft > 0)
			{
				candidate.takenCopiesLeft--;
				stillUsable = candidate.takenCopiesLeft != 0;
				return SpawnFlyer(candidate.beltId, candidate.takenPos);
			}
			stillUsable = false;
			if (!TakeBundledLeftover(candidate.beltId, leftovers, out pos, out copies))
			{
				int before = leftovers.Count;
				if (!_spawner.TryTakeItemForFx(candidate.beltId, leftovers, out pos, out copies, candidate.hard))
				{
					return null;
				}
				for (int i = before; i < leftovers.Count; i++)
				{
					_bundlePos[leftovers[i]] = pos;
				}
			}
			candidate.takenPos = pos;
			candidate.takenCopiesLeft = copies - 1;
			stillUsable = copies - 1 > 0;
			return SpawnFlyer(candidate.beltId, pos);
		}

		private DragItem TakeFromPending(Candidate candidate, out bool stillUsable)
		{
			if (candidate.takenCopiesLeft > 0)
			{
				candidate.takenCopiesLeft--;
				stillUsable = candidate.takenCopiesLeft != 0;
				return SpawnFlyer(candidate.pendingId, candidate.takenPos);
			}
			stillUsable = false;
			IngredientState ingredientState = _spawner.TakePendingForFx(candidate.pendingId, out var pos, candidate.hard);
			if (ingredientState != null)
			{
				int num = ingredientState.amount - 1;
				candidate.takenPos = pos;
				candidate.takenCopiesLeft = num;
				stillUsable = num > 0;
				return SpawnFlyer(candidate.pendingId, pos);
			}
			return null;
		}

		private DragItem SpawnFlyer(string id, Vector3 pos)
		{
			DragItem dragItem;
			using (PieceLedger.From(PieceLedger.Source.AutoCompleteTake, "autocomplete flyer" /* literal recovered by guess */))
			{
				dragItem = SpawnSvc().SpawnAndGetDragItem(id, pos, false, false);
			}
			PrepareFlyer(dragItem);
			return dragItem;
		}

		private bool TakeBundledLeftover(string id, List<IngredientState> leftovers, out Vector3 pos, out int copies)
		{
			for (int i = 0; i < leftovers.Count; i++)
			{
				IngredientState ingredientState = leftovers[i];
				if (ingredientState != null && !(ingredientState.id != id) && _bundlePos.TryGetValue(ingredientState, out pos))
				{
					copies = ingredientState.amount;
					leftovers.RemoveAt(i);
					_bundlePos.Remove(ingredientState);
					return true;
				}
			}
			pos = default(Vector3);
			copies = 0;
			return false;
		}

		private ServePlate SpawnPlate(int dishKey)
		{
			if (!_info.TryGetPlateVariant(dishKey, out var plate, out var dirtyPlate))
			{
				return null;
			}
			// pooled spawn in the original; instantiate directly here
			ServePlate servePlate = UnityEngine.Object.Instantiate(plate, MergePoint, Quaternion.identity);
			servePlate.gameObject.SetActive(true);
			ServeShelfController serveShelfController = (MessyController.Ins ? MessyController.Ins.ServeShelf : null);
			if ((bool)serveShelfController)
			{
				servePlate.transform.SetParent(serveShelfController.transform);
			}
			servePlate.SetVariant(dishKey, dirtyPlate);
			servePlate.HideUntilFirstItem();
			servePlate.ShowInstant();
			servePlate.RaiseSortingOrder(40);
			Transform transform = servePlate.transform;
			Vector3 localScale = transform.localScale;
			transform.localScale = Vector3.zero;
			transform.DOScale(localScale, 0.2f).SetEase(Ease.OutBack);
			return servePlate;
		}

		private int[] CollapseRanks(List<DragItem> flyers, string orderId, int dishKey)
		{
			int count = flyers.Count;
			string text = _info.SequenceOf(orderId) ?? string.Empty;
			bool[] used = new bool[text.Length];
			int[] keys = new int[count];
			for (int i = 0; i < count; i++)
			{
				DragItem dragItem = flyers[i];
				int key;
				if (!dragItem)
				{
					key = count + i + text.Length;
				}
				else if (IsDishBase(dragItem.GetId(), dishKey))
				{
					key = i;
				}
				else if (TryClaimSequence(text, used, _info.SequenceOf(dragItem.GetId()), out var at))
				{
					key = at + count;
				}
				else
				{
					key = count + i + text.Length;
				}
				keys[i] = key;
			}
			List<int> order = new List<int>(count);
			for (int j = 0; j < count; j++)
			{
				order.Add(j);
			}
			order.Sort((int a, int b) => keys[a].CompareTo(keys[b]));
			int[] ranks = new int[count];
			for (int k = 0; k < count; k++)
			{
				ranks[order[k]] = k;
			}
			return ranks;
		}

		private void TickOrbit(float clock)
		{
			float orbitClock = _orbitClock;
			_orbitClock = clock;
			float t = 0f;
			if (clock > _collapseStart)
			{
				t = Mathf.Clamp01((clock - _collapseStart) / (_showEnd - _collapseStart));
			}
			float speed = Mathf.Min(t * t, 1f) * 880f + 220f;
			_orbitAngle += (clock - orbitClock) * speed;
			foreach (Orbiter orbiter in _orbiters)
			{
				if (!orbiter.flyer || clock < orbiter.enterAt)
				{
					continue;
				}
				float collapseK = Mathf.Clamp01((clock - orbiter.collapseAt) * 2f);
				float collapse = DOVirtual.EasedValue(0f, 1f, collapseK, Ease.InBack);
				float rad = (_orbitAngle + orbiter.slotAngle) * ((float)Math.PI / 180f);
				float x = (1f - collapse) * Mathf.Cos(rad) + MergePoint.x;
				float y = (1f - collapse) * Mathf.Sin(rad) + MergePoint.y;
				float enter = Mathf.Clamp01((clock - orbiter.enterAt) / 0.3f);
				if (enter >= 1f)
				{
					if (!orbiter.entered)
					{
						orbiter.entered = true;
						GlobalAudio.Play((GlobalSfx)2);
					}
				}
				else
				{
					float eased = Mathf.Clamp01(DOVirtual.EasedValue(0f, 1f, enter, Ease.OutQuad));
					x = orbiter.from.x + (x - orbiter.from.x) * eased;
					y = Mathf.Sin(enter * (float)Math.PI) * 1.25f + orbiter.from.y + (y - orbiter.from.y) * eased;
				}
				orbiter.flyer.Tf.position = new Vector3(x, y, orbiter.from.z);
				if (collapseK > 0f)
				{
					float s = 1f - collapseK * collapseK * collapseK;
					orbiter.flyer.Tf.localScale = orbiter.scale * s;
				}
			}
		}

		private bool IsDishBase(string baseId, int dishKey)
		{
			if (dishKey == -1)
			{
				return false;
			}
			if (_info.DishKeyOfId(baseId) == dishKey)
			{
				return true;
			}
			return _info.TryGetDishOpener(dishKey, baseId, out var _);
		}

		private static bool TryClaimSequence(string want, bool[] used, string code, out int at)
		{
			at = -1;
			if (!string.IsNullOrEmpty(code) && code.Length <= want.Length)
			{
				for (int i = 0; i + code.Length <= want.Length; i++)
				{
					if (!used[i] && string.CompareOrdinal(want, i, code, 0, code.Length) == 0)
					{
						for (int j = 0; j < code.Length; j++)
						{
							used[i + j] = true;
						}
						at = i;
						return true;
					}
				}
			}
			return false;
		}

		private void MergeAndServe(FCustomerLine line, int orderIndex, List<DragItem> flyers)
		{
			StopTornado();
			List<string> spent = new List<string>(flyers.Count);
			StringBuilder stringBuilder = new StringBuilder();
			foreach (DragItem flyer in flyers)
			{
				if ((bool)flyer)
				{
					spent.Add(flyer.GetId());
					stringBuilder.Append((stringBuilder.Length > 0) ? ", " : string.Empty);
					stringBuilder.Append(PieceLedger.Describe(flyer));
					PieceLedger.Finish(flyer, PieceLedger.End.AutoCompleteGathered, line ? line.name : null);
					MessyController.Ins.DespawnItem(flyer);
				}
			}
			GlobalAudio.Play((GlobalSfx)3);
			if (_ticket == null || !_ticket.IsValid || !line || !line.IsCustomerReady)
			{
				ReturnSpent(spent);
				Finish();
				return;
			}
			(string, string) orderIds = line.GetOrderIds(orderIndex);
			DragItem dish;
			using (PieceLedger.From(PieceLedger.Source.AutoCompleteDish, string.Format("merge: {0}", stringBuilder) /* literal recovered by guess */))
			{
				dish = SpawnSvc().SpawnAndGetDragItem(orderIds.Item2, MergePoint, false, false);
			}
			PrepareFlyer(dish);
			if (dish is FlexibleDragItem flexibleDragItem && orderIds.Item1 != orderIds.Item2)
			{
				flexibleDragItem.Display(orderIds.Item1);
			}
			ServePlate plate = _plate;
			Vector3 punch = Vector3.one * 0.25f;
			if (!plate)
			{
				dish.Tf.DOPunchScale(punch, 0.25f, 10, 1f).OnComplete(delegate
				{
					FlyDishAlone(line, dish, spent);
				});
			}
			else
			{
				plate.Adopt(dish, false);
				dish.SetSortingOrder(41);
				plate.transform.DOPunchScale(punch, 0.25f, 10, 1f).OnComplete(delegate
				{
					FlyOnPlate(line, orderIndex, plate, dish, spent);
				});
			}
		}

		private void ReturnSpent(List<string> ids)
		{
			List<IngredientState> leftovers = new List<IngredientState>();
			foreach (string id in ids)
			{
				if (string.IsNullOrEmpty(id))
				{
					continue;
				}
				if (FlexibleId.IsFlexible(id))
				{
					DragItem dragItem;
					using (PieceLedger.From(PieceLedger.Source.AutoCompleteReturn, "autocomplete return" /* literal recovered by guess */))
					{
						dragItem = SpawnSvc().SpawnAndGetDragItem(id, MergePoint, false, false);
					}
					if ((bool)dragItem)
					{
						DragInteractionSystem.HandleDropFallback(Area(), dragItem);
					}
				}
				else
				{
					leftovers.Add(new IngredientState(id));
				}
			}
			FlushLeftovers(leftovers, false);
		}

		private void FlyOnPlate(FCustomerLine line, int orderIndex, ServePlate plate, DragItem dish, List<string> spent)
		{
			_plate = null;
			Transform target = (line ? line.GetOrderTarget(orderIndex) : null);
			if (!target && (bool)line)
			{
				target = line.targetPos;
			}
			plate.ServeTo(target, delegate
			{
				if ((bool)line)
				{
					line.PunchMatchingOrder(dish);
				}
			}, null, () =>
			{
				Transform transform = (target ? target : dish.Tf);
				PlayDoneFood(transform.position);
				return true;
			}, delegate
			{
				plate.Despawn();
				Deliver(line, dish, spent);
			});
		}

		private void FlyDishAlone(FCustomerLine line, DragItem dish, List<string> spent)
		{
			dish.JumpToMovingTargetTween(line.targetPos, true, 0.5f, true, false).OnComplete(delegate
			{
				Transform transform = (line.targetPos ? line.targetPos : dish.Tf);
				PlayDoneFood(transform.position);
				Deliver(line, dish, spent);
			});
		}

		private static void PlayDoneFood(Vector3 at)
		{
			// TODO(unrecovered): original is guarded by a boolean flag on an unidentified static settings object
			ParticleRequest particleRequest = PoolingParticle.Instance.Spawn((ParticleType)2);
			particleRequest.At(at).Scale(0.5f).Volume(0.5f).Play();
		}

		private void Deliver(FCustomerLine line, DragItem dish, List<string> spent)
		{
			ServeTicket ticket = _ticket;
			_ticket = null;
			_served = _serve.CanDeliverOrder(ticket);
			Finish();
			if (!_served || !_serve.DeliverOrder(ticket))
			{
				_serve.Release(ticket);
				ReturnSpent(spent);
				PieceLedger.Finish(dish, PieceLedger.End.AutoCompleteUndelivered, "delivery failed" /* literal recovered by guess */);
			}
			else
			{
				MMVibrationManager.Haptic(HapticTypes.LightImpact);
				// TODO(unrecovered): one effect call on the dish at its current position (FUN_04b788e4) is not identifiable
				PieceLedger.Finish(dish, PieceLedger.End.Served, "served to " + (line ? line.name : "?") /* literal recovered by guess */);
				LevelPieceBook pieces = _info.Pieces;
				if (pieces != null)
				{
					foreach (string builtForm in _builtForms)
					{
						pieces.RecordAutoBuilt(builtForm);
					}
				}
				if (_missedTakes.Count > 0)
				{
					PieceLedger.Alert("autocomplete missed takes: " + dish.GetId() + " | " + string.Join(", ", _missedTakes) /* literal recovered by guess */);
				}
			}
			MessyController.Ins.DespawnItem(dish);
		}

		private static AreaService Area()
		{
			return (AreaService)typeof(MessyController).GetField("_areaService", System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic).GetValue(MessyController.Ins);
		}

		private static SpawnService SpawnSvc()
		{
			return (SpawnService)typeof(MessyController).GetField("_spawnService", System.Reflection.BindingFlags.Instance | System.Reflection.BindingFlags.NonPublic).GetValue(MessyController.Ins);
		}
	}
}
