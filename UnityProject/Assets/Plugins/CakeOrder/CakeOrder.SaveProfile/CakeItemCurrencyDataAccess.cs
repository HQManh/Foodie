using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.SaveProfile
{

public class CakeItemCurrencyDataAccess : MonoSingleton<CakeItemCurrencyDataAccess>
{
	public delegate void OnItemChangedDelegate(string itemId, int oldValue, int newValue);

	[SerializeField]
	private PlayerProfileDataManager _baseDataManager;

	private PlayerProfileDataManager.SaveDataPack _dataPack;

	private const string KeyDataPack = "item";

	public bool IsDataLoaded => false;

	public event OnItemChangedDelegate onItemChanged;

	protected override void Awake()
	{
	}

	private void OnDataLoaded()
	{
	}

	public void SaveData()
	{
	}

	public void ResetData()
	{
	}

	public int GetItemAmount(string itemId)
	{
		return 0;
	}

	public void SetItemAmount(string itemId, int value, string trackingSource = null, string trackingPlacement = null)
	{
	}

	public void ChangeItemAmount(string itemId, int amountChange, string trackingSource = null, string trackingPlacement = null)
	{
	}

	private static void TrackCurrencyChange(string itemId, int oldValue, int newValue, string source, string placement)
	{
	}

	public int GetInt(string key, int defaultValue = 0)
	{
		return 0;
	}

	public float GetFloat(string key, float defaultValue = 0f)
	{
		return 0f;
	}

	public string GetString(string key, string defaultValue = "")
	{
		return null;
	}

	public bool GetBool(string key, bool defaultValue = false)
	{
		return false;
	}

	public DateTime GetDateTime(string key, DateTime defaultValue = default(DateTime))
	{
		return default(DateTime);
	}

	public void SetInt(string key, int value)
	{
	}

	public void SetFloat(string key, float value)
	{
	}

	public void SetString(string key, string value)
	{
	}

	public void SetBool(string key, bool value)
	{
	}

	public void SetDateTime(string key, DateTime value)
	{
	}
}
}
