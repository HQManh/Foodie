using System;
using System.Collections.Generic;
using DG.Tweening;
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

		public int MaxStack => _items.Count < 1 ? 1 : _items[0].maxStack;

		public Vector2Int Coord { get; }

		public Vector2 WorldCenter { get; }

		public Vector2 CellSize { get; }

		// TODO(unrecovered): ItemAnchor getter body is empty in the pseudocode; kept as the item offset.
		private Vector2 ItemAnchor => _itemOffset;

		// TODO(unrecovered): CurrentAnchor return value not recovered; approximated as the cell centre.
		private Vector2 CurrentAnchor => WorldCenter;

		public IReadOnlyList<DragItem> Items => _items;

		public bool IsEmpty => _items.Count == 0;

		public int OccupiedCount
		{
			get
			{
				int total = 0;
				for (int i = 0; i < _items.Count; i++)
				{
					total += WeightOf(_items[i]);
				}
				return total;
			}
		}

		public bool HasDirtyPlate => !IsEmpty && _items[0] != null && _items[0].isDirtyPlate;

		private StackLayout Layout => _items.Count < 1 ? StackLayout.Diagonal : _items[0].stackLayout;

		public static int WeightOf(DragItem item)
		{
			if (item is DragItemStackable stackable)
			{
				return stackable.StackCount;
			}
			return 1;
		}

		public IngCell(Vector2Int coord, Vector2 worldCenter, Vector2 cellSize, Vector2 itemOffset = default(Vector2))
		{
			_items = new List<DragItem>();
			_landedItems = new HashSet<DragItem>();
			Coord = coord;
			WorldCenter = worldCenter;
			CellSize = cellSize;
			_itemOffset = itemOffset;
		}

		public bool CanAccept(DragItem item)
		{
			if (IsEmpty)
			{
				return true;
			}
			if (item == null)
			{
				return false;
			}
			DragItem first = _items[0];
			if (item.isNeedCellDish || first == null || first.isNeedCellDish)
			{
				return false;
			}
			if (first.GetId() != item.GetId())
			{
				return false;
			}
			return WeightOf(item) + OccupiedCount <= MaxStack;
		}

		public Vector2 GetNextSlotPosition()
		{
			int count = _items.Count;
			return GetSlotPosition(count, count + 1);
		}

		public Vector2 GetCellPosition()
		{
			return CurrentAnchor;
		}

		public void OnItemLanded(DragItem item)
		{
			_landedItems.Add(item);
			OnLanded?.Invoke(item);
		}

		public void Arrange()
		{
			int count = _items.Count;
			StackLayout layout = Layout;
			int sortOrder = layout == StackLayout.Vertical ? -(int)CurrentAnchor.y : 0;
			for (int i = 0; i < count; i++)
			{
				DragItem item = _items[i];
				if (!IsLanded(item) || item.isDirtyPlate)
				{
					continue;
				}
				Vector2 slot = GetSlotPosition(i, count);
				Transform tf = item.Tf;
				tf.position = new Vector3(slot.x, slot.y, tf.position.z);
				tf.DOComplete();
				tf.Appear();
				if (layout == StackLayout.Vertical)
				{
					item.SetSortingOrder(sortOrder);
					item.SetDepthByY(slot.y);
				}
			}
		}

		private Vector2 GetSlotPosition(int index, int total)
		{
			if (total < 2)
			{
				return CurrentAnchor;
			}
			switch (Layout)
			{
				case StackLayout.Vertical:
					return GetVerticalPosition(index, total);
				case StackLayout.AroundCenter:
					return GetAroundCenterPosition(index, total);
				default:
					return GetDiagonalPosition(index, total);
			}
		}

		private Vector2 GetVerticalPosition(int index, int total)
		{
			return CurrentAnchor;
		}

		private Vector2 GetDiagonalPosition(int index, int total)
		{
			return CurrentAnchor;
		}

		private Vector2 GetAroundCenterPosition(int index, int total)
		{
			float radius = Mathf.Min(CellSize.x, CellSize.y);
			float angle = ((total == 2) ? 180f : 90f) + (float)index * 360f / (float)total;
			float rad = angle * Mathf.Deg2Rad;
			Vector2 anchor = CurrentAnchor;
			return anchor + new Vector2(Mathf.Cos(rad), Mathf.Sin(rad)) * radius * 0.1f;
		}

		public bool IsLanded(DragItem item)
		{
			return _landedItems.Contains(item);
		}

		public void Add(DragItem item)
		{
			_items.Add(item);
		}

		public bool Remove(DragItem item)
		{
			_landedItems.Remove(item);
			bool removed = _items.Remove(item);
			if (removed)
			{
				OnItemRemoved?.Invoke();
			}
			return removed;
		}
	}
}
