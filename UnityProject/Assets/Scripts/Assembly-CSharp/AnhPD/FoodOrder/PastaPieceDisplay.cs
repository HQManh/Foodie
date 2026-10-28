using UnityEngine;

namespace AnhPD.FoodOrder
{
	public sealed class PastaPieceDisplay : MonoBehaviour
	{
		[SerializeField]
		private PastaContainerVisual container = new PastaContainerVisual();

		[SerializeField]
		private Sprite gridPlate;

		[SerializeField]
		private Vector2 gridPlateSize = Vector2.one * 2f;

		[SerializeField]
		private PastaRecipeLayer[] recipeLayers = System.Array.Empty<PastaRecipeLayer>();

		private DragItem owner;

		private bool displayPreview;

		private bool hasState;

		private bool wasOnShelf;

		private PieceSet lastState;

		// member choice for the owner flags recovered by guess
		private bool OnShelf
		{
			get
			{
				if (displayPreview)
				{
					return true;
				}
				if (owner == null)
				{
					return false;
				}
				if (!owner.IsOnDishRow)
				{
					return owner.DishControlled;
				}
				return true;
			}
		}

		public void SetShelfPresentation(bool preview)
		{
			displayPreview = preview;
			if (hasState)
			{
				ShowContainer(!lastState.IsEmpty);
			}
		}

		private void LateUpdate()
		{
			if (!(owner != null))
			{
				owner = GetComponentInParent<DragItem>();
			}
			if (hasState && wasOnShelf != OnShelf)
			{
				ShowContainer(!lastState.IsEmpty);
			}
		}

		public void Display(PieceSet state)
		{
			if (!(owner != null))
			{
				owner = GetComponentInParent<DragItem>();
			}
			hasState = true;
			lastState = state;
			ShowContainer(!state.IsEmpty);
			foreach (PastaRecipeLayer pastaRecipeLayer in recipeLayers)
			{
				if (!(pastaRecipeLayer.renderer != null))
				{
					continue;
				}
				bool flag = !state.IsEmpty && pastaRecipeLayer.sprite != null;
				int[] requiredPieces = pastaRecipeLayer.requiredPieces;
				foreach (int kind in requiredPieces)
				{
					flag &= state[kind] > 0;
				}
				requiredPieces = pastaRecipeLayer.excludedPieces;
				foreach (int kind2 in requiredPieces)
				{
					flag &= state[kind2] == 0;
				}
				pastaRecipeLayer.renderer.gameObject.SetActive(flag);
				if (flag)
				{
					pastaRecipeLayer.renderer.sprite = pastaRecipeLayer.sprite;
				}
			}
		}

		private void ShowContainer(bool visible)
		{
			wasOnShelf = OnShelf;
			bool flag = wasOnShelf || !(gridPlate != null);
			ShowContainerLayer(container.back, flag ? container.backSprite : gridPlate, flag ? container.backPosition : Vector3.zero, container.backRotation, flag ? container.backSize : gridPlateSize, container.backOrder, visible);
			ShowContainerLayer(container.front, flag ? container.frontSprite : null, container.frontPosition, container.frontRotation, container.frontSize, container.frontOrder, visible);
		}

		private static void ShowContainerLayer(SpriteRenderer renderer, Sprite sprite, Vector3 position, float rotation, Vector2 size, int order, bool visible)
		{
			if (renderer != null)
			{
				renderer.gameObject.SetActive(visible && sprite != null);
				Transform transform = renderer.transform;
				transform.localPosition = position;
				transform.localRotation = Quaternion.Euler(0f, 0f, rotation);
				renderer.sortingOrder = order;
				SetSprite(renderer, sprite, size);
			}
		}

		private static void SetSprite(SpriteRenderer renderer, Sprite sprite, Vector2 size)
		{
			renderer.sprite = sprite;
			float a = 1f;
			if (sprite != null)
			{
				Bounds bounds = sprite.bounds;
				a = Mathf.Max(bounds.extents.x * 2f, bounds.extents.y * 2f);
			}
			float num = Mathf.Max(0.01f, a);
			renderer.transform.localScale = new Vector3(size.x / num, size.y / num, Mathf.Max(size.x, size.y) / num);
		}
	}
}
