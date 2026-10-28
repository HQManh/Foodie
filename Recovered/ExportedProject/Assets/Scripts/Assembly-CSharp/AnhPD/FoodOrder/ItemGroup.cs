using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class ItemGroup
	{
		private string _id;

		private List<DragItem> _items;

		public IReadOnlyList<DragItem> Items => null;

		public string Label => null;

		public ItemGroup(string id)
		{
		}

		public bool IsHaveItem()
		{
			return false;
		}

		public void AddItem(DragItem item)
		{
		}

		public void RemoveItem(DragItem item)
		{
		}

		public Vector2 GetRandomItemLandPosition()
		{
			return default;
		}

		public Tween SortItemTween()
		{
			return null;
		}
	}
}
