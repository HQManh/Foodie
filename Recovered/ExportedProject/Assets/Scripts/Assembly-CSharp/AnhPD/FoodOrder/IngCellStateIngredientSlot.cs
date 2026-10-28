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
		}

		private void UpdateNumber(int remaining)
		{
		}

		public override void Hide()
		{
		}
	}
}
