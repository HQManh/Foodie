using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.BaseUI
{

public class UICurrencyCounterSummaryEndGame : UICurrencyCounter
{
	[Serializable]
	public class VisualConfig
	{
		public Color colorFrame;

		public Color colorText;

		public bool isUseIconGrayed;
	}

	[SerializeField]
	private Image _frame;

	[SerializeField]
	private TextMeshProUGUI[] _text;

	[SerializeField]
	private Image _iconCurrencyGrayed;

	protected override void Awake()
	{
	}

	public void SetVisual(VisualConfig config)
	{
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}
}
}
