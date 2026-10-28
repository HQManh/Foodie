namespace AnhPD.FoodOrder
{
	public class ConveyorTapState
	{
		private readonly ConveyorPickup _pickup;

		public int PickAnyTappable { get; private set; }

		public int PickAnyBusy { get; private set; }

		public ConveyorTapState(ConveyorPickup pickup)
		{
		}

		public void Refresh(ConveyorGrid grid, float deltaTime)
		{
		}
	}
}
