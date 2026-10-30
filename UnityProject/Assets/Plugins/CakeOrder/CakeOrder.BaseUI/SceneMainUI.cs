using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using CakeOrder.DataSO;
using CakeOrder.InGame;
using CakeOrder.PopupMinigame;
using CakeOrder.RateGame;
using CakeOrder.Shop;
using CakeOrder.UI;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using IapAdsSystem;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.EventSystems;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utilities;

namespace CakeOrder.BaseUI
{

public abstract class SceneMainUI : MonoSingleton<SceneMainUI>
{
	protected class ElementSpawnCache
	{
		public AsyncOperationHandle<GameObject> opLoad;

		public UICakePopup element;

		public ElementSpawnCache(AssetReference asset)
		{
			opLoad = asset.LoadAssetAsync<GameObject>();
		}
	}

	private class AddressElementSpawnCache
	{
		public AsyncOperationHandle<GameObject> opLoad;

		public UICakePopup element;

		public AddressElementSpawnCache(string address)
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass22_0
	{
		public SceneMainUI _003C_003E4__this;

		public Action<bool> onClosed;

		public UIRateGamePopup popup;

		internal void _003CTryShowRateGamePopup_003Eb__0(UIElementAbstract _)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadPopup_003Ed__12<T> : IAsyncStateMachine where T : UICakePopup
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		public AssetReference asset;

		public SceneMainUI _003C_003E4__this;

		public RectTransform customParent;

		public Action<T> onCreated;

		private ElementSpawnCache _003Ccache_003E5__2;

		private TaskAwaiter<GameObject> _003C_003Eu__1;

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
	private struct _003CLoadPopupByAddress_003Ed__13<T> : IAsyncStateMachine where T : UICakePopup
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		public string address;

		public SceneMainUI _003C_003E4__this;

		public RectTransform customParent;

		public Action<T> onCreated;

		private AddressElementSpawnCache _003Ccache_003E5__2;

		private TaskAwaiter<GameObject> _003C_003Eu__1;

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
	private struct _003CSetUp_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

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
	private struct _003CShowCustomPopup_003Ed__62<T> : IAsyncStateMachine where T : UICakePopup
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public AssetReference asset;

		public Action<T> onBeforeShow;

		public Action<UIElementAbstract> onClosed;

		public Action<UIElementAbstract> onDoneAnimShow;

		private TaskAwaiter<T> _003C_003Eu__1;

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
	private struct _003CShowPopupHeartRefill_003Ed__66 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public Action onSuccess;

		public Action<UIElementAbstract> onClosed;

		public Action<UIElementAbstract> onDoneAnim;

		private TaskAwaiter<UIPopupHeartRefill> _003C_003Eu__1;

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
	private struct _003CShowPopupInfoNewItem_003Ed__68 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public IRewardItemInfo itemInfos;

		public int amount;

		public Action<UIElementAbstract> onClosed;

		private TaskAwaiter _003C_003Eu__1;

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
	private struct _003CShowPopupInfoNewItem_003Ed__69 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public List<IRewardItemInfo> itemInfos;

		public List<int> amounts;

		public Action<UIElementAbstract> onClosed;

		private TaskAwaiter<UIPopupNewItem> _003C_003Eu__1;

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
	private struct _003CShowPopupMinigame_003Ed__61 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public Action<UIPopupMinigameCookOrder> onCreated;

		public UIPopupMinigameConfig config;

		public Action<UIElementAbstract> onDoneAnim;

		private TaskAwaiter<UIPopupMinigameCookOrder> _003C_003Eu__1;

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
	private struct _003CShowPopupRewards_003Ed__59 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public RewardListData rewardList;

		public Action<UIElementAbstract> onClosed;

		public Action<UIElementAbstract> onDoneAnim;

		private TaskAwaiter<UIPopupListRewardClaimed> _003C_003Eu__1;

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
	private struct _003CShowShop_003Ed__58 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public string itemIdToFocus;

		public Action<UIElementAbstract> onClosed;

		public Action<UIElementAbstract> onDoneAnim;

		private TaskAwaiter<UICookOrderShop> _003C_003Eu__1;

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
	private struct _003CTryShowRateGamePopup_003Ed__22 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		public SceneMainUI _003C_003E4__this;

		public Action<bool> onClosed;

		public RatePopupPosition position;

		public int currentGlobalLevel;

		public bool isWonLevel;

		private _003C_003Ec__DisplayClass22_0 _003C_003E8__1;

		private RatePopupAttempt _003Cattempt_003E5__2;

		private bool _003Cshown_003E5__3;

		private TaskAwaiter<UIRateGamePopup> _003C_003Eu__1;

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

	[SerializeField]
	private Canvas _canvas;

	[SerializeField]
	private EventSystem _eventSystem;

	private Dictionary<AssetReference, ElementSpawnCache> _dictCacheUIElements = new Dictionary<AssetReference, ElementSpawnCache>();

	private readonly Dictionary<string, AddressElementSpawnCache> _dictCacheUIElementsByAddress = new Dictionary<string, AddressElementSpawnCache>();

	private Dictionary<UICakePopup, UICakePopup> _dictCacheUIElementsByPrefab = new Dictionary<UICakePopup, UICakePopup>();

	[Header("Popups")]
	[SerializeField]
	private RectTransform _containerPopups;

	[SerializeField]
	private RectTransform _containerMinigame;

	private Stack<UICakePopup> _popupStack = new Stack<UICakePopup>();

	private bool _rateGamePopupRequestInFlight;

	private bool _isInProcessClosingAllPopups;

	private bool _isMutingGameplaySfx;

	[Header("Popup Backdrop")]
	[Tooltip("What a popup set to Auto gets in this scene.")]
	[SerializeField]
	private BlurBackdropMode _defaultBackdropMode;

	[Tooltip("BlurBackdrop prefab instance in this canvas, right under the top bar. Holds the blur / dim settings and the tints per weather.")]
	[SerializeField]
	private UIPopupBlurBackdrop _blurBackdrop;

	[Tooltip("Fade used by every popup's visible canvas group (covered by a popup above / hold-to-view).")]
	[SerializeField]
	private PopupTransitionConfigSO _popupTransition;

	private bool _isBackdropTapHooked;

	[SerializeField]
	private ObjectStackPoolControl<UIToastMessage> _poolToastMessage;

	[Header("Common Popup")]
	[SerializeField]
	private AssetReference _assetShop;

	[SerializeField]
	private RectTransform _shopContainer;

	[SerializeField]
	private AssetReference _assetPopupRewards;

	[Tooltip("Opened instead of the popup above when the list was paid for - RewardListData.isPurchase. A purchase congratulates the player while a claim just hands over what was earned, and the two drifted far enough apart in art that one prefab could no longer say both. Leave this empty and a purchase falls back to the popup above, which is how the game behaved before the two were split.")]
	[SerializeField]
	private AssetReference _assetPopupRewardsPurchased;

	[SerializeField]
	private AssetReference _assetPopupMinigame;

	[Header("Heart Refill")]
	[SerializeField]
	private AssetReference _assetPopupHeartRefill;

	[Header("Intro New Item")]
	[SerializeField]
	private AssetReference _assetRewardNewItem;

	private const string LocToastAdsNotAvailable = "toast_require_internet";

	private const string LocToastAdsShowFailed = "toast_ad_not_ready";

	public Canvas Canvas => _canvas;

	public EventSystem EventSystem => _eventSystem;

	public UICakePopup TopPopup
	{
		get
		{
			while (_popupStack.Count > 0 && _popupStack.Peek() == null)
			{
				_popupStack.Pop();
			}
			return (_popupStack.Count > 0) ? _popupStack.Peek() : null;
		}
	}

	public UIPopupBlurBackdrop BlurBackdrop => null;

	public PopupTransitionConfigSO PopupTransition => null;

	public UICakePopup TopShowingPopup
	{
		get
		{
			UICakePopup top = TopPopup;
			return (top != null && top.IsShowing) ? top : null;
		}
	}

	protected bool? TopPopupWantsCurrency => null;

	protected virtual BannerPosition BannerPos => (BannerPosition)0;

	protected T LoadPopupByPrefab<T>(T prefab, RectTransform customParent = null, Action<T> onCreated = null) where T : UICakePopup
	{
		if (prefab == null)
		{
			return null;
		}
		if (_dictCacheUIElementsByPrefab.TryGetValue(prefab, out var cached) && cached != null)
		{
			return (T)cached;
		}
		RectTransform parent = (customParent != null) ? customParent : _containerPopups;
		T popup = UnityEngine.Object.Instantiate(prefab, parent);
		_dictCacheUIElementsByPrefab[prefab] = popup;
		popup.SetUpOnCreate(this);
		onCreated?.Invoke(popup);
		return popup;
	}

	protected async Task<T> LoadPopup<T>(AssetReference asset, RectTransform customParent = null, Action<T> onCreated = null) where T : UICakePopup
	{
		if (asset == null || !asset.RuntimeKeyIsValid())
		{
			return null;
		}
		if (!_dictCacheUIElements.TryGetValue(asset, out var cache))
		{
			cache = new ElementSpawnCache(asset);
			_dictCacheUIElements[asset] = cache;
		}
		if (cache.element != null)
		{
			return (T)cache.element;
		}
		GameObject prefabObject = await cache.opLoad.Task;
		if (this == null)
		{
			return null;
		}
		if (cache.element != null)
		{
			return (T)cache.element;
		}
		T prefab = (prefabObject != null) ? prefabObject.GetComponent<T>() : null;
		T popup = LoadPopupByPrefab(prefab, customParent, onCreated);
		cache.element = popup;
		return popup;
	}

	[AsyncStateMachine(typeof(_003CLoadPopupByAddress_003Ed__13<>))]
	private Task<T> LoadPopupByAddress<T>(string address, RectTransform customParent = null, Action<T> onCreated = null) where T : UICakePopup
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__14))]
	public UniTask SetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected abstract UniTask OnSetUp();

	public void Show()
	{
	}

	protected abstract void OnShow();

	[AsyncStateMachine(typeof(_003CTryShowRateGamePopup_003Ed__22))]
	public Task<bool> TryShowRateGamePopup(RatePopupPosition position, int currentGlobalLevel, bool isWonLevel, Action<bool> onClosed = null)
	{
		return null;
	}

	public bool IsAnyPopupShowing<T>() where T : UICakePopup
	{
		foreach (UICakePopup popup in _popupStack)
		{
			if (popup != null && popup is T && popup.IsShowing)
			{
				return true;
			}
		}
		return false;
	}

	public bool IsAnyPopupShowing()
	{
		return TopShowingPopup != null;
	}

	protected void ShowPopupInStack(UICakePopup popup, Action<UIElementAbstract> onClosed, Action<UIElementAbstract> onDoneAnim)
	{
		if (popup == null)
		{
			return;
		}
		_popupStack.Push(popup);
		popup.transform.SetAsLastSibling();
		OnPopupStackChanged();
		popup.Show(delegate(UIElementAbstract element)
		{
			onClosed?.Invoke(element);
			RefreshPopupStack();
		}, onDoneAnim);
	}

	protected void RefreshAudioDuck()
	{
	}

	public void SetBlurWeather(WeatherEffect weather)
	{
	}

	public BlurBackdropMode GetBackdropMode(UICakePopup popup)
	{
		return BlurBackdropMode.Auto;
	}

	private void OnBackdropTap()
	{
	}

	protected void RefreshPopupStack()
	{
		var alive = new List<UICakePopup>();
		foreach (UICakePopup popup in _popupStack)
		{
			if (popup != null && popup.IsShowing)
			{
				alive.Add(popup);
			}
		}
		_popupStack.Clear();
		for (int num = alive.Count - 1; num >= 0; num--)
		{
			_popupStack.Push(alive[num]);
		}
		OnPopupStackChanged();
	}

	protected virtual void Update()
	{
	}

	protected virtual void OnPopupStackChanged()
	{
	}

	public void RefreshCurrencyBar()
	{
	}

	protected virtual void OnRefreshCurrencyBar()
	{
	}

	public void ShowToast(string content, float duration = 2f, float delay = 0f)
	{
	}

	[AsyncStateMachine(typeof(_003CShowShop_003Ed__58))]
	public virtual Task ShowShop(Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null, string itemIdToFocus = null)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopupRewards_003Ed__59))]
	public Task ShowPopupRewards(RewardListData rewardList, Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null)
	{
		return null;
	}

	private AssetReference GetRewardPopupAsset(RewardListData rewardList)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopupMinigame_003Ed__61))]
	public Task ShowPopupMinigame(UIPopupMinigameConfig config, Action<UIPopupMinigameCookOrder> onCreated = null, Action<UIElementAbstract> onDoneAnim = null)
	{
		return null;
	}

	public async Task ShowCustomPopup<T>(AssetReference asset, Action<T> onBeforeShow = null, Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnimShow = null) where T : UICakePopup
	{
		T popup = await LoadPopup<T>(asset);
		OpenCustomPopup(popup, onBeforeShow, onClosed, onDoneAnimShow);
	}

	public void ShowCustomPopup<T>(T prefab, Action<T> onBeforeShow = null, Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnimShow = null) where T : UICakePopup
	{
		OpenCustomPopup(LoadPopupByPrefab(prefab), onBeforeShow, onClosed, onDoneAnimShow);
	}

	private void OpenCustomPopup<T>(T popup, Action<T> onBeforeShow, Action<UIElementAbstract> onClosed, Action<UIElementAbstract> onDoneAnimShow) where T : UICakePopup
	{
		if (popup == null)
		{
			return;
		}
		ProcessCustomPopup(popup);
		onBeforeShow?.Invoke(popup);
		ShowPopupInStack(popup, onClosed, onDoneAnimShow);
	}

	protected virtual void ProcessCustomPopup(UICakePopup popup)
	{
	}

	[AsyncStateMachine(typeof(_003CShowPopupHeartRefill_003Ed__66))]
	public Task ShowPopupHeartRefill(Action onSuccess = null, Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopupInfoNewItem_003Ed__68))]
	public Task ShowPopupInfoNewItem(IRewardItemInfo itemInfos, int amount, Action<UIElementAbstract> onClosed = null)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowPopupInfoNewItem_003Ed__69))]
	public Task ShowPopupInfoNewItem(List<IRewardItemInfo> itemInfos, List<int> amounts, Action<UIElementAbstract> onClosed = null)
	{
		return null;
	}

	protected override void OnDestroy()
	{
		base.OnDestroy();
	}

	protected virtual void Start()
	{
	}

	public void RequestBanner()
	{
	}

	public virtual void ShowAdsInter(AdsRuntimeData data, Action onDone, Action onSkipped)
	{
	}

	public virtual void ShowAdsReward(AdsRuntimeData data, Action onDone, Action onCanceled)
	{
	}
}
}
