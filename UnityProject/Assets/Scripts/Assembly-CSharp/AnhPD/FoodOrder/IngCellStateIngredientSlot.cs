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

		[Tooltip("Longest side (world units) the ingredient icon is scaled to fit; 0 = leave the icon's own size.")]
		[SerializeField]
		private float iconFitSize;

		// For a slot built at runtime (the scene's cell template has none): hands over the parts it draws with.
		public void Setup(SpriteRenderer iconRenderer, TextMesh numberText, float fitSize)
		{
			icon = iconRenderer;
			txtNumber = numberText;
			iconFitSize = fitSize;
		}

		public void Show(Sprite ingredientIcon, int remaining)
		{
			SetShown(true);
			if (icon != null && ingredientIcon != null)
			{
				icon.sprite = ingredientIcon;
				if (iconFitSize > 0f)
				{
					Vector2 size = ingredientIcon.bounds.size;
					float longest = Mathf.Max(size.x, size.y);
					float scale = longest > 0.0001f ? iconFitSize / longest : 1f;
					icon.transform.localScale = new Vector3(scale, scale, 1f);
				}
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
