using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class BurgerOrderBoard : OrderBoard
	{
		[SerializeField]
		private FOrderItem[] burgerItems;

		[SerializeField]
		private GameObject burgerBoardRoot;

		private const int MaxSidesPerBoard = 2;

		private const int BurgerSlotIndex = 0;

		private bool _isBurgerLayout;

		protected override GameObject VisualRoot
		{
			get
			{
				if (_isBurgerLayout && burgerBoardRoot != null)
				{
					return burgerBoardRoot;
				}
				return base.VisualRoot;
			}
		}

		protected override int NearestOrderIndex(Vector2 screenPos)
		{
			if (_isBurgerLayout)
			{
				return 0;
			}
			return base.NearestOrderIndex(screenPos);
		}

		protected override FOrderItem ItemAt(int index)
		{
			if (!_isBurgerLayout)
			{
				return base.ItemAt(index);
			}
			return burgerItems[0];
		}

		public override void ShowOrder(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
			_isBurgerLayout = UsesBurgerLayout(orders);
			if (!_isBurgerLayout)
			{
				base.ShowOrder(orders, looks);
				HideBurgerOrder();
				return;
			}
			base.HideOrder();
			for (int i = 0; i < burgerItems.Length; i++)
			{
				burgerItems[i].HideItem();
			}
			SetPreviewOrders(orders, looks);
			FOrderItem item = burgerItems[0];
			item.transform.localScale = Vector3.one; /* TODO(unrecovered): scale comes from an unnamed static Vector3, assumed Vector3.one */
			item.gameObject.SetActive(true);
			item.InitOrder(orders[0]);
			item.ApplyLook(LookAt(0));
		}

		private bool UsesBurgerLayout(List<OrderSpec> orders)
		{
			if (orders.Count == 1 && burgerItems.Length != 0)
			{
				return IsBurger(orders[0]);
			}
			return false;
		}

		public override float GetLoadDuration(List<OrderSpec> orders)
		{
			if (UsesBurgerLayout(orders))
			{
				return 0f;
			}
			return base.GetLoadDuration(orders);
		}

		public override void HideOrder()
		{
			base.HideOrder();
			HideBurgerOrder();
		}

		private void HideBurgerOrder()
		{
			for (int i = 0; i < burgerItems.Length; i++)
			{
				burgerItems[i].ClearOrder();
				burgerItems[i].HideItem();
			}
		}

		public override List<List<int>> Split(List<OrderSpec> orders)
		{
			List<List<int>> groups = new List<List<int>>();
			List<int> others = new List<int>();
			for (int i = 0; i < orders.Count; i++)
			{
				if (!IsBurger(orders[i]))
				{
					others.Add(i);
					continue;
				}
				List<int> single = new List<int>();
				single.Add(i);
				groups.Add(single);
			}
			int perGroup = ((base.Capacity > 1) ? MaxSidesPerBoard : 1);
			for (int j = 0; j < others.Count; j += perGroup)
			{
				List<int> group = new List<int>();
				for (int k = j; k < others.Count && group.Count < perGroup; k++)
				{
					group.Add(others[k]);
				}
				groups.Add(group);
			}
			groups.Sort((List<int> a, List<int> b) => a[0].CompareTo(b[0]));
			return groups;
		}

		private bool IsBurger(OrderSpec order)
		{
			return order.BaseId == "burger"; /* literal recovered by guess */
		}
	}
}
