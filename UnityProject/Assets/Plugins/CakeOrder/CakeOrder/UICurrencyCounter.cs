using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder
{

public class UICurrencyCounter : UINumberCounterAbstract
{
	[SerializeField]
	protected string _currencyId;

	[SerializeField]
	protected TextMeshProUGUI _txtAmount;

	[SerializeField]
	private string _customFormatTxtAmount;

	[SerializeField]
	protected Image _imgIconCurrency;

	[SerializeField]
	private Button _btnMore;

	[SerializeField]
	private bool _isUseSourceSaveData;

	private List<IItemCurrencyHoldingSource> _holdingSources = new List<IItemCurrencyHoldingSource>();

	private int _currentTextAmount;

	private CakeCurrencySO _currencySO;

	public CakeCurrencySO CurrencySO => null;

	public event Action onClickMore;

	protected override int GetAmountData()
	{
		return 0;
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}

	protected virtual void OnSourceAddedOrRemoved()
	{
	}

	public void AddHoldingSource(IItemCurrencyHoldingSource source)
	{
	}

	public void AddHoldingSourcess(IList<IItemCurrencyHoldingSource> listSources)
	{
	}

	public void RemoveHoldingSource(IItemCurrencyHoldingSource source)
	{
	}

	protected virtual void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnItemAmountChanged(string id, int oldAmount, int newAmount)
	{
	}

	private void OnSourceAmountChanged(int oldAmount, int newAmount)
	{
	}
}
}
