using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCell
	{
		private readonly Vector2 _itemOffset;

		private readonly List<DragItem> _items;

		private readonly HashSet<DragItem> _landedItems;

		public Action OnItemRemoved;

		public Action<DragItem> OnLanded;

		public int MaxStack => 0;

		public Vector2Int Coord { get; }

		public Vector2 WorldCenter { get; }

		public Vector2 CellSize { get; }

		private Vector2 ItemAnchor => default;

		private Vector2 CurrentAnchor => default;

		public IReadOnlyList<DragItem> Items => null;

		public bool IsEmpty => false;

		public int OccupiedCount => 0;

		public bool HasDirtyPlate => false;

		private StackLayout Layout => StackLayout.Diagonal;

		public static int WeightOf(DragItem item)
		{
			return 0;
		}

		public IngCell(Vector2Int coord, Vector2 worldCenter, Vector2 cellSize, Vector2 itemOffset = default(Vector2))
		{
		}

		public bool CanAccept(DragItem item)
		{
			return false;
		}

		public Vector2 GetNextSlotPosition()
		{
			return default;
		}

		public Vector2 GetCellPosition()
		{
			return default;
		}

		public void OnItemLanded(DragItem item)
		{
		}

		public void Arrange()
		{
		}

		private Vector2 GetSlotPosition(int index, int total)
		{
			return default;
		}

		private Vector2 GetVerticalPosition(int index, int total)
		{
			return default;
		}

		private Vector2 GetDiagonalPosition(int index, int total)
		{
			return default;
		}

		private Vector2 GetAroundCenterPosition(int index, int total)
		{
			return default;
		}

		public bool IsLanded(DragItem item)
		{
			return false;
		}

		public void Add(DragItem item)
		{
		}

		public bool Remove(DragItem item)
		{
			return false;
		}
	}
}
