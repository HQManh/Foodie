namespace AnhPD.FoodOrder
{
	public class DragInteractionHandler
	{
		private readonly DragInteractionContext _context;

		private readonly AreaService _area;

		private readonly SpawnService _spawn;

		public DragInteractionHandler(DragInteractionContext context, AreaService area, SpawnService spawn)
		{
		}

		public void OnItemLandedAtStation(DragItem item, CookingStation station)
		{
		}

		public bool MergeIntoPlate(ServePlate plate, DragItem item, string resultId = null)
		{
			return false;
		}

		private static void PlayMergeBurst(DragItem colorSource, DragItem at)
		{
		}
	}
}
