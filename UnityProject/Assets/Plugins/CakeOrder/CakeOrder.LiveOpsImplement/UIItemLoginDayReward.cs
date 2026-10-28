using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.LiveOpsImplement
{

public class UIItemLoginDayReward : MonoBehaviour
{
	public enum State
	{
		Locked,
		Collectible,
		Collected,
		Opened
	}

	[Serializable]
	public class VisualConfig
	{
		public VisualConfigByState stateLocked;

		public VisualConfigByState stateCollectible;

		public VisualConfigByState stateCollected;
	}

	[Serializable]
	public class VisualConfigByState
	{
		public Color colorText;

		[Tooltip("No longer applied - the outline colour is whatever the card's prefab says. Kept so the existing authored values are not silently dropped; setting it does nothing.")]
		public Color colorTextOutline;

		public Sprite spriteFrame;

		public Color colorFrame;

		public Color colorIcon;
	}

	public readonly struct RewardView
	{
		public readonly string rewardId;

		public readonly IRewardItemInfo info;

		public readonly int amount;

		public RewardView(string rewardId, IRewardItemInfo info, int amount)
		{
			this.rewardId = null;
			this.info = null;
			this.amount = 0;
		}
	}

	[CompilerGenerated]
	private sealed class _003CIERevealCover_003Ed__59 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIItemLoginDayReward _003C_003E4__this;

		object IEnumerator<object>.Current
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
		public _003CIERevealCover_003Ed__59(int _003C_003E1__state)
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
	}

	private const string LocDayN = "day_n";

	[SerializeField]
	private Button _btn;

	[SerializeField]
	private TMP_Text _txtDayCount;

	[SerializeField]
	private Image _imgFrame;

	[SerializeField]
	private Image _rewardIcon;

	[SerializeField]
	private TMP_Text _txtRewardAmount;

	[SerializeField]
	private GameObject _checkmark;

	[Tooltip("Art layer on top of the card. Stays on until the day is actually claimed, so a day that just became available is still wrapped - only the badge tells the player to tap it.")]
	[SerializeField]
	private GameObject _lockedCover;

	[Tooltip("Spinning highlight behind the prize on a card that has been opened but not yet taken. It goes out on the claim and the tick replaces it, so it sits under the reward icon.")]
	[FormerlySerializedAs("_glowCollected")]
	[SerializeField]
	private GameObject _glowCollectible;

	[Tooltip("Badge that says this day can be claimed. Must sit above the cover to be visible.")]
	[SerializeField]
	private GameObject[] _notiCollectible;

	[Tooltip("Overlay on a day that has already been taken. Days still to come stay plain, so the week reads as spent behind and open ahead. Optional - leave empty for no overlay.")]
	[FormerlySerializedAs("_collectedCover")]
	[FormerlySerializedAs("_dimNotYetReached")]
	[SerializeField]
	private GameObject _coverCollected;

	private VisualConfig _visualConfig;

	[Header("Cover reveal")]
	[Tooltip("Optional. Lives on the cover and drives it sliding away as it fades. Its Show state is the resting cover, its Hide state the one that has left. Without it the cover simply disappears.")]
	[SerializeField]
	private UIAnimShowHideControl _animLockedCover;

	[Tooltip("Optional rattle before the cover leaves. Leave empty, or set the duration to 0, for no rattle at all. Must be disabled in the prefab - it writes localPosition every frame while enabled.")]
	[SerializeField]
	private LoopAnimVibratePosition _animCoverShake;

	[SerializeField]
	private float _coverShakeDuration;

	private Coroutine _corCoverReveal;

	[Tooltip("Optional. Lives on the overlay and drives it settling in. Its Show state is the overlay in place, its Hide state the one that has left. Without it the overlay simply appears.")]
	[FormerlySerializedAs("_animCollectedCover")]
	[FormerlySerializedAs("_animDimNotYetReached")]
	[SerializeField]
	private UIAnimShowHideControl _animCoverCollected;

	[Header("Several rewards on one day")]
	[Tooltip("Gap between prizes when a day pays more than one. Each extra prize is a copy of the group holding the icon and amount, set beside the first and shrunk only as far as the card needs.")]
	[SerializeField]
	private float _rewardSpacing;

	private readonly List<Image> _rewardIcons = new List<Image>();

	private readonly List<TMP_Text> _rewardAmounts = new List<TMP_Text>();

	private readonly List<string> _rewardIds = new List<string>();

	private readonly List<RectTransform> _extraRewardGroups = new List<RectTransform>();

	private Vector2 _rewardGroupBasePosition;

	private Vector3 _rewardGroupBaseScale;

	private bool _isRewardGroupBaseCaptured;

	private Color _baseColorFrame;

	private Color _baseColorIcon;

	private Color _baseColorText;

	private Color _baseColorTextAmount;

	public State CurrentState { get; private set; }

	public int DayIndex { get; private set; }

	public Transform RewardFlyStartPoint => null;

	private RectTransform RewardGroup => null;

	public event Action<UIItemLoginDayReward> onClicked;

	private void Awake()
	{
	}

	public void Setup(VisualConfig visualConfig, int dayIndex, IRewardItemInfo itemInfo, int amount, State initState)
	{
	}

	public void Setup(VisualConfig visualConfig, int dayIndex, IReadOnlyList<RewardView> rewards, State initState)
	{
	}

	public Transform GetRewardFlyStartPoint(string rewardId)
	{
		return null;
	}

	private void BuildRewardViews(IReadOnlyList<RewardView> rewards)
	{
	}

	private void ForEachReward(Action<Image, TMP_Text> action)
	{
	}

	private void AddRewardView(Image icon, TMP_Text amount, RewardView view)
	{
	}

	private void LayoutRewardGroups(RectTransform group, int count)
	{
	}

	private void AlignGlowToIcon()
	{
	}

	private static bool TryGetOffsetUnder(Transform ancestor, RectTransform icon, out Vector2 offset)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		offset = default(Vector2);
		return false;
	}

	private void ApplyCover(bool isRevealed, bool animateReveal)
	{
	}

	[IteratorStateMachine(typeof(_003CIERevealCover_003Ed__59))]
	private IEnumerator IERevealCover()
	{
		return null;
	}

	private void ApplyCoverCollected(bool isCovered, bool animate)
	{
	}

	public void SetState(State state)
	{
	}

	public void SetState(State state, bool animateReveal)
	{
	}
}
}
