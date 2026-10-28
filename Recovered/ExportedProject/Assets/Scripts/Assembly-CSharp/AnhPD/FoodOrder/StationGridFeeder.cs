using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class StationGridFeeder
	{
		private const float ScanInterval = 0.2f;

		private readonly CookingStation _station;

		private float _nextScanTime;

		private readonly List<DragItem> _candidates;

		private readonly List<string> _resultIds;

		private readonly List<PieceSet> _gathered;

		private List<OrderSpec> _specs;

		public StationGridFeeder(CookingStation station)
		{
		}

		public void Tick()
		{
		}

		private DragItem FindFeedableItem(MessyController messy, List<DragItem> items)
		{
			return null;
		}

		private int RankOf(LevelInfo info, string resultId, PieceSet missing)
		{
			return 0;
		}

		private bool OpensUnstartedOrder(LevelInfo info, string resultId, PieceSet pieces)
		{
			return false;
		}

		private PieceSet CollectMissingPieces(MessyController messy, List<DragItem> items)
		{
			return default;
		}

		private static bool IsRestingOnGrid(DragItem item)
		{
			return false;
		}
	}
}
