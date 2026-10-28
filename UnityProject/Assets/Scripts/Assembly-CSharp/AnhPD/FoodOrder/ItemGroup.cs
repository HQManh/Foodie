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

		public IReadOnlyList<DragItem> Items => _items;

		public string Label => string.Format("{0} ({1})", _id, _items.Count);

		public ItemGroup(string id)
		{
			_items = new List<DragItem>();
			_id = id;
		}

		public bool IsHaveItem()
		{
			return _items.Count > 0;
		}

		public void AddItem(DragItem item)
		{
			_items.Add(item);
		}

		public void RemoveItem(DragItem item)
		{
			_items.Remove(item);
		}

		public Vector2 GetRandomItemLandPosition()
		{
			return _items[UnityEngine.Random.Range(0, _items.Count)].GetLandPos();
		}

		public Tween SortItemTween()
		{
			return DOTween.Sequence();
		}
	}
}
