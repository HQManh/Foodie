using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public class UIInGameNumberCounterWithSprites : UIInGameNumberCounter
{
	[SerializeField]
	private UIInGameNumberCounterSpriteElement _prefabElement;

	[SerializeField]
	private RectTransform _container;

	[SerializeField]
	private UISliderMultipeImage _slider;

	[SerializeField]
	private List<UIInGameNumberCounterSpriteElement> _elements;

	protected override void UpdateCapacity()
	{
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}
}
