using System.Collections.Generic;
using UnityEngine;
using _GAME.Utils;

namespace _GAME.EventSale;

public class EventSaleManager : SingletonManager<EventSaleManager>
{
	[SerializeField]
	private SOEventSaleConfig soConfig;

	public static EventSaleDbModel Data;

	public static bool ForceOpenSaleForDeepLink;

	private const string DAY_SHOW_EVENT_SALE = "DAY_SHOW_EVENT_SALE";

	private EventSaleFIconCtrl _homeIcon;

	private GameObject _homeIconHolder;

	private float _nextFindHomeIconTime;

	private static List<bool> PackStatus
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static bool IsUnlocked => false;

	public static bool IsSaleActive => false;

	private static int DayIdNow => 0;

	protected override void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void CheckHomeIcon()
	{
	}

	[ContextMenu("EditorResetData")]
	public void EditorResetData()
	{
	}

	private static void ResetData()
	{
	}

	public static void ReloadData()
	{
	}

	public static void CheckShowSalePack()
	{
	}

	public static void CheckShowOnBackHome()
	{
	}

	public static long GetSaleTimeLeft()
	{
		return 0L;
	}

	public static bool IsPackBuyed(int packIndex)
	{
		return false;
	}

	public static bool IsAllPackBuyed()
	{
		return false;
	}

	public static void ClaimPack(int packIndex)
	{
	}

	public static void SavePackBuyed(int packIndex)
	{
	}
}
