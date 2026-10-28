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
		}

		private void UpdateNumber(int remaining)
		{
		}

		public override void Hide()
		{
		}

		private Sprite CurrentSprite(int remaining)
		{
			return null;
		}
	}
}
