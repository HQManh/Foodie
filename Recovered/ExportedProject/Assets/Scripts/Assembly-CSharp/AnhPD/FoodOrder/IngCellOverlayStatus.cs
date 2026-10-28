using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public readonly struct IngCellOverlayStatus
	{
		public readonly GridEffectType Kind;

		public readonly int Number;

		public readonly Sprite Icon;

		public readonly int Color;

		public static IngCellOverlayStatus Normal => default;

		private IngCellOverlayStatus(GridEffectType kind, int number, Sprite icon, int color = 0)
		{
			Kind = GridEffectType.Normal;
			Number = 0;
			Icon = null;
			Color = 0;
		}

		public static IngCellOverlayStatus Blocked()
		{
			return default;
		}

		public static IngCellOverlayStatus OrderLock(int serves)
		{
			return default;
		}

		public static IngCellOverlayStatus ColorLock(int colorIndex, int keysLeft)
		{
			return default;
		}

		public static IngCellOverlayStatus IngredientSlot(Sprite icon, int serves)
		{
			return default;
		}
	}
}
