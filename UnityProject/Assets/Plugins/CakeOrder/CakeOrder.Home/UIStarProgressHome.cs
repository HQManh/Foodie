using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home
{

public class UIStarProgressHome : UINumberCounterAbstract
{
	[SerializeField]
	private int _amount;

	[SerializeField]
	private int _capacity;

	[SerializeField]
	private TextMeshProUGUI _txtAmount;

	[SerializeField]
	private Slider _slider;

	[SerializeField]
	private string _formatAmount;

	private int _txtAmountValue;

	public void SetData(int amount, int capacity)
	{
	}

	protected override int GetAmountData()
	{
		return 0;
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}
}
}
