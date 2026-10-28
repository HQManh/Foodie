using System;
using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home
{

public class UIItemToolDetails : UIElementWithAnim
{
	private const string LocLvMax = "lv_max";

	private const string LocLvN = "lv_n";

	private const string LocNotEnough = "toast_not_enough_x";

	[SerializeField]
	private GameObject _root;

	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private TextMeshProUGUI _txtName;

	[SerializeField]
	private TextMeshProUGUI _txtLv;

	[SerializeField]
	private TextMeshProUGUI _txtDescription;

	[SerializeField]
	private Button[] _btnHides;

	[Header("Upgrade")]
	[SerializeField]
	private Button _btnUpgrade;

	[SerializeField]
	private TextMeshProUGUI _txtUpgradeCost;

	private string _mapId;

	private MapToolConfig _mapToolConfig;

	private int _toolIndex;

	private bool _subscribed;

	public Action onClickHide;

	private void Awake()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	public void Clear()
	{
	}

	public void SetData(string mapId, MapToolConfig mapToolConfig, int toolIndex)
	{
	}

	private void Subscribe()
	{
	}

	private void Unsubscribe()
	{
	}

	private void OnCurrencyChanged(string itemId, int oldValue, int newValue)
	{
	}

	private void OnToolUpgraded(string mapId, string toolId)
	{
	}

	private int GetMaxLevel()
	{
		return 0;
	}

	private int GetUpgradeCost(int lv)
	{
		return 0;
	}

	private void Refresh()
	{
	}

	private void OnClickUpgrade()
	{
	}
}
}
