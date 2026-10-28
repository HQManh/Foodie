using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class AreaService
	{
		private GridIngController grid;

		private ServeShelfController shelf;

		public bool IsGridAlertBlinking => grid.IsFullAlertBlinking;

		public bool IsGridDeadlockBlinking => grid.IsDeadlockBlinking;

		public bool IsBeltTapBlocked => grid.IsBeltTapBlocked;

		public float GridAlertBlinkPhase => grid.FullAlertBlinkPhase;

		public AreaService(GridIngController ingGrid, ServeShelfController serveShelf)
		{
			grid = ingGrid;
			shelf = serveShelf;
		}

		public bool TryGetCell(DragItem item, out IngCell cell)
		{
			return grid.TryGetCell(item, out cell);
		}

		public bool TryGetCellNearest(DragItem item, out IngCell cell)
		{
			return grid.TryGetCellNearest(item, out cell);
		}

		public void RefreshCellDishes()
		{
			grid.RefreshCellDishes();
		}

		public void ShowCellDish(Vector2Int coord, bool show)
		{
			grid.ShowCellDish(coord, show);
		}

		public void SendToOverflow(DragItem item)
		{
			if ((bool)item)
			{
				grid.Park(item);
			}
		}

		public IEnumerable<DragItem> GetRemainingItems()
		{
			foreach (DragItem item in grid.GetRemainingItems())
			{
				yield return item;
			}
			foreach (DragItem parked in grid.ParkedItems)
			{
				yield return parked;
			}
			if ((bool)shelf)
			{
				foreach (DragItem item2 in shelf.GetRemainingItems())
				{
					yield return item2;
				}
			}
		}

		public IEnumerable<DragItem> GetGridItems()
		{
			return grid.GetRemainingItems();
		}

		public IEnumerable<DragItem> GetFieldItems()
		{
			foreach (DragItem item in GetRemainingItems())
			{
				yield return item;
			}
			if ((bool)shelf)
			{
				foreach (DragItem item2 in shelf.GetMergingItems())
				{
					yield return item2;
				}
			}
		}

		public bool IsCellAvailable(string id, int num)
		{
			return grid.IsCellAvailable(id, num);
		}

		public int CountAvailable(string id, int max)
		{
			return grid.CountAvailable(id, max);
		}

		public bool CanPlaceAll(IReadOnlyList<string> ids)
		{
			return grid.CanPlaceAll(ids);
		}

		public void ReservePendingCell(string id)
		{
			grid.ReservePendingCell(id);
		}

		public void ReleasePendingCell(string id)
		{
			grid.ReleasePendingCell(id);
		}

		public void PulseGridFullAlert(float cycleDuration)
		{
			grid.PulseFullAlert(cycleDuration);
		}

		public void SetBeltStuck(bool stuck)
		{
			grid.SetBeltStuck(stuck);
		}

		public void SetBeltDeadlocked(bool v)
		{
			grid.SetBeltDeadlocked(v);
		}

		public void SetBeltHasMove(bool v)
		{
			grid.SetBeltHasMove(v);
		}

		public int CountCellsFreeableBySaveMe()
		{
			return grid.CountCellsFreeableBySaveMe();
		}
	}
}
