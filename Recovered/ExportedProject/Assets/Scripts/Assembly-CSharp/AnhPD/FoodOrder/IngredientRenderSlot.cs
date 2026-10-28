using TMPro;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngredientRenderSlot : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spriteRenderer;

		[SerializeField]
		private TMP_Text txtCount;

		private Color _countBaseColor;

		private bool _hasCount;

		private Vector3 _home;

		private bool _homeCached;

		public SpriteRenderer Renderer => null;

		private void Awake()
		{
		}

		public void SetTint(Color tint)
		{
		}

		public void SetAlpha(float alpha)
		{
		}

		public void Show(Sprite sprite, int count, Vector3 scale, Vector2 offset = default(Vector2))
		{
		}

		public void SetCount(int count)
		{
		}

		public void SetVisible(bool visible)
		{
		}
	}
}
