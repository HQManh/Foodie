using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CookingStationSharedFirstOnDemand : CookingStationSharedFirst
	{
		private static bool _gating;

		private int _wantFrame = -1;

		private readonly Dictionary<string, bool> _wantCache = new Dictionary<string, bool>();

		private readonly Dictionary<string, int> _onGrid = new Dictionary<string, int>();

		private readonly List<DragItem> _gridItems = new List<DragItem>();

		private bool _gridKnown;

		private readonly Dictionary<string, int> _need = new Dictionary<string, int>();

		public override bool WantsAutoIntake(string ingId)
		{
			if (InteractingGroup() < 0 && (bool)MessyController.Ins)
			{
				LevelInfo info = MessyController.Ins.Info;
				LevelPieceBook levelPieceBook = ((info != null) ? info.Pieces : null);
				if (levelPieceBook != null)
				{
					if (_wantFrame != Time.frameCount)
					{
						_wantFrame = Time.frameCount;
						_wantCache.Clear();
						_gridKnown = false;
					}
					if (_wantCache.TryGetValue(ingId, out var value))
					{
						return value;
					}
					if (_gating)
					{
						return true;
					}
					_gating = true;
					bool flag = false;
					for (int i = 0; i < groups.Length; i++)
					{
						if (flag)
						{
							break;
						}
						StationInteractGroup stationInteractGroup = groups[i];
						if (!stationInteractGroup.AcceptsId(ingId))
						{
							flag = false;
						}
						else if (stationInteractGroup.slots.Length < 2 || ShelfGainOfResult(i) > 0)
						{
							flag = true;
						}
						else
						{
							flag = RestOnGrid(levelPieceBook, stationInteractGroup, ingId);
						}
					}
					_gating = false;
					_wantCache[ingId] = flag;
					return flag;
				}
			}
			return true;
		}

		private bool RestOnGrid(LevelPieceBook book, StationInteractGroup group, string ingId)
		{
			if (!_gridKnown)
			{
				_gridKnown = true;
				_onGrid.Clear();
				book.CollectGridTakeables(_gridItems);
				foreach (DragItem gridItem in _gridItems)
				{
					string id = gridItem.GetId();
					_onGrid.TryGetValue(id, out var value);
					_onGrid[id] = value + 1;
				}
			}
			_need.Clear();
			bool flag = false;
			StationSlot[] slots = group.slots;
			for (int i = 0; i < slots.Length; i++)
			{
				StationSlot stationSlot = slots[i];
				if (flag || stationSlot.ingId != ingId)
				{
					_need.TryGetValue(stationSlot.ingId, out var value2);
					_need[stationSlot.ingId] = value2 + 1;
				}
				else
				{
					flag = true;
				}
			}
			foreach (KeyValuePair<string, int> item in _need)
			{
				string key = item.Key;
				int value3 = item.Value;
				_onGrid.TryGetValue(key, out var value4);
				if (key == ingId)
				{
					value4--;
				}
				if (value3 > value4)
				{
					return false;
				}
			}
			return true;
		}
	}
}
