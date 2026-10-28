using UnityEngine;

namespace AnhPD.FoodOrder
{
	public sealed class PastaPieceDisplay : MonoBehaviour
	{
		[SerializeField]
		private PastaContainerVisual container;

		[SerializeField]
		private Sprite gridPlate;

		[SerializeField]
		private Vector2 gridPlateSize;

		[SerializeField]
		private PastaRecipeLayer[] recipeLayers;

		private DragItem owner;

		private bool displayPreview;

		private bool hasState;

		private bool wasOnShelf;

		private PieceSet lastState;

		private bool OnShelf => false;

		public void SetShelfPresentation(bool preview)
		{
		}

		private void LateUpdate()
		{
		}

		public void Display(PieceSet state)
		{
		}

		private void ShowContainer(bool visible)
		{
		}

		private static void ShowContainerLayer(SpriteRenderer renderer, Sprite sprite, Vector3 position, float rotation, Vector2 size, int order, bool visible)
		{
		}

		private static void SetSprite(SpriteRenderer renderer, Sprite sprite, Vector2 size)
		{
		}
	}
}
