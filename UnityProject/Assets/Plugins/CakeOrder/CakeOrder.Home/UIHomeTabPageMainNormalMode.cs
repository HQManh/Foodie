using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using CakeOrder.UI;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home
{

public class UIHomeTabPageMainNormalMode : UIHomeTabPageMainSubModeBase
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__50 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainNormalMode _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CUpdateAndShowProgress_003Ed__73 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainNormalMode _003C_003E4__this;

		public bool immediate;

		private UnityEngine.Awaitable<(MapLevelMetadataConfig, MapUpgradeConfig, MapToolConfig)>.Awaiter _003C_003Eu__1;

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

	[Header("Play")]
	[SerializeField]
	private UIButtonHUD _btnPlay;

	[SerializeField]
	private UIButtonHUD _btnCompleted;

	[SerializeField]
	private Image _imgBtnPlay;

	[SerializeField]
	private Sprite[] _imgBtnPlayByDifficulty;

	[Tooltip("Replaces Play on an extra level still locked by the map-ahead rule. Unassigned = Play stays and only toasts the reason.")]
	[SerializeField]
	private UIButtonHUD _btnLockedByMapAhead;

	[Tooltip("Top text of the locked button, in the spot of Play's day count.")]
	[SerializeField]
	private TextMeshProUGUI _txtLockedByMapAheadTitle;

	[Tooltip("Main text of the locked button.")]
	[SerializeField]
	private TextMeshProUGUI _txtLockedByMapAhead;

	[Tooltip("Replaces Play the first time the map's extra levels are open; tapping it sets the map's flag and Play takes over. Unassigned = no unlock step.")]
	[SerializeField]
	private UIButtonHUD _btnUnlockExtraLevel;

	[SerializeField]
	private TextMeshProUGUI _txtUnlockExtraLevel;

	[Tooltip("Tag on the Play button, on only while the selected level is an extra level (past the map's required levels).")]
	[SerializeField]
	private GameObject _frameTagExtraLevel;

	private const string LocDayN = "day_n";

	private const string LocExtraDay = "extra_day";

	private const string LocExtraDayLocked = "extra_day_locked";

	private const string LocUnlockExtraDays = "btn_unlock_extra_days";

	// Values read from the static constructor (string literals decoded from the metadata).
	private static readonly string[] LocDifficulties = new string[3] { "", "difficulty_hard", "difficulty_super_hard" };

	[SerializeField]
	private TextMeshProUGUI _txtDayCount;

	[SerializeField]
	private TextMeshProUGUI _txtDifficulty;

	[SerializeField]
	private float _dayCountPosYOnNoDifficulty;

	[SerializeField]
	private float _dayCountPosYOnHaveDifficulty;

	[SerializeField]
	private TutorialReferenceGroupUI _tutRefBtnPlay;

	[SerializeField]
	private UIButtonHUD _btnWeather;

	[SerializeField]
	private Image _imgWeather;

	[Header("Upgrade")]
	[SerializeField]
	private UIButtonHUD _btnUpgrade;

	[SerializeField]
	private RectTransform _btnUpgradeSectionProgress;

	[SerializeField]
	private RectTransform _btnUpgradeSectionMaxed;

	[SerializeField]
	private TextMeshProUGUI _txtMaxed;

	[SerializeField]
	private TextMeshProUGUI _txtAreaTitle;

	[SerializeField]
	private string _areaTitleFormat;

	[Tooltip("Optional - the progress bar / chest nested in the Upgrade button. Claiming happens in the Building section of Details mode.")]
	[SerializeField]
	private UIMapBuildingProgress _buildingProgress;

	[SerializeField]
	private GameObject _notiUpgrade;

	[SerializeField]
	private TutorialReferenceGroupUI _tutRefBtnUpgrade;

	[Tooltip("Replaces Upgrade on a map whose upgrades are not open: CakeMapSO.allowUpgrade off (toasts 'next update'), or the previous map not upgraded to its last base yet (toasts which map).")]
	[SerializeField]
	private UIButtonHUD _btnUpgradeLocked;

	private bool _isClickedUpgradeButton;

	private const string LocUpgradeNextUpdate = "upgrade_available_next_update";

	private const string LocUpgradeLockedByPrevMap = "upgrade_locked_prev_map";

	[Header("Other")]
	[SerializeField]
	private SwipeDetectUI _swipeUI;

	[SerializeField]
	private Image _imgDimGradient;

	[SerializeField]
	private Color[] _dimGradientByWeathers;

	private Tween _tweenFadeImgDimGradient;

	public TutorialReferenceGroupUI TutRefBtnPlay => null;

	public TutorialReferenceGroupUI TutRefBtnUpgrade => null;

	public event Action onClickPlay;

	public event Action onGoToDetailsMode;

	private void Awake()
	{
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__50))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void OnDestroy()
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElementImmediate()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void OnClickPlay(UIButtonHUD button)
	{
	}

	private void OnClickLockedByMapAhead(UIButtonHUD button)
	{
	}

	private void OnClickUnlockExtraLevel(UIButtonHUD button)
	{
	}

	private bool IsSelectedLevelWaitingExtraUnlock()
	{
		return false;
	}

	private void ShowOnlyLevelButton(UIButtonHUD target, float delay)
	{
	}

	private bool TryGetSelectedLevelLockText(out string lockText)
	{
		lockText = null;
		return false;
	}

	private void OnClickUpgrade(UIButtonHUD button)
	{
	}

	private void OnClickUpgradeLocked(UIButtonHUD button)
	{
	}

	private bool IsSelectedMapUpgradeLockedByPrevMap(out string previousMapId)
	{
		previousMapId = null;
		return false;
	}

	private bool IsSelectedMapUpgradeOpen()
	{
		return false;
	}

	private bool IsSelectedMapUpgradeAllowed()
	{
		return false;
	}

	private void TryHandleUpgradeAction()
	{
	}

	public void TryClaimFullUpgradeReward()
	{
	}

	private void OnClickGoToDetailsMode()
	{
	}

	private void OnSelectedMapChanged()
	{
	}

	private void OnHomeBuildingItemBought(string mapId, string sectionId)
	{
	}

	private void OnMapBuildingUnlocked(string mapId)
	{
	}

	[AsyncStateMachine(typeof(_003CUpdateAndShowProgress_003Ed__73))]
	private UniTask UpdateAndShowProgress(bool immediate = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void RefreshUpgradeButtonState(MapUpgradeConfig upgradeConfig, string mapId)
	{
	}

	private void RefreshNotiUpgrade()
	{
	}

	private void OnCurrencyItemChanged(string itemId, int oldValue, int newValue)
	{
	}

	private void OnClaimedFullUpgradeMapReward(string mapId)
	{
	}

	private void OnSelectedLevelChanged()
	{
	}
}
}
