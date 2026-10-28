using UnityEngine;
using UnityEngine.UI;

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
			ShowSandwich(spec.Pieces);
		}

		public override void Display(string id)
		{
			if (FlexibleId.IsFlexible(id))
			{
				string baseId = FlexibleId.BaseOf(id);
				PieceSet pieces = FlexiblePieceId.PiecesOf(baseId, id);
				ShowSandwich(pieces);
				return;
			}
			if (display != null && display.gameObject != null)
			{
				display.gameObject.SetActive(false);
				return;
			}
		}

		private void ShowSandwich(PieceSet pieces)
		{
			if (display != null && display.gameObject != null)
			{
				display.gameObject.SetActive(true);
				if (display != null)
				{
					display.Display(pieces);
					RebuildNestedLayout();
					display.transform.Appear(0.1f);
				}
			}
		}

		public override void ClearDisplay()
		{
			if (display != null && display.gameObject != null)
			{
				display.gameObject.SetActive(false);
			}
		}

		public override void SetAlpha(float alpha)
		{
			if (display != null)
			{
				display.SetAlpha(alpha);
			}
		}

		public override void SetTint(Color tint)
		{
			if (display != null)
			{
				display.SetTint(tint);
			}
		}

		private void RebuildNestedLayout()
		{
			Canvas.ForceUpdateCanvases();
			if (sandwichRect != null)
			{
				LayoutRebuilder.ForceRebuildLayoutImmediate(sandwichRect);
			}
			if (sandwichLayoutRect != null)
			{
				LayoutRebuilder.ForceRebuildLayoutImmediate(sandwichLayoutRect);
			}
		}
	}
}
