using TMPro;
using UnityEngine;
using Utilities;

namespace CakeOrder.UI
{

public class UIStarCounter : UINumberCounterAbstract
{
	[SerializeField]
	private TextMeshProUGUI _txtCounter;

	protected override void UpdateVisualAmount(float amount)
	{
	}

	protected override int GetAmountData()
	{
		return 0;
	}
}
}
