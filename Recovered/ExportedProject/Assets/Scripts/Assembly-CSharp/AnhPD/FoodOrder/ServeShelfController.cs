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
			}

			public void Sync()
			{
			}

			private void PruneBindings()
			{
			}

			private static bool IsOrderStillOpen(Binding b)
			{
				return false;
			}

			private bool IsMerged(Binding b, LevelInfo info)
			{
				return false;
			}

			private bool IsMergedAs(ServePlate plate, PieceSet order, LevelInfo info)
			{
				return false;
			}

			private void RefreshReadyMarks(LevelInfo info)
			{
			}

			private bool IsMarkedReady(FCustomerLine line, int index)
			{
				return false;
			}

			private bool TryClaimReadyPlate(OrderSpec spec, LevelInfo info)
			{
				return false;
			}

			private Binding Find(FCustomerLine line, int index)
			{
				return null;
			}

			private Binding Find(ServePlate plate)
			{
				return null;
			}

			public void Serve()
			{
			}

			private ServePlate PickServePlate(FCustomerLine line, int index, LevelInfo info)
			{
				return null;
			}

			private bool IsServable(ServePlate plate, FCustomerLine line)
			{
				return false;
			}

			private void RebindForServe(ServePlate plate, FCustomerLine line, int index)
			{
			}

			public void Capture()
			{
			}

			public bool TryCaptureWith(DragItem item)
			{
				return false;
			}

			public bool CanCaptureWith(PieceSet pieces, string baseId)
			{
				return false;
			}

			private bool RunCapture(LevelInfo info, FCustomerLineHandle handle, bool dryRun)
			{
				return false;
			}

			private bool TryCapture(FCustomerLine line, int index, OrderSpec spec, LevelInfo info, bool dryRun)
			{
				return false;
			}

			private bool TryResume(Binding b, LevelInfo info, bool dryRun)
			{
				return false;
			}

			private bool IsStuck(ServePlate plate, PieceSet order, LevelInfo info)
			{
				return false;
			}

			private Binding Bind(ServePlate plate, FCustomerLine line, int index, PieceSet order, string sequence)
			{
				return null;
			}

			private void Unbind(Binding b)
			{
			}

			private DishState StateOf(ServePlate plate, PieceSet has, LevelInfo info)
			{
				return default;
			}

			private void CollectCandidates(LevelInfo info)
			{
			}

			private void Add(Candidate candidate)
			{
			}

			private void AddExtra(Candidate candidate)
			{
			}

			private void ClearCandidates()
			{
			}

			private bool IsSameKind(int a, int b)
			{
				return false;
			}

			private bool Plan(DishState start, PieceSet order, string sequence, int orderDish, LevelInfo info, out DishState done)
			{
				done = default;
				return false;
			}

			private bool Search(DishState state, PieceSet order, string sequence, int orderDish, LevelInfo info, out DishState done)
			{
				done = default;
				return false;
			}

			private bool WasTriedAtThisDepth(int i)
			{
				return false;
			}

			private static bool TryStep(DishState state, Candidate c, PieceSet order, string sequence, int orderDish, LevelInfo info, out DishState next)
			{
				next = default;
				return false;
			}

			private bool Commit(ServePlate plate, bool born, LevelInfo info)
			{
				return false;
			}

			private bool Rollback(ServePlate plate, bool born)
			{
				return false;
			}

			private static DragItem TakeFromBag(string baseId)
			{
				return null;
			}

			public bool IsHeld(DragItem item)
			{
				return false;
			}

			private void Hold(DragItem item)
			{
			}

			private void StartHover(DragItem item)
			{
			}

			private void StopHover(DragItem item)
			{
			}

			public void WhenFreed(DragItem item, Action onFreed)
			{
			}

			public void Free(DragItem item)
			{
			}

			public void OnStoodDown(DragItem item)
			{
			}

			private void PruneHeld()
			{
			}

			private bool IsPending(DragItem item)
			{
				return false;
			}

			public void AppendReport(StringBuilder sb)
			{
			}

			public int UncapturedOrderCount()
			{
				return 0;
			}
		}

		public enum PlateTake
		{
			None = 0,
			Taken = 1,
			Busy = 2
		}

		[CompilerGenerated]
		private sealed class _003CGetRemainingItems_003Ed__134 : IEnumerable<DragItem>, IEnumerable, IEnumerator<DragItem>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private DragItem _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public ServeShelfController _003C_003E4__this;

			private int _003Ci_003E5__2;

			DragItem IEnumerator<DragItem>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CGetRemainingItems_003Ed__134(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<DragItem> IEnumerable<DragItem>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		private bool _drawShelf;

		[Header("Merge")]
		[SerializeField]
		private float mergeStagger;

		[Tooltip("Chờ bấy nhiêu giây sau khi nhún + glow rồi mới cất cánh")]
		[SerializeField]
		private float mergePrimeDelay;

		private readonly List<ServePlate> _forgetPlates;

		private const float RepumpInterval = 0.1f;

		private ServePlate _activeMergePlate;

		private readonly Dictionary<ServePlate, bool> _resultAnims;

		private readonly List<ServePlate> _staleAnimPlates;

		private readonly List<ServePlate> _stalePlates;

		private readonly List<DragItem> _pendingDrops;

		private readonly List<DragItem> _dropBuffer;

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

		private readonly List<ServePlate> _plates;

		private readonly HashSet<ServePlate> _serving;

		private readonly ShelfMergeQueue _merges;

		private readonly ShelfSnapshot _snapshot;

		private bool _isServing;

		private bool _serveQueued;

		private float _nextRecheckTime;

		[SerializeField]
		private BaseParticleElement slotFocusPrefab;

		private BaseParticleElement[] _slotFocus;

		private bool[] _slotFocusOn;

		private Func<ServePlate, PieceSet?> _plateHasReader;

		private Func<ServePlate, string> _plateSequenceReader;

		private readonly HashSet<ServePlate> _gatherClaimed;

		private readonly List<ServePlate> _serveBuffer;

		private readonly List<DragItem> _gridScanBuffer;

		private string ToggleShelfLabel => null;

		public bool HasMergesInFlight => false;

		private WholeDishMode WholeDish => null;

		public int PendingMergeCount => 0;

		public Vector2 Size => default;

		private int LayoutSlots => 0;

		public Vector2 Origin => default;

		public int Capacity => 0;

		public bool HasFreeSlot => false;

		public IReadOnlyList<ServePlate> Plates => null;

		private static LevelInfo Info => null;

		private static FCustomerLineHandle LineHandle => null;

		private static bool IsInteractBlocked => false;

		private static bool IsDirectTakeBlocked => false;

		public bool IsWholeDishServing => false;

		public bool BlocksQueueLane => false;

		private void ToggleDrawShelf()
		{
		}

		public string BuildStateReport()
		{
			return null;
		}

		public bool IsBooked(DragItem item)
		{
			return false;
		}

		public void ForgetItem(DragItem item)
		{
		}

		private bool TryAutoMergeToPlate(DragItem item, bool requireLanded = true, bool directTake = false)
		{
			return false;
		}

		private bool PrimeForMerge(DragItem item)
		{
			return false;
		}

		private void StandDown(DragItem item)
		{
		}

		private void PumpLaunches(ServePlate plate)
		{
		}

		private void SchedulePump(ServePlate plate, float delay)
		{
		}

		private void Reserve(ServePlate plate, DragItem item, string resultId)
		{
		}

		private bool HoldsTheFloor(ServePlate plate)
		{
			return false;
		}

		private bool StillBuilding(ServePlate plate)
		{
			return false;
		}

		private void OnGridItemLanded(GridItemLandedEvent evt)
		{
		}

		public bool CanTakeIdDirect(string id)
		{
			return false;
		}

		public bool CanTakeOfferDirect(PieceOffer offer, string baseId)
		{
			return false;
		}

		public int ScoreGainForId(string id)
		{
			return 0;
		}

		public int ScoreGainForOffer(PieceOffer offer, string baseId)
		{
			return 0;
		}

		private bool TryPickMergeTarget(PieceOffer itemOffer, string itemBaseId, LevelInfo info, out ServePlate plate, out int newPlateDish, out int gain)
		{
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
		}

		private bool TryResolveMerge(ServePlate plate, string itemBaseId, LevelInfo info, out string resultId)
		{
			resultId = null;
			return false;
		}

		private bool CanStartPlate(string itemBaseId, PieceSet itemPieces, int plateDish, LevelInfo info)
		{
			return false;
		}

		private void OnMergeFlightArrived(ServePlate plate, DragItem item)
		{
		}

		private void CommitArrived(ServePlate plate)
		{
		}

		private void CommitArrived(ServePlate plate, bool merged)
		{
		}

		private bool IsResultAnimPlaying(ServePlate plate)
		{
			return false;
		}

		private bool CanHandOverNow(ServePlate plate)
		{
			return false;
		}

		private bool WillOpenResultAnim(ServePlate plate, ShelfMergeQueue.Request request)
		{
			return false;
		}

		private bool BeginResultAnim(ServePlate plate, string sourceId, bool merged)
		{
			return false;
		}

		private void OnResultAnimDone(ServePlate plate)
		{
		}

		private void PruneStaleResultAnims()
		{
		}

		private bool CommitRequest(ShelfMergeQueue.Request request)
		{
			return false;
		}

		private bool CanPlateStillTake(ServePlate plate)
		{
			return false;
		}

		private void AbortRemaining(ServePlate plate)
		{
		}

		private void PruneStaleMerges()
		{
		}

		private void QueueDropBackToGrid(DragItem item)
		{
		}

		private void FlushDropBacks()
		{
		}

		private void DropBackToGrid(DragItem item)
		{
		}

		public bool PromiseDirect(string id)
		{
			return false;
		}

		public void CancelPromise(string id)
		{
		}

		private bool TryKeepPromise(DragItem item)
		{
			return false;
		}

		public Vector3 GetSlotWorldCenter(int index)
		{
			return default;
		}

		private void Start()
		{
		}

		private void OnDestroy()
		{
		}

		private void Update()
		{
		}

		private void OnBlockInteractChanged()
		{
		}

		public void Setup(int initSlots)
		{
		}

		public void UnlockNextSlot()
		{
		}

		private void SyncPlatesToOrders()
		{
		}

		private void SweepOrphanPlates()
		{
		}

		private void RefreshSlotFocus()
		{
		}

		private void SetSlotFocus(int slot, bool on)
		{
		}

		private BaseParticleElement GetOrCreateSlotFocus(int slot)
		{
			return null;
		}

		private void StopAllFocus()
		{
		}

		private bool EnsureSnapshot()
		{
			return false;
		}

		private string PlateSequence(ServePlate plate, LevelInfo info)
		{
			return null;
		}

		private PieceSet? PlateHas(ServePlate plate, LevelInfo info)
		{
			return null;
		}

		public void GetGatheredPieces(IReadOnlyList<OrderSpec> orders, List<PieceSet> results)
		{
		}

		private PieceSet GatherFor(PieceSet order, LevelInfo info)
		{
			return default;
		}

		public void GetPotentialPieces(IReadOnlyList<OrderSpec> orders, List<PieceSet> results)
		{
		}

		private static bool DishFits(int plateDish, int itemDish)
		{
			return false;
		}

		private ServePlate CreatePlate(int dishKey)
		{
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
		}

		public DragItem TakePlateDishForFx(ServePlate plate)
		{
			return null;
		}

		public void RemovePlate(ServePlate plate)
		{
		}

		public void Compact()
		{
		}

		public ServePlate FindPlate(DragItem item)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetRemainingItems_003Ed__134))]
		public IEnumerable<DragItem> GetRemainingItems()
		{
			return null;
		}

		public IEnumerable<DragItem> GetMergingItems()
		{
			return null;
		}

		private void RequestServeAfterAssemble(ServePlate plate)
		{
		}

		public void RequestServe()
		{
		}

		private void ServeToCustomers()
		{
		}

		private bool ServePlateTo(ServePlate plate, DragItem item, FCustomerLine line, int orderIndex = -1)
		{
			return false;
		}

		private void ScanSources()
		{
		}

		private void TryMergeFromSaveMeBag()
		{
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
		}

		private void ScanGridItems()
		{
		}
	}
}
