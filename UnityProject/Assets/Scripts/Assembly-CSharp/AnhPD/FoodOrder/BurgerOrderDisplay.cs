using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
			ShowBurger(BurgerPieceTable.FillingsOf(spec.Pieces));
		}

		public override void Display(string id)
		{
			if (!FlexibleId.IsFlexible(id))
			{
				display.gameObject.SetActive(false);
				return;
			}
			LevelInfo info = MessyController.Ins.Info;
			DragItem prefab = info.GetIngredientPrefab(FlexibleId.BaseOf(id));
			display.gameObject.SetActive(true);
			if (prefab is FlexibleDragItem)
			{
				ShowBurger(BurgerPieceTable.FillingsOfId(id));
			}
		}

		private void ShowBurger(List<FlexibleBurger.FillingType> fillings)
		{
			display.gameObject.SetActive(true);
			display.Display(fillings);
			RebuildNestedLayout();
			display.transform.Appear(0.1f);
		}

		public override void ClearDisplay()
		{
			display.gameObject.SetActive(false);
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
			if (burgerRect != null)
			{
				LayoutRebuilder.ForceRebuildLayoutImmediate(burgerRect);
			}
			if (burgerLayoutRect != null)
			{
				LayoutRebuilder.ForceRebuildLayoutImmediate(burgerLayoutRect);
			}
		}
	}
}
