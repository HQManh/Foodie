using System;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame;

public class UICakeUseCurrencyButton : MonoBehaviour
{
	[SerializeField]
	private Button _button;

	[SerializeField]
	private Image _imgIcon;

	[SerializeField]
	private TMP_Text _txtAmount;

	public CakeCurrencySO CurrencySO { get; private set; }

	public int Amount { get; private set; }

	public event Action<UICakeUseCurrencyButton> onClicked
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

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnItemChanged(string itemId, int oldValue, int newValue)
	{
	}

	public void SetData(string currencyId, int amount)
	{
	}

	public void SetData(CakeCurrencySO currencySO, int amount)
	{
	}
}
