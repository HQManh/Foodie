using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellDisplay : MonoBehaviour
	{
		[SerializeField]
		private IngCellDisplayState dish;

		[SerializeField]
		private IngCellDisplayState crackHole;

		[SerializeField]
		private IngCellStateLock cellLock;

		[SerializeField]
		private IngCellStateIngredientSlot ingredientSlot;

		[SerializeField]
		private IngCellStateColorLock colorLock;

		[SerializeField]
		private IngCellStateGlow glow;

		// The plate drawn under a finished dish that sits in this cell.
		public bool IsDishShown => dish != null && dish.IsShown;

		private void Awake()
		{
			EnsureIngredientSlot();
		}

		// The cell template has no ingredient-slot overlay (a cell that opens once a given dish has been served a number of times), so it is
		// built from the parts the template does have: the colour lock's frame, an icon, and the ice lock's counter.
		private void EnsureIngredientSlot()
		{
			if (ingredientSlot != null || cellLock == null)
			{
				return;
			}
			GameObject root = new GameObject("ingredient-slot");
			root.transform.SetParent(transform, false);
			// Same size as the colour lock, whose frame this reuses (its frame is authored at a 0.5 parent scale).
			float rootScale = colorLock != null ? colorLock.transform.localScale.x : 1f;
			root.transform.localScale = new Vector3(rootScale, rootScale, 1f);
			root.SetActive(false);
			Transform frameSource = colorLock != null ? colorLock.transform.Find("bg") : null;
			int order = -400;
			if (frameSource != null)
			{
				GameObject frame = Instantiate(frameSource.gameObject, root.transform, false);
				frame.name = "bg";
				frame.SetActive(true);
				SpriteRenderer frameRenderer = frame.GetComponent<SpriteRenderer>();
				if (frameRenderer != null)
				{
					order = frameRenderer.sortingOrder;
				}
			}
			GameObject iconObject = new GameObject("icon");
			iconObject.transform.SetParent(root.transform, false);
			SpriteRenderer iconRenderer = iconObject.AddComponent<SpriteRenderer>();
			Transform iceSource = cellLock.transform.Find("ice");
			SpriteRenderer iceRenderer = iceSource != null ? iceSource.GetComponent<SpriteRenderer>() : null;
			if (iceRenderer != null)
			{
				iconRenderer.sortingLayerID = iceRenderer.sortingLayerID;
			}
			iconRenderer.sortingOrder = order + 1;
			TextMesh counter = null;
			Transform countSource = cellLock.transform.Find("count");
			if (countSource != null)
			{
				GameObject count = Instantiate(countSource.gameObject, root.transform, false);
				count.name = "count";
				// Bottom-right corner of the frame, at the size it has on the ice lock (the root is scaled, so compensate).
				float inverse = rootScale > 0.0001f ? 1f / rootScale : 1f;
				count.transform.localPosition = new Vector3(0.3f * inverse, -0.28f * inverse, countSource.localPosition.z * inverse);
				count.transform.localScale = countSource.localScale * inverse * 0.8f;
				counter = count.GetComponent<TextMesh>();
				if (counter != null)
				{
					counter.color = Color.white;
				}
			}
			IngCellStateIngredientSlot slot = root.AddComponent<IngCellStateIngredientSlot>();
			// Fit the icon to about half a cell (the root is scaled, so compensate).
			slot.Setup(iconRenderer, counter, 0.55f / (rootScale > 0.0001f ? rootScale : 1f));
			ingredientSlot = slot;
		}

		// Draws the cell's overlay for the given status and hides the others. Returns false when the status needs a visual this cell does not have.
		// Kinds: 0 normal, 1 blocked (crack hole), 2 order lock, 3 ingredient slot, 4 colour lock.
		public bool Apply(IngCellOverlayStatus status)
		{
			int kind = (int)status.Kind;
			if (kind == 3)
			{
				EnsureIngredientSlot();
			}
			HideOverlays();
			switch (kind)
			{
			case 0:
				return true;
			case 1:
				if (crackHole == null)
				{
					return false;
				}
				crackHole.Show();
				return true;
			case 2:
				if (cellLock == null)
				{
					return false;
				}
				cellLock.Show(status.Number);
				return true;
			case 3:
				if (ingredientSlot == null)
				{
					return false;
				}
				ingredientSlot.Show(status.Icon, status.Number);
				return true;
			case 4:
				if (colorLock == null)
				{
					return false;
				}
				colorLock.Show(status.Color, status.Number);
				return true;
			default:
				return false;
			}
		}

		public void PlayColorLockUnlock(Action onUnlocked)
		{
			if (colorLock == null)
			{
				onUnlocked?.Invoke();
				return;
			}
			colorLock.PlayUnlock(onUnlocked);
		}

		public void SetDish(bool show)
		{
			if (dish != null)
			{
				dish.SetShown(show);
			}
		}

		public void PlayGlow()
		{
			if (glow != null)
			{
				glow.Show();
				glow.PlayOnce();
			}
		}

		public void HideAll()
		{
			HideOverlays();
			if (dish != null)
			{
				dish.Hide();
			}
			if (glow != null)
			{
				glow.Hide();
			}
		}

		private void HideOverlays()
		{
			if (crackHole != null)
			{
				crackHole.Hide();
			}
			if (cellLock != null)
			{
				cellLock.Hide();
			}
			if (ingredientSlot != null)
			{
				ingredientSlot.Hide();
			}
			if (colorLock != null)
			{
				colorLock.Hide();
			}
		}
	}
}
