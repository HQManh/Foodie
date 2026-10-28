using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame
{

public class UIInGameNumberCounterWithSlider : UIInGameNumberCounter
{
	[SerializeField]
	private Slider _slider;

	protected override void UpdateCapacity()
	{
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}
}
}
