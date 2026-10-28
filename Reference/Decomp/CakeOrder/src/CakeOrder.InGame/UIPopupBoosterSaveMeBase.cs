using System;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.Shop;
using DG.Tweening;
using IapAdsSystem;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class UIPopupBoosterSaveMeBase : UICakePopup
{
	[Serializable]
	public class ConfigData
	{
		[Header("Level Info")]
		public int mapIndex;

		public int levelIndex;

		public CookOrderLevelPlayMode playMode;

		[Header("Options")]
		public bool isFree;

		public int priceHardCurrency;

		public bool canUseAds;

		public string itemId;

		public string title;

		public string description;

		public AdsPosition adsPosition;

		public string hardCurrencySpendReason;

		public int packAmount;

		public int[] dataAmounts;
	}

	[Serializable]
	public class ResultData
	{
		public bool isFree;

		public int numAdsWatched;

		public int numHardCurrencyUsed;

		public string itemIdUsed;

		public string boughtShopId;

		public int numPackItemsBought;
	}

	[Serializable]
	public class VisualConfig
	{
		public float delayShowButtons;

		public float durationShowButtons;

		public float delayBetweenButtons;

		public Ease easeShowButtons;
	}

	[SerializeField]
	private Button _btnFree;

	[SerializeField]
	private Button _btnWatchAds;

	[SerializeField]
	private Button _btnUseHardCurrency;

	[SerializeField]
	private TextMeshProUGUI _txtPriceHardCurrency;

	[Tooltip("Optional. Shows \"X{pack}\" (bottom-right of the inside zone) when the gem button sells a pack; hidden otherwise.")]
	[SerializeField]
	private GameObject _sectionPackAmount;

	[SerializeField]
	private Image _imgItemPack;

	[SerializeField]
	private TextMeshProUGUI _txtPackAmount;

	[SerializeField]
	protected VisualConfig _visualConfig;

	[SerializeField]
	private AdsPosition _adsPos;

	[SerializeField]
	protected TextMeshProUGUI _txtTitle;

	[SerializeField]
	protected TextMeshProUGUI _txtData;

	[Tooltip("UI_Common key of the title shown when the caller passes none. Empty = keep the prefab text.")]
	[SerializeField]
	private string _titleKey;

	[Tooltip("UI_Common key of the description (may contain {0} = first data amount) shown when the caller passes none. Empty = keep the prefab text.")]
	[SerializeField]
	private string _dataKey;

	[Header("Use Item Button")]
	[SerializeField]
	private Button _btnUseItem;

	[SerializeField]
	private Image _imgUseItemIcon;

	[SerializeField]
	private TextMeshProUGUI _txtCountItem;

	[Header("IAP Offer")]
	[Tooltip("Optional pack offer shown at the foot of the popup. One prefab serves every popup deriving from this - which pack pair it sells is overridden per instance, so nothing here or in the subclasses needs to know a shop id. Leave empty for no offer.")]
	[SerializeField]
	private UIOfferPackInGame _offerPack;

	[Header("Hold To View")]
	[Tooltip("Pointer target that stays visible while the popup content fades out.")]
	[SerializeField]
	private ForwardUIPointerEvent _triggerViewGame;

	[Tooltip("Extra groups hidden while holding the view button, on top of the popup's Visible Canvas Group (which already hides everything inside it). Do not include the trigger itself.")]
	[SerializeField]
	private CanvasGroup[] _viewGameCanvasGroups;

	private int _viewGamePointerId;

	private bool _isViewingGame;

	private Tween _tweenViewGame;

	protected ConfigData _params;

	private Action<ResultData> _onSuccess;

	private Action _onCanceled;

	protected Action<string> _onNeedShowShop;

	private UIInLevelGeneralReferences _generalRefs;

	private UIInLevelCakeOrder _uiInLevel;

	private CakeCurrencySO _hardCurrencySO;

	private CakeCurrencySO _itemSO;

	private bool _isHiddenForPackReward;

	public override AudioManagerCakeOrder.DuckLevel DuckLevel => AudioManagerCakeOrder.DuckLevel.None;

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	protected virtual bool EnableHoldToView => false;

	protected string _itemId => null;

	private CakeCurrencySO HardCurrencySO => null;

	private CakeCurrencySO ItemSO => null;

	private bool IsPackPurchase => false;

	protected virtual string HardCurrencySpendSource => null;

	private bool HasItem => false;

	public bool CanUseAds => false;

	public bool CanUseFree => false;

	public static event Action<UIPopupBoosterSaveMeBase> onSaveMeOffered
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

	public override void HideByBackButton()
	{
	}

	private static string FormatSafe(string format, int amount)
	{
		return null;
	}

	protected override void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	public void SetUpDataAndEventListeners(UIInLevelGeneralReferences generalRefs, ConfigData configData, Action<ResultData> onSuccess, Action onCanceled, Action<string> onNeedShowShop)
	{
	}

	protected virtual void OnSetUpData()
	{
	}

	public void RequestAdsForAutoplay()
	{
	}

	public void RequestFreeForAutoplay()
	{
	}

	protected void Activate(ResultData saveMeResult)
	{
	}

	protected override void OnClickClose()
	{
	}

	public void Cancel()
	{
	}

	protected override void OnBeforeShow()
	{
	}

	private void OnShownPackPurchased(string shopId)
	{
	}

	protected virtual void OnShownPackBought(string shopId)
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void BeginViewGame(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	private void EndViewGame(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	private void SetUIVisible(bool isVisible, bool immediate = false)
	{
	}

	private void OnDisable()
	{
	}

	protected virtual void OnItemChanged(string itemId, int oldValue, int newValue)
	{
	}

	protected virtual void UpdateTextAndButton()
	{
	}

	private void OnClickButtonUseItem()
	{
	}

	private void GetButtonVisibility(out bool showAds, out bool showItem, out bool showHardCurrency)
	{
		showAds = default(bool);
		showItem = default(bool);
		showHardCurrency = default(bool);
	}

	private void OnClickButtonSaveMeHardCurrency()
	{
	}

	private void OnClickButtonSaveMeAds()
	{
	}

	private void ShowSaveMeAds()
	{
	}

	private void OnClickButtonSaveMeFree()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected virtual void ShowButtonsIterative(float delay)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected virtual void ShowButtonsImmediate()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected virtual void HideAllButtonImmediate()
	{
	}
}
