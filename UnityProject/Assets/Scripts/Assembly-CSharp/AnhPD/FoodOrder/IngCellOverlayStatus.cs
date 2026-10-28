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

		// Enum member names for GridEffectType were not recovered; kinds are the raw values seen in the ctor call sites (0 normal, 1 blocked, 2 order lock, 3 ingredient slot, 4 color lock).
		public static IngCellOverlayStatus Normal => new IngCellOverlayStatus((GridEffectType)0, 0, null, 0);

		private IngCellOverlayStatus(GridEffectType kind, int number, Sprite icon, int color = 0)
		{
			Kind = kind;
			Number = number;
			Icon = icon;
			Color = color;
		}

		public static IngCellOverlayStatus Blocked()
		{
			return new IngCellOverlayStatus((GridEffectType)1, 0, null, 0);
		}

		public static IngCellOverlayStatus OrderLock(int serves)
		{
			return new IngCellOverlayStatus((GridEffectType)2, serves, null, 0);
		}

		public static IngCellOverlayStatus ColorLock(int colorIndex, int keysLeft)
		{
			return new IngCellOverlayStatus((GridEffectType)4, keysLeft, null, colorIndex);
		}

		public static IngCellOverlayStatus IngredientSlot(Sprite icon, int serves)
		{
			return new IngCellOverlayStatus((GridEffectType)3, serves, icon, 0);
		}
	}
}
