using System.Collections.Generic;
using UnityEngine;
using _GAME.GameUI;
using _GAME.Utils;

namespace _GAME.EventSale;

[CreateAssetMenu(fileName = "SOEventSaleConfig", menuName = "EventLoop/SOEventSaleConfig", order = 100)]
public class SOEventSaleConfig : SingletonSO<SOEventSaleConfig>
{
	public List<PopupBaseCtrl> listPopup;

	public EventSaleFIconCtrl homeIcon;

	public Sprite buyAllBonusIcon;

	private const int DefaultLevelShowSale = 35;

	private const int DefaultSaleStartTime = 20261001;

	private const int DefaultSaleEndTime = 20261101;

	public static int LevelShowSale;

	public static int SaleStartTime;

	public static int SaleEndTime;

	public List<EventSalePackCfModel> listPack;

	public const string KeyLevelShowSale = "level_show_event_sale";

	public const string KeySaleStartTime = "event_sale_starttime";

	public const string KeySaleEndTime = "event_sale_endtime";

	public static List<EventSalePackCfModel> ListPack => null;

	public static long SaleStartUnixTime => 0L;

	public static long SaleEndUnixTime => 0L;

	private static long ToUnixTime(int yyyyMMdd)
	{
		return 0L;
	}

	private static bool IsValidDate(int yyyyMMdd)
	{
		return false;
	}

	public void Load(SOEventSaleConfig newInstance)
	{
	}

	public static void ReloadRemoteConfig()
	{
	}
}
