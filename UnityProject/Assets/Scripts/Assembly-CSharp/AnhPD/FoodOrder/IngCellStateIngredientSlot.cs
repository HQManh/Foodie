using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellStateIngredientSlot : IngCellDisplayState
	{
		[Tooltip("Sprite của nguyên liệu phải phục vụ để mở ô.")]
		[SerializeField]
		private SpriteRenderer icon;

		[SerializeField]
		private TextMesh txtNumber;

		public void Show(Sprite ingredientIcon, int remaining)
		{
			SetShown(true);
			if (icon != null && ingredientIcon != null)
			{
				icon.sprite = ingredientIcon;
			}
			UpdateNumber(remaining);
		}

		private void UpdateNumber(int remaining)
		{
			if (txtNumber == null)
			{
				return;
			}
			txtNumber.gameObject.SetActive(remaining > 0);
			if (remaining > 0)
			{
				txtNumber.text = remaining.ToString();
			}
		}

		public override void Hide()
		{
			SetShown(false);
			if (txtNumber != null)
			{
				txtNumber.gameObject.SetActive(false);
			}
		}
	}
}
