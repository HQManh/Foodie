using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using AnhPD.FoodOrder;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.InGame.UI;
using CakeOrder.UI;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using IapAdsSystem;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame
{

public class UIInLevelCakeOrder : SceneMainUI
{
	[Serializable]
	public class BoosterUIData
	{
		public string boosterId;

		public BoosterSaveMeConfig boosterConfig;

		public bool isUnlocked;

		public BoosterType effectType;
	}

	[Serializable]
	public class VisualConfig
	{
		public float delayShowHUD;

		public float delayBetweenShowHUD;
	}

	[Serializable]
	public class BoosterPlacement
	{
		public CakeCurrencySO currencySO;

		public UIButtonHUDBooster button;

		public AssetReference assetPopup;

		public AssetReference assetAnimUI;

		public GameObject fxUseBooster;

		public SfxAndHapticTrigger sfxUseBooster;

		public BoosterUIData data;

		[NonSerialized]
		public bool isCanUse;

		public string adsPosTrackingKey => null;
	}

	[Serializable]
	public class IntroNewIngredientSlotMechanicsConfig
	{
		public IngredientSlotStatus slotStatus;

		public AssetReference assetIntroNewObstacle;
	}

	[Serializable]
	public class IntroNewGridMechanicsConfig
	{
		public GridEffectType gridEffectType;

		public AssetReference assetIntroNewObstacle;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass105_0
	{
		public UIInLevelCakeOrder _003C_003E4__this;

		public CakeLevelEndResultData resultData;

		public UIEndGameBase popup;

		public bool commandPending;

		public bool isWonLevel;

		internal void _003CShowEndGame_003Eb__1()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass107_0
	{
		public UIInLevelCakeOrder _003C_003E4__this;

		public bool isSpeedUp;

		public Action<UIPopupBoosterSaveMeBase.ResultData> onSuccess;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass108_0
	{
		public Action onDone;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass109_0
	{
		public Action onDone;
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass88_0
	{
		public string boosterId;

		public UIInLevelCakeOrder _003C_003E4__this;

		public Action<string, UIPopupBoosterSaveMeBase.ResultData> onSuccess;

		public Action onCanceled;

		internal bool _003CShowPopupBooster_003Eb__0(BoosterPlacement b)
		{
			return false;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CConfirmLoseHeartThen_003Ed__86 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		public Action onConfirmed;

		public UICakePopup callerPopup;

		private TaskAwaiter<UIPopupCakeConfirmDialog> _003C_003Eu__1;

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
	private struct _003CLoadWinLogoAsync_003Ed__101 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<UIPopupWinLogo> _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		private TaskAwaiter<UIPopupWinLogo> _003C_003Eu__1;

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
	private struct _003COnSetUp_003Ed__79 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private TaskAwaiter<Sprite> _003C_003Eu__2;

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
	private struct _003CShowEndGame_003Ed__105 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		public CakeLevelEndResultData resultData;

		private _003C_003Ec__DisplayClass105_0 _003C_003E8__1;

		private bool _003CisWin_003E5__2;

		private TaskAwaiter<UIEndGameBase> _003C_003Eu__1;

		private UnityEngine.Awaitable<UIPopupWinLogo>.Awaiter _003C_003Eu__2;

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
	private struct _003CShowPauseMenu_003Ed__85 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		private TaskAwaiter<UICakePauseMenuInGame> _003C_003Eu__1;

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
	private struct _003CShowPopUpSaveMe_003Ed__107 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		public Action<UIPopupBoosterSaveMeBase.ResultData> onSuccess;

		public UIPopupBoosterSaveMeBase.ConfigData param;

		public SaveMeType saveMeType;

		private _003C_003Ec__DisplayClass107_0 _003C_003E8__1;

		public Action onCanceled;

		private TaskAwaiter<UIPopupBoosterSaveMeBase> _003C_003Eu__1;

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
	private struct _003CShowPopupAlert_003Ed__109 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public Action onDone;

		public UIInLevelCakeOrder _003C_003E4__this;

		public AlertType type;

		public bool autoHide;

		public Action<UIPopupAlert> onCreated;

		private _003C_003Ec__DisplayClass109_0 _003C_003E8__1;

		private TaskAwaiter<UIPopupAlert> _003C_003Eu__1;

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
	private struct _003CShowPopupBooster_003Ed__88 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public string boosterId;

		public UIInLevelCakeOrder _003C_003E4__this;

		public Action<string, UIPopupBoosterSaveMeBase.ResultData> onSuccess;

		public Action onCanceled;

		private _003C_003Ec__DisplayClass88_0 _003C_003E8__1;

		private BoosterPlacement _003Cbooster_003E5__2;

		private UIPopupBoosterSaveMeBase.ConfigData _003CconfigData_003E5__3;

		private TaskAwaiter<UIPopupCakeConfirmUseBooster> _003C_003Eu__1;

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
	private struct _003CShowPopupNewBooster_003Ed__94 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public UIInLevelCakeOrder _003C_003E4__this;

		public CakeCurrencySO boosterSO;

		public int amount;

		public Action<UIElementAbstract> onDone;

		private BoosterPlacement _003Cplacement_003E5__2;

		private TaskAwaiter<UIPopupNewBooster> _003C_003Eu__1;

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
	private struct _003CShowTutorial_003Ed__108 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public Action onDone;

		public UIInLevelCakeOrder _003C_003E4__this;

		public InGameUITutorialControl.TutorialType tutType;

		public int index;

		private _003C_003Ec__DisplayClass108_0 _003C_003E8__1;

		private TaskAwaiter<InGameUITutorialControl> _003C_003Eu__1;

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

	private const string LocBoosterUnlockDay = "toast_booster_unlock_day";

	private const string LocSpeedUpConfirm = "speed_up_confirm";

	private const string SpeedUpBoosterId = "speed_up";

	private const int KeyLockBoosterUsableState = 51;

	private const int KeyLockBoosterWhileUsingOtherBooster = 79;

	private const int KeyLockBoosterEndGame = 83;

	private LevelBaseCakeOrderAbstract _levelBase;

	private LevelPlayLoadAndSetupControl _levelPlayControl;

	[Header("Visual Config")]
	[SerializeField]
	private VisualConfig _visualConfig;

	[SerializeField]
	private UIInLevelGeneralReferences _generalRefs;

	[Header("Pause")]
	[SerializeField]
	private UIButtonHUD _btnPause;

	[SerializeField]
	private AssetReference _assetPopupPause;

	[SerializeField]
	private AssetReference _assetPopupConfirmQuit;

	[Header("HUD")]
	[SerializeField]
	private UIComboBar _comboBar;

	[SerializeField]
	private UIInLevelHUDPuzzleStyle _HUDNormalMode;

	[SerializeField]
	private Image _boosterPanelBg;

	[SerializeField]
	private UIPopupBoosterSaveMeBase _popupSpeedUpRechargePrefab;

	private bool _isSpeedUpRechargePopupOpen;

	private AsyncOperationHandle<Sprite> _opLoadBoosterPanel;

	[Header("Toggle UI")]
	[SerializeField]
	private Button _buttonToggleUI;

	[SerializeField]
	private GameObject[] _toggleUIElements;

	[Header("Save Me")]
	[SerializeField]
	private AssetReference _assetPopupSaveMeOutOfServeSlot;

	[SerializeField]
	private AssetReference _assetPopupSaveMeCustomerOutOfTime;

	[SerializeField]
	private AssetReference _assetPopupSaveMeOutOfMove;

	[Header("Boosters")]
	[SerializeField]
	private BoosterPlacement[] _boosters;

	[SerializeField]
	private UIElementWithAnim _boosterPanel;

	[SerializeField]
	private AssetReference _assetPopupConfirmUseBooster;

	[SerializeField]
	private AssetReference _assetPopupNewBooster;

	[SerializeField]
	private string _boosterIdForAddMoreServeSlot;

	private bool _isBoosterVisible;

	private int _tutIndexToShow;

	[Header("Win Lose")]
	[SerializeField]
	private AssetReference _assetPopupEndWin;

	[SerializeField]
	private AssetReference _assetPopupEndLose;

	[Tooltip("Win logo celebration (UIPopupWinLogo) shown before the Win popup, which opens once it closes. Empty: the Win popup opens straight away.")]
	[SerializeField]
	private AssetReference _assetPopupWinLogo;

	[Tooltip("Win firework, spawned under the container below when the logo asks for it. It lives here, not in a popup, so it keeps playing while the logo hands over to the Win popup.")]
	[SerializeField]
	private AssetReference _assetVfxWinFirework;

	[SerializeField]
	private RectTransform _containerWinFirework;

	private AsyncOperationHandle<GameObject> _opVfxWinFirework;

	private bool _isWinFireworkRequested;

	[Header("Tut Combo")]
	[SerializeField]
	private AssetReference _assetTut;

	[SerializeField]
	private InGameUITutorialControl.References _tutRefs;

	[SerializeField]
	private IntroNewIngredientSlotMechanicsConfig[] _introNewObstacleConfigs;

	[SerializeField]
	private IntroNewGridMechanicsConfig[] _introNewGridConfigs;

	[SerializeField]
	private AssetReference _assetIntroLinkedSlotMechanics;

	[SerializeField]
	private AssetReference _assetIntroCombinedSlotMechanics;

	[SerializeField]
	private AssetReference _assetPopupAlert;

	private float _lastTimeClick;

	private const float CooldownClick = 1f;

	[SerializeField]
	private UIMoneyEffect moneyEffect;

	private int _numBoosterSaveMeRewardAdsWatched;

	private bool _skipNextInter;

	public static UIInLevelCakeOrder InstanceUIInLevel => MonoSingleton<SceneMainUI>.Instance as UIInLevelCakeOrder;

	public UIComboBar ComboBar => null;

	protected override BannerPosition BannerPos => (BannerPosition)0;

	public UIMoneyEffect MoneyEffect => null;

	public bool CanWatchBoosterOrSaveMeRewardAds => false;

	public BoosterPlacement GetBoosterPlacement(string boosterId)
	{
		return null;
	}

	private BoosterPlacement GetBoosterPlacement(BoosterType effectType)
	{
		return null;
	}

	private static string GetKeyIsDoneIntroNewSlotMechanics(IngredientSlotStatus slotStatus)
	{
		return null;
	}

	private static string GetKeyIsDoneIntroNewGridMechanic(GridEffectType gridEffectType)
	{
		return null;
	}

	private static string GetKeyIsDoneIntroNewIngredient(string mapId, string ingredientId)
	{
		return null;
	}

	private static string GetKeyIsDoneIntroLinkedSlotMechanics()
	{
		return null;
	}

	private static string GetKeyIsDoneIntroCombinedSlotMechanics()
	{
		return null;
	}

	private bool IsDoneIntroNewSlotMechanics(IngredientSlotStatus slotStatus)
	{
		return false;
	}

	private bool IsDoneIntroNewGridMechanic(GridEffectType gridEffectType)
	{
		return false;
	}

	private bool IsDoneIntroNewIngredient(string mapId, string ingredientId)
	{
		return false;
	}

	private bool IsDoneIntroLinkedSlotMechanics()
	{
		return false;
	}

	private bool IsDoneIntroCombinedSlotMechanics()
	{
		return false;
	}

	private void SetDoneIntroNewSlotMechanics(IngredientSlotStatus slotStatus)
	{
	}

	private void SetDoneIntroNewGridMechanic(GridEffectType gridEffectType)
	{
	}

	private void SetDoneIntroNewItem(string mapId, string ingredientId)
	{
	}

	private void SetDoneIntroLinkedSlotMechanics()
	{
	}

	private void SetDoneIntroCombinedSlotMechanics()
	{
	}

	protected override void Awake()
	{
	}

	public void SetupReferences(LevelPlayLoadAndSetupControl levelPlayControl, LevelBaseCakeOrderAbstract levelBase, InGameComboMechanicControl comboControl)
	{
	}

	protected override void OnRefreshCurrencyBar()
	{
	}

	private void OnUseMoreServeSlot()
	{
	}

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__79))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void ShowAllUI()
	{
	}

	private void HideAllUI()
	{
	}

	private void HideAllUIImmediate()
	{
	}

	public void SetUpBooster(Dictionary<string, BoosterUIData> data)
	{
	}

	protected override void OnShow()
	{
	}

	[AsyncStateMachine(typeof(_003CShowPauseMenu_003Ed__85))]
	public void ShowPauseMenu()
	{
	}

	[AsyncStateMachine(typeof(_003CConfirmLoseHeartThen_003Ed__86))]
	private void ConfirmLoseHeartThen(UICakePopup callerPopup, Action onConfirmed)
	{
	}

	private static string GetKeyCountNumFreeBoosterUsed(string boosterId)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopupBooster_003Ed__88))]
	public void ShowPopupBooster(string boosterId, Action<string, UIPopupBoosterSaveMeBase.ResultData> onSuccess = null, Action onCanceled = null)
	{
	}

	private void ApplyUseBooster(string boosterId, UIPopupBoosterSaveMeBase.ResultData result)
	{
	}

	private void SetBlockAllBooster(int id, bool isBlocked)
	{
	}

	private void ShowSpeedUpRechargePopup()
	{
	}

	private void OnNeedShowShopFromBoosterOrSaveMe(string itemId)
	{
	}

	public void ShowTutorial(Action onDone)
	{
	}

	[AsyncStateMachine(typeof(_003CShowPopupNewBooster_003Ed__94))]
	public Task ShowPopupNewBooster(CakeCurrencySO boosterSO, int amount, Action<UIElementAbstract> onDone = null)
	{
		return null;
	}

	private void OnClickMoreHardCurrencyCounter()
	{
	}

	private void OnClickMoreSoftCurrencyCounter()
	{
	}

	private void OnClickMoreHeartCounter()
	{
	}

	private void OnFastForwardEndgame(float timeScale)
	{
	}

	private void OnFastForwardEndgameEnded()
	{
	}

	private void OnBoosterUsableChanged(BoosterType boosterType, bool isUsable)
	{
	}

	[AsyncStateMachine(typeof(_003CLoadWinLogoAsync_003Ed__101))]
	private UniTask<UIPopupWinLogo> LoadWinLogoAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<UIPopupWinLogo>);
	}

	private void ShowWinLogo(UIPopupWinLogo logo, Action onClosed)
	{
	}

	private void PrepareWinFirework()
	{
	}

	private void PlayWinFirework()
	{
	}

	[AsyncStateMachine(typeof(_003CShowEndGame_003Ed__105))]
	public void ShowEndGame(CakeLevelEndResultData resultData)
	{
	}

	private static string GetNextMapIdIfLastRequiredLevel(CakeLevelInitData initData)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopUpSaveMe_003Ed__107))]
	public Task ShowPopUpSaveMe(SaveMeType saveMeType, UIPopupBoosterSaveMeBase.ConfigData param, Action<UIPopupBoosterSaveMeBase.ResultData> onSuccess, Action onCanceled)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowTutorial_003Ed__108))]
	private Task ShowTutorial(InGameUITutorialControl.TutorialType tutType, int index, Action onDone = null)
	{
		return null;
	}

	public async Task ShowPopupAlert(AlertType type, bool autoHide, Action<UIPopupAlert> onCreated, Action onDone = null)
	{
		UIPopupAlert alert = await LoadPopup<UIPopupAlert>(_assetPopupAlert);
		if (alert == null)
		{
			onDone?.Invoke();
			return;
		}
		onCreated?.Invoke(alert);
		alert.SetData(type, autoHide);
		if (!alert.IsShowing)
		{
			alert.Show(delegate
			{
				onDone?.Invoke();
			});
		}
	}

	public void ShowBoosterOrSaveMeRewardAds(AdsRuntimeData data, Action onDone, Action onCanceled)
	{
	}

	public override void ShowAdsInter(AdsRuntimeData data, Action onDone, Action onSkipped)
	{
	}

	public override void ShowAdsReward(AdsRuntimeData data, Action onDone, Action onCanceled)
	{
	}

	protected override void ProcessCustomPopup(UICakePopup popup)
	{
	}

	protected override void OnDestroy()
	{
	}
}
}
