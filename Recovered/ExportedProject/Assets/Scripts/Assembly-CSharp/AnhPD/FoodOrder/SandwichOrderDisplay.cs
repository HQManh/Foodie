using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SandwichOrderDisplay : FDisplayBase
	{
		[SerializeField]
		private UISandwichStackDisplay display;

		[Header("Layout Rebuild")]
		[SerializeField]
		private RectTransform sandwichRect;

		[SerializeField]
		private RectTransform sandwichLayoutRect;

		public override void Display(OrderSpec spec)
		{
		}

		public override void Display(string id)
		{
		}

		private void ShowSandwich(PieceSet pieces)
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
