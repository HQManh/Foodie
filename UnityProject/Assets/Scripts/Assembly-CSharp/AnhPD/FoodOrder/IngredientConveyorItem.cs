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

		private readonly List<IngredientState> _items = new List<IngredientState>();

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

		private readonly HashSet<SpriteRenderer> _coverRendererSet = new HashSet<SpriteRenderer>();

		private int _pendingKeyColor = -1;

		private static bool _warnedKeyManagerLate;

		public const int RopeAnchorCount = 4;

		[Header("Điểm nối dây")]
		[SerializeField]
		private RopeEdgePadding ropePadding;

		private Vector3[] _localCorners;

		public IReadOnlyList<IngredientState> Items => _items;

		public bool IsBundle => _items != null && _items.Count > 1;

		public int BlockWidth { get; private set; }

		public int BlockHeight { get; private set; }

		public ConveyorColumn OwnerColumn { get; private set; }

		public ConveyorSlot Slot { get; private set; }

		public bool IsAtFrontRow => Slot != null && Slot.IsAtFrontRow;

		public bool IsPickable => Slot != null && Slot.IsPickable;

		public IReadOnlyList<ConveyorSlot> ChainMembers => Slot != null && Slot.Chain != null ? Slot.Chain.Members : null;

		public virtual IngredientSlotKind Kind => IngredientSlotKind.Ingredient;

		public virtual bool NeedsGridRoom => true;

		private int SlotCount => _slots != null ? _slots.Length : 0;

		private SpriteRenderer FirstRenderer => _slots != null && _slots.Length > 0 && _slots[0] != null ? _slots[0].Renderer : null;

		public bool IsBusy { get; private set; }

		public Vector3 BaseScale { get; private set; }

		public bool IsBright => _bright || _deadFlash;

		public bool TapSuspended { get; private set; }

		private SpriteRenderer[] AllRenderers
		{
			get
			{
				if (_allRenderers == null)
				{
					_allRenderers = GetComponentsInChildren<SpriteRenderer>(true);
				}
				return _allRenderers;
			}
		}

		private SpriteRenderer[] TintRenderers
		{
			get
			{
				if (_tintRenderers == null)
				{
					List<SpriteRenderer> list = new List<SpriteRenderer>();
					foreach (SpriteRenderer r in AllRenderers)
					{
						if (r != null && r != tapable)
						{
							list.Add(r);
						}
					}
					_tintRenderers = list.ToArray();
				}
				return _tintRenderers;
			}
		}

		public bool IsFrozen => _cooldown > 0;

		public int FreezeTurns => _cooldown;

		public float RejectFlashDuration => rejectBumpDuration;

		public bool ReleasePopPending { get; private set; }

		public bool IsHidden => _hidden;

		public bool HasKey => _key != null || _pendingKeyColor >= 0;

		public int KeyColor => _key != null ? _key.ColorIndex : _pendingKeyColor;

		private Transform KeyAnchor => FirstRenderer != null ? FirstRenderer.transform : transform;

		public void SetTintPalette(Color bright, Color dim)
		{
			_brightColor = bright;
			_dimColor = dim;
			RefreshTapTint();
		}

		public void MarkBlock(ConveyorColumn owner, int width, int height)
		{
			OwnerColumn = owner;
			BlockWidth = (width < 2) ? 1 : width;
			BlockHeight = (height < 2) ? 1 : height;
		}

		public void AttachSlot(ConveyorSlot slot)
		{
			Slot = slot;
		}

		public virtual bool CanRelease()
		{
			return true;
		}

		public virtual bool ReleaseSelf()
		{
			return false;
		}

		public void SetMaskInteraction(SpriteMaskInteraction interaction)
		{
			SpriteRenderer[] all = AllRenderers;
			if (all == null)
			{
				return;
			}
			foreach (SpriteRenderer r in all)
			{
				if (r)
				{
					r.maskInteraction = interaction;
				}
			}
		}

		private void Awake()
		{
			if (!tapCollider)
			{
				tapCollider = GetComponent<Collider2D>();
			}
			Transform tf = transform;
			if (tf)
			{
				BaseScale = tf.localScale;
				if (tapable)
				{
					_tapableBaseColor = tapable.color;
				}
				EnsureSortingGroup();
				EnsureVisualRoot();
				CaptureCover();
			}
		}

		private void EnsureVisualRoot()
		{
			if (!visualRoot)
			{
				GameObject root = new GameObject("VisualRoot"); /* literal recovered by guess */
				Transform rootTf = root.transform;
				rootTf.SetParent(transform, worldPositionStays: false);
				for (int i = transform.childCount - 1; i >= 0; i--)
				{
					Transform child = transform.GetChild(i);
					if (child != rootTf)
					{
						child.SetParent(rootTf, worldPositionStays: true);
					}
				}
				visualRoot = rootTf;
			}
			if (visualRoot)
			{
				_visualHome = visualRoot.localPosition;
				_visualBaseScale = visualRoot.localScale;
			}
		}

		private void EnsureSortingGroup()
		{
			if (!sortingGroup)
			{
				sortingGroup = GetComponent<SortingGroup>();
				if (!sortingGroup)
				{
					sortingGroup = gameObject.AddComponent<SortingGroup>();
					SpriteRenderer first = FirstRenderer;
					if (!first)
					{
						return;
					}
					sortingGroup.sortingLayerID = first.sortingLayerID;
				}
			}
		}

		public void SetBusy(bool value)
		{
			IsBusy = value;
		}

		public void StopAnim()
		{
			transform.DOKill();
			_rejectBump = null;
			ResetThawHop();
			ResetReleaseSequence();
			ResetReleasePop();
			ResetRejectFlash();
			ResetCoverPop();
			IsBusy = false;
			transform.localScale = BaseScale;
		}

		public void SetSortingOrder(int order)
		{
			EnsureSortingGroup();
			if (sortingGroup)
			{
				sortingGroup.sortingOrder = order;
			}
		}

		public void SetTapHandler(Action<IngredientConveyorItem> handler)
		{
			_onTap = handler;
		}

		public void SetTapState(bool canTap, bool inviting, bool bright)
		{
			bool guarded = ReleasePopPending || TapSuspended;
			if (guarded)
			{
				canTap = false;
				inviting = false;
			}
			if (tapCollider)
			{
				tapCollider.enabled = canTap;
			}
			if (!guarded)
			{
				_inviting = inviting;
				_bright = bright;
				RefreshTapableVisual();
				RefreshTapTint();
			}
		}

		private void RefreshTapableVisual()
		{
			if (!tapable)
			{
				return;
			}
			tapable.gameObject.SetActive(_inviting || _deadFlash || _forcedRejectOutline);
		}

		public void SetDeadFlash(bool on)
		{
			if (_deadFlash == on)
			{
				return;
			}
			_deadFlash = on;
			RefreshTapableVisual();
			RefreshTapTint();
		}

		public void SuspendTap(bool bright)
		{
			TapSuspended = true;
			if (tapCollider)
			{
				tapCollider.enabled = false;
			}
			_inviting = false;
			RefreshTapableVisual();
			if (bright)
			{
				_bright = true;
				RefreshTapTint();
			}
		}

		public void ResumeTap()
		{
			TapSuspended = false;
		}

		public void SetHintDim(bool on)
		{
			if (_hintDim == on)
			{
				return;
			}
			Tween previous = _hintTween;
			_hintDim = on;
			if (previous != null)
			{
				previous.Kill();
			}
			_hintTween = DOTween.To(() => _hintAmount, v => _hintAmount = v, on ? 1f : 0f, HintDimDuration).OnUpdate(RefreshTapTint); /* OnUpdate target recovered by guess */
		}

		private void ClearHintDim()
		{
			if (_hintTween != null)
			{
				_hintTween.Kill();
			}
			_hintTween = null;
			_hintDim = false;
			_hintAmount = 0f;
		}

		private void RefreshTapTint()
		{
			Color color;
			if (!_bright)
			{
				color = _deadFlash ? _brightColor : _dimColor;
			}
			else
			{
				color = _brightColor;
				if (!_deadFlash && _hintAmount > 0f)
				{
					color = Color.Lerp(_brightColor, _dimColor, Mathf.Clamp01(_hintAmount * 0.5f));
				}
			}
			bool coverAnimating = _coverPop != null && _coverPop.IsActive(); /* cover tween field recovered by guess */
			SpriteRenderer[] tints = TintRenderers;
			if (tints != null)
			{
				foreach (SpriteRenderer r in tints)
				{
					if (!r)
					{
						continue;
					}
					if (coverAnimating && _coverRendererSet != null && _coverRendererSet.Contains(r))
					{
						continue;
					}
					r.color = color;
				}
			}
			if (_slots != null)
			{
				foreach (IngredientRenderSlot slot in _slots)
				{
					if (slot)
					{
						slot.SetTint(color);
					}
				}
			}
		}

		public void OnPointerDown(PointerEventData eventData)
		{
			if (_onTap != null)
			{
				_onTap(this);
			}
		}

		public void Freeze(int turns)
		{
			turns = Mathf.Max(0, turns);
			_cooldown = turns;
			_freezeTurnsInitial = turns;
			RefreshFreezeVisual();
		}

		private void TickFreeze()
		{
			if (_cooldown < 1)
			{
				return;
			}
			_cooldown--;
			// TODO(unrecovered): freeze-tick particle spawn (singleton chain to a PoolingParticle prefab, ParticleRequest At/Scale/Volume/Play) not identified; counter and visual are done.
			RefreshFreezeVisual();
		}

		public bool TryThawOneTurn()
		{
			int remaining = _cooldown;
			if (remaining > 0)
			{
				TickFreeze();
				PlayThawHop();
			}
			return remaining > 0;
		}

		public bool ClearFreeze()
		{
			int remaining = _cooldown;
			if (remaining > 0)
			{
				_cooldown = 0;
				// TODO(unrecovered): clear-freeze particle spawn (same unrecovered singleton/particle chain as TickFreeze); counter and visuals are done.
				RefreshFreezeVisual();
				PlayThawHop();
			}
			return remaining > 0;
		}

		private void PlayThawHop()
		{
			if (!visualRoot || thawHopHeight <= 0f || thawHopDuration <= 0f)
			{
				return;
			}
			if (!Application.isPlaying)
			{
				return;
			}
			if (_thawHop != null)
			{
				_thawHop.Kill();
			}
			visualRoot.localPosition = _visualHome;
			// decompiled loop args (2, 1) passed as (loops, LoopType.Incremental)
			_thawHop = visualRoot.DOLocalMoveY(_visualHome.y + thawHopHeight, thawHopDuration * 0.5f)
				.SetEase(thawHopEase)
				.SetLoops(2, LoopType.Incremental)
				.OnComplete(() =>
				{
					_thawHop = null;
					visualRoot.localPosition = _visualHome;
				});
		}

		private void ResetThawHop()
		{
			if (_thawHop != null)
			{
				_thawHop.Kill();
			}
			_thawHop = null;
			if (visualRoot)
			{
				visualRoot.localPosition = _visualHome;
			}
		}

		private void ClearForcedRejectOutline()
		{
			if (_forcedRejectOutline)
			{
				_forcedRejectOutline = false;
				RefreshTapableVisual();
			}
		}

		public void PlayRejectBump(bool showOutline = false)
		{
			if (!Application.isPlaying)
			{
				return;
			}
			if (showOutline && !_inviting && !_forcedRejectOutline)
			{
				_forcedRejectOutline = true;
				RefreshTapableVisual();
			}
			PlayRejectFlash();
			if (_rejectFlash == null && _forcedRejectOutline)
			{
				_forcedRejectOutline = false;
				RefreshTapableVisual();
			}
			if (rejectBumpScale > 0f && rejectBumpDuration > 0f)
			{
				if (_rejectBump != null)
				{
					_rejectBump.Kill();
				}
				Transform tf = transform;
				tf.localScale = BaseScale;
				_rejectBump = tf.DOPunchScale(BaseScale * rejectBumpScale, rejectBumpDuration, 1, 0.5f)
					.OnComplete(() =>
					{
						_rejectBump = null;
						transform.localScale = BaseScale;
					});
			}
		}

		public void SetRejectFlashAmount(float amount)
		{
			if (!tapable)
			{
				return;
			}
			if (_rejectFlash != null)
			{
				_rejectFlash.Kill();
			}
			_rejectFlash = null;
			tapable.color = Color.Lerp(_tapableBaseColor, rejectTapableColor, Mathf.Clamp01(amount));
		}

		public void ClearRejectFlash()
		{
			if (_rejectFlash != null)
			{
				_rejectFlash.Kill();
			}
			_rejectFlash = null;
			if (tapable)
			{
				tapable.color = _tapableBaseColor;
			}
			if (_forcedRejectOutline)
			{
				_forcedRejectOutline = false;
				RefreshTapableVisual();
			}
		}

		private void PlayRejectFlash()
		{
			if (!tapable || !tapable.gameObject.activeSelf || rejectBumpDuration <= 0f)
			{
				return;
			}
			if (_rejectFlash != null)
			{
				_rejectFlash.Kill();
			}
			TweenCallback done = () =>
			{
				_rejectFlash = null;
				if (tapable)
				{
					tapable.color = _tapableBaseColor;
				}
				if (_forcedRejectOutline)
				{
					_forcedRejectOutline = false;
					RefreshTapableVisual();
				}
			};
			if (!_forcedRejectOutline)
			{
				tapable.color = _tapableBaseColor;
				_rejectFlash = tapable.DOColor(rejectTapableColor, rejectBumpDuration * 0.5f)
					.SetLoops(2, LoopType.Incremental)
					.OnComplete(done);
			}
			else
			{
				tapable.color = rejectTapableColor;
				_rejectFlash = DOVirtual.DelayedCall(rejectBumpDuration, done);
			}
		}

		private void ResetRejectFlash()
		{
			ClearRejectFlash();
		}

		public void SetReleaseStepInterval(float seconds)
		{
			_releaseStepInterval = Mathf.Max(0f, seconds);
		}

		public void PlayReleaseSequence(Func<IngredientState, int> copiesOf, Action<IngredientState> spawnOne, Action onDone, Action onAbort = null)
		{
			ResetReleaseSequence();
			_releaseSeq = DOTween.Sequence();
			_releaseSeqAbort = onAbort;
			if (_usedCount < 1)
			{
				_releaseSeq.Kill();
				_releaseSeq = null;
				_releaseSeqAbort = null;
				if (onDone != null)
				{
					onDone();
				}
				return;
			}
			bool first = true;
			for (int i = 0; i < _usedCount; i++)
			{
				IngredientState item = _items[i];
				if (item == null)
				{
					continue;
				}
				int copies = copiesOf(item);
				for (int c = copies - 1; c >= 0; c--)
				{
					if (!first && _releaseStepInterval > 0f)
					{
						_releaseSeq.AppendInterval(_releaseStepInterval);
					}
					IngredientState copyItem = item;
					// TODO(unrecovered): per-copy index and slot (_slots[i]) are passed to the spawn callback in the pseudocode, but Action<IngredientState> has no slot/index; spawn lambda body not read.
					_releaseSeq.AppendCallback(() =>
					{
						if (spawnOne != null)
						{
							spawnOne(copyItem);
						}
					});
					first = false;
				}
			}
			_releaseSeq.OnComplete(() =>
			{
				if (onDone != null)
				{
					onDone();
				}
			});
		}

		private void ResetReleaseSequence()
		{
			if (_releaseSeq == null)
			{
				return;
			}
			Action abort = _releaseSeqAbort;
			_releaseSeq.Kill();
			_releaseSeq = null;
			_releaseSeqAbort = null;
			if (abort != null)
			{
				abort();
			}
		}

		public void BeginReleasePop()
		{
			ReleasePopPending = true;
			IsBusy = true;
			if (tapCollider)
			{
				tapCollider.enabled = false;
			}
			_inviting = false;
			RefreshTapableVisual();
		}

		public void PlayReleasePop(Action onComplete)
		{
			if (visualRoot != null && Application.isPlaying && (releaseRiseDuration > 0f || releasePopDuration > 0f))
			{
				ResetReleasePop();
				_bright = true;
				ClearHintDim();
				RefreshTapTint();
				SetMaskInteraction(SpriteMaskInteraction.None);
				int boost = sortingGroup != null ? sortingGroup.sortingOrder : 0;
				SetSortingOrder(releaseSortingBoost + boost);
				_releasePop = DOTween.Sequence();
				if (releaseRiseDuration > 0f)
				{
					_releasePop.Append(visualRoot.DOLocalMoveY(_visualHome.y + releaseRiseHeight, releaseRiseDuration).SetEase(releaseRiseEase));
				}
				if (releasePopDuration > 0f)
				{
					_releasePop.Append(visualRoot.DOScale(_visualBaseScale * releasePopScale, releasePopDuration).SetEase(releasePopEase));
					// fade start value 1f inferred from ResetReleasePop (alpha reset to 1)
					_releasePop.Join(DOTween.To(() => 1f, a => SetAlpha(a), 0f, releasePopDuration).SetEase(releaseFadeEase));
				}
				// TODO(unrecovered): completion lambda body (DAT_091eb980) not read; only onComplete is invoked here, ReleasePopPending is not cleared.
				_releasePop.OnComplete(() =>
				{
					if (onComplete != null)
					{
						onComplete();
					}
				});
				return;
			}
			if (onComplete != null)
			{
				onComplete();
			}
		}

		private void SetAlpha(float alpha)
		{
			foreach (SpriteRenderer r in TintRenderers)
			{
				if (!r)
				{
					continue;
				}
				Color c = r.color;
				c.a = alpha;
				r.color = c;
			}
			if (_slots != null)
			{
				foreach (IngredientRenderSlot slot in _slots)
				{
					if (slot)
					{
						slot.SetAlpha(alpha);
					}
				}
			}
		}

		private void ResetReleasePop()
		{
			if (_releasePop != null)
			{
				_releasePop.Kill();
			}
			_releasePop = null;
			SetAlpha(1f);
			if (visualRoot)
			{
				visualRoot.localPosition = _visualHome;
				visualRoot.localScale = _visualBaseScale;
			}
		}

		public void SetHidden(bool hidden)
		{
			ResetCoverPop();
			_hidden = hidden;
			if (hiddenCover)
			{
				hiddenCover.SetActive(hidden);
			}
			RefreshRenderers();
		}

		private void CaptureCover()
		{
			if (_coverCaptured || !hiddenCover)
			{
				return;
			}
			Transform t = hiddenCover.transform;
			_coverHome = t.localPosition;
			_coverBaseScale = t.localScale;
			_coverRenderers = hiddenCover.GetComponentsInChildren<SpriteRenderer>(true);
			_coverBaseColors = new Color[_coverRenderers.Length];
			for (int i = 0; i < _coverRenderers.Length; i++)
			{
				SpriteRenderer r = _coverRenderers[i];
				if (r)
				{
					_coverBaseColors[i] = r.color;
					_coverRendererSet.Add(r);
				}
				else
				{
					_coverBaseColors[i] = Color.white;
				}
			}
			_coverCaptured = true;
		}

		public void Reveal()
		{
			if (!_hidden)
			{
				return;
			}
			_hidden = false;
			if (!hiddenCover)
			{
				return;
			}
			if (hiddenCover.activeSelf && Application.isPlaying && PlayCoverPop())
			{
				return;
			}
			hiddenCover.SetActive(false);
		}

		private bool PlayCoverPop()
		{
			CaptureCover();
			bool noLift = coverLiftHeight <= 0f || coverLiftDuration <= 0f;
			bool noPunch = coverPunchScale <= 0f || coverPunchDuration <= 0f;
			bool noFade = coverFadeDuration <= 0f || _coverRenderers == null || _coverRenderers.Length == 0;
			if (noLift && noPunch && noFade)
			{
				return false;
			}
			Transform t = hiddenCover.transform;
			ResetCoverPop();
			_coverPop = DOTween.Sequence().SetTarget(t);
			if (!noLift)
			{
				_coverPop.Append(t.DOLocalMoveY(_coverHome.y + coverLiftHeight, coverLiftDuration).SetEase(coverLiftEase));
			}
			if (!noPunch)
			{
				_coverPop.Append(t.DOPunchScale(_coverBaseScale * coverPunchScale, coverPunchDuration, 1, 0.5f));
			}
			if (!noFade)
			{
				float insertAt = noLift ? 0f : coverLiftDuration;
				foreach (SpriteRenderer r in _coverRenderers)
				{
					if (r)
					{
						_coverPop.Insert(insertAt, r.DOFade(0f, coverFadeDuration).SetEase(coverFadeEase));
					}
				}
			}
			_coverPop.OnComplete(() =>
			{
				_coverPop = null;
				ResetCoverVisual();
				if (hiddenCover)
				{
					hiddenCover.SetActive(false);
					RefreshRenderers();
				}
			});
			return true;
		}

		private void ResetCoverPop()
		{
			if (_coverPop != null)
			{
				_coverPop.Kill();
			}
			_coverPop = null;
			ResetCoverVisual();
		}

		private void ResetCoverVisual()
		{
			if (!hiddenCover || !_coverCaptured)
			{
				return;
			}
			Transform t = hiddenCover.transform;
			t.localPosition = _coverHome;
			t.localScale = _coverBaseScale;
			if (_coverRenderers == null || _coverBaseColors == null)
			{
				return;
			}
			for (int i = 0; i < _coverRenderers.Length && i < _coverBaseColors.Length; i++)
			{
				SpriteRenderer r = _coverRenderers[i];
				if (r)
				{
					r.color = _coverBaseColors[i];
				}
			}
		}

		private void RefreshRenderers()
		{
			if (_slots == null)
			{
				return;
			}
			for (int i = 0; i < _slots.Length; i++)
			{
				IngredientRenderSlot s = _slots[i];
				if (!s)
				{
					continue;
				}
				s.SetVisible(!_hidden && i < _usedCount);
			}
		}

		private void RefreshFreezeVisual()
		{
			int turns = _cooldown;
			if (freeze)
			{
				freeze.gameObject.SetActive(turns > 0);
				if (turns > 0)
				{
					Sprite s = CurrentIceSprite();
					if (s)
					{
						freeze.sprite = s;
					}
				}
			}
			if (txtCooldown)
			{
				txtCooldown.gameObject.SetActive(turns > 0);
				if (turns > 0)
				{
					txtCooldown.text = turns.ToString();
				}
			}
		}

		private Sprite CurrentIceSprite()
		{
			if (iceSprites == null || iceSprites.Length == 0)
			{
				return null;
			}
			if (iceSprites.Length == 1)
			{
				return iceSprites[0];
			}
			int total = Math.Max(Math.Max(_freezeTurnsInitial, _cooldown), 1);
			int span = total - 1;
			if (span < 2)
			{
				span = 1;
			}
			float progress = ((float)(total - _cooldown) / span) * (iceSprites.Length - 1);
			int index = (int)Math.Round((double)progress);
			index = Mathf.Clamp(index, 0, iceSprites.Length - 1);
			return iceSprites[index];
		}

		public void SetKey(int keyColor)
		{
			if (keyColor < 0)
			{
				return;
			}
			if (KeyManager.IsReady)
			{
				_warnedKeyManagerLate = false;
				BuildKey(keyColor);
				return;
			}
			_pendingKeyColor = keyColor;
			KeyManager.WhenReady(new Action(BuildPendingKey));
			if (!_warnedKeyManagerLate)
			{
				_warnedKeyManagerLate = true;
				Debug.LogWarning("KeyManager not ready; key will be built when ready" /* literal recovered by guess */, this);
			}
		}

		private void BuildPendingKey()
		{
			if (this != null && _pendingKeyColor >= 0)
			{
				BuildKey(_pendingKeyColor);
				_pendingKeyColor = -1;
			}
		}

		private void BuildKey(int keyColor)
		{
			KeyObject obj = KeyManager.Spawn(keyColor);
			if (!obj)
			{
				return;
			}
			_key = new KeyTag(keyColor, obj);
			obj.SetAnchor(KeyAnchor);
		}

		public KeyTag TakeKey()
		{
			KeyTag key = _key;
			_key = null;
			return key;
		}

		public void DestroyKey()
		{
			_pendingKeyColor = -1;
			if (_key != null)
			{
				KeyObject visual = _key.Visual;
				if (visual)
				{
					visual.Despawn();
				}
			}
			_key = null;
		}

		public Vector3 RopeAnchor(int index)
		{
			Vector3[] corners = LocalCorners();
			if (corners == null || corners.Length == 0)
			{
				return transform.position;
			}
			int idx = Mathf.Clamp(index, 0, corners.Length - 1);
			return transform.TransformPoint(corners[idx]);
		}

		public static void NearestAnchorPair(IngredientConveyorItem a, IngredientConveyorItem b, out Vector3 pointA, out Vector3 pointB)
		{
			pointA = a != null ? a.transform.position : Vector3.zero;
			pointB = b != null ? b.transform.position : Vector3.zero;
			if (a == null || b == null)
			{
				return;
			}
			float best = float.MaxValue;
			for (int i = 0; i < RopeAnchorCount; i++)
			{
				Vector3 ai = a.RopeAnchor(i);
				for (int j = 0; j < RopeAnchorCount; j++)
				{
					Vector3 bj = b.RopeAnchor(j);
					float d = (ai - bj).sqrMagnitude;
					if (d < best)
					{
						best = d;
						pointA = ai;
						pointB = bj;
					}
				}
			}
		}

		public static Vector3 SideAnchor(IngredientConveyorItem item, bool right)
		{
			if (!item)
			{
				return Vector3.zero;
			}
			Vector3 p0 = item.RopeAnchor(right ? 1 : 0);
			Vector3 p1 = item.RopeAnchor(right ? 2 : 3);
			return (p0 + p1) * 0.5f;
		}

		public static Vector3 NearestAnchorTo(IngredientConveyorItem item, Vector3 point)
		{
			if (!item)
			{
				return point;
			}
			Vector3 best = item.transform.position;
			float bestD = float.MaxValue;
			for (int i = 0; i < RopeAnchorCount; i++)
			{
				Vector3 anchor = item.RopeAnchor(i);
				float d = (anchor - point).sqrMagnitude;
				if (d < bestD)
				{
					bestD = d;
					best = anchor;
				}
			}
			return best;
		}

		private Vector3[] LocalCorners()
		{
			if (_localCorners != null)
			{
				return _localCorners;
			}
			Vector3 min;
			Vector3 max;
			if (!TryColliderLocalRect(out min, out max))
			{
				float half = _spriteScale * 0.5f;
				min = new Vector3(-half, -half, 0f);
				max = new Vector3(half, half, 0f);
			}
			min.x -= ropePadding.left;
			min.y -= ropePadding.bottom;
			max.x += ropePadding.right;
			max.y += ropePadding.top;
			_localCorners = new Vector3[]
			{
				new Vector3(min.x, max.y, 0f),
				new Vector3(max.x, max.y, 0f),
				new Vector3(max.x, min.y, 0f),
				new Vector3(min.x, min.y, 0f)
			};
			return _localCorners;
		}

		private bool TryColliderLocalRect(out Vector3 min, out Vector3 max)
		{
			min = Vector3.zero;
			max = Vector3.zero;
			Collider2D col = tapCollider != null ? tapCollider : GetComponent<Collider2D>();
			if (!col)
			{
				return false;
			}
			BoxCollider2D box = col as BoxCollider2D;
			if (box)
			{
				Vector2 half = box.size * 0.5f;
				Vector3 a = ToItemLocal(box.transform, new Vector3(box.offset.x - half.x, box.offset.y - half.y, 0f));
				Vector3 b = ToItemLocal(box.transform, new Vector3(box.offset.x + half.x, box.offset.y + half.y, 0f));
				min = Vector3.Min(a, b);
				max = Vector3.Max(a, b);
				return true;
			}
			Bounds bounds = col.bounds;
			if (bounds.size.sqrMagnitude <= 0f)
			{
				return false;
			}
			Vector3 lo = transform.InverseTransformPoint(bounds.min);
			Vector3 hi = transform.InverseTransformPoint(bounds.max);
			min = Vector3.Min(lo, hi);
			max = Vector3.Max(lo, hi);
			return true;
		}

		private Vector3 ToItemLocal(Transform space, Vector3 point)
		{
			if (space == transform)
			{
				return point;
			}
			return transform.InverseTransformPoint(space.TransformPoint(point));
		}

		public void Init(float spriteScale, IReadOnlyList<IngredientState> items, IReadOnlyList<Sprite> sprites, IReadOnlyList<float> displayScales = null, IReadOnlyList<Vector2> displayOffsets = null)
		{
			_items.Clear();
			if (items != null)
			{
				_items.AddRange(items);
			}
			ReleasePopPending = false;
			TapSuspended = false;
			_deadFlash = false;
			BlockWidth = 1;
			BlockHeight = 1;
			ClearHintDim();
			StopAnim();
			SetTapState(false, false, false);
			_cooldown = 0;
			_freezeTurnsInitial = 0;
			_spriteScale = Mathf.Max(0.01f, spriteScale);
			SetHidden(false);
			_key = null;
			OwnerColumn = null;
			Slot = null;
			_usedCount = Mathf.Min(_items.Count, _slots != null ? _slots.Length : 0);
			for (int i = 0; i < _usedCount; i++)
			{
				IngredientRenderSlot slot = _slots[i];
				if (!slot)
				{
					continue;
				}
				float displayScale = (displayScales != null && i < displayScales.Count) ? displayScales[i] : 1f;
				Vector2 offset = (displayOffsets != null && i < displayOffsets.Count) ? displayOffsets[i] : Vector2.zero;
				Sprite sprite = (sprites != null && i < sprites.Count) ? sprites[i] : null;
				float s = _spriteScale * displayScale;
				IngredientState item = _items[i];
				int count = item != null ? item.amount : 1;
				slot.Show(sprite, count, new Vector3(s, s, 1f), offset);
			}
			RefreshRenderers();
			_localCorners = null;
			RefreshFreezeVisual();
		}
	}
}
