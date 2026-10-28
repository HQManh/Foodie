using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using CakeOrder.BaseUI;
using CakeOrder.CakeOrderSubsystem;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using CakeOrder.LiveOpsImplement;
using CakeOrder.Model;
using CakeOrder.Profile;
using CakeOrder.UI;
using CakeOrderSubsystem.Base;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using IapAdsSystem;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home;

public class HomeControllerCookOrder : SceneMainUI
{
	private enum TabLoadState
	{
		None,
		Loading,
		Loaded
	}

	[Serializable]
	private class TabPageLoadData
	{
		public HomeTabCategory category;

		public UIItemNavHomeTab navButton;

		public AssetReference assetReference;

		public UIHomeTabPage tabPage;

		public Sprite icon;

		[NonSerialized]
		public AsyncOperationHandle<GameObject> opLoad;

		[NonSerialized]
		public TabLoadState tabLoadState;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass130_0
	{
		public HomeControllerCookOrder _003C_003E4__this;

		public int highestMapPlayable;

		public int highestLevelPlayable;

		internal void _003CCheckShowTut_003Eb__0()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass138_0
	{
		public Action onClosed;

		internal void _003CShowTutorialUpgrade_003Eb__0(UIElementAbstract _)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CCheckShowTut_003Ed__130 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private _003C_003Ec__DisplayClass130_0 _003C_003E8__1;

		private HomeUITutorialControl.TutorialType _003CtutToShow_003E5__2;

		private HomeUITutorialControl.TutorialType[] _003C_003E7__wrap2;

		private int _003C_003E7__wrap3;

		private HomeUITutorialControl.TutorialType _003CtutType_003E5__5;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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
	private struct _003CLoadTabPage_003Ed__152 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		public HomeTabCategory tabCategory;

		private TabPageLoadData _003CtabPageData_003E5__2;

		private UnityEngine.Awaitable<GameObject>.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__2;

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
	private struct _003COnClickBtnSetting_003Ed__131 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private TaskAwaiter<UICakeSettingHome> _003C_003Eu__1;

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
	private struct _003COnSetUp_003Ed__52 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private bool _003CisBackFromExtraLevelWin_003E5__2;

		private string _003CtransitionFromMapId_003E5__3;

		private bool _003CisAllRequiredDone_003E5__4;

		private string _003CdelayedTargetMapId_003E5__5;

		private int _003CdelayedTargetLevelIndex_003E5__6;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayMapBgmAsync_003Ed__51 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public string mapId;

		public HomeControllerCookOrder _003C_003E4__this;

		private AssetReference _003Cmusic_003E5__2;

		private AsyncOperationHandle<MapAssetPackSO> _003Chandle_003E5__3;

		private UnityEngine.Awaitable<MapAssetPackSO>.Awaiter _003C_003Eu__1;

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
	private struct _003CRunDelayedMapChange_003Ed__65 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		public Action changeMap;

		private CancellationToken _003Ctoken_003E5__2;

		private UIHomeTabPageMain _003CtabMain_003E5__3;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowEntryPopupAfterDelay_003Ed__140 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__2;

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
	private struct _003CShowPopupNewVersion_003Ed__158 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		public NewVersionPopupData data;

		public Action<UIElementAbstract> onClosed;

		public Action<UIElementAbstract> onDoneAnim;

		private TaskAwaiter<UIPopupNewVersion> _003C_003Eu__1;

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
	private struct _003CShowPopupToolUpgraded_003Ed__157 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		public string toolTitle;

		public Sprite thumb;

		public bool isMaxSpeed;

		public Action<UIElementAbstract> onClosed;

		public Action<UIElementAbstract> onDoneAnim;

		private TaskAwaiter<UIPopupToolUpgraded> _003C_003Eu__1;

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
	private struct _003CShowTutorialUpgrade_003Ed__138 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public Action onClosed;

		public HomeControllerCookOrder _003C_003E4__this;

		private _003C_003Ec__DisplayClass138_0 _003C_003E8__1;

		public HomeUITutorialControl.TutorialType tutorialType;

		private TaskAwaiter<HomeUITutorialControl> _003C_003Eu__1;

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
	private struct _003CSyncBlurWeatherAsync_003Ed__50 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private SingleHomeMapDataCache _003CmapData_003E5__2;

		private int _003ClevelIndex_003E5__3;

		private UnityEngine.Awaitable<MapLevelMetadataConfig>.Awaiter _003C_003Eu__1;

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
	private struct _003CTryShowNewVersionPopup_003Ed__68 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private UnityEngine.Awaitable<NewVersionPopupData>.Awaiter _003C_003Eu__1;

		private TaskAwaiter<bool> _003C_003Eu__2;

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
	private struct _003CTryShowRateGameAtHome_003Ed__139 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		private TaskAwaiter<bool> _003C_003Eu__1;

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
	private struct _003CWaitSelectedMapReady_003Ed__66 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public HomeControllerCookOrder _003C_003E4__this;

		public CancellationToken token;

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

	private const string LocTabShop = "tab_shop";

	private const string LocTabHome = "tab_home";

	private const string LocTabJourney = "tab_journey";

	private const string LocTabPvp = "tab_pvp";

	private const string LocTabAchievement = "tab_achievement";

	private const string LocTabRank = "tab_rank";

	private const string LocTabTeam = "tab_team";

	[Header("Settings")]
	[SerializeField]
	private UIButtonHUD _btnSetting;

	[SerializeField]
	private AssetReference _assetPopupSetting;

	[Header("Counters")]
	[SerializeField]
	private UIHeartCounter _heartCounter;

	[SerializeField]
	private UICurrencyCounter _softCurrencyCounter;

	[SerializeField]
	private UICurrencyCounter _hardCurrencyCounter;

	[SerializeField]
	private UICurrencyCounter _starCounter;

	[SerializeField]
	private AssetReference _assetPopupStarLevelDetails;

	[SerializeField]
	private AssetReference _assetPopupSoftCurrencyExchange;

	[SerializeField]
	private AssetReference _defaultBgmMusic;

	[Header("Toggle UI")]
	[SerializeField]
	private Button _buttonToggleUI;

	[SerializeField]
	private GameObject[] _toggleUIElements;

	[Header("World Space")]
	[SerializeField]
	private HomeSelectionControl _mapDataLoadControl;

	[Tooltip("How long Home stays on the old map - once the loading screen is gone and the map is loaded - before it moves the player on by itself (new map, extra levels, coming soon map).")]
	[SerializeField]
	private float _delayChangeNextMap;

	[Header("Tabs")]
	[SerializeField]
	private UIHomeNavControl _tabGroupCategory;

	[SerializeField]
	private RectTransform _tabContainer;

	[SerializeField]
	private TabPageLoadData[] _tabPagesConfig;

	[SerializeField]
	private UIHomeTabPage.VisualConfig _visualConfigTabPage;

	private UIHomeTabPage.SharedData _tabSharedData;

	private Dictionary<HomeTabCategory, TabPageLoadData> _tabPagesByCategory;

	private Dictionary<HomeTabCategory, int> _tabScreenOrderByCategory;

	private HomeTabCategory _currentShowTab;

	private HomeTabCategory _tabToShow;

	[Header("Popups")]
	[SerializeField]
	private AssetReference _assetPopupToolUpgraded;

	[SerializeField]
	private AssetReference _assetPopupNewVersion;

	[SerializeField]
	private float _delayShowEntryPopup;

	[Header("Tutorial")]
	[SerializeField]
	private AssetReference _assetTutorialUpgradeRestaurant;

	[SerializeField]
	private HomeUITutorialControl.References _tutorialConfig;

	private bool _isNewVersionChecked;

	private readonly Dictionary<string, AsyncOperationHandle<MapAssetPackSO>> _mapAssetPackHandles;

	private const string KeyPrefsMovedToExtraLevels = "home_moved_to_extra_levels_";

	private const string KeyPrefsMovedToComingSoon = "home_moved_to_coming_soon_";

	private const float MaxWaitMapReadySeconds = 10f;

	private EventSystem _inputBlockedEventSystem;

	private bool _inputBlockedEventSystemWasEnabled;

	private const string KeyPrefsCelebratedRequiredDone = "celebrated_required_done_";

	[Header("Live Ops")]
	[SerializeField]
	private UIDragAreaFloatingButton _floatBtnLogin7Days;

	[SerializeField]
	private AssetReference _assetPopupLogin7Days;

	private LiveOpBehavior7DayLogin _login7DaysBehavior;

	[Header("Daily Reward")]
	[SerializeField]
	private UIDragAreaFloatingButton _floatBtnDailyReward;

	[SerializeField]
	private AssetReference _assetPopupDailyReward;

	private LiveOpBehaviorDailyReward _dailyRewardBehavior;

	[Header("Remove Ads")]
	[SerializeField]
	private UIDragAreaFloatingButton _floatBtnRemoveAds;

	[SerializeField]
	private AssetReference _assetPopupRemoveAds;

	[Tooltip("Group in the shop offer rules asset that this button shortcuts to. Leave empty to skip the check and keep the old behaviour.")]
	[SerializeField]
	private string _offerGroupRemoveAds;

	[Header("Starter Pack")]
	[SerializeField]
	private UIDragAreaFloatingButton _floatBtnStarterPack;

	[SerializeField]
	private AssetReference _assetPopupStarterPack;

	[Tooltip("Must match the id on the popup prefab. Kept here as well so the button can ask whether the pack is still on sale without loading the popup first.")]
	[SerializeField]
	private string _shopIdStarterPack;

	[Tooltip("Discounted variant. Buying it retires the button just as the full-price one does.")]
	[SerializeField]
	private string _shopIdStarterPackSale;

	[Tooltip("Fallback only. The live gate is GameProgressScenario > Live Ops Button Unlock Config > starter Pack, so every Home button is tuned from one inspector. This value is used just when the scenario is missing, e.g. a test scene without Managers-System.")]
	[SerializeField]
	private int _levelShowBtnStarterPack;

	[Tooltip("Group in the shop offer rules asset that this button shortcuts to. Leave empty to skip the check and keep the old behaviour.")]
	[SerializeField]
	private string _offerGroupStarterPack;

	[Header("Player Profile")]
	[Tooltip("Avatar button on the top bar. Sits where the Shop button used to.")]
	[SerializeField]
	private UIButtonPlayerProfile _btnPlayerProfile;

	[SerializeField]
	private AssetReference _assetPopupEditProfile;

	private bool _isTabLocked;

	private HomeTabCategory? _tabLockAllowed;

	protected override BannerPosition BannerPos => (BannerPosition)0;

	public HomeTabCategory CurrentTab => HomeTabCategory.COSMETIC_SHOP;

	private static string GetKeyIsPlayedAnimUnlockTab(HomeTabCategory category)
	{
		return null;
	}

	private static string GetTitleTabCategory(HomeTabCategory category)
	{
		return null;
	}

	public UICurrencyCounter GetCurrencyCounter(string currencyId)
	{
		return null;
	}

	private static bool IsCounterOfCurrency(UICurrencyCounter counter, string currencyId)
	{
		return false;
	}

	private int GetTabScreenOrder(HomeTabCategory category)
	{
		return 0;
	}

	protected override void Awake()
	{
	}

	private CookOrderMechanicType TabCategoryToMechanicType(HomeTabCategory category)
	{
		return CookOrderMechanicType.Base;
	}

	public void PlayDefaultBgmMusic()
	{
	}

	private void PlaySelectedMapBgm()
	{
	}

	private void SyncBlurWeather()
	{
	}

	[AsyncStateMachine(typeof(_003CSyncBlurWeatherAsync_003Ed__50))]
	private UniTaskVoid SyncBlurWeatherAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003CPlayMapBgmAsync_003Ed__51))]
	private UniTaskVoid PlayMapBgmAsync(string mapId)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__52))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private static int GetNumRequiredLevels(CakeMapSO mapSO)
	{
		return 0;
	}

	private static int GetLastPlayableMapIndex()
	{
		return 0;
	}

	private static bool IsAllPlayableMapsDone(bool isIncludeExtraLevels)
	{
		return false;
	}

	private static int GetFirstExtraLevelNotWon(CakeMapSO mapSO)
	{
		return 0;
	}

	private static bool TryFindFirstExtraLevelNotWon(out string mapId, out int levelIndex)
	{
		mapId = null;
		levelIndex = default(int);
		return false;
	}

	private static string FindNextComingSoonMapId(int lastPlayableMapIndex)
	{
		return null;
	}

	private void ApplyEndGameRoute(bool isBackFromExtraLevelWin, ref string selectedMapId, ref int selectedLevelIndex, out string delayedTargetMapId, out int delayedTargetLevelIndex)
	{
		delayedTargetMapId = null;
		delayedTargetLevelIndex = default(int);
	}

	[AsyncStateMachine(typeof(_003CRunDelayedMapChange_003Ed__65))]
	private UniTaskVoid RunDelayedMapChange(Action changeMap)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	[AsyncStateMachine(typeof(_003CWaitSelectedMapReady_003Ed__66))]
	private UniTask WaitSelectedMapReady(CancellationToken token)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void SetInputBlocked(bool isBlocked)
	{
	}

	[AsyncStateMachine(typeof(_003CTryShowNewVersionPopup_003Ed__68))]
	private UniTask<bool> TryShowNewVersionPopup()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}

	private static bool IsBackFromExtraLevelWin(out LastPlayData lastPlayed)
	{
		lastPlayed = null;
		return false;
	}

	private void TryCelebrateRequiredLevelsDone(bool isWithBuildingFirework)
	{
	}

	private UIHomeTabPageMain GetTabPageMain()
	{
		return null;
	}

	private static bool IsLiveOpsButtonUnlockedByLevel(LiveOpsButtonType buttonType)
	{
		return false;
	}

	private void SetUpFloatButtonLogin7Days()
	{
	}

	private void OnTakedRewardLogin7Days(int rewardIndex)
	{
	}

	private void RefreshNotiLogin7Days()
	{
	}

	private void UpdateFloatBtnLogin7DaysVisibility()
	{
	}

	private void OnClickFloatBtnLogin7Days()
	{
	}

	private void OnClosedPopupLogin7Days(UIElementAbstract element)
	{
	}

	private void CleanUpFloatButtonLogin7Days()
	{
	}

	private void SetUpFloatButtonDailyReward()
	{
	}

	private void UpdateFloatBtnDailyRewardVisibility()
	{
	}

	private void RefreshNotiDailyReward()
	{
	}

	private void OnClickFloatBtnDailyReward()
	{
	}

	private void OnClosedPopupDailyReward(UIElementAbstract element)
	{
	}

	private void CleanUpFloatButtonDailyReward()
	{
	}

	private void SetUpFloatButtonRemoveAds()
	{
	}

	private void UpdateFloatBtnRemoveAdsVisibility()
	{
	}

	private bool HasOfferGroup(string groupId)
	{
		return false;
	}

	private bool IsOfferGroupOnSale(string groupId)
	{
		return false;
	}

	private string GetOfferGroupWinner(string groupId)
	{
		return null;
	}

	private static bool HasSaleTag(string shopId)
	{
		return false;
	}

	private void OnBuyPackRemoveAds(string shopId, RewardListData rewardList)
	{
	}

	private bool IsReachedLevelShowBtnRemoveAds()
	{
		return false;
	}

	private void OnClickFloatBtnRemoveAds()
	{
	}

	private bool TryAutoShowPopupRemoveAds()
	{
		return false;
	}

	private void OnClosedPopupRemoveAds(UIElementAbstract element)
	{
	}

	private void CleanUpFloatButtonRemoveAds()
	{
	}

	private void SetUpFloatButtonStarterPack()
	{
	}

	private void UpdateFloatBtnStarterPackVisibility()
	{
	}

	private bool IsReachedLevelShowBtnStarterPack()
	{
		return false;
	}

	private void OnBuyPackStarterPack(string shopId, RewardListData rewardList)
	{
	}

	private void OnClickFloatBtnStarterPack()
	{
	}

	private void OnClosedPopupStarterPack(UIElementAbstract element)
	{
	}

	private void CleanUpFloatButtonStarterPack()
	{
	}

	private void SetUpButtonPlayerProfile()
	{
	}

	private void OnClickButtonPlayerProfile()
	{
	}

	private void CleanUpButtonPlayerProfile()
	{
	}

	private void OnUpgradeRewardGranted(string mapId, ItemPackData[] granted)
	{
	}

	protected override void OnShow()
	{
	}

	public void ShowCurrencies(float delay)
	{
	}

	private void ShowProfileSettingLiveOpsButtons(float delay)
	{
	}

	[AsyncStateMachine(typeof(_003CCheckShowTut_003Ed__130))]
	private UniTask CheckShowTut()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003COnClickBtnSetting_003Ed__131))]
	private void OnClickBtnSetting(UIButtonHUD button)
	{
	}

	private void OnClickHardCurrencyCounter()
	{
	}

	public override Task ShowShop(Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null, string itemIdToFocus = null)
	{
		return null;
	}

	private void ShowShopAtGoldPacks()
	{
	}

	private void OnClickSoftCurrencyCounter()
	{
	}

	private void OnClickStarCounter()
	{
	}

	private void OnClickHeartCounter()
	{
	}

	[AsyncStateMachine(typeof(_003CShowTutorialUpgrade_003Ed__138))]
	private UniTask ShowTutorialUpgrade(HomeUITutorialControl.TutorialType tutorialType, Action onClosed = null)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CTryShowRateGameAtHome_003Ed__139))]
	private UniTask TryShowRateGameAtHome()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowEntryPopupAfterDelay_003Ed__140))]
	private UniTask ShowEntryPopupAfterDelay()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	public void SetTabLock(bool isLocked, HomeTabCategory? allowedTab = null)
	{
	}

	private bool IsTabLockedOut(HomeTabCategory category)
	{
		return false;
	}

	private void OnTabChanged(string id)
	{
	}

	private static void PlaySwitchTabSfx(HomeTabCategory from, HomeTabCategory to)
	{
	}

	public void ShowTab(HomeTabCategory category)
	{
	}

	public Transform GetTabNavButton(HomeTabCategory category)
	{
		return null;
	}

	public bool ChangeTabByScreenOffset(int screenOffset)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003CLoadTabPage_003Ed__152))]
	private UniTask LoadTabPage(HomeTabCategory tabCategory)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected override void Update()
	{
	}

	protected override void OnRefreshCurrencyBar()
	{
	}

	private void UpdateCurrencyCounters()
	{
	}

	private static void SetCounterVisible(UICurrencyCounter counter, bool isVisible)
	{
	}

	[AsyncStateMachine(typeof(_003CShowPopupToolUpgraded_003Ed__157))]
	public Task<bool> ShowPopupToolUpgraded(string toolTitle, Sprite thumb, bool isMaxSpeed, Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopupNewVersion_003Ed__158))]
	public Task<bool> ShowPopupNewVersion(NewVersionPopupData data, Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null)
	{
		return null;
	}

	protected override void OnDestroy()
	{
	}

	public override void ShowAdsInter(AdsRuntimeData data, Action onDone, Action onSkipped)
	{
	}
}
