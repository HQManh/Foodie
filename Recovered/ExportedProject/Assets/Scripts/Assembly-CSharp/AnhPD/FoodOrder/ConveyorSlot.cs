namespace AnhPD.FoodOrder
{
	public class ConveyorSlot
	{
		public IngredientConveyorItem Item;

		public ConveyorColumn Owner;

		public int Col;

		public int Row;

		public int Width;

		public int Height;

		public ConveyorChain Chain;

		public int RightCol => 0;

		public int BottomRow => 0;

		public bool IsAtFrontRow => false;

		public bool IsPickable => false;

		public bool CoversColumn(int col)
		{
			return false;
		}
	}
}
