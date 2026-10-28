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

		public bool IsDishShown => false;

		public bool Apply(IngCellOverlayStatus status)
		{
			return false;
		}

		public void PlayColorLockUnlock(Action onUnlocked)
		{
		}

		public void SetDish(bool show)
		{
		}

		public void PlayGlow()
		{
		}

		public void HideAll()
		{
		}
	}
}
