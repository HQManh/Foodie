using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;
using _GAME.GameItem;

namespace _GAME.Bridge;

public static class R1RewardMap
{
	private static readonly Dictionary<RwItemType, string> CookOrderIds;

	public const int RemoveAdsGift = 1;

	public const int RemoveAdsPurchase = 2;

	public static string GetCookOrderId(RwItemType type)
	{
		return null;
	}

	public static IRewardItemInfo ToRewardInfo(RwItemModel item, Sprite icon)
	{
		return null;
	}

	public static bool TryGetRewardType(string cookOrderId, out RwItemType type)
	{
		type = default(RwItemType);
		return false;
	}

	public static bool IsR1Item(RwItemType type)
	{
		return false;
	}

	public static bool CanGrant(RwItemModel item)
	{
		return false;
	}

	private static bool IsRemoveAdsMode(int value)
	{
		return false;
	}

	public static bool CanGrant(IEnumerable<RwItemModel> items)
	{
		return false;
	}

	public static void Grant(RwItemModel item, RwItemSrcPos srcPos)
	{
	}

	public static bool TryGetDisplay(RwItemModel item, out Sprite icon, out string text)
	{
		icon = null;
		text = null;
		return false;
	}

	private static bool TryGetInfo(RwItemModel item, out IRewardItemInfo info, out int amount)
	{
		info = null;
		amount = default(int);
		return false;
	}

	private static Sprite R1ItemSprite(RwItemModel item)
	{
		return null;
	}

	private static string R1ItemName(RwItemType type)
	{
		return null;
	}
}
