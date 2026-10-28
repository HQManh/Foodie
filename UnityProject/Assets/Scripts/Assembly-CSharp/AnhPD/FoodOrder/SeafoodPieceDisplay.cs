using UnityEngine;

namespace AnhPD.FoodOrder
{
	public sealed class SeafoodPieceDisplay : MonoBehaviour
	{
		[SerializeField]
		private SeafoodContainerVisual container;

		[SerializeField]
		private Sprite gridPlate;

		[SerializeField]
		private Vector2 gridPlateSize;

		[SerializeField]
		private SeafoodRecipeLayer[] recipeLayers;

		[SerializeField]
		private Transform artworkRoot;

		[SerializeField]
		[Min(0.01f)]
		private float shelfScale;

		private DragItem owner;

		private bool displayPreview;

		private bool hasState;

		private bool wasOnShelf;

		private PieceSet lastState;

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
				return owner.IsOnDishRow || owner.DishControlled;
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
			if (owner == null)
			{
				owner = GetComponentInParent<DragItem>();
			}
			if (hasState && wasOnShelf != OnShelf)
			{
				ShowContainer(!lastState.IsEmpty);
			}
			UpdateArtworkScale();
		}

		public void Display(PieceSet state)
		{
			if (owner == null)
			{
				owner = GetComponentInParent<DragItem>();
			}
			hasState = true;
			lastState = state;
			ShowContainer(!state.IsEmpty);
			if (recipeLayers == null)
			{
				return;
			}
			foreach (SeafoodRecipeLayer layer in recipeLayers)
			{
				if (layer == null || layer.renderer == null)
				{
					continue;
				}
				bool show = !state.IsEmpty && layer.sprite != null;
				if (layer.requiredPieces != null)
				{
					foreach (int kind in layer.requiredPieces)
					{
						show &= state[kind] > 0;
					}
				}
				if (layer.excludedPieces != null)
				{
					foreach (int kind in layer.excludedPieces)
					{
						show &= state[kind] == 0;
					}
				}
				layer.renderer.gameObject.SetActive(show);
				if (!show)
				{
					continue;
				}
				Transform tf = layer.renderer.transform;
				tf.localPosition = layer.position;
				tf.localRotation = Quaternion.Euler(0f, 0f, layer.rotation);
				layer.renderer.sortingOrder = layer.sortOrder;
				SetSprite(layer.renderer, layer.sprite, layer.size);
			}
		}

		private void ShowContainer(bool visible)
		{
			wasOnShelf = OnShelf;
			UpdateArtworkScale();
			// TODO(unrecovered): container and grid layer placement reads layout constants from an unnamed static config object and SeafoodContainerVisual fields; ShowContainerLayer is ready but its arguments are not resolved
		}

		private void UpdateArtworkScale()
		{
			if (artworkRoot == null)
			{
				return;
			}
			// TODO(unrecovered): target scale comes from a Vector3 stored in an unnamed static config struct; the shelfScale factor is known
		}

		private static void ShowContainerLayer(SpriteRenderer renderer, Sprite sprite, Vector3 position, float rotation, Vector2 size, int order, bool visible)
		{
			if (renderer == null)
			{
				return;
			}
			renderer.gameObject.SetActive(visible && sprite != null);
			Transform tf = renderer.transform;
			tf.localPosition = position;
			tf.localRotation = Quaternion.Euler(0f, 0f, rotation);
			renderer.sortingOrder = order;
			SetSprite(renderer, sprite, size);
		}

		private static void SetSprite(SpriteRenderer renderer, Sprite sprite, Vector2 size)
		{
			if (renderer == null)
			{
				return;
			}
			renderer.sprite = sprite;
			float extent = 1f;
			if (sprite != null)
			{
				Vector3 bounds = sprite.bounds.size;
				extent = Mathf.Max(bounds.x, bounds.y);
			}
			float divisor = Mathf.Max(0.01f, extent);
			float maxSize = Mathf.Max(size.x, size.y);
			renderer.transform.localScale = new Vector3(size.x / divisor, size.y / divisor, maxSize / divisor);
		}
	}
}
