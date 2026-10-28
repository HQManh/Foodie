using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.HeartSystem;
using CakeOrder.SaveProfile;
using CakeOrder.UI;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.Shop
{

public class InAppShopDataAccess : MonoSingleton<InAppShopDataAccess>
{
	[CompilerGenerated]
	private sealed class _003CIERestoreOwnedPack_003Ed__87 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InAppShopDataAccess _003C_003E4__this;

		public string shopID;

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
		public _003CIERestoreOwnedPack_003Ed__87(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CIETearDownAdsWhenManagerReady_003Ed__89 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		private float _003Cdeadline_003E5__2;

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
		public _003CIETearDownAdsWhenManagerReady_003Ed__89(int _003C_003E1__state)
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

	[Header("Data Manager")]
	[SerializeField]
	private PlayerProfileDataManager _baseDataManager;

	[SerializeField]
	private CakeItemCurrencyDataAccess _currencyDataAccess;

	[SerializeField]
	private HeartSystemController _heartSystemController;

	private PlayerProfileDataManager.SaveDataPack _dataPack;

	private const string KeyDataPack = "shop";

	public const string KEY_REMOTE_CONFIG_IAP_PACK_VALUE = "iap_shop_config";

	public const string KEY_REMOTE_CONFIG_REMOVE_ADS = "remove_ads_config";

	private Dictionary<string, ItemPackGroup> _dictPackValue = new Dictionary<string, ItemPackGroup>();

	private bool _isSubscribedPurchaseSuccess;

	[Header("Pack Value Config")]
	[SerializeField]
	private CakeCurrencySO[] _rewardSOLookupList;

	[SerializeField]
	private RemoteConfigIAPPackValue _packValueConfig;

	[Header("Remove Ads Config")]
	[SerializeField]
	private RemoteConfigRemoveAds _removeAdsConfig;

	[SerializeField]
	private string _shopIdRemoveAdsPermanent;

	[SerializeField]
	private string _shopIdRemoveAdsPermanentUpgrade;

	[Tooltip("Discounted variant of the ad-free pack. It has to count as owning No Ads: without it a player who paid for the sale keeps seeing ads, keeps the Home button, and is offered the full-price pack again in the shop.")]
	[SerializeField]
	private string _shopIdRemoveAdsPermanentSale;

	private const string LocRemoveAdsActivated = "reward_remove_ads_activated";

	private const string PackTitleKeyPrefix = "Title_";

	[Tooltip("Shown in the rewards popup when an ad-free pack is bought.")]
	[SerializeField]
	private Sprite _iconRemoveAds;

	[Header("Pack Titles")]
	[Tooltip("English pack names (source of the Shop table entries \"Title_<shopId>\"). A pack with no entry here falls back to printing its localize key.")]
	[SerializeField]
	private PackTitle[] _packTitles;

	[Tooltip("Off: the names above ship exactly as typed and the Shop table is not read. Off while the pack names are still being decided - the table still holds the previous set, and because the table wins a lookup, renaming a pack here had no visible effect at all. Turn back on once the \"Title_<shopId>\" entries match.")]
	[SerializeField]
	private bool _localizePackTitles;

	[Header("Reward Popup Icons")]
	[Tooltip("Optional per-amount art for the rewards popup. Currencies with no tier here keep their own icon.")]
	[SerializeField]
	private RewardIconTier[] _rewardIconTiers;

	[Header("Offer Rules")]
	[Tooltip("The design sheet's show conditions. Leave empty and every pack shows unconditionally, which is how the shop behaved before the rules existed.")]
	[SerializeField]
	private ShopOfferRulesSO _offerRules;

	private bool _isPackValueDictBuilt;

	private readonly HashSet<string> _pendingCodePurchases = new HashSet<string>();

	private const string KEY_COUNT_SHOW_OFFER_REMOVE_ADS_PERMANENT = "numOfferRmAds";

	private const string KeyRemoveAdsGift = "gift_removeads";

	public RemoteConfigRemoveAds RemoveAdsConfig => null;

	public string ShopIdRemoveAdsPermanent => null;

	public string ShopIdRemoveAdsPermanentUpgrade => null;

	public Sprite IconRemoveAds => null;

	public ShopOfferRulesSO OfferRulesConfig => null;

	public bool IsRemoveAds => false;

	public bool IsRemoveAdsPermanent => false;

	public bool IsRemoveAdsDiscardedByCheat { get; private set; }

	private bool IsRemoveAdsPurchased => false;

	private bool IsRemoveAdsGifted => false;

	public bool IsCanPlayOffline => false;

	public event Action<string, RewardListData> onBuyPack;

	public event Action onRemoveAds;

	private static string GetKeyCountPurchasedPack(string id)
	{
		return null;
	}

	private static string GetKeyDatetimeLastPurchasedPack(string id)
	{
		return null;
	}

	public int GetNumPurchasedPack(string shopID)
	{
		return 0;
	}

	public DateTime GetLastTimeBuyPack(string shopID)
	{
		return default(DateTime);
	}

	public bool IsCanPurchasePack(string shopID)
	{
		return false;
	}

	protected override void Awake()
	{
	}

	private void EnsurePurchaseSubscription()
	{
	}

	private void Start()
	{
	}

	private void OnDataLoaded()
	{
	}

	public void SaveData()
	{
	}

	public string GetPackTitle(string shopId, bool localized = true)
	{
		return null;
	}

	private Sprite GetRewardIcon(string shopId, string currencyId, int amount)
	{
		return null;
	}

	public ShopOfferRules CreateOfferRules()
	{
		return null;
	}

	public void NotifyGemShortage()
	{
	}

	public void SetUp()
	{
	}

	private void UpdateRemoteConfig()
	{
	}

	private RemoteConfigIAPPackValue ImportIAPPackValueData(string str)
	{
		return null;
	}

	protected override void OnDestroy()
	{
	}

	private void RebuildPackValueDictionary()
	{
	}

	public ItemPackGroup GetPackValue(string shopID)
	{
		return null;
	}

	public int GetUnlimitedHeartMinutes(string shopID)
	{
		return 0;
	}

	public bool TryGetUnlimitedHeartSlotText(string shopID, string slotCurrencyId, out string text)
	{
		text = null;
		return false;
	}

	public void PurchasePack(string shopId, SceneMainUI mainUI, string placement, Action<bool> onDone = null)
	{
	}

	private void OnPurchaseSuccess(string shopID)
	{
	}

	public void CheatDiscardRemoveAdsForSession()
	{
	}

	public bool GrantRemoveAdsGift()
	{
		return false;
	}

	public bool GrantRemoveAdsAsPurchase()
	{
		return false;
	}

	public bool IsRemoveAdsPackId(string shopId)
	{
		return false;
	}

	private void ApplyPermanentRemoveAds()
	{
	}

	private void OnNonConsumableGrant(string shopID)
	{
	}

	private void RestoreOwnedPackIfEntitled(string shopID)
	{
	}

	[IteratorStateMachine(typeof(_003CIERestoreOwnedPack_003Ed__87))]
	private IEnumerator IERestoreOwnedPack(string shopID)
	{
		return null;
	}

	private void ApplyRemoveAdsToAdsSystem()
	{
	}

	[IteratorStateMachine(typeof(_003CIETearDownAdsWhenManagerReady_003Ed__89))]
	private IEnumerator IETearDownAdsWhenManagerReady()
	{
		return null;
	}
}
}
