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

		public int RightCol => Col + Width - 1;

		public int BottomRow => Row + Height - 1;

		public bool IsAtFrontRow => Row == 0;

		public bool IsPickable
		{
			get
			{
				if (Row != 0)
				{
					return false;
				}
				if (Chain != null)
				{
					return Chain.IsReady;
				}
				return true;
			}
		}

		public bool CoversColumn(int col)
		{
			if (col < Col)
			{
				return false;
			}
			return col <= Col + Width - 1;
		}
	}
}
