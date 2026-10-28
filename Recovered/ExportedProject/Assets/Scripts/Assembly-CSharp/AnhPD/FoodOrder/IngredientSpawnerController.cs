using System;
using System.Collections.Generic;
using CakeOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngredientSpawnerController : MonoBehaviour
	{
		private class BeltSegment
		{
			public SpriteRenderer renderer;

			public MaterialPropertyBlock block;

			public Vector2 phase;

			public bool scrollReady;

			public ConveyorColumn column;

			public bool everBound;
		}

		[Serializable]
		private struct ToolSlotPrefab
		{
			public IngredientSlotKind kind;

			public IngredientConveyorItem prefab;
		}

		[Header("Nền lưới")]
		[SerializeField]
		private SpriteRenderer beltRenderer;

		[SerializeField]
		private Transform beltLeft;

		[SerializeField]
		private Transform beltRight;

		[SerializeField]
		private float edgePadding;

		[Header("Băng chạy (AllIn1SpriteShader)")]
		[SerializeField]
		private bool driveBeltScroll;

		private static readonly int BeltScrollXId;

		private static readonly int BeltScrollYId;

		private static readonly int BeltMainTexSTId;

		private const string PreviewUndoName = "Preview Grid Layout";

		[SerializeField]
		private List<SpriteRenderer> beltSegmentClones;

		private readonly List<BeltSegment> _beltSegments;

		private Vector2 _beltScrollSpeed;

		private Vector4 _beltMainTexST;

		private bool _beltHasScroll;

		[SerializeField]
		private int gizmoPreviewColumnCount;

		[Header("Booster chọn nguyên liệu bất kỳ")]
		[SerializeField]
		private float pickAnyCameraDrop;

		[SerializeField]
		private float pickAnyCameraDuration;

		[SerializeField]
		private Ease pickAnyCameraEase;

		private bool _pickAnyActive;

		private Camera _pickAnyCam;

		private Vector3 _pickAnyCamHome;

		private Tweener _pickAnyCamTween;

		private Action _pickAnyDone;

		[Header("Lưới")]
		[SerializeField]
		private float columnWidth;

		[SerializeField]
		private float columnSpacing;

		[SerializeField]
		private float gridHeight;

		[SerializeField]
		private int rows;

		[SerializeField]
		private float itemWidth;

		[SerializeField]
		private float padding;

		[SerializeField]
		private float speed;

		[SerializeField]
		private int itemSortingOrderBase;

		[SerializeField]
		private Transform beltRoot;

		[SerializeField]
		private Transform itemRoot;

		[Header("Item")]
		[SerializeField]
		private float itemSpriteScale;

		[SerializeField]
		[Min(0f)]
		private float releaseStepInterval;

		[SerializeField]
		private Color itemBrightColor;

		[SerializeField]
		private Color itemDimColor;

		[SerializeField]
		private IngredientConveyorItem[] itemPrefabs;

		[SerializeField]
		private IngredientConveyorItem[] crossItemPrefabs;

		[SerializeField]
		private ToolSlotPrefab[] toolItemPrefabs;

		[Header("Gom cụm")]
		[SerializeField]
		private Vector2Int randomQueueColumns;

		[SerializeField]
		private int minBundleSize;

		[SerializeField]
		private int maxBundleSize;

		[SerializeField]
		[Range(0f, 1f)]
		private float crossChance;

		[SerializeField]
		[Range(0f, 1f)]
		private float chainChance;

		[SerializeField]
		private Vector2Int chainSize;

		[SerializeField]
		[Range(0f, 1f)]
		private float freezeChance;

		[SerializeField]
		private int freezeTurns;

		[Header("Âm thanh")]
		[SerializeField]
		private AudioClip sfxClick;

		[SerializeField]
		private AudioClip sfxReject;

		[SerializeField]
		private AudioClip sfxStart;

		[Header("Khung nhìn hàng đợi")]
		[SerializeField]
		private int visibleRows;

		[Header("Nhịp đổ đầy lúc mở màn")]
		[SerializeField]
		private float initialSpawnInterval;

		[Header("Dây thừng Ô Liên kết")]
		[SerializeField]
		private Material ropeMaterial;

		[SerializeField]
		private float ropeWidth;

		[SerializeField]
		private Color ropeColor;

		[SerializeField]
		private string ropeSortingLayer;

		[SerializeField]
		private int ropeSortingOrder;

		[SerializeField]
		private SpriteRenderer ropeAnchorPrefab;

		private readonly List<ConveyorColumn> _columns;

		private readonly ConveyorGrid _grid;

		private readonly ConveyorChainRopeView _ropes;

		private readonly ConveyorQueueMask _mask;

		private ConveyorPickup _pickup;

		private ConveyorFreeze _freeze;

		private ConveyorTapState _tapState;

		private ConveyorStuckAlert _stuckAlert;

		private bool _isRunning;

		private int _addCursor;

		private readonly List<Sprite> _spriteBuffer;

		private readonly List<float> _displayScaleBuffer;

		private readonly List<Vector2> _displayOffsetBuffer;

		private readonly Dictionary<ConveyorColumn, float> _nextColumnSpawn;

		private readonly HashSet<ConveyorColumn> _columnFilledOnce;

		private bool _startSfxPlayed;

		private ConveyorBundleBuilder _bundleBuilder;

		private readonly List<ConveyorBundle> _ledgerBundles;

		private readonly List<ConveyorSlot> _unstickCandidates;

		public bool IsPickAnyActive => false;

		public float PickAnyProgress => 0f;

		private Transform Root => null;

		private Transform ItemRoot => null;

		public ConveyorPickup Pickup => null;

		public ConveyorGrid Grid => null;

		public int RowCapacity => 0;

		public float RowPitch => 0f;

		public float ColumnWidth => 0f;

		public bool IsRunning => false;

		public bool IsDrained => false;

		public int SortingBase => 0;

		public float ColumnStep => 0f;

		private int MaxCrossWidthByPrefab => 0;

		private ConveyorBundleBuilder BundleBuilder => null;

		private void SetupBeltScroll()
		{
		}

		private void SyncBeltSegments(int count)
		{
		}

		private void BindBeltSegments()
		{
		}

		private BeltSegment SegmentOf(ConveyorColumn column)
		{
			return null;
		}

		private void ResetBeltSegments()
		{
		}

		private void MoveSegmentX(Transform tf, float x)
		{
		}

		private void EnsureBeltSegments(int count)
		{
		}

		private SpriteRenderer CreateSegmentClone()
		{
			return null;
		}

		private static BeltSegment NewSegment(SpriteRenderer renderer)
		{
			return null;
		}

		private void AdvanceSegmentScroll(BeltSegment segment, bool moving, float deltaTime)
		{
		}

		private void WriteSegmentScroll(BeltSegment segment, bool muteShaderScroll)
		{
		}

		private void LayoutBackground(int count)
		{
		}

		private float SegmentHalfWidth()
		{
			return 0f;
		}

		private void MoveLocalX(Transform target, float x)
		{
		}

		private float EdgeHalfSpan(Transform edge)
		{
			return 0f;
		}

		private void PreviewBackgroundLayout()
		{
		}

		private void OnDrawGizmosSelected()
		{
		}

		public bool BeginPickAnyIngredient(Action onFinished = null)
		{
			return false;
		}

		public void EndPickAnyIngredient()
		{
		}

		private void OnPickedAnyIngredient()
		{
		}

		private void MoveCameraTo(Vector3 target, Action onComplete = null)
		{
		}

		private void AbortPickAnyIngredient()
		{
		}

		private void Awake()
		{
		}

		private void OnDisable()
		{
		}

		public void BuildColumns(int count)
		{
		}

		private void ClearColumns()
		{
		}

		private void LateUpdate()
		{
		}

		private void SweepEmptyColumns()
		{
		}

		private void LayoutColumns()
		{
		}

		private float ColumnTargetX(int index, int count)
		{
			return 0f;
		}

		private float RowLocalY(int row)
		{
			return 0f;
		}

		public Vector3 CellPosition(ConveyorColumn column, int row)
		{
			return default;
		}

		public Vector3 CellPosition(int col, int row)
		{
			return default;
		}

		public float RowBottomWorldY(int row)
		{
			return 0f;
		}

		public Vector3 StepToward(Vector3 current, Vector3 target, float deltaTime)
		{
			return default;
		}

		public ConveyorBundle PeekBundle(ConveyorColumn column)
		{
			return null;
		}

		public ConveyorBundle TakeBundle(ConveyorColumn column)
		{
			return null;
		}

		public bool CanColumnSpawnNow(ConveyorColumn column)
		{
			return false;
		}

		public void NotifyColumnSpawned(ConveyorColumn column)
		{
		}

		private void PlayStartSfxOnce()
		{
		}

		public void NotifyColumnFilled(ConveyorColumn column)
		{
		}

		public void PushFrontBundle(ConveyorColumn column, ConveyorBundle bundle)
		{
		}

		public void DemoteBundleWidth(ConveyorColumn column)
		{
		}

		private IngredientConveyorItem ToolPrefab(IngredientSlotKind kind)
		{
			return null;
		}

		private IngredientConveyorItem CrossPrefab(int width)
		{
			return null;
		}

		public IngredientConveyorItem CreateSlotItem(ConveyorColumn owner, int col, ConveyorBundle bundle, int width, int height)
		{
			return null;
		}

		public void ReleaseItem(IngredientConveyorItem item)
		{
		}

		private void OnItemRejected(IngredientConveyorItem item)
		{
		}

		private void OnItemPicked(IngredientConveyorItem item)
		{
		}

		private void ThawFrontAt(int col, int from)
		{
		}

		public void SetRowCount(int value)
		{
		}

		public int RollQueueColumnCount()
		{
			return 0;
		}

		public void SetQueueAt(int index, IEnumerable<ConveyorBundle> bundles)
		{
		}

		public void SetRandomQueues(IReadOnlyList<List<string>> byColumn)
		{
		}

		public int PromoteQueueToFront(IReadOnlyList<string> ids)
		{
			return 0;
		}

		public void CountBeltServings(Dictionary<string, int> into)
		{
		}

		private static void AddServings(IEnumerable<IngredientState> states, Dictionary<string, int> into)
		{
		}

		public void AddToQueue(IEnumerable<IngredientState> items, bool fxUnspent = false)
		{
		}

		public void RefillDrainedBelt(IEnumerable<IngredientState> items)
		{
		}

		public int PromoteRowToFront(int row)
		{
			return 0;
		}

		public string BuildBeltReport()
		{
			return null;
		}

		public int PrepareReorderTutorial(int row)
		{
			return 0;
		}

		public int ApplySaveMeUnstickBelt()
		{
			return 0;
		}

		private static bool IsCombine(IngredientConveyorItem item)
		{
			return false;
		}

		private bool TryBreakChainAtFront(int col)
		{
			return false;
		}

		private bool TrySplitBundleAtFront(int col)
		{
			return false;
		}

		private bool WouldBeUsableAtFront(IngredientConveyorItem item)
		{
			return false;
		}

		private bool HasUsableFront(int col)
		{
			return false;
		}

		private bool TryRotateUsableToFront(int col, bool singleOnly)
		{
			return false;
		}

		private bool TryRotateAnyToFront(int col)
		{
			return false;
		}

		public int RecallGridToQueue()
		{
			return 0;
		}

		private static ConveyorBundle ToBundle(IngredientConveyorItem item)
		{
			return null;
		}

		public void Run()
		{
		}

		public void Stop()
		{
		}

		public void CollectTakableForFx(List<IngredientState> acc, bool frozenOnly = false)
		{
		}

		public bool TryTakeItemForFx(string id, List<IngredientState> leftovers, out Vector3 pos, out int copies, bool allowFrozen = false)
		{
			pos = default;
			copies = default;
			return false;
		}

		private static int IndexOfId(IngredientConveyorItem item, string id)
		{
			return 0;
		}

		public void CollectPendingForFx(List<IngredientState> acc)
		{
		}

		public void CollectPendingHardForFx(List<IngredientState> acc)
		{
		}

		public IngredientState TakePendingForFx(string id, out Vector3 pos, bool hard = false)
		{
			pos = default;
			return null;
		}

		private static void UnlockWithKey(KeyTag key)
		{
		}

		private static KeyTag BuildKeyAt(int keyColor, Vector3 pos)
		{
			return null;
		}
	}
}
