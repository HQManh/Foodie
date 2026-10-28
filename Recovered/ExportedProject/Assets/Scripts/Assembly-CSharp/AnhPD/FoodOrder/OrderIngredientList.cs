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
		private float slideDuration;

		[SerializeField]
		private float slideOffsetY;

		[SerializeField]
		private Ease slideInEase;

		[SerializeField]
		private Ease slideOutEase;

		[SerializeField]
		private SfxAndHapticTrigger sfxOnSlide;

		[Header("Nguyên liệu đã có trên kệ")]
		[SerializeField]
		private float ownedAlpha;

		[SerializeField]
		private float ownedFadeTime;

		[Header("Columns")]
		[Tooltip("More columns only when icons come out at least this many times bigger than with fewer.")]
		[SerializeField]
		[Min(1f)]
		private float splitMinGain;

		[Tooltip("Boards with fewer icons than this always stay one column.")]
		[SerializeField]
		[Min(2f)]
		private int minIconsToSplit;

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
		private int peekWideAbove;

		[SerializeField]
		private float peekMorphDuration;

		[Tooltip("Fade-in of the peek, over the morph's duration. Its own ease: the morph's OutCubic is nearly opaque a third of the way in, so the fade would barely show.")]
		[SerializeField]
		private Ease peekFadeEase;

		[SerializeField]
		private Ease peekMorphEase;

		[SerializeField]
		private float peekLandPunch;

		[SerializeField]
		private float peekLandDuration;

		private readonly List<ListIngredientBoardView> _boards;

		private readonly List<OrderSpec> _shown;

		private readonly List<PieceSet> _gathered;

		private readonly List<PieceSet> _iconPieces;

		private readonly List<IconGroup> _iconGroups;

		private readonly List<int> _columns;

		private readonly List<Vector2> _slotsIn;

		private readonly List<Vector2> _slots;

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

		public bool UsesSlots => false;

		public bool IsPeeking { get; private set; }

		public bool PeekIsWide { get; private set; }

		private static LevelInfo Info => null;

		private Vector2 HiddenPos => default;

		public event Action<float, Ease> PeekReleased
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		private void CapturePos()
		{
		}

		private void MoveToClip()
		{
		}

		private void MoveHome()
		{
		}

		private void RestoreRest()
		{
		}

		public void SetSlots(IReadOnlyList<Vector2> worldYRanges)
		{
		}

		public bool CanShow(OrderSpec spec)
		{
			return false;
		}

		public bool CanShow(string id)
		{
			return false;
		}

		public bool Show(IReadOnlyList<OrderSpec> orders)
		{
			return false;
		}

		private int Bind(IReadOnlyList<OrderSpec> orders)
		{
			return 0;
		}

		private void PrepareNormalLayout(int used)
		{
		}

		private void PlaceInSlots(int used)
		{
		}

		private float LocalY(float worldY)
		{
			return 0f;
		}

		public bool ShowPeek(IReadOnlyList<OrderSpec> orders, int focus, RectTransform board, RectTransform neighbour, RectTransform clip, bool widen = false)
		{
			return false;
		}

		public Tween PeekIn()
		{
			return null;
		}

		private void EndPeekIn()
		{
		}

		private int PickPeek(IReadOnlyList<OrderSpec> orders, int focusOrder)
		{
			return 0;
		}

		private static CanvasGroup CanvasGroupOf(Component board)
		{
			return null;
		}

		private void ResetAlpha()
		{
		}

		private void CoverBoards(RectTransform board, RectTransform neighbour)
		{
		}

		private static void SetParentSpaceRect(RectTransform rt, Vector2 min, Vector2 max)
		{
		}

		private static void PlaceAlone(RectTransform rt)
		{
		}

		private void SetRectFromWorldCorners(RectTransform rt, Vector3[] corners)
		{
		}

		private static Rect LocalRect(RectTransform space, RectTransform target)
		{
			return default;
		}

		public bool MorphToNormal(IReadOnlyList<OrderSpec> orders)
		{
			return false;
		}

		private void SetFromWorldCorners(RectTransform rt, Vector3[] corners)
		{
		}

		private void EndMorph()
		{
		}

		private void ReleasePeek(float duration = -1f, Ease ease = Ease.OutCubic)
		{
		}

		private void KillMorph()
		{
		}

		private void LateUpdate()
		{
		}

		private void RefreshOwned(bool instant)
		{
		}

		private void RelayoutBoards()
		{
		}

		private float NormalScale(int i, float shared)
		{
			return 0f;
		}

		private void ChooseColumns(int used)
		{
		}

		private void SetColumns(int used, int perColumn)
		{
		}

		private int BestColumns(ListIngredientBoardView board)
		{
			return 0;
		}

		private float EstimateScale(int used)
		{
			return 0f;
		}

		private ListIngredientBoardView GetBoard(int index)
		{
			return null;
		}

		public Tween SlideIn()
		{
			return null;
		}

		public void PlaySlideSfx()
		{
		}

		public Tween SlideOut()
		{
			return null;
		}

		private bool ExitsUp(List<RectTransform> shown, int rank, bool inBands)
		{
			return false;
		}

		public Tween SlideOutBoard(int index)
		{
			return null;
		}

		private List<RectTransform> ShownTopDown()
		{
			return null;
		}

		private void FreeBoards()
		{
		}

		private Tween SlideBoardOut(RectTransform rt, bool up)
		{
			return null;
		}

		public void Clear()
		{
		}

		private static List<RcDisplayConfig> ResolveConfigs(string id, List<PieceSet> iconPieces = null, List<IconGroup> iconGroups = null)
		{
			return null;
		}

		private static List<RcDisplayConfig> ResolveInputs(LevelInfo info, List<string> ids, List<PieceSet> pieces, List<PieceSet> iconPieces, List<IconGroup> iconGroups)
		{
			return null;
		}

		private static void ExpandToLeaves(LevelInfo info, List<string> ids, List<PieceSet> pieces, List<IconGroup> groups)
		{
		}
	}
}
