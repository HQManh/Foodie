using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.DataSO;
using CakeOrder.Home;
using CakeOrder.SaveProfile;
using Firebase.Analytics;
using UnityEngine;

namespace _GAME.Bridge;

public static class CookOrderBridge
{
	public enum UiSound
	{
		Click,
		ItemSelect,
		PopupOpen,
		PopupClose
	}

	public enum R1HomeTab
	{
		Rank,
		Team
	}

	private static PlayerMapLevelProgressDataAccess _mapProgressListened;

	public const string SoftCurrencyId = "soft";

	public const string HardCurrencyId = "hard";

	private static PlayerProfileDataAccess _profileListened;

	private const string HomeRemoveAdsButtonName = "UIDragArea-FloatButton-RemoveAds";

	private const string HomeStarterPackButtonName = "UIDragArea-FloatButton-StarterPack";

	public static bool IsCoreReady => false;

	public static DateTime UtcNow => default(DateTime);

	public static bool IsCheat => false;

	public static bool IsAtHome => false;

	public static int OpenAppCount => 0;

	public static int LevelsCompleted => 0;

	public static int GlobalLevel => 0;

	public static int RestaurantsBuilt => 0;

	private static bool IsMapProgressReady => false;

	public static bool HasPopupHost => false;

	public static UICakePopup TopPopup => null;

	public static bool IsAnyPopupShowing => false;

	public static int HeartAmount => 0;

	public static bool IsFullHeart => false;

	private static HomeControllerCookOrder Home => null;

	public static int WeeklyContestUnlockLevel => 0;

	private static PlayerProfileDataAccess CoreProfile => null;

	public static bool IsCoreProfileReady => false;

	public static string CoreProfileName => null;

	public static bool IsCoreNameEdited => false;

	public static int CoreAvatarIndex => 0;

	public static int AvatarCount => 0;

	public static int NameMaxLength => 0;

	public static long FirstOpenUnixSeconds => 0L;

	public static event Action OnRestaurantBuilt
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

	public static event Action OnRestaurantOpened
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

	public static event Action OnCoreProfileChanged
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

	public static string DayText(int day)
	{
		return null;
	}

	public static bool IsRestaurantOpen(string mapId)
	{
		return false;
	}

	public static bool IsRestaurantCompleted(string mapId)
	{
		return false;
	}

	public static bool TryGetRestaurantUnlockStep(string mapId, bool vip, out string dayText, out string restaurantName)
	{
		dayText = null;
		restaurantName = null;
		return false;
	}

	public static void ListenRestaurantBuilt()
	{
	}

	private static void RaiseRestaurantBuilt(string mapId)
	{
	}

	private static void RaiseRestaurantOpened(string mapId)
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetMapProgressStatics()
	{
	}

	public static void PlayUiSound(UiSound sound)
	{
	}

	public static void LogEvent(string eventName, Parameter[] parameters)
	{
	}

	public static T ShowPopup<T>(T prefab) where T : UICakePopup
	{
		return default(T);
	}

	public static void ShowToast(string message)
	{
	}

	public static int GetCurrency(string currencyId)
	{
		return 0;
	}

	public static bool ChangeCurrency(string currencyId, int amount, string trackingSource)
	{
		return false;
	}

	public static void ShowNotEnoughCurrencyToast(string currencyId)
	{
	}

	private static HomeTabCategory ToCategory(R1HomeTab tab)
	{
		return (HomeTabCategory)0;
	}

	public static bool ShowHomeTab(R1HomeTab tab)
	{
		return false;
	}

	public static void SetHomeTabLock(bool isLocked, R1HomeTab? allowedTab = null)
	{
	}

	public static bool IsHomeTabShowing(R1HomeTab tab)
	{
		return false;
	}

	public static int GetHomeTabUnlockLevel(R1HomeTab tab)
	{
		return 0;
	}

	public static bool IsHomeTabUnlocked(R1HomeTab tab)
	{
		return false;
	}

	public static Transform GetHomeTabNavButton(R1HomeTab tab)
	{
		return null;
	}

	public static bool IsIapListed(string sku)
	{
		return false;
	}

	public static void PurchaseIap(string sku, Action<bool> onDone, IReadOnlyList<IRewardItemInfo> extraRewards = null)
	{
	}

	public static bool IsIapGrantedByCookOrder(string sku)
	{
		return false;
	}

	public static List<(string, int)> GetIapPackRewards(string sku)
	{
		return null;
	}

	public static void LoadIapPrice(string sku, Action<string> setPrice)
	{
	}

	public static void ListenCoreProfile()
	{
	}

	private static void RaiseCoreProfileChanged()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetProfileStatics()
	{
	}

	public static string GetAvatarId(int index)
	{
		return null;
	}

	public static int GetAvatarIndex(string avatarId)
	{
		return 0;
	}

	public static bool IsAvatarUnlocked(int index)
	{
		return false;
	}

	public static bool UnlockAvatar(int index)
	{
		return false;
	}

	public static bool AvatarRequiresUnlock(int index)
	{
		return false;
	}

	public static bool ValidateName(string raw, out string normalized, out string message)
	{
		normalized = null;
		message = null;
		return false;
	}

	public static bool SetCoreProfile(string name, int avatarIndex)
	{
		return false;
	}

	public static void ShowCoreProfileButton(Transform r1Icon)
	{
	}

	public static Transform GetCurrencyTarget(string currencyId)
	{
		return null;
	}

	public static Transform GetHomeNavButton()
	{
		return null;
	}

	public static Transform GetHeartTarget()
	{
		return null;
	}

	public static bool TryGetHomeIconSlot(out RectTransform column, out Rect slot, out Vector2 iconCenter, out float iconHeight)
	{
		//IL_0004: Unknown result type (might be due to invalid IL or missing references)
		//IL_000b: Unknown result type (might be due to invalid IL or missing references)
		column = null;
		slot = default(Rect);
		iconCenter = default(Vector2);
		iconHeight = default(float);
		return false;
	}

	public static void AddToHomeIconPlate(RectTransform column, RectTransform button)
	{
	}

	private static Rect GetRectIn(RectTransform rect, RectTransform space)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Rect);
	}

	private static bool TryGetIconRect(Transform button, RectTransform space, out Rect rect)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		rect = default(Rect);
		return false;
	}
}
