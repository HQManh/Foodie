using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class CookingStationSharedFirstOnDemand : CookingStationSharedFirst
	{
		private static bool _gating;

		private int _wantFrame;

		private readonly Dictionary<string, bool> _wantCache;

		private readonly Dictionary<string, int> _onGrid;

		private readonly List<DragItem> _gridItems;

		private bool _gridKnown;

		private readonly Dictionary<string, int> _need;

		public override bool WantsAutoIntake(string ingId)
		{
			return false;
		}

		private bool RestOnGrid(LevelPieceBook book, StationInteractGroup group, string ingId)
		{
			return false;
		}
	}
}
