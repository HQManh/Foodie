using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellStateLock : IngCellDisplayState
	{
		[SerializeField]
		private TextMesh txtNumber;

		[Tooltip("Bỏ trống = khoá không nứt dần, giữ nguyên sprite gán sẵn.")]
		[SerializeField]
		private SpriteRenderer lockRenderer;

		[Tooltip("Nguyên (index 0) → nứt nhất (index cuối).")]
		[SerializeField]
		private Sprite[] crackSprites;

		private int _servesInitial;

		public void Show(int remainingServes)
		{
			if (!IsShown)
			{
				_servesInitial = remainingServes;
			}
			SetShown(true);
			UpdateNumber(remainingServes);
		}

		private void UpdateNumber(int remaining)
		{
			if (txtNumber != null)
			{
				txtNumber.gameObject.SetActive(remaining > 0);
				if (remaining > 0)
				{
					txtNumber.text = remaining.ToString();
				}
			}

			Sprite sprite = CurrentSprite(remaining);
			if (sprite != null)
			{
				lockRenderer.sprite = sprite;
			}
		}

		public override void Hide()
		{
			SetShown(false);
			if (txtNumber != null)
			{
				txtNumber.gameObject.SetActive(false);
			}
			_servesInitial = 0;
		}

		private Sprite CurrentSprite(int remaining)
		{
			if (lockRenderer == null || remaining <= 0 || crackSprites == null || crackSprites.Length == 0)
			{
				return null;
			}
			if (crackSprites.Length == 1)
			{
				return crackSprites[0];
			}
			int initial = Mathf.Max(_servesInitial, remaining, 1);
			int span = initial - 1 < 2 ? 1 : initial - 1;
			int index = (int)((float)(initial - remaining) / span * (crackSprites.Length - 1)); /* rounding mode assumed to be truncation */
			index = Mathf.Clamp(index, 0, crackSprites.Length - 1);
			return crackSprites[index];
		}
	}
}
