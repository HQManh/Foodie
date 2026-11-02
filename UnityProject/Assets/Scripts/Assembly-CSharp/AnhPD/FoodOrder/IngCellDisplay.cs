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

		// Draws the cell's overlay for the given status and hides the others. Returns false when the status needs a visual this cell does not have.
		// Kinds: 0 normal, 1 blocked (crack hole), 2 order lock, 3 ingredient slot, 4 colour lock.
		public bool Apply(IngCellOverlayStatus status)
		{
			int kind = (int)status.Kind;
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
