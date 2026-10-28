using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BurgerOrderDisplay : FDisplayBase
	{
		[SerializeField]
		private UIFlexibleBurgerDisplay display;

		[Header("Layout Rebuild")]
		[SerializeField]
		private RectTransform burgerRect;

		[SerializeField]
		private RectTransform burgerLayoutRect;

		public override void Display(OrderSpec spec)
		{
		}

		public override void Display(string id)
		{
		}

		private void ShowBurger(List<FlexibleBurger.FillingType> fillings)
		{
		}

		public override void ClearDisplay()
		{
		}

		public override void SetAlpha(float alpha)
		{
		}

		public override void SetTint(Color tint)
		{
		}

		private void RebuildNestedLayout()
		{
		}
	}
}
