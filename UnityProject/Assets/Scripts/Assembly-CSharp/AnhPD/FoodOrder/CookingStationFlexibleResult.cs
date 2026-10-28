namespace AnhPD.FoodOrder
{
	public class CookingStationFlexibleResult : CookingStation
	{
		protected override void SpawnResult(int groupIndex, int num)
		{
			StationInteractGroup group = groups[groupIndex];
			_orchestrator.ForceSpawnResult();
			ReleaseResult(groupIndex, 1, delegate(DragItem item)
			{
				FlexibleDragItem flexibleDragItem = item as FlexibleDragItem;
				if (flexibleDragItem != null)
				{
					/* literal recovered by guess */
					flexibleDragItem.CombineInit("", group.GetInteractId(0));
				}
			});
		}

		protected override int ShelfGainOfResult(int groupIndex)
		{
			ServeShelfController serveShelfController = null;
			LevelInfo levelInfo = null;
			if ((bool)MessyController.Ins)
			{
				serveShelfController = MessyController.Ins.ServeShelf;
				levelInfo = MessyController.Ins.Info;
			}
			if (!serveShelfController)
			{
				return 0;
			}
			if (levelInfo == null)
			{
				return 0;
			}
			string text = ResolveResultId(groupIndex);
			FlexibleDragItem flexibleDragItem = levelInfo.GetIngredientPrefab(text) as FlexibleDragItem;
			if (flexibleDragItem != null)
			{
				/* literal recovered by guess */
				PieceSet pieces = flexibleDragItem.PredictCombinePieces("", groups[groupIndex].GetInteractId(0));
				if (pieces.IsEmpty)
				{
					return 0;
				}
				PieceOffer offer = new PieceOffer
				{
					pieces = pieces,
					subsetOnly = true,
					priority = 0
				};
				return serveShelfController.ScoreGainForOffer(offer, FlexibleId.BaseOf(text));
			}
			return base.ShelfGainOfResult(groupIndex);
		}
	}
}
