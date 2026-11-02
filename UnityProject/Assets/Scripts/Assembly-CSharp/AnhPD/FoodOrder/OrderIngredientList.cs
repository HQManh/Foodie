using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class OrderIngredientList : MonoBehaviour
	{
		[SerializeField]
		private ListIngredientBoardView listIngredientBoardTemplate;

		[Header("Slide in/out (dọc)")]
		[SerializeField]
		private float slideDuration = 0.25f;

		[SerializeField]
		private float slideOffsetY;

		[SerializeField]
		private Ease slideInEase = Ease.OutCubic;

		[SerializeField]
		private Ease slideOutEase = Ease.InCubic;

		[SerializeField]
		private SfxAndHapticTrigger sfxOnSlide;

		[Header("Nguyên liệu đã có trên kệ")]
		[SerializeField]
		private float ownedAlpha = 0.4f;

		[SerializeField]
		private float ownedFadeTime = 0.15f;

		[Header("Columns")]
		[Tooltip("More columns only when icons come out at least this many times bigger than with fewer.")]
		[SerializeField]
		[Min(1f)]
		private float splitMinGain = 1.05f;

		[Tooltip("Boards with fewer icons than this always stay one column.")]
		[SerializeField]
		[Min(2f)]
		private int minIconsToSplit = 3;

		[Header("Edge padding (inside the boards: top → first board, bottom → last board)")]
		[SerializeField]
		[Min(0f)]
		private float edgePaddingTop;

		[SerializeField]
		[Min(0f)]
		private float edgePaddingBottom;

		[Header("Peek (the tapped order alone, before the normal list)")]
		[Tooltip("An order with more icons than this spreads over the neighbour board too (or the widened area); fewer stay on their own board.")]
		[SerializeField]
		[Min(1f)]
		private int peekWideAbove = 4;

		[SerializeField]
		private float peekMorphDuration = 0.35f;

		[Tooltip("Fade-in of the peek, over the morph's duration. Its own ease: the morph's OutCubic is nearly opaque a third of the way in, so the fade would barely show.")]
		[SerializeField]
		private Ease peekFadeEase = Ease.Linear;

		[SerializeField]
		private Ease peekMorphEase = Ease.OutCubic;

		[SerializeField]
		private float peekLandPunch = 0.08f;

		[SerializeField]
		private float peekLandDuration = 0.25f;

		[Tooltip("Peek: each icon pops out of the order's stack one after another (top to bottom), like spreading the burger layers.")]
		[SerializeField]
		private bool peekIconPop = true;

		[SerializeField]
		private float peekIconStagger = 0.05f;

		[SerializeField]
		private float peekIconDuration = 0.3f;

		private readonly List<ListIngredientBoardView> _boards = new List<ListIngredientBoardView>();

		private readonly List<OrderSpec> _shown = new List<OrderSpec>();

		private readonly List<PieceSet> _gathered = new List<PieceSet>();

		private readonly List<PieceSet> _iconPieces = new List<PieceSet>();

		private readonly List<IconGroup> _iconGroups = new List<IconGroup>();

		private readonly List<int> _columns = new List<int>();

		private readonly List<Vector2> _slotsIn = new List<Vector2>();

		private readonly List<Vector2> _slots = new List<Vector2>();

		private RectTransform _rt;

		private HorizontalOrVerticalLayoutGroup _group;

		private Vector2 _shownPos;

		private Vector2 _restOffsetMin;

		private Vector2 _restOffsetMax;

		private Vector2 _targetPos;

		private bool _posCaptured;

		private Sequence _morph;

		private bool _morphing;

		private RectTransform _clip;

		private bool _widen;

		private bool _peekHeld;

		[CompilerGenerated]
		private Action<float, Ease> m_PeekReleased;

		private Transform _homeParent;

		private int _homeIndex;

		public bool UsesSlots => _slots.Count > 0 && _slots.Count == _shown.Count;

		public bool IsPeeking { get; private set; }

		public bool PeekIsWide { get; private set; }

		private static LevelInfo Info => MessyController.Ins.Info;

		private Vector2 HiddenPos
		{
			get
			{
				float distance = ((slideOffsetY > 0f) ? slideOffsetY : _rt.rect.height);
				return _targetPos + Vector2.down * distance;
			}
		}

		public event Action<float, Ease> PeekReleased
		{
			[CompilerGenerated]
			add
			{
				m_PeekReleased = (Action<float, Ease>)Delegate.Combine(m_PeekReleased, value);
			}
			[CompilerGenerated]
			remove
			{
				m_PeekReleased = (Action<float, Ease>)Delegate.Remove(m_PeekReleased, value);
			}
		}

		private void CapturePos()
		{
			if (!_posCaptured)
			{
				_rt = (RectTransform)base.transform;
				_group = GetComponent<HorizontalOrVerticalLayoutGroup>();
				_shownPos = _rt.anchoredPosition;
				_restOffsetMin = _rt.offsetMin;
				_restOffsetMax = _rt.offsetMax;
				_posCaptured = true;
				_targetPos = _shownPos;
			}
		}

		private void MoveToClip()
		{
			if ((bool)_clip && _rt.parent != _clip)
			{
				_homeParent = _rt.parent;
				_homeIndex = _rt.GetSiblingIndex();
				_clip.SetAsLastSibling();
				_rt.SetParent(_clip, true);
			}
		}

		private void MoveHome()
		{
			if ((bool)_homeParent && _rt.parent != _homeParent)
			{
				_rt.SetParent(_homeParent, true);
				_rt.SetSiblingIndex(_homeIndex);
			}
		}

		private void RestoreRest()
		{
			MoveHome();
			_rt.offsetMin = _restOffsetMin;
			_rt.offsetMax = _restOffsetMax;
			_targetPos = _shownPos;
			if ((bool)_group)
			{
				_group.enabled = !UsesSlots;
			}
		}

		public void SetSlots(IReadOnlyList<Vector2> worldYRanges)
		{
			_slotsIn.Clear();
			if (worldYRanges != null)
			{
				for (int i = 0; i < worldYRanges.Count; i++)
				{
					_slotsIn.Add(worldYRanges[i]);
				}
			}
		}

		public bool CanShow(OrderSpec spec)
		{
			return CanShow(spec.DisplayId);
		}

		public bool CanShow(string id)
		{
			List<RcDisplayConfig> configs = ResolveConfigs(id);
			if (configs != null)
			{
				return configs.Count > 0;
			}
			return false;
		}

		public bool Show(IReadOnlyList<OrderSpec> orders)
		{
			CapturePos();
			base.gameObject.SetActive(true);
			KillMorph();
			ResetAlpha();
			RestoreRest();
			IsPeeking = false;
			if (_peekHeld)
			{
				_peekHeld = false;
				m_PeekReleased?.Invoke(-1f, Ease.OutCubic);
			}
			int used = Bind(orders);
			PrepareNormalLayout(used);
			RelayoutBoards();
			if (used == 0)
			{
				Clear();
			}
			else
			{
				RefreshOwned(instant: true);
			}
			return used > 0;
		}

		private int Bind(IReadOnlyList<OrderSpec> orders)
		{
			_shown.Clear();
			_columns.Clear();
			_slots.Clear();
			int slotCount = _slotsIn.Count;
			int orderCount = orders.Count;
			for (int i = 0; i < orderCount; i++)
			{
				List<RcDisplayConfig> configs = ResolveConfigs(orders[i].DisplayId, _iconPieces, _iconGroups);
				if (configs != null && configs.Count != 0)
				{
					ListIngredientBoardView board = GetBoard(_shown.Count);
					board.Fill(configs, _iconPieces, _iconGroups);
					_shown.Add(orders[i]);
					if (slotCount == orderCount)
					{
						_slots.Add(_slotsIn[i]);
					}
				}
			}
			int used = _shown.Count;
			for (int j = used; j < _boards.Count; j++)
			{
				_boards[j].Hide();
			}
			return used;
		}

		private void PrepareNormalLayout(int used)
		{
			if (UsesSlots)
			{
				PlaceInSlots(used);
				return;
			}
			if ((bool)_group)
			{
				_group.enabled = true;
			}
			if (used < 1)
			{
				ChooseColumns(used);
				return;
			}
			for (int i = 0; i < used; i++)
			{
				_boards[i].SetEdgePadding((i == 0) ? edgePaddingTop : 0f, (i == used - 1) ? edgePaddingBottom : 0f);
			}
			ChooseColumns(used);
			for (int j = 0; j < used; j++)
			{
				_boards[j].ClaimHeight(_columns[j]);
			}
		}

		private void PlaceInSlots(int used)
		{
			if ((bool)_group)
			{
				_group.enabled = false;
			}
			Rect rect = _rt.rect;
			RectOffset padding = (_group ? _group.padding : new RectOffset());
			float halfSpacing = (_group ? (_group.spacing * 0.5f) : 0f);
			int padLeft = padding.left;
			int padRight = padding.right;
			int padTop = padding.top;
			int padBottom = padding.bottom;
			_columns.Clear();
			float yMax = rect.yMax - (float)padTop;
			float yMin = rect.yMin + (float)padBottom;
			for (int i = 0; i < used; i++)
			{
				Vector2 slot = _slots[i];
				float top = yMax;
				if (!float.IsPositiveInfinity(slot.x))
				{
					float y = LocalY(slot.x) - halfSpacing;
					if (y <= yMax)
					{
						top = y;
					}
				}
				float bottom = yMin;
				if (!float.IsNegativeInfinity(slot.y))
				{
					float y2 = halfSpacing + LocalY(slot.y);
					if (yMin <= y2)
					{
						bottom = y2;
					}
				}
				ListIngredientBoardView board = _boards[i];
				board.SetEdgePadding(float.IsPositiveInfinity(slot.x) ? edgePaddingTop : 0f, float.IsNegativeInfinity(slot.y) ? edgePaddingBottom : 0f);
				RectTransform rt = (RectTransform)board.transform;
				rt.localScale = Vector3.one;
				rt.anchorMax = new Vector2(0.5f, 0.5f);
				rt.anchorMin = new Vector2(0.5f, 0.5f);
				if (top < bottom)
				{
					top = bottom;
				}
				SetParentSpaceRect(rt, new Vector2(rect.x + (float)padLeft, bottom), new Vector2(rect.xMax - (float)padRight, top));
				_columns.Add(BestColumns(board));
			}
		}

		private float LocalY(float worldY)
		{
			Vector3 p = _rt.position;
			return _rt.InverseTransformPoint(new Vector3(p.x, worldY, p.z)).y;
		}

		public bool ShowPeek(IReadOnlyList<OrderSpec> orders, int focus, RectTransform board, RectTransform neighbour, RectTransform clip, bool widen = false)
		{
			CapturePos();
			KillMorph();
			_rt.DOKill();
			_clip = clip;
			PeekIsWide = false;
			int pick = PickPeek(orders, focus);
			if (pick < 0)
			{
				return false;
			}
			base.gameObject.SetActive(true);
			ResetAlpha();
			RestoreRest();
			int used = Bind(orders);
			ListIngredientBoardView focusBoard = _boards[pick];
			bool wide;
			if (peekWideAbove < focusBoard.Used)
			{
				wide = (bool)neighbour || widen;
				if (!wide)
				{
					neighbour = null;
				}
				PeekIsWide = wide;
			}
			else
			{
				wide = false;
				neighbour = null;
				PeekIsWide = false;
			}
			_widen = wide && widen;
			PrepareNormalLayout(used);
			LayoutRebuilder.ForceRebuildLayoutImmediate(_rt);
			float shared = 1f;
			for (int i = 0; i < used; i++)
			{
				float s = _boards[i].FitScale(_columns[i]);
				if (s <= shared)
				{
					shared = s;
				}
			}
			RectTransform focusRt = (RectTransform)_boards[pick].transform;
			float normal = NormalScale(pick, shared);
			_boards[pick].Relayout(normal, _columns[pick]);
			Vector3[] corners = new Vector3[4];
			focusRt.GetWorldCorners(corners);
			_morphing = true;
			if ((bool)_group)
			{
				_group.enabled = false;
			}
			CoverBoards(board, neighbour);
			_columns.Clear();
			for (int j = 0; j < used; j++)
			{
				_columns.Add(1);
				if (j != pick)
				{
					_boards[j].Hide();
				}
			}
			_boards[pick].SetEdgePadding(edgePaddingTop, edgePaddingBottom);
			PlaceAlone(focusRt);
			_columns[pick] = BestColumns(focusBoard);
			Vector2 fromPos = focusRt.anchoredPosition;
			Vector2 fromSize = focusRt.sizeDelta;
			float fit = _boards[pick].FitScale(_columns[pick]);
			_boards[pick].Relayout(fit, _columns[pick], peekMorphDuration);
			SetRectFromWorldCorners(focusRt, corners);
			CanvasGroup group = CanvasGroupOf(focusBoard);
			group.alpha = 0f;
			_morph = DOTween.Sequence()
				.Join(focusRt.DOAnchorPos(fromPos, peekMorphDuration).SetEase(peekMorphEase))
				.Join(focusRt.DOSizeDelta(fromSize, peekMorphDuration).SetEase(peekMorphEase))
				.Join(group.DOFade(1f, peekMorphDuration).SetEase(peekFadeEase))
				.OnComplete(EndPeekIn);
			if (peekIconPop)
			{
				focusBoard.PlayPop(peekIconStagger, peekIconDuration);
			}
			IsPeeking = true;
			_peekHeld = true;
			RefreshOwned(instant: true);
			return true;
		}

		public Tween PeekIn()
		{
			PlaySlideSfx();
			if (_morph != null)
			{
				return _morph;
			}
			return DOTween.Sequence();
		}

		private void EndPeekIn()
		{
			_morph = null;
			_morphing = false;
			ResetAlpha();
			RelayoutBoards();
		}

		private int PickPeek(IReadOnlyList<OrderSpec> orders, int focusOrder)
		{
			int count = 0;
			int found = -1;
			for (int i = 0; i < orders.Count; i++)
			{
				bool can = CanShow(orders[i]);
				if (can && i == focusOrder)
				{
					found = count;
				}
				if (can)
				{
					count++;
				}
			}
			if (found >= 0)
			{
				return found;
			}
			return (count == 1) ? 0 : (-1);
		}

		private static CanvasGroup CanvasGroupOf(Component board)
		{
			if (!board.TryGetComponent<CanvasGroup>(out var group))
			{
				group = board.gameObject.AddComponent<CanvasGroup>();
			}
			return group;
		}

		private void ResetAlpha()
		{
			foreach (ListIngredientBoardView board in _boards)
			{
				if ((bool)board && board.TryGetComponent<CanvasGroup>(out var group))
				{
					group.DOKill();
					group.alpha = 1f;
				}
			}
		}

		private void CoverBoards(RectTransform board, RectTransform neighbour)
		{
			MoveToClip();
			RectTransform parent = (RectTransform)_rt.parent;
			Rect b = LocalRect(parent, board);
			Rect n;
			if ((bool)neighbour)
			{
				n = LocalRect(parent, neighbour);
			}
			else
			{
				n = b;
				if (_widen)
				{
					n.x = b.x + b.width;
				}
			}
			float minX = Mathf.Min(b.x, n.x);
			float maxX = Mathf.Max(b.x + b.width, n.x + n.width);
			SetParentSpaceRect(_rt, new Vector2(minX, b.y), new Vector2(maxX, b.y + b.height));
			_targetPos = new Vector2(_rt.anchoredPosition.x, b.y);
		}

		private static void SetParentSpaceRect(RectTransform rt, Vector2 min, Vector2 max)
		{
			RectTransform parent = (RectTransform)rt.parent;
			Rect parentRect = parent.rect;
			Vector3 scale = rt.localScale;
			Vector2 anchorMax = rt.anchorMax;
			Vector2 anchorMin = rt.anchorMin;
			Vector2 size = max - min;
			rt.sizeDelta = new Vector2(size.x / scale.x - parentRect.width * (anchorMax.x - anchorMin.x), size.y / scale.y - parentRect.height * (anchorMax.y - anchorMin.y));
			Vector2 pivot = rt.pivot;
			Vector2 anchorRef = new Vector2(parentRect.x + parentRect.width * (anchorMin.x + (anchorMax.x - anchorMin.x) * pivot.x), parentRect.y + parentRect.height * (anchorMin.y + (anchorMax.y - anchorMin.y) * pivot.y));
			rt.anchoredPosition = new Vector2(min.x + size.x * pivot.x, min.y + size.y * pivot.y) - anchorRef;
		}

		private static void PlaceAlone(RectTransform rt)
		{
			rt.localScale = Vector3.one;
			rt.anchorMin = Vector2.zero;
			rt.anchorMax = Vector2.one;
			rt.offsetMin = Vector2.zero;
			rt.offsetMax = Vector2.zero;
		}

		private void SetRectFromWorldCorners(RectTransform rt, Vector3[] corners)
		{
			Vector2 min = _rt.InverseTransformPoint(corners[0]);
			Vector2 max = min;
			for (int i = 1; i < 4; i++)
			{
				Vector2 p = _rt.InverseTransformPoint(corners[i]);
				min = Vector2.Min(min, p);
				max = Vector2.Max(max, p);
			}
			SetParentSpaceRect(rt, min, max);
		}

		private static Rect LocalRect(RectTransform space, RectTransform target)
		{
			Vector3[] corners = new Vector3[4];
			target.GetWorldCorners(corners);
			Vector2 min = space.InverseTransformPoint(corners[0]);
			Vector2 max = min;
			for (int i = 1; i < 4; i++)
			{
				Vector2 p = space.InverseTransformPoint(corners[i]);
				min = Vector2.Min(min, p);
				max = Vector2.Max(max, p);
			}
			return new Rect(min, max - min);
		}

		public bool MorphToNormal(IReadOnlyList<OrderSpec> orders)
		{
			CapturePos();
			KillMorph();
			_rt.DOKill();
			IsPeeking = false;
			Dictionary<int, Vector3[]> oldCorners = new Dictionary<int, Vector3[]>();
			for (int i = 0; i < _boards.Count; i++)
			{
				if ((bool)_boards[i] && _boards[i].gameObject.activeSelf)
				{
					Vector3[] corners = new Vector3[4];
					((RectTransform)_boards[i].transform).GetWorldCorners(corners);
					oldCorners[i] = corners;
				}
			}
			_morphing = true;
			RestoreRest();
			int used = Bind(orders);
			if (used == 0)
			{
				_morphing = false;
				Clear();
				return false;
			}
			PrepareNormalLayout(used);
			LayoutRebuilder.ForceRebuildLayoutImmediate(_rt);
			float shared = 1f;
			for (int j = 0; j < used; j++)
			{
				float s = _boards[j].FitScale(_columns[j]);
				if (s <= shared)
				{
					shared = s;
				}
			}
			Vector2[] targetPos = new Vector2[used];
			Vector2[] targetSize = new Vector2[used];
			for (int k = 0; k < used; k++)
			{
				RectTransform rt = (RectTransform)_boards[k].transform;
				targetPos[k] = rt.anchoredPosition;
				targetSize[k] = rt.sizeDelta;
				float tween = (oldCorners.ContainsKey(k) ? peekMorphDuration : 0f);
				_boards[k].Relayout(NormalScale(k, shared), _columns[k], tween);
			}
			if ((bool)_group)
			{
				_group.enabled = false;
			}
			MoveToClip();
			_morph = DOTween.Sequence();
			for (int m = 0; m < used; m++)
			{
				RectTransform rt2 = (RectTransform)_boards[m].transform;
				CanvasGroup group;
				bool hasGroup = _boards[m].TryGetComponent<CanvasGroup>(out group);
				if (hasGroup)
				{
					group.DOKill();
				}
				if (!oldCorners.TryGetValue(m, out var corners2))
				{
					if (hasGroup)
					{
						group.alpha = 1f;
					}
					rt2.localScale = Vector3.zero;
					_morph.Join(rt2.DOScale(1f, peekMorphDuration).SetEase(Ease.OutBack));
					continue;
				}
				SetFromWorldCorners(rt2, corners2);
				_morph.Join(rt2.DOAnchorPos(targetPos[m], peekMorphDuration).SetEase(peekMorphEase));
				_morph.Join(rt2.DOSizeDelta(targetSize[m], peekMorphDuration).SetEase(peekMorphEase));
				if (hasGroup && group.alpha < 1f)
				{
					_morph.Join(group.DOFade(1f, peekMorphDuration).SetEase(peekFadeEase));
				}
			}
			_morph.OnComplete(EndMorph);
			if (_peekHeld)
			{
				_peekHeld = false;
				m_PeekReleased?.Invoke(peekMorphDuration, peekMorphEase);
			}
			RefreshOwned(instant: true);
			return used != 0;
		}

		private void SetFromWorldCorners(RectTransform rt, Vector3[] corners)
		{
			Vector2 min = _rt.InverseTransformPoint(corners[0]);
			Vector2 max = min;
			for (int i = 1; i < 4; i++)
			{
				Vector2 p = _rt.InverseTransformPoint(corners[i]);
				min = Vector2.Min(min, p);
				max = Vector2.Max(max, p);
			}
			Rect rect = _rt.rect;
			Vector2 size = max - min;
			rt.sizeDelta = size;
			Vector2 anchorMin = rt.anchorMin;
			Vector2 pivot = rt.pivot;
			rt.anchoredPosition = new Vector2(min.x + size.x * pivot.x - (rect.x + rect.width * anchorMin.x), min.y + size.y * pivot.y - (rect.y + rect.height * anchorMin.y));
		}

		private void EndMorph()
		{
			_morph = null;
			_morphing = false;
			ResetAlpha();
			RestoreRest();
			RelayoutBoards();
			if (peekLandPunch <= 0f)
			{
				return;
			}
			for (int i = 0; i < _shown.Count && i < _boards.Count; i++)
			{
				Transform t = _boards[i].transform;
				t.DOKill();
				t.localScale = Vector3.one;
				t.DOPunchScale(Vector3.one * peekLandPunch, peekLandDuration, 6, 0.5f);
			}
		}

		private void ReleasePeek(float duration = -1f, Ease ease = Ease.OutCubic)
		{
			if (_peekHeld)
			{
				_peekHeld = false;
				m_PeekReleased?.Invoke(duration, ease);
			}
		}

		private void KillMorph()
		{
			if (_morph != null)
			{
				_morph.Kill();
				_morph = null;
			}
			_morphing = false;
			foreach (ListIngredientBoardView board in _boards)
			{
				if ((bool)board)
				{
					board.transform.DOKill();
					board.transform.localScale = Vector3.one;
				}
			}
		}

		private void LateUpdate()
		{
			if (_shown.Count > 0)
			{
				RefreshOwned(instant: false);
			}
		}

		private void RefreshOwned(bool instant)
		{
			MessyController level = MessyController.Ins;
			ServeShelfController shelf = (level ? level.ServeShelf : null);
			if (!shelf)
			{
				return;
			}
			shelf.GetPotentialPieces(_shown, _gathered);
			for (int i = 0; i < _gathered.Count && i < _boards.Count; i++)
			{
				_boards[i].ApplyOwned(_gathered[i], ownedAlpha, instant ? 0f : ownedFadeTime);
			}
		}

		private void RelayoutBoards()
		{
			if (_morphing)
			{
				return;
			}
			int n = Mathf.Min(_shown.Count, _columns.Count);
			if (n <= 0)
			{
				return;
			}
			float shared = 1f;
			for (int i = 0; i < n; i++)
			{
				if (_boards[i].gameObject.activeSelf)
				{
					float s = _boards[i].FitScale(_columns[i]);
					if (s <= shared)
					{
						shared = s;
					}
				}
			}
			for (int j = 0; j < n; j++)
			{
				if (_boards[j].gameObject.activeSelf)
				{
					float scale = (IsPeeking ? _boards[j].FitScale(_columns[j]) : NormalScale(j, shared));
					_boards[j].Relayout(scale, _columns[j]);
				}
			}
		}

		private float NormalScale(int i, float shared)
		{
			if (UsesSlots)
			{
				return _boards[i].FitScale(_columns[i]);
			}
			return shared;
		}

		private void ChooseColumns(int used)
		{
			int chosen = int.MaxValue;
			if (used < 1)
			{
				SetColumns(used, int.MaxValue);
			}
			else
			{
				int maxUsed = 0;
				for (int i = 0; i < used; i++)
				{
					maxUsed = Mathf.Max(maxUsed, _boards[i].Used);
				}
				SetColumns(used, int.MaxValue);
				float best = EstimateScale(used);
				for (int perColumn = maxUsed; perColumn > 1; )
				{
					perColumn--;
					SetColumns(used, perColumn);
					float s = EstimateScale(used);
					if (s > best * splitMinGain)
					{
						chosen = perColumn;
						best = s;
					}
				}
			}
			SetColumns(used, chosen);
		}

		private void SetColumns(int used, int perColumn)
		{
			_columns.Clear();
			for (int i = 0; i < used; i++)
			{
				int icons = _boards[i].Used;
				int cols;
				if (icons < minIconsToSplit)
				{
					cols = 1;
				}
				else
				{
					cols = Mathf.CeilToInt((float)icons / (float)perColumn);
					if (cols < 2)
					{
						cols = 1;
					}
				}
				_columns.Add(cols);
			}
		}

		private int BestColumns(ListIngredientBoardView board)
		{
			int best = 1;
			float prev = board.FitScale(1);
			for (int c = 2; c <= board.Used; c++)
			{
				float s = board.FitScale(c);
				if (s > prev * splitMinGain)
				{
					best = c;
				}
				else
				{
					s = prev;
				}
				prev = s;
			}
			return best;
		}

		private float EstimateScale(int used)
		{
			Rect rect = _rt.rect;
			float availW = rect.width;
			float availH = rect.height;
			if ((bool)_group)
			{
				availW -= (float)_group.padding.horizontal;
				availH -= _group.spacing * (float)(used - 1) + (float)_group.padding.vertical;
			}
			float scale = 1f;
			float sumH = 0f;
			for (int i = 0; i < used; i++)
			{
				Vector2 pref = _boards[i].PreferredSize(_columns[i]);
				float boardW = (((bool)_group && _group.childControlWidth) ? availW : ((RectTransform)_boards[i].transform).rect.width);
				if (pref.x > 0f && boardW / pref.x <= scale)
				{
					scale = boardW / pref.x;
				}
				sumH += pref.y;
			}
			if (sumH > 0f && availH / sumH <= scale)
			{
				scale = availH / sumH;
			}
			return Mathf.Max(0f, scale);
		}

		private ListIngredientBoardView GetBoard(int index)
		{
			while (index >= _boards.Count)
			{
				ListIngredientBoardView board = UnityEngine.Object.Instantiate(listIngredientBoardTemplate, base.transform, false);
				board.Resized += RelayoutBoards;
				_boards.Add(board);
			}
			return _boards[index];
		}

		public Tween SlideIn()
		{
			CapturePos();
			base.gameObject.SetActive(true);
			_rt.DOKill();
			_rt.anchoredPosition = HiddenPos;
			PlaySlideSfx();
			return _rt.DOAnchorPos(_targetPos, slideDuration).SetEase(slideInEase);
		}

		public void PlaySlideSfx()
		{
			if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxAndHaptic(sfxOnSlide, (AudioManagerCakeOrder.AudioTrack)3);
		}

		public Tween SlideOut()
		{
			CapturePos();
			_rt.DOKill();
			PlaySlideSfx();
			List<RectTransform> shown = ShownTopDown();
			bool inBands = UsesSlots && !IsPeeking;
			bool stagger = inBands || shown.Count > 1;
			if (shown.Count != 0 && stagger)
			{
				FreeBoards();
				Sequence seq = DOTween.Sequence();
				for (int i = 0; i < shown.Count; i++)
				{
					seq.Join(SlideBoardOut(shown[i], ExitsUp(shown, i, inBands)));
				}
				return seq;
			}
			return _rt.DOAnchorPos(HiddenPos, slideDuration).SetEase(slideOutEase);
		}

		private bool ExitsUp(List<RectTransform> shown, int rank, bool inBands)
		{
			if (!inBands)
			{
				if (shown.Count >= 2)
				{
					return rank < shown.Count >> 1;
				}
				return false;
			}
			Rect me = _rt.rect;
			Rect board = LocalRect(_rt, shown[rank]);
			return me.y + me.height * 0.05f + me.height * 0.5f < board.y + board.height * 0.5f;
		}

		public Tween SlideOutBoard(int index)
		{
			if (_posCaptured && index >= 0 && !IsPeeking && index < _shown.Count && index < _boards.Count)
			{
				ListIngredientBoardView board = _boards[index];
				if ((bool)board)
				{
					if (!board.gameObject.activeSelf)
					{
						return null;
					}
					List<RectTransform> shown = ShownTopDown();
					RectTransform rt = (RectTransform)board.transform;
					int rank = shown.IndexOf(rt);
					if (rank < 0)
					{
						return null;
					}
					FreeBoards();
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxAndHaptic(sfxOnSlide, (AudioManagerCakeOrder.AudioTrack)3);
					return SlideBoardOut(rt, ExitsUp(shown, rank, UsesSlots));
				}
			}
			return null;
		}

		private List<RectTransform> ShownTopDown()
		{
			List<RectTransform> list = new List<RectTransform>(_shown.Count);
			for (int i = 0; i < _shown.Count && i < _boards.Count; i++)
			{
				ListIngredientBoardView board = _boards[i];
				if ((bool)board && board.gameObject.activeSelf)
				{
					list.Add((RectTransform)board.transform);
				}
			}
			list.Sort(delegate(RectTransform a, RectTransform b)
			{
				Rect ra = LocalRect(_rt, a);
				Rect rb = LocalRect(_rt, b);
				return rb.center.y.CompareTo(ra.center.y);
			});
			return list;
		}

		private void FreeBoards()
		{
			KillMorph();
			if ((bool)_group)
			{
				_group.enabled = false;
			}
		}

		private Tween SlideBoardOut(RectTransform rt, bool up)
		{
			Rect me = _rt.rect;
			Rect board = LocalRect(_rt, rt);
			float distance = (up ? (me.yMax - board.y) : (board.yMax - me.y));
			if (!up)
			{
				distance = 0f - distance;
			}
			Vector2 pos = rt.anchoredPosition;
			return rt.DOAnchorPos(pos + Vector2.up * distance, slideDuration).SetEase(slideOutEase);
		}

		public void Clear()
		{
			if (_posCaptured)
			{
				_rt.DOKill();
				KillMorph();
				ResetAlpha();
				RestoreRest();
			}
			IsPeeking = false;
			_shown.Clear();
			foreach (ListIngredientBoardView board in _boards)
			{
				if ((bool)board)
				{
					board.Hide();
				}
			}
			base.gameObject.SetActive(false);
			if (_peekHeld)
			{
				_peekHeld = false;
				m_PeekReleased?.Invoke(-1f, Ease.OutCubic);
			}
		}

		private static List<RcDisplayConfig> ResolveConfigs(string id, List<PieceSet> iconPieces = null, List<IconGroup> iconGroups = null)
		{
			iconPieces?.Clear();
			iconGroups?.Clear();
			LevelInfo info = Info;
			if (info == null)
			{
				return null;
			}
			if (string.IsNullOrEmpty(id))
			{
				return null;
			}
			if (!FlexibleId.IsFlexible(id))
			{
				List<string> displayIds = new List<string>();
				if (info.TryGetDisplayIds(id, displayIds))
				{
					return info.GetDisplayConfig(displayIds);
				}
				if (info.IngredientListShowsRaw)
				{
					List<string> inputs = new List<string>();
					if (info.TryGetDirectInputs(id, inputs))
					{
						List<PieceSet> pieces = new List<PieceSet>(inputs.Count);
						foreach (string input in inputs)
						{
							pieces.Add(PieceLookup.PiecesOfAnyRole(input));
						}
						return ResolveInputs(info, inputs, pieces, iconPieces, iconGroups);
					}
				}
				List<List<RcDisplayConfig>> all = info.GetAllDisplayConfigInRecipe(id, includeStations: false);
				if (all != null)
				{
					foreach (List<RcDisplayConfig> configs in all)
					{
						if (configs != null && configs.Count > 0)
						{
							return configs;
						}
					}
				}
			}
			else
			{
				string baseId = FlexibleId.BaseOf(id);
				FlexibleDragItem prefab = info.GetIngredientPrefab(baseId) as FlexibleDragItem;
				if (prefab != null)
				{
					List<string> ids = prefab.GetIngIds(id);
					List<PieceSet> pieces2 = new List<PieceSet>(ids.Count);
					foreach (string iconId in ids)
					{
						pieces2.Add(prefab.IconPiecesOf(iconId, id));
					}
					return ResolveInputs(info, ids, pieces2, iconPieces, iconGroups);
				}
			}
			return null;
		}

		private static List<RcDisplayConfig> ResolveInputs(LevelInfo info, List<string> ids, List<PieceSet> pieces, List<PieceSet> iconPieces, List<IconGroup> iconGroups)
		{
			List<IconGroup> groups = new List<IconGroup>();
			if (info.IngredientListShowsRaw)
			{
				ExpandToLeaves(info, ids, pieces, groups);
			}
			List<RcDisplayConfig> configs = info.GetDisplayConfig(ids);
			if (iconPieces != null && configs.Count == ids.Count)
			{
				iconPieces.AddRange(pieces);
				iconGroups?.AddRange(groups);
			}
			return configs;
		}

		private static void ExpandToLeaves(LevelInfo info, List<string> ids, List<PieceSet> pieces, List<IconGroup> groups)
		{
			List<string> newIds = new List<string>(ids.Count);
			List<PieceSet> newPieces = new List<PieceSet>(ids.Count);
			List<string> leaves = new List<string>();
			for (int i = 0; i < ids.Count; i++)
			{
				leaves.Clear();
				if (!info.TryCollectLeafInputs(ids[i], leaves))
				{
					newIds.Add(ids[i]);
					newPieces.Add(pieces[i]);
					continue;
				}
				groups.Add(new IconGroup(newIds.Count, leaves.Count, pieces[i]));
				foreach (string leaf in leaves)
				{
					newIds.Add(leaf);
					newPieces.Add(PieceLookup.PiecesOfAnyRole(leaf));
				}
			}
			ids.Clear();
			ids.AddRange(newIds);
			pieces.Clear();
			pieces.AddRange(newPieces);
		}
	}
}
