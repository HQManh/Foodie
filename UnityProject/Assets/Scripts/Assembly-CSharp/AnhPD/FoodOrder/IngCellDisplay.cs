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

		public bool IsDishShown => dish != null && dish.IsShown;

		public bool Apply(IngCellOverlayStatus status)
		{
			int kind = (int)status.Kind;
			if (crackHole != null && kind != 1)
			{
				crackHole.Hide();
			}
			if (cellLock != null && kind != 2)
			{
				cellLock.Hide();
			}
			if (ingredientSlot != null && kind != 3)
			{
				ingredientSlot.Hide();
			}
			if (colorLock != null && kind != 4)
			{
				colorLock.Hide();
			}
			switch (kind)
			{
			case 1:
				if (crackHole == null)
				{
					return false;
				}
				crackHole.SetShown(true);
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
			if (colorLock != null)
			{
				colorLock.PlayUnlock(onUnlocked);
			}
			else
			{
				onUnlocked?.Invoke();
			}
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
				glow.PlayOnce();
			}
		}

		public void HideAll()
		{
			Apply(IngCellOverlayStatus.Normal);
		}
	}
}
