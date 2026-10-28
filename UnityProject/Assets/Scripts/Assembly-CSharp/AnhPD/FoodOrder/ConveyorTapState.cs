namespace AnhPD.FoodOrder
{
	public class ConveyorTapState
	{
		private readonly ConveyorPickup _pickup;

		public int PickAnyTappable { get; private set; }

		public int PickAnyBusy { get; private set; }

		public ConveyorTapState(ConveyorPickup pickup)
		{
			_pickup = pickup;
		}

		public void Refresh(ConveyorGrid grid, float deltaTime)
		{
			bool pickAny = _pickup.PickAnyMode;
			PickAnyTappable = 0;
			PickAnyBusy = 0;
			foreach (ConveyorSlot slot in grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (!(item != null))
				{
					continue;
				}
				if (!pickAny)
				{
					bool canTap;
					bool inviting;
					if (slot.IsAtFrontRow && _pickup.AcceptsTap(item))
					{
						canTap = true;
						inviting = item.FreezeTurns < 1 && _pickup.CanPick(item);
					}
					else
					{
						canTap = false;
						inviting = false;
					}
					item.SetTapState(canTap, inviting, canTap);
					continue;
				}
				if (item.IsBusy)
				{
					PickAnyBusy++;
				}
				bool tappable = false;
				if (_pickup.AcceptsTap(item) && item.FreezeTurns <= 0 && _pickup.HasRoomFor(item, requireStationExit: true))
				{
					tappable = true;
					PickAnyTappable++;
				}
				item.SetTapState(tappable, tappable, tappable);
			}
		}
	}
}
