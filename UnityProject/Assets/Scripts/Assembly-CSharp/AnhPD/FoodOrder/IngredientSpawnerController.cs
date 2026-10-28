using System;
using System.Collections.Generic;
using CakeOrder;
using DG.Tweening;
using UnityEngine;
using Utilities;

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

		// The ids are Shader.PropertyToID of string literals read from the static constructor (metadata).
		private static readonly int BeltScrollXId = Shader.PropertyToID("_TextureScrollXSpeed");

		private static readonly int BeltScrollYId = Shader.PropertyToID("_TextureScrollYSpeed");

		private static readonly int BeltMainTexSTId = Shader.PropertyToID("_MainTex_ST");

		private const string PreviewUndoName = "Preview Grid Layout";

		[SerializeField]
		private List<SpriteRenderer> beltSegmentClones;

		private readonly List<BeltSegment> _beltSegments = new List<BeltSegment>();

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

		private readonly List<ConveyorColumn> _columns = new List<ConveyorColumn>();

		private readonly ConveyorGrid _grid = new ConveyorGrid();

		private readonly ConveyorChainRopeView _ropes = new ConveyorChainRopeView();

		private readonly ConveyorQueueMask _mask = new ConveyorQueueMask();

		private ConveyorPickup _pickup;

		private ConveyorFreeze _freeze;

		private ConveyorTapState _tapState;

		private ConveyorStuckAlert _stuckAlert;

		private bool _isRunning;

		private int _addCursor;

		private readonly List<Sprite> _spriteBuffer = new List<Sprite>();

		private readonly List<float> _displayScaleBuffer = new List<float>();

		private readonly List<Vector2> _displayOffsetBuffer = new List<Vector2>();

		private readonly Dictionary<ConveyorColumn, float> _nextColumnSpawn = new Dictionary<ConveyorColumn, float>();

		private readonly HashSet<ConveyorColumn> _columnFilledOnce = new HashSet<ConveyorColumn>();

		private bool _startSfxPlayed;

		private ConveyorBundleBuilder _bundleBuilder;

		private readonly List<ConveyorBundle> _ledgerBundles = new List<ConveyorBundle>();

		private readonly List<ConveyorSlot> _unstickCandidates = new List<ConveyorSlot>();

		public bool IsPickAnyActive => _pickAnyActive;

		public float PickAnyProgress
		{
			get
			{
				if ((bool)_pickAnyCam && pickAnyCameraDrop > 0f && (_pickAnyActive || _pickAnyCamTween != null))
				{
					return Mathf.Clamp01((_pickAnyCamHome.y - _pickAnyCam.transform.position.y) / pickAnyCameraDrop);
				}
				return 0f;
			}
		}

		private Transform Root => beltRoot ? beltRoot : base.transform;

		private Transform ItemRoot => itemRoot ? itemRoot : Root;

		public ConveyorPickup Pickup => _pickup;

		public ConveyorGrid Grid => _grid;

		public int RowCapacity => (rows < 2) ? 1 : rows;

		public float RowPitch => itemWidth + padding;

		public float ColumnWidth => columnWidth;

		public bool IsRunning => _isRunning;

		public bool IsDrained => _isRunning && _columns.Count == 0;

		public int SortingBase => itemSortingOrderBase;

		public float ColumnStep => columnWidth + columnSpacing;

		private int MaxCrossWidthByPrefab
		{
			get
			{
				if (crossItemPrefabs == null || crossItemPrefabs.Length < 1)
				{
					return 1;
				}
				for (int i = 0; i < crossItemPrefabs.Length; i++)
				{
					if (!crossItemPrefabs[i])
					{
						return i + 1;
					}
				}
				return crossItemPrefabs.Length + 1;
			}
		}

		private ConveyorBundleBuilder BundleBuilder
		{
			get
			{
				if (_bundleBuilder == null)
				{
					ConveyorBundleBuilder.Settings settings = default(ConveyorBundleBuilder.Settings);
					settings.MinBundleSize = minBundleSize;
					settings.MaxBundleSize = maxBundleSize;
					settings.MaxBundleHeight = ((itemPrefabs == null) ? 1 : itemPrefabs.Length);
					settings.MaxCrossWidthByPrefab = MaxCrossWidthByPrefab;
					settings.RowCapacity = ((rows < 2) ? 1 : rows);
					settings.CrossChance = crossChance;
					settings.ChainChance = chainChance;
					settings.ChainSize = chainSize;
					settings.FreezeChance = freezeChance;
					settings.FreezeTurns = freezeTurns;
					_bundleBuilder = new ConveyorBundleBuilder(settings);
				}
				return _bundleBuilder;
			}
		}

		private void SetupBeltScroll()
		{
			_beltHasScroll = false;
			if (!driveBeltScroll || !beltRenderer)
			{
				return;
			}
			Material sharedMaterial = beltRenderer.sharedMaterial;
			if ((bool)sharedMaterial && sharedMaterial.HasProperty(BeltScrollXId))
			{
				float @float = sharedMaterial.GetFloat(BeltScrollXId);
				float y = (sharedMaterial.HasProperty(BeltScrollYId) ? sharedMaterial.GetFloat(BeltScrollYId) : 0f);
				_beltScrollSpeed = new Vector2(@float, y);
				Vector2 textureScale = sharedMaterial.GetTextureScale("_MainTex");
				Vector2 textureOffset = sharedMaterial.GetTextureOffset("_MainTex");
				_beltMainTexST = new Vector4(textureScale.x, textureScale.y, textureOffset.x, textureOffset.y);
				_beltHasScroll = true;
			}
		}

		private void SyncBeltSegments(int count)
		{
			if (!beltRenderer)
			{
				return;
			}
			count = Mathf.Max(0, count);
			EnsureBeltSegments(count);
			BindBeltSegments();
			for (int i = 0; i < _beltSegments.Count; i++)
			{
				BeltSegment beltSegment = _beltSegments[i];
				bool flag = beltSegment.column != null || beltSegment.everBound || i < count;
				if (beltSegment.renderer.gameObject.activeSelf != flag)
				{
					beltSegment.renderer.gameObject.SetActive(flag);
				}
				if (!flag)
				{
					continue;
				}
				if (beltSegment.column != null)
				{
					MoveSegmentX(beltSegment.renderer.transform, beltSegment.column.CenterX);
				}
				else if (i < count && !beltSegment.everBound)
				{
					MoveSegmentX(beltSegment.renderer.transform, ((float)i - (float)(count - 1) / 2f) * (columnWidth + columnSpacing));
				}
				bool moving = false;
				if (Application.isPlaying && beltSegment.column != null)
				{
					moving = _grid.IsColumnMoving(_columns.IndexOf(beltSegment.column));
				}
				AdvanceSegmentScroll(beltSegment, moving, Time.deltaTime);
			}
		}

		private void BindBeltSegments()
		{
			foreach (BeltSegment beltSegment in _beltSegments)
			{
				if (beltSegment.column != null && !_columns.Contains(beltSegment.column))
				{
					beltSegment.column = null;
				}
			}
			foreach (ConveyorColumn column in _columns)
			{
				if (SegmentOf(column) != null)
				{
					continue;
				}
				BeltSegment beltSegment2 = _beltSegments.Find((BeltSegment s) => s.column == null && !s.everBound);
				if (beltSegment2 == null)
				{
					beltSegment2 = NewSegment(CreateSegmentClone());
					_beltSegments.Add(beltSegment2);
				}
				beltSegment2.column = column;
				beltSegment2.everBound = true;
			}
		}

		private BeltSegment SegmentOf(ConveyorColumn column)
		{
			return _beltSegments.Find((BeltSegment s) => s.column == column);
		}

		private void ResetBeltSegments()
		{
			foreach (BeltSegment beltSegment in _beltSegments)
			{
				beltSegment.column = null;
				beltSegment.everBound = false;
				if ((bool)beltSegment.renderer)
				{
					beltSegment.renderer.gameObject.SetActive(value: false);
				}
			}
		}

		private void MoveSegmentX(Transform tf, float x)
		{
			Vector3 localPosition = tf.localPosition;
			if (!Mathf.Approximately(localPosition.x, x))
			{
				tf.localPosition = new Vector3(x, localPosition.y, localPosition.z);
			}
		}

		private void EnsureBeltSegments(int count)
		{
			if (_beltSegments.Count > 0 && _beltSegments.Exists((BeltSegment s) => !s.renderer))
			{
				_beltSegments.Clear();
			}
			if (_beltSegments.Count == 0)
			{
				_beltSegments.Add(NewSegment(beltRenderer));
				beltSegmentClones.RemoveAll((SpriteRenderer r) => !r);
				foreach (SpriteRenderer beltSegmentClone in beltSegmentClones)
				{
					_beltSegments.Add(NewSegment(beltSegmentClone));
				}
			}
			while (_beltSegments.Count < count)
			{
				_beltSegments.Add(NewSegment(CreateSegmentClone()));
			}
		}

		private SpriteRenderer CreateSegmentClone()
		{
			SpriteRenderer spriteRenderer = UnityEngine.Object.Instantiate(beltRenderer, beltRenderer.transform.parent);
			spriteRenderer.name = string.Format("{0}_{1}", beltRenderer.name, _beltSegments.Count);
			beltSegmentClones.Add(spriteRenderer);
			return spriteRenderer;
		}

		private static BeltSegment NewSegment(SpriteRenderer renderer)
		{
			return new BeltSegment
			{
				renderer = renderer,
				block = new MaterialPropertyBlock()
			};
		}

		private void AdvanceSegmentScroll(BeltSegment segment, bool moving, float deltaTime)
		{
			if (_beltHasScroll)
			{
				if (!segment.scrollReady)
				{
					segment.scrollReady = true;
					WriteSegmentScroll(segment, muteShaderScroll: true);
				}
				if (deltaTime > 0f && moving)
				{
					float x = segment.phase.x + _beltScrollSpeed.x * deltaTime;
					float y = segment.phase.y + _beltScrollSpeed.y * deltaTime;
					segment.phase = new Vector2(Mathf.Clamp01(x - (float)(int)x), Mathf.Clamp01(y - (float)(int)y));
					WriteSegmentScroll(segment, muteShaderScroll: false);
				}
			}
		}

		private void WriteSegmentScroll(BeltSegment segment, bool muteShaderScroll)
		{
			segment.renderer.GetPropertyBlock(segment.block);
			if (muteShaderScroll)
			{
				segment.block.SetFloat(BeltScrollXId, 0f);
				segment.block.SetFloat(BeltScrollYId, 0f);
			}
			segment.block.SetVector(BeltMainTexSTId, new Vector4(_beltMainTexST.x, _beltMainTexST.y, _beltMainTexST.z + segment.phase.x, _beltMainTexST.w + segment.phase.y));
			segment.renderer.SetPropertyBlock(segment.block);
		}

		private void LayoutBackground(int count)
		{
			float num = columnWidth;
			float num2 = columnSpacing;
			if (count < 2)
			{
				count = 1;
			}
			float num3 = SegmentHalfWidth() + (num + num2) * (float)(count - 1) * 0.5f;
			MoveLocalX(beltLeft, 0f - (edgePadding + num3));
			MoveLocalX(beltRight, num3 + edgePadding);
			SyncBeltSegments(count);
		}

		private float SegmentHalfWidth()
		{
			if (!beltRenderer)
			{
				return columnWidth * 0.5f;
			}
			float num = Mathf.Abs(Root.lossyScale.x);
			if (num < 1E-05f)
			{
				num = 1f;
			}
			return beltRenderer.bounds.extents.x / num;
		}

		private void MoveLocalX(Transform target, float x)
		{
			if ((bool)target)
			{
				Vector3 localPosition = target.localPosition;
				localPosition.x = x;
				target.localPosition = localPosition;
			}
		}

		private float EdgeHalfSpan(Transform edge)
		{
			float result = 0f;
			if ((bool)edge)
			{
				Renderer component = edge.GetComponent<Renderer>();
				if ((bool)component)
				{
					float num = Mathf.Abs(Root.lossyScale.x);
					if (num < 1E-05f)
					{
						num = 1f;
					}
					result = component.bounds.extents.x / num;
				}
			}
			return result;
		}

		private void PreviewBackgroundLayout()
		{
			LayoutBackground(gizmoPreviewColumnCount);
		}

		private void OnDrawGizmosSelected()
		{
			int num = ((Application.isPlaying && _columns.Count >= 1) ? _columns.Count : Mathf.Max(1, gizmoPreviewColumnCount));
			Transform root = Root;
			float num2 = gridHeight;
			Matrix4x4 matrix = Gizmos.matrix;
			Gizmos.matrix = Matrix4x4.TRS(root.position, root.rotation, Vector3.one);
			float num3 = columnWidth + (columnWidth + columnSpacing) * (float)(num - 1);
			Gizmos.color = new Color(1f, 0.6f, 0.1f, 1f);
			Gizmos.DrawWireCube(Vector3.zero, new Vector3(num3, num2, 0f));
			float num4 = edgePadding;
			num3 += num4 + num4;
			if (!Mathf.Approximately(0f, num4))
			{
				Gizmos.color = new Color(1f, 0.85f, 0.4f, 0.7f);
				Gizmos.DrawWireCube(Vector3.zero, new Vector3(num3, num2, 0f));
			}
			float num5 = Mathf.Max(EdgeHalfSpan(beltLeft), EdgeHalfSpan(beltRight));
			if (num5 > 0f)
			{
				Gizmos.color = new Color(0.6f, 1f, 0.5f, 0.7f);
				Gizmos.DrawWireCube(Vector3.zero, new Vector3(num3 + num5 + num5, num2, 0f));
			}
			for (int i = 0; i < num; i++)
			{
				float x = ((Application.isPlaying && i < _columns.Count) ? _columns[i].CenterX : (((float)i - (float)(num - 1) * 0.5f) * (columnWidth + columnSpacing)));
				for (int j = 0; j < RowCapacity; j++)
				{
					Gizmos.color = ((j == RowCapacity - 1) ? new Color(0.2f, 1f, 0.5f, 0.9f) : new Color(0.1f, 0.9f, 1f, 0.35f));
					Gizmos.DrawWireCube(new Vector3(x, RowLocalY(j), 0f), new Vector3(itemWidth, itemWidth, 0f));
				}
			}
			Gizmos.matrix = matrix;
		}

		public bool BeginPickAnyIngredient(Action onFinished = null)
		{
			if (_pickAnyActive || _columns.Count == 0)
			{
				return false;
			}
			_pickAnyCam = Camera.main;
			if (!_pickAnyCam)
			{
				return false;
			}
			_pickAnyDone = onFinished;
			_pickAnyActive = true;
			_pickAnyCamHome = _pickAnyCam.transform.position;
			_pickup.PickAnyMode = true;
			_pickup.OnPicked = OnPickedAnyIngredient;
			MoveCameraTo(_pickAnyCamHome + Vector3.down * pickAnyCameraDrop, () =>
			{
				if (_pickAnyActive)
				{
					GameEventBus.Publish(default(PickAnyReadyEvent));
				}
			});
			return true;
		}

		public void EndPickAnyIngredient()
		{
			if (_pickAnyActive)
			{
				_pickAnyActive = false;
				_pickup.PickAnyMode = false;
				_pickup.OnPicked = null;
				Action pickAnyDone = _pickAnyDone;
				_pickAnyDone = null;
				MoveCameraTo(_pickAnyCamHome, pickAnyDone);
			}
		}

		private void OnPickedAnyIngredient()
		{
			if (_pickAnyActive)
			{
				_pickAnyActive = false;
				_pickup.PickAnyMode = false;
				_pickup.OnPicked = null;
				Action pickAnyDone = _pickAnyDone;
				_pickAnyDone = null;
				MoveCameraTo(_pickAnyCamHome, pickAnyDone);
			}
		}

		private void MoveCameraTo(Vector3 target, Action onComplete = null)
		{
			_pickAnyCamTween?.Kill();
			_pickAnyCamTween = null;
			if (!_pickAnyCam)
			{
				onComplete?.Invoke();
				return;
			}
			_pickAnyCamTween = _pickAnyCam.transform.DOMove(target, pickAnyCameraDuration).SetEase(pickAnyCameraEase).OnComplete(delegate
			{
				_pickAnyCamTween = null;
				onComplete?.Invoke();
			});
		}

		private void AbortPickAnyIngredient()
		{
			_pickAnyCamTween?.Kill();
			_pickAnyCamTween = null;
			if (_pickAnyActive)
			{
				_pickAnyDone = null;
				_pickAnyActive = false;
				if ((bool)_pickAnyCam)
				{
					_pickAnyCam.transform.position = _pickAnyCamHome;
				}
			}
		}

		private void Awake()
		{
			if (!beltRoot)
			{
				beltRoot = base.transform;
			}
			_freeze = new ConveyorFreeze(freezeChance, freezeTurns);
			_pickup = new ConveyorPickup(ReleaseItem);
			_pickup.OnPickedItem = OnItemPicked;
			_pickup.OnRejectedItem = OnItemRejected;
			_tapState = new ConveyorTapState(_pickup);
			_stuckAlert = new ConveyorStuckAlert(_pickup);
			_grid.Setup(this);
			SetupBeltScroll();
		}

		private void OnDisable()
		{
			AbortPickAnyIngredient();
		}

		public void BuildColumns(int count)
		{
			ClearColumns();
			if (count < 2)
			{
				count = 1;
			}
			do
			{
				_columns.Add(new ConveyorColumn());
				count--;
			}
			while (count != 0);
			_grid.Setup(this);
			_grid.SetColumns(_columns);
			_ropes.Setup(Root, Root, ropeMaterial, ropeWidth, ropeColor, ropeSortingLayer, ropeSortingOrder, ropeAnchorPrefab, itemBrightColor, itemDimColor);
			LayoutColumns();
		}

		private void ClearColumns()
		{
			foreach (ConveyorSlot item in new List<ConveyorSlot>(_grid.Slots))
			{
				if ((bool)item.Item)
				{
					ReleaseItem(item.Item);
				}
			}
			_columns.Clear();
			_grid.Clear();
			_nextColumnSpawn.Clear();
			_columnFilledOnce.Clear();
			_startSfxPlayed = false;
			_ropes.Clear();
			_mask.Clear();
			ResetBeltSegments();
		}

		private void LateUpdate()
		{
			float deltaTime = Time.deltaTime;
			_grid.Tick(deltaTime);
			SweepEmptyColumns();
			_tapState.Refresh(_grid, deltaTime);
			if (_pickAnyActive && _tapState.PickAnyTappable == 0 && _tapState.PickAnyBusy == 0)
			{
				EndPickAnyIngredient();
			}
			_stuckAlert.Tick(_grid, deltaTime);
			SyncBeltSegments(_columns.Count);
			Rect rect;
			bool flag = _grid.TryGetWindowRect(Root, visibleRows, out rect);
			_mask.Apply(Root, flag, rect);
			_ropes.Redraw(_grid, flag, rect);
		}

		private void SweepEmptyColumns()
		{
			if (!_isRunning)
			{
				return;
			}
			bool flag = false;
			for (int num = _columns.Count - 1; num >= 0; num--)
			{
				ConveyorColumn conveyorColumn = _columns[num];
				if (!conveyorColumn.HasPendingSpawn && !_grid.HasSlotOn(conveyorColumn))
				{
					_columns.RemoveAt(num);
					flag = true;
				}
			}
			if (flag)
			{
				_grid.SetColumns(_columns);
			}
		}

		private void LayoutColumns()
		{
			int count = _columns.Count;
			for (int i = 0; i < count; i++)
			{
				_columns[i].CenterX = ((float)i - (float)(count - 1) / 2f) * (columnWidth + columnSpacing);
			}
			LayoutBackground(count);
		}

		private float ColumnTargetX(int index, int count)
		{
			return ((float)index + (float)(count - 1) * -0.5f) * (columnWidth + columnSpacing);
		}

		private float RowLocalY(int row)
		{
			return gridHeight * 0.5f - padding - (padding + itemWidth) * (float)row;
		}

		public Vector3 CellPosition(ConveyorColumn column, int row)
		{
			return Root.TransformPoint(column?.CenterX ?? 0f, RowLocalY(row), 0f);
		}

		public Vector3 CellPosition(int col, int row)
		{
			if (col >= 0 && col < _columns.Count)
			{
				return CellPosition(_columns[col], row);
			}
			return Vector3.zero;
		}

		public float RowBottomWorldY(int row)
		{
			float num = padding + itemWidth;
			float y = gridHeight * 0.5f - padding - num * (float)row - num * 0.5f;
			return Root.TransformPoint(0f, y, 0f).y;
		}

		public Vector3 StepToward(Vector3 current, Vector3 target, float deltaTime)
		{
			Transform root = Root;
			Vector3 vector = root.InverseTransformPoint(current);
			Vector3 vector2 = root.InverseTransformPoint(target);
			float num = speed * deltaTime;
			float num2 = vector2.y - vector.y;
			float y = vector.y + ((num2 >= 0f) ? num : (0f - num));
			if (Mathf.Abs(num2) <= num)
			{
				y = vector2.y;
			}
			return root.TransformPoint(new Vector3(vector2.x, y, vector2.z));
		}

		public ConveyorBundle PeekBundle(ConveyorColumn column)
		{
			return column.Peek(BundleBuilder.RollSize());
		}

		public ConveyorBundle TakeBundle(ConveyorColumn column)
		{
			return column.Take();
		}

		public bool CanColumnSpawnNow(ConveyorColumn column)
		{
			float value = 0f;
			if (initialSpawnInterval > 0f && !_columnFilledOnce.Contains(column) && _nextColumnSpawn.TryGetValue(column, out value))
			{
				return value <= Time.time;
			}
			return true;
		}

		public void NotifyColumnSpawned(ConveyorColumn column)
		{
			if (!_columnFilledOnce.Contains(column))
			{
				PlayStartSfxOnce();
				if (!(initialSpawnInterval <= 0f))
				{
					_nextColumnSpawn[column] = Time.time + initialSpawnInterval;
				}
			}
		}

		private void PlayStartSfxOnce()
		{
			if (!_startSfxPlayed && (bool)sfxStart)
			{
				_startSfxPlayed = true;
				AudioManagerCakeOrder.Instance.PlaySfx(sfxStart, 1f, (AudioManagerCakeOrder.AudioTrack)4);
			}
		}

		public void NotifyColumnFilled(ConveyorColumn column)
		{
			_columnFilledOnce.Add(column);
		}

		public void PushFrontBundle(ConveyorColumn column, ConveyorBundle bundle)
		{
			column.PushFront(bundle);
		}

		public void DemoteBundleWidth(ConveyorColumn column)
		{
			if (column.DemoteNextWidth(BundleBuilder.RollSize()))
			{
				Debug.LogWarning("[IngredientSpawner] cross bundle demoted to width 1", this);
			}
		}

		private IngredientConveyorItem ToolPrefab(IngredientSlotKind kind)
		{
			if (toolItemPrefabs != null)
			{
				ToolSlotPrefab[] array = toolItemPrefabs;
				for (int i = 0; i < array.Length; i++)
				{
					ToolSlotPrefab toolSlotPrefab = array[i];
					if (toolSlotPrefab.kind == kind)
					{
						return toolSlotPrefab.prefab;
					}
				}
			}
			return null;
		}

		private IngredientConveyorItem CrossPrefab(int width)
		{
			int num = width - 2;
			if (num < 0 || crossItemPrefabs == null || num >= crossItemPrefabs.Length)
			{
				return null;
			}
			return crossItemPrefabs[num];
		}

		public IngredientConveyorItem CreateSlotItem(ConveyorColumn owner, int col, ConveyorBundle bundle, int width, int height)
		{
			if (bundle == null)
			{
				return null;
			}
			IngredientConveyorItem ingredientConveyorItem;
			if (bundle.Kind == IngredientSlotKind.Ingredient)
			{
				if (bundle.Items == null || bundle.Items.Length == 0)
				{
					return null;
				}
				if (width < 2)
				{
					if (itemPrefabs == null || itemPrefabs.Length == 0)
					{
						Debug.LogError("[IngredientSpawner] itemPrefabs is empty.", this);
						return null;
					}
					int num = Mathf.Clamp(height - 1, 0, itemPrefabs.Length - 1);
					if (num < height - 1)
					{
						Debug.LogWarningFormat("[IngredientSpawner] bundle height {0} exceeds prefab count {1}.", height, itemPrefabs.Length);
					}
					ingredientConveyorItem = itemPrefabs[num];
				}
				else
				{
					ingredientConveyorItem = CrossPrefab(width);
					if (!ingredientConveyorItem)
					{
						Debug.LogErrorFormat("[IngredientSpawner] no cross prefab for width {0}.", width);
						return null;
					}
				}
			}
			else
			{
				ingredientConveyorItem = ToolPrefab(bundle.Kind);
				if (!ingredientConveyorItem)
				{
					Debug.LogErrorFormat("[IngredientSpawner] no tool prefab for kind {0}.", bundle.Kind);
					return null;
				}
			}
			Vector3 position = CellPosition(col, RowCapacity - 1);
			IngredientConveyorItem component = ObjectPoolDictArray.Instance.GetGameObject(ingredientConveyorItem.gameObject, position, Quaternion.identity).GetComponent<IngredientConveyorItem>();
			component.gameObject.SetActive(value: true);
			component.transform.SetParent(ItemRoot, worldPositionStays: true);
			IngredientState[] array = bundle.Items ?? Array.Empty<IngredientState>();
			_spriteBuffer.Clear();
			_displayScaleBuffer.Clear();
			_displayOffsetBuffer.Clear();
			for (int i = 0; i < array.Length; i++)
			{
				string text = array[i]?.id;
				_spriteBuffer.Add(MessyController.Ins.Info.GetIngredientSprite(text));
				_displayScaleBuffer.Add(MessyController.Ins.Info.GetIngredientDisplayScale(text));
				_displayOffsetBuffer.Add(MessyController.Ins.Info.GetIngredientDisplayOffset(text));
			}
			component.SetTintPalette(itemBrightColor, itemDimColor);
			component.SetReleaseStepInterval(Mathf.Max(0f, releaseStepInterval));
			component.Init(itemSpriteScale, array, _spriteBuffer, _displayScaleBuffer, _displayOffsetBuffer);
			component.SetTapHandler(_pickup.Tap);
			component.SetMaskInteraction((visibleRows > 0) ? SpriteMaskInteraction.VisibleInsideMask : SpriteMaskInteraction.None);
			component.MarkBlock(owner, (width < 2) ? 1 : width, (height < 2) ? 1 : height);
			if (bundle.Status == ConveyorBundleStatus.Freeze)
			{
				_freeze.ApplyFreeze(component, bundle.StatusParam);
			}
			component.SetHidden(bundle.Hidden);
			component.SetKey(bundle.KeyColor);
			return component;
		}

		public void ReleaseItem(IngredientConveyorItem item)
		{
			if ((bool)item)
			{
				item.StopAnim();
				item.SetTapState(canTap: false, inviting: false, bright: false);
				item.SetTapHandler(null);
				item.DestroyKey();
				ObjectPoolDictArray.Instance.ReleaseGameObject(item.gameObject);
			}
		}

		private void OnItemRejected(IngredientConveyorItem item)
		{
			if ((bool)sfxReject)
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfxReject, 1f, (AudioManagerCakeOrder.AudioTrack)4);
			}
		}

		private void OnItemPicked(IngredientConveyorItem item)
		{
			if ((bool)sfxClick)
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfxClick, 1f, (AudioManagerCakeOrder.AudioTrack)4);
			}
			if (!_pickup.PickAnyMode)
			{
				int num = _grid.ColumnIndexOf(item ? item.OwnerColumn : null);
				if (num >= 0)
				{
					int num2 = ((item.BlockWidth < 2) ? 1 : item.BlockWidth);
					ThawFrontAt(num - 1, num);
					ThawFrontAt(num + num2, num + num2 - 1);
				}
			}
		}

		private void ThawFrontAt(int col, int from)
		{
			if (_grid.AreAdjacent(col, from))
			{
				ConveyorSlot conveyorSlot = _grid.FrontSlotAt(col);
				if (conveyorSlot != null && (bool)conveyorSlot.Item)
				{
					conveyorSlot.Item.TryThawOneTurn();
				}
			}
		}

		public void SetRowCount(int value)
		{
			_bundleBuilder = null;
			rows = ((value < 2) ? 1 : value);
		}

		public int RollQueueColumnCount()
		{
			int num = ((randomQueueColumns.x < 2) ? 1 : randomQueueColumns.x);
			int max = ((num > randomQueueColumns.y) ? num : randomQueueColumns.y);
			return UnityEngine.Random.Range(num, max + 1);
		}

		public void SetQueueAt(int index, IEnumerable<ConveyorBundle> bundles)
		{
			if (index >= 0 && index < _columns.Count)
			{
				_columns[index].Source.SetBundleStack(bundles);
			}
		}

		public void SetRandomQueues(IReadOnlyList<List<string>> byColumn)
		{
			if (byColumn == null)
			{
				return;
			}
			ConveyorBundleBuilder bundleBuilder = BundleBuilder;
			int num = Mathf.Min(byColumn.Count, _columns.Count);
			List<ConveyorBundle>[] array = new List<ConveyorBundle>[num];
			for (int i = 0; i < num; i++)
			{
				array[i] = bundleBuilder.BuildColumn(byColumn[i], _columns.Count - i);
			}
			bundleBuilder.LinkChains(array);
			for (int j = 0; j < num; j++)
			{
				_columns[j].Source.SetBundleStack(array[j]);
			}
		}

		public int PromoteQueueToFront(IReadOnlyList<string> ids)
		{
			int num = 0;
			foreach (ConveyorColumn column in _columns)
			{
				num += column.Source.PromoteToFront(ids);
			}
			return num;
		}

		public void CountBeltServings(Dictionary<string, int> into)
		{
			if (_columns == null || _grid == null)
			{
				return;
			}
			foreach (ConveyorColumn column in _columns)
			{
				_ledgerBundles.Clear();
				column.Source.AppendPendingBundles(_ledgerBundles);
				foreach (ConveyorBundle bundle in _ledgerBundles)
				{
					if (bundle != null && bundle.Items != null)
					{
						AddServings(bundle.Items, into);
					}
				}
			}
			foreach (ConveyorSlot slot in _grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if ((bool)item && !item.IsHidden)
				{
					AddServings(item.Items, into);
				}
			}
		}

		private static void AddServings(IEnumerable<IngredientState> states, Dictionary<string, int> into)
		{
			if (states == null)
			{
				return;
			}
			foreach (IngredientState state in states)
			{
				if (state != null && !string.IsNullOrEmpty(state.id))
				{
					into.TryGetValue(state.id, out var value);
					into[state.id] = value + state.amount;
				}
			}
		}

		public void AddToQueue(IEnumerable<IngredientState> items, bool fxUnspent = false)
		{
			if (_columns.Count == 0 || items == null)
			{
				return;
			}
			PieceLedger.BeltIn(items, fxUnspent, fxUnspent ? "belt-add-fx" /* literal recovered by guess */ : "belt-add" /* literal recovered by guess */);
			if (_columns.Count == 0)
			{
				return;
			}
			int count = _columns.Count;
			List<IngredientState>[] perColumn = new List<IngredientState>[count];
			foreach (IngredientState item in items)
			{
				if (item == null)
				{
					continue;
				}
				int col = _addCursor % count;
				if (perColumn[col] == null)
				{
					perColumn[col] = new List<IngredientState>();
				}
				perColumn[col].Add(item);
				_addCursor++;
			}
			for (int i = 0; i < count; i++)
			{
				if (perColumn[i] != null)
				{
					_columns[i].Source.AddToStack(perColumn[i]);
				}
			}
		}

		public void RefillDrainedBelt(IEnumerable<IngredientState> items)
		{
			if (items == null)
			{
				return;
			}
			if (_columns.Count != 0)
			{
				AddToQueue(items, fxUnspent: false);
				return;
			}
			ConveyorColumn column = new ConveyorColumn();
			column.CenterX = 0f;
			_columns.Add(column);
			if (_grid != null)
			{
				_grid.SetColumns(_columns);
				AddToQueue(items, fxUnspent: false);
			}
		}

		public int PromoteRowToFront(int row)
		{
			if (_grid == null)
			{
				return 0;
			}
			return _grid.PromoteRowToFront(row);
		}

		public string BuildBeltReport()
		{
			// Diagnostic text dump. Format literals were not recovered; the layout below keeps the
			// same data (grid counters, stuck-alert state, per-slot cells and pickup verdicts).
			System.Text.StringBuilder sb = new System.Text.StringBuilder();
			if (_grid == null)
			{
				return string.Empty; /* literal recovered by guess */
			}
			sb.AppendLine(string.Format("columns={0} capacity={1} running={2}", _columns.Count, _grid.Capacity, _isRunning) /* literal recovered by guess */);
			sb.AppendLine(string.Format("gridFull={0}", _pickup != null && _pickup.GridFullOnLastCheck) /* literal recovered by guess */);
			sb.AppendLine(_stuckAlert != null ? _stuckAlert.DebugState() : string.Empty);
			int pending = 0;
			foreach (ConveyorColumn column in _columns)
			{
				if (column.HasPendingSpawn)
				{
					pending++;
				}
			}
			sb.AppendLine(string.Format("pendingColumns={0}", pending) /* literal recovered by guess */);
			foreach (ConveyorSlot slot in _grid.Slots)
			{
				sb.Append(string.Format("cell col={0} row={1} w={2} h={3}", slot.Col, slot.Row, slot.Width, slot.Height) /* literal recovered by guess */);
				IngredientConveyorItem item = slot.Item;
				if ((bool)item)
				{
					sb.Append(" items=[");
					if (item.Items != null)
					{
						foreach (IngredientState state in item.Items)
						{
							sb.Append(state != null ? state.id : "null");
							sb.Append(' ');
						}
					}
					sb.Append(']');
					sb.Append(string.Format(" pickable={0} front={1}", slot.IsPickable, slot.IsAtFrontRow) /* literal recovered by guess */);
					if (_pickup != null)
					{
						sb.Append(string.Format(" room={0} move={1} usable={2}", _pickup.HasRoomFor(item), _pickup.HasMoveFor(item), WouldBeUsableAtFront(item)) /* literal recovered by guess */);
					}
				}
				sb.AppendLine();
			}
			return sb.ToString();
		}

		public int PrepareReorderTutorial(int row)
		{
			if (_columns == null)
			{
				return 0;
			}
			int count = 0;
			foreach (ConveyorColumn column in _columns)
			{
				if (column.Source.RotateFrontForPromote(row))
				{
					count++;
				}
			}
			return count;
		}

		public int ApplySaveMeUnstickBelt()
		{
			if (_grid == null)
			{
				return 0;
			}
			int cols = _grid.ColumnCount;
			for (int c = 0; c < cols; c++)
			{
				if (HasUsableFront(c))
				{
					return 0;
				}
			}
			int cleared = 0;
			foreach (ConveyorSlot slot in _grid.Slots)
			{
				if (slot.IsAtFrontRow && (bool)slot.Item)
				{
					if (slot.Item.ClearFreeze())
					{
						cleared++;
					}
				}
			}
			if (cleared > 0 && cols > 0)
			{
				for (int c = 0; c < cols; c++)
				{
					if (HasUsableFront(c))
					{
						return cleared;
					}
				}
			}
			if (cols > 0)
			{
				for (int c = 0; c < cols; c++)
				{
					if (TryRotateUsableToFront(c, singleOnly: true))
					{
						return 1;
					}
				}
				for (int c = 0; c < cols; c++)
				{
					if (TryRotateUsableToFront(c, singleOnly: false))
					{
						return 1;
					}
				}
				for (int c = 0; c < cols; c++)
				{
					if (TryBreakChainAtFront(c))
					{
						return 1;
					}
				}
				for (int c = 0; c < cols; c++)
				{
					if (TrySplitBundleAtFront(c))
					{
						return 1;
					}
				}
				for (int c = 0; c < cols; c++)
				{
					if (TryRotateAnyToFront(c))
					{
						return 1;
					}
				}
			}
			return 0;
		}

		private static bool IsCombine(IngredientConveyorItem item)
		{
			return item != null && item.Items != null && item.Items.Count > 1;
		}

		private bool TryBreakChainAtFront(int col)
		{
			if (_grid == null)
			{
				return false;
			}
			ConveyorSlot slot = _grid.FrontSlotAt(col);
			if (slot == null || !slot.Item)
			{
				return false;
			}
			if (slot.Chain == null || _pickup == null || !_pickup.HasRoomFor(slot.Item))
			{
				return false;
			}
			_grid.BreakChainAt(slot);
			return true;
		}

		private bool TrySplitBundleAtFront(int col)
		{
			// TODO(unrecovered): split path depends on LevelInfo home-plan lookups (HasHomeForAll) and
			// virtual-table calls whose targets could not be identified; returning false (no split).
			return false;
		}

		private bool WouldBeUsableAtFront(IngredientConveyorItem item)
		{
			if (!item)
			{
				return false;
			}
			if (item.FreezeTurns > 0)
			{
				return false;
			}
			if (_pickup == null)
			{
				return false;
			}
			return _pickup.HasRoomFor(item);
		}

		private bool HasUsableFront(int col)
		{
			if (_grid == null)
			{
				return false;
			}
			ConveyorSlot slot = _grid.FrontSlotAt(col);
			if (slot != null && slot.IsPickable)
			{
				return WouldBeUsableAtFront(slot.Item);
			}
			return false;
		}

		private bool TryRotateUsableToFront(int col, bool singleOnly)
		{
			if (_grid == null)
			{
				return false;
			}
			for (int row = 1; row < _grid.Capacity; row++)
			{
				if (_grid == null)
				{
					break;
				}
				ConveyorSlot slot = _grid.SlotAt(col, row);
				if (slot == null || slot.Row != row || slot.Chain != null)
				{
					continue;
				}
				IngredientConveyorItem item = slot.Item;
				if (!item)
				{
					continue;
				}
				if (singleOnly && IsCombine(item))
				{
					continue;
				}
				if (_pickup == null || !_pickup.HasRoomFor(item))
				{
					continue;
				}
				if (_grid.TryRotateToFront(slot))
				{
					if (slot.Item != null)
					{
						slot.Item.ClearFreeze();
						return true;
					}
					break;
				}
			}
			return false;
		}

		private bool TryRotateAnyToFront(int col)
		{
			_unstickCandidates.Clear();
			if (_grid == null)
			{
				return false;
			}
			for (int row = 1; row < _grid.Capacity; row++)
			{
				ConveyorSlot slot = _grid.SlotAt(col, row);
				if (slot != null && slot.Row == row && (bool)slot.Item)
				{
					_unstickCandidates.Add(slot);
				}
			}
			while (_unstickCandidates.Count > 0)
			{
				int idx = UnityEngine.Random.Range(0, _unstickCandidates.Count);
				ConveyorSlot pick = _unstickCandidates[idx];
				_unstickCandidates.RemoveAt(idx);
				if (pick == null || !pick.Item)
				{
					continue;
				}
				pick.Item.ClearFreeze();
				if (_grid != null && _grid.TryRotateToFront(pick))
				{
					return true;
				}
			}
			return false;
		}

		public int RecallGridToQueue()
		{
			if (_grid == null)
			{
				return 0;
			}
			List<ConveyorSlot> slots = new List<ConveyorSlot>(_grid.Slots);
			Dictionary<ConveyorColumn, List<ConveyorBundle>> byColumn = new Dictionary<ConveyorColumn, List<ConveyorBundle>>();
			int recalled = 0;
			foreach (ConveyorSlot slot in slots)
			{
				if (!slot.Item || slot.Owner == null)
				{
					continue;
				}
				IReadOnlyList<IngredientState> items = slot.Item.Items;
				if (items == null)
				{
					continue;
				}
				if (items.Count == 0 && !slot.Item.NeedsGridRoom)
				{
					continue;
				}
				if (!byColumn.TryGetValue(slot.Owner, out List<ConveyorBundle> list))
				{
					list = new List<ConveyorBundle>();
					byColumn[slot.Owner] = list;
				}
				list.Add(ToBundle(slot.Item));
				recalled += items.Count;
			}
			if (recalled != 0)
			{
				foreach (KeyValuePair<ConveyorColumn, List<ConveyorBundle>> kv in byColumn)
				{
					kv.Key.FlushPeeked();
					kv.Key.Source.PushFrontBundles(kv.Value);
				}
				foreach (ConveyorSlot slot in slots)
				{
					if (slot.Item != null)
					{
						_grid.ReleaseFor(slot.Item);
					}
				}
			}
			return recalled;
		}

		private static ConveyorBundle ToBundle(IngredientConveyorItem item)
		{
			if (item == null || item.Items == null)
			{
				return null;
			}
			IReadOnlyList<IngredientState> items = item.Items;
			IngredientState[] states = new IngredientState[items.Count];
			for (int i = 0; i < states.Length; i++)
			{
				states[i] = items[i];
			}
			ConveyorBundle bundle = new ConveyorBundle();
			bundle.Items = states;
			bundle.Kind = item.Kind;
			bundle.Width = item.BlockWidth;
			bundle.Height = item.BlockHeight;
			bundle.StatusParam = item.FreezeTurns;
			bundle.Status = (bundle.StatusParam > 0) ? ConveyorBundleStatus.Freeze : ConveyorBundleStatus.None;
			bundle.Hidden = item.IsHidden;
			bundle.KeyColor = item.KeyColor;
			return bundle;
		}

		public void Run()
		{
			_isRunning = true;
		}

		public void Stop()
		{
			_isRunning = false;
		}

		public void CollectTakableForFx(List<IngredientState> acc, bool frozenOnly = false)
		{
			if (_grid == null || acc == null)
			{
				return;
			}
			foreach (ConveyorSlot slot in _grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (!item || item.IsHidden)
				{
					continue;
				}
				if ((item.FreezeTurns > 0) != frozenOnly)
				{
					continue;
				}
				if (item.Items == null)
				{
					continue;
				}
				foreach (IngredientState state in item.Items)
				{
					if (state != null)
					{
						acc.Add(state);
					}
				}
			}
		}

		public bool TryTakeItemForFx(string id, List<IngredientState> leftovers, out Vector3 pos, out int copies, bool allowFrozen = false)
		{
			pos = default;
			copies = default;
			if (_grid == null)
			{
				return false;
			}
			foreach (ConveyorSlot slot in _grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (!item || item.IsHidden)
				{
					continue;
				}
				if (item.FreezeTurns > 0 && !allowFrozen)
				{
					continue;
				}
				int index = IndexOfId(item, id);
				if (index < 0)
				{
					continue;
				}
				IReadOnlyList<IngredientState> states = item.Items;
				IngredientState target = states[index];
				copies = (target != null) ? target.amount : 0;
				for (int i = 0; i < states.Count; i++)
				{
					IngredientState state = states[i];
					PieceLedger.BeltOut(state, PieceLedger.Source.Belt);
					if (leftovers != null && i != index)
					{
						leftovers.Add(state);
					}
				}
				pos = item.transform.position;
				int keyColor = item.KeyColor;
				KeyTag key = item.TakeKey();
				if (key == null)
				{
					key = BuildKeyAt(keyColor, pos);
				}
				UnlockWithKey(key);
				if (_grid != null)
				{
					_grid.ReleaseFor(item);
				}
				return true;
			}
			pos = default;
			copies = 0;
			return false;
		}

		private static int IndexOfId(IngredientConveyorItem item, string id)
		{
			if (item == null || item.Items == null)
			{
				return -1;
			}
			IReadOnlyList<IngredientState> items = item.Items;
			for (int i = 0; i < items.Count; i++)
			{
				IngredientState state = items[i];
				string sid = (state != null) ? state.id : null;
				if (sid == id)
				{
					return i;
				}
			}
			return -1;
		}

		public void CollectPendingForFx(List<IngredientState> acc)
		{
			if (_columns == null)
			{
				return;
			}
			foreach (ConveyorColumn column in _columns)
			{
				column.Source.AppendPendingSingles(acc);
			}
		}

		public void CollectPendingHardForFx(List<IngredientState> acc)
		{
			if (_columns == null)
			{
				return;
			}
			foreach (ConveyorColumn column in _columns)
			{
				column.Source.AppendPendingHard(acc);
			}
		}

		public IngredientState TakePendingForFx(string id, out Vector3 pos, bool hard = false)
		{
			pos = default;
			if (_columns == null)
			{
				return null;
			}
			foreach (ConveyorColumn column in _columns)
			{
				int keyColor;
				int brokenChainId = 0;
				IngredientState taken;
				if (hard)
				{
					taken = column.Source.TakePendingFromBundle(id, out brokenChainId, out keyColor);
				}
				else
				{
					taken = column.Source.TakePendingSingle(id, out keyColor);
				}
				if (taken == null)
				{
					continue;
				}
				PieceLedger.BeltOut(taken, PieceLedger.Source.Belt);
				if (brokenChainId != 0 && _grid != null)
				{
					_grid.DissolveChain(brokenChainId);
				}
				pos = CellPosition(column, RowCapacity - 1);
				KeyTag key = BuildKeyAt(keyColor, pos);
				UnlockWithKey(key);
				return taken;
			}
			pos = base.transform.position;
			return null;
		}

		private static void UnlockWithKey(KeyTag key)
		{
			if (key == null)
			{
				return;
			}
			if ((bool)MessyController.Ins)
			{
				MessyController.Ins.UnlockColorWithKey(key);
			}
		}

		private static KeyTag BuildKeyAt(int keyColor, Vector3 pos)
		{
			if (keyColor < 0)
			{
				return null;
			}
			KeyObject visual = KeyManager.Spawn(keyColor);
			if ((bool)visual)
			{
				visual.SetAnchor(null);
				visual.transform.position = pos;
			}
			return new KeyTag(keyColor, visual);
		}
	}
}
