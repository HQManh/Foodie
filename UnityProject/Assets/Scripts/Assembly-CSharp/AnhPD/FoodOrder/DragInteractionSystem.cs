namespace AnhPD.FoodOrder
{
	public static class DragInteractionSystem
	{
		public static void HandleDropFallback(AreaService areaService, DragItem dragItem)
		{
			if (dragItem.gameObject.activeSelf)
			{
				IngCell cell;
				if (!areaService.TryGetCell(dragItem, out cell))
				{
					areaService.SendToOverflow(dragItem);
				}
				else
				{
					dragItem.RegisterCell(cell);
				}
			}
		}
	}
}
