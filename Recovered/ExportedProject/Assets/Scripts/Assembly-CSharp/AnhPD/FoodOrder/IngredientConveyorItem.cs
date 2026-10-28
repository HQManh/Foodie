using System;
using System.Collections.Generic;
using CakeOrder;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;

namespace AnhPD.FoodOrder
{
	public class IngredientConveyorItem : MonoBehaviour, IPointerDownHandler, IEventSystemHandler
	{
		[Serializable]
		public struct RopeEdgePadding
		{
			public float left;

			public float right;

			public float top;

			public float bottom;
		}

		[SerializeField]
		private IngredientRenderSlot[] _slots;

		[SerializeField]
		private Sprite[] iceSprites;

		[SerializeField]
		private SpriteRenderer freeze;

		[SerializeField]
		private GameObject hiddenCover;

		[SerializeField]
		private TMP_Text txtCooldown;

		[SerializeField]
		private SpriteRenderer tapable;

		[SerializeField]
		private Collider2D tapCollider;

		[SerializeField]
		private SortingGroup sortingGroup;

		[SerializeField]
		private Transform visualRoot;

		private Color _brightColor;

		private Color _dimColor;

		private float _spriteScale;

		private readonly List<IngredientState> _items;

		private int _usedCount;

		private int _cooldown;

		private int _freezeTurnsInitial;

		private KeyTag _key;

		private Action<IngredientConveyorItem> _onTap;

		private bool _inviting;

		private bool _deadFlash;

		private bool _bright;

		private const float HintDimRatio = 0.5f;

		private const float HintDimDuration = 0.2f;

		private bool _hintDim;

		private float _hintAmount;

		private Tween _hintTween;

		private SpriteRenderer[] _tintRenderers;

		private SpriteRenderer[] _allRenderers;

		[Header("Nhảy khi tan 1 lượt băng")]
		[SerializeField]
		private float thawHopHeight;

		[SerializeField]
		private float thawHopDuration;

		[SerializeField]
		private Ease thawHopEase;

		private Tweener _thawHop;

		private Vector3 _visualHome;

		[Header("Nhún khi tap không nhặt được")]
		[SerializeField]
		private float rejectBumpScale;

		[SerializeField]
		private float rejectBumpDuration;

		[SerializeField]
		private Color rejectTapableColor;

		private Tweener _rejectBump;

		private Tween _rejectFlash;

		private Color _tapableBaseColor;

		private bool _forcedRejectOutline;

		[Header("Bung ra khi tap nhả thành công")]
		[SerializeField]
		private float releaseRiseHeight;

		[SerializeField]
		private float releaseRiseDuration;

		[SerializeField]
		private Ease releaseRiseEase;

		[SerializeField]
		private float releasePopScale;

		[SerializeField]
		private float releasePopDuration;

		[SerializeField]
		private Ease releasePopEase;

		[SerializeField]
		private Ease releaseFadeEase;

		[SerializeField]
		private int releaseSortingBoost;

		private float _releaseStepInterval;

		private Sequence _releasePop;

		private Sequence _releaseSeq;

		private Action _releaseSeqAbort;

		private Vector3 _visualBaseScale;

		private bool _hidden;

		[Header("Bỏ nắp khi lên hàng đầu")]
		[SerializeField]
		private float coverLiftHeight;

		[SerializeField]
		private float coverLiftDuration;

		[SerializeField]
		private Ease coverLiftEase;

		[SerializeField]
		private float coverPunchScale;

		[SerializeField]
		private float coverPunchDuration;

		[SerializeField]
		private float coverFadeDuration;

		[SerializeField]
		private Ease coverFadeEase;

		private Sequence _coverPop;

		private Vector3 _coverHome;

		private Vector3 _coverBaseScale;

		private SpriteRenderer[] _coverRenderers;

		private Color[] _coverBaseColors;

		private bool _coverCaptured;

		private readonly HashSet<SpriteRenderer> _coverRendererSet;

		private int _pendingKeyColor;

		private static bool _warnedKeyManagerLate;

		public const int RopeAnchorCount = 4;

		[Header("Điểm nối dây")]
		[SerializeField]
		private RopeEdgePadding ropePadding;

		private Vector3[] _localCorners;

		public IReadOnlyList<IngredientState> Items => null;

		public bool IsBundle => false;

		public int BlockWidth { get; private set; }

		public int BlockHeight { get; private set; }

		public ConveyorColumn OwnerColumn { get; private set; }

		public ConveyorSlot Slot { get; private set; }

		public bool IsAtFrontRow => false;

		public bool IsPickable => false;

		public IReadOnlyList<ConveyorSlot> ChainMembers => null;

		public virtual IngredientSlotKind Kind => IngredientSlotKind.Ingredient;

		public virtual bool NeedsGridRoom => false;

		private int SlotCount => 0;

		private SpriteRenderer FirstRenderer => null;

		public bool IsBusy { get; private set; }

		public Vector3 BaseScale { get; private set; }

		public bool IsBright => false;

		public bool TapSuspended { get; private set; }

		private SpriteRenderer[] AllRenderers => null;

		private SpriteRenderer[] TintRenderers => null;

		public bool IsFrozen => false;

		public int FreezeTurns => 0;

		public float RejectFlashDuration => 0f;

		public bool ReleasePopPending { get; private set; }

		public bool IsHidden => false;

		public bool HasKey => false;

		public int KeyColor => 0;

		private Transform KeyAnchor => null;

		public void SetTintPalette(Color bright, Color dim)
		{
		}

		public void MarkBlock(ConveyorColumn owner, int width, int height)
		{
		}

		public void AttachSlot(ConveyorSlot slot)
		{
		}

		public virtual bool CanRelease()
		{
			return false;
		}

		public virtual bool ReleaseSelf()
		{
			return false;
		}

		public void SetMaskInteraction(SpriteMaskInteraction interaction)
		{
		}

		private void Awake()
		{
		}

		private void EnsureVisualRoot()
		{
		}

		private void EnsureSortingGroup()
		{
		}

		public void SetBusy(bool value)
		{
		}

		public void StopAnim()
		{
		}

		public void SetSortingOrder(int order)
		{
		}

		public void SetTapHandler(Action<IngredientConveyorItem> handler)
		{
		}

		public void SetTapState(bool canTap, bool inviting, bool bright)
		{
		}

		private void RefreshTapableVisual()
		{
		}

		public void SetDeadFlash(bool on)
		{
		}

		public void SuspendTap(bool bright)
		{
		}

		public void ResumeTap()
		{
		}

		public void SetHintDim(bool on)
		{
		}

		private void ClearHintDim()
		{
		}

		private void RefreshTapTint()
		{
		}

		public void OnPointerDown(PointerEventData eventData)
		{
		}

		public void Freeze(int turns)
		{
		}

		private void TickFreeze()
		{
		}

		public bool TryThawOneTurn()
		{
			return false;
		}

		public bool ClearFreeze()
		{
			return false;
		}

		private void PlayThawHop()
		{
		}

		private void ResetThawHop()
		{
		}

		private void ClearForcedRejectOutline()
		{
		}

		public void PlayRejectBump(bool showOutline = false)
		{
		}

		public void SetRejectFlashAmount(float amount)
		{
		}

		public void ClearRejectFlash()
		{
		}

		private void PlayRejectFlash()
		{
		}

		private void ResetRejectFlash()
		{
		}

		public void SetReleaseStepInterval(float seconds)
		{
		}

		public void PlayReleaseSequence(Func<IngredientState, int> copiesOf, Action<IngredientState> spawnOne, Action onDone, Action onAbort = null)
		{
		}

		private void ResetReleaseSequence()
		{
		}

		public void BeginReleasePop()
		{
		}

		public void PlayReleasePop(Action onComplete)
		{
		}

		private void SetAlpha(float alpha)
		{
		}

		private void ResetReleasePop()
		{
		}

		public void SetHidden(bool hidden)
		{
		}

		private void CaptureCover()
		{
		}

		public void Reveal()
		{
		}

		private bool PlayCoverPop()
		{
			return false;
		}

		private void ResetCoverPop()
		{
		}

		private void ResetCoverVisual()
		{
		}

		private void RefreshRenderers()
		{
		}

		private void RefreshFreezeVisual()
		{
		}

		private Sprite CurrentIceSprite()
		{
			return null;
		}

		public void SetKey(int keyColor)
		{
		}

		private void BuildPendingKey()
		{
		}

		private void BuildKey(int keyColor)
		{
		}

		public KeyTag TakeKey()
		{
			return null;
		}

		public void DestroyKey()
		{
		}

		public Vector3 RopeAnchor(int index)
		{
			return default;
		}

		public static void NearestAnchorPair(IngredientConveyorItem a, IngredientConveyorItem b, out Vector3 pointA, out Vector3 pointB)
		{
			pointA = default;
			pointB = default;
		}

		public static Vector3 SideAnchor(IngredientConveyorItem item, bool right)
		{
			return default;
		}

		public static Vector3 NearestAnchorTo(IngredientConveyorItem item, Vector3 point)
		{
			return default;
		}

		private Vector3[] LocalCorners()
		{
			return null;
		}

		private bool TryColliderLocalRect(out Vector3 min, out Vector3 max)
		{
			min = default;
			max = default;
			return false;
		}

		private Vector3 ToItemLocal(Transform space, Vector3 point)
		{
			return default;
		}

		public void Init(float spriteScale, IReadOnlyList<IngredientState> items, IReadOnlyList<Sprite> sprites, IReadOnlyList<float> displayScales = null, IReadOnlyList<Vector2> displayOffsets = null)
		{
		}
	}
}
