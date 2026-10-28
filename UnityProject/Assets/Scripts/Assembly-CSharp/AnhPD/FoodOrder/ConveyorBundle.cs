using CakeOrder;

namespace AnhPD.FoodOrder
{
	public class ConveyorBundle
	{
		public IngredientState[] Items;

		public ConveyorBundleStatus Status;

		public IngredientSlotKind Kind;

		public int Width = 1;

		public int Height = 1;

		public int ChainId;

		public int ChainSize;

		public int StatusParam;

		public bool Hidden;

		public int KeyColor = -1;

		public int DataRow = -1;
	}
}
