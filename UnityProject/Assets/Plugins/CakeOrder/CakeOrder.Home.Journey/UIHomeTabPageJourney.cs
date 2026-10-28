using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey
{

public class UIHomeTabPageJourney : UIHomeTabPage
{
	[Serializable]
	public class ChapterArt
	{
		public string mapId;

		public Sprite preview;

		[Tooltip("English chapter name shown on the card and the level picker title, e.g. \"Burger\" (source of the UI_Common entry NameLocalizeKey, extracted by CookOrder/Localization/Extract). Empty = the map id.")]
		public string displayName;

		[Tooltip("Localization key (UI_Common) for the name. Empty = \"Chapter_<mapId>\".")]
		public string nameLocalizeKey;

		public string NameLocalizeKey => null;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__42 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageJourney _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	private const string LocComingSoon = "coming_soon";

	private const string LocMapLocked = "toast_map_locked";

	private const string LocLevelLocked = "toast_level_locked";

	[Header("Journey - Data")]
	[Tooltip("TEMPORARY preview aid. 0 uses the remote milestone config. Any other value ignores it and spawns a milestone every N levels. Set back to 0 before shipping.")]
	[SerializeField]
	private int _debugMilestoneEveryNLevels;

	[Tooltip("map_metadata_config can name chapters the build has no assets for. Off: they are skipped. On: they are drawn as locked teasers with the raw map id for a name - only useful once art exists.")]
	[SerializeField]
	private bool _showChaptersWithoutAssets;

	[Header("Journey - Scroll")]
	[SerializeField]
	private ScrollRect _scrollRect;

	[SerializeField]
	private RectTransform _content;

	[SerializeField]
	private UIJourneyChapterSection _prefabSection;

	[SerializeField]
	private UIJourneyMilestoneItem _prefabMilestone;

	[Header("Journey - Layout")]
	[Tooltip("Height of one level step. Every chapter bar is sized from this, so the whole path has a single level density.")]
	[SerializeField]
	private float _pixelsPerLevel;

	[SerializeField]
	private float _paddingTop;

	[SerializeField]
	private float _paddingBottom;

	[Header("Journey - Marker")]
	[SerializeField]
	private UIJourneyMarker _marker;

	[Header("Journey - Nav")]
	[SerializeField]
	private Button _btnTop;

	[SerializeField]
	private Button _btnBottom;

	[SerializeField]
	private float _durationScrollToEnd;

	[SerializeField]
	private Ease _easeScrollToEnd;

	[Header("Journey - Catch-up Run")]
	[Tooltip("Seconds spent per level the bar has to catch up on.")]
	[SerializeField]
	private float _durationRunPerLevel;

	[Tooltip("Ceiling on the run, so coming back after a long session is not a long wait.")]
	[SerializeField]
	private float _durationRunMax;

	[Tooltip("Beat before the run starts, so the player sees the old position first.")]
	[SerializeField]
	private float _delayBeforeRun;

	[SerializeField]
	private Ease _easeRun;

	[Header("Journey - Chapter Art")]
	[Tooltip("Picture on each chapter card, matched by map id rather than by position, so reordering the maps in the database cannot hand a chapter the wrong picture. A map with no entry keeps the placeholder.")]
	[SerializeField]
	private ChapterArt[] _chapterArts;

	[Header("Journey - Level Select")]
	[Tooltip("Opened by tapping a chapter card. Leave empty to disable the picker entirely.")]
	[SerializeField]
	private UIJourneyLevelSelectPopup _prefabLevelSelectPopup;

	[Header("Journey - Claim")]
	[Tooltip("Icons spawned per reward on claim, capped by the reward amount so a 5-gem milestone never spawns more than 5.")]
	[SerializeField]
	private int _numRewardFlyObjects;

	[Tooltip("On = coins and gems fly from the milestone to the Home counter. Off = the claim confirms through the rewards popup, the same way every other reward in the game does.")]
	[SerializeField]
	private bool _useCurrencyFly;

	[Tooltip("Played on a claim that confirms without the rewards popup - the currency fly path. A claim that opens the popup is already covered by the popup's own open sound.")]
	[SerializeField]
	private AudioClip _sfxClaimReward;

	private const float NavEdgeThreshold = 0.02f;

	private readonly List<UIJourneyChapterSection> _sections = new List<UIJourneyChapterSection>();

	private readonly List<JourneyMilestoneRemoteConfig.Milestone> _milestoneSource = new List<JourneyMilestoneRemoteConfig.Milestone>();

	private bool _isBuilt;

	private Tween _tweenScroll;

	private float _displayedCompletedLevels;

	private int _appliedCompletedLevels;

	private Tween _tweenRun;

	private float _lastEffectLevel;

	public event Action onClaimableChanged;

	public int CountClaimableMilestones()
	{
		return 0;
	}

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__42))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void BuildSections()
	{
	}

	private Sprite GetChapterPreview(string mapId)
	{
		return null;
	}

	private string GetChapterName(string mapId)
	{
		return null;
	}

	private ChapterArt FindChapterArt(string mapId)
	{
		return null;
	}

	private void BuildMilestonesFor(UIJourneyChapterSection section, JourneyLevelMap.MapRange range)
	{
	}

	private void ApplySiblingOrder()
	{
	}

	private void BuildMilestoneSource(JourneyLevelMap levelMap)
	{
	}

	private static JourneyMilestoneRemoteConfig.RewardEntry[] DebugRewardsForLevel(JourneyMilestoneRemoteConfig config, int level)
	{
		return null;
	}

	private void ApplyLayout()
	{
	}

	private void RewindToLastSeen()
	{
	}

	private void RefreshItemStates(int completedLevels)
	{
	}

	private void RefreshLayoutDependent()
	{
	}

	private UIJourneyChapterSection SectionForLevel(float globalLevel)
	{
		return null;
	}

	private float GetLevelWorldY(float globalLevel)
	{
		return 0f;
	}

	private static float ToDisplayLevel(float completedLevels)
	{
		return 0f;
	}

	private void FireMilestonesPassed(float fromLevel, float toLevel)
	{
	}

	private float ToContentLocalY(float worldY)
	{
		return 0f;
	}

	private void ApplyDisplayedProgress(float completedLevels, bool isRunning)
	{
	}

	private void StartCatchUpRun()
	{
	}

	private void FinishCatchUpRun()
	{
	}

	private void OnClickClaimMilestone(UIJourneyMilestoneItem item)
	{
	}

	private void GrantRewards(JourneyMilestoneRemoteConfig.Milestone milestone, UIJourneyMilestoneItem item)
	{
	}

	private void OnClickChapterCard(UIJourneyChapterSection section)
	{
	}

	private bool OnPickLevel(string mapId, int levelIndex)
	{
		return false;
	}

	private void ScrollTo(float verticalNormalized)
	{
	}

	private void OnScrollValueChanged(Vector2 _)
	{
	}

	private void RefreshNavButtons()
	{
	}

	private void ScrollToMarker()
	{
	}

	private void CenterOnContentLocalY(float contentLocalY)
	{
	}
}
}
