using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SandwichOrderBoard : OrderBoard
	{
		[SerializeField]
		private FOrderItem[] sandwichItems;

		[SerializeField]
		private GameObject sandwichBoardRoot;

		private const int MaxSidesPerBoard = 2;

		private const int SandwichSlotIndex = 0;

		private bool _isSandwichLayout;

		protected override GameObject VisualRoot
		{
			get
			{
				if (_isSandwichLayout && sandwichBoardRoot != null)
				{
					return sandwichBoardRoot;
				}
				return base.VisualRoot;
			}
		}

		protected override int NearestOrderIndex(Vector2 screenPos)
		{
			if (_isSandwichLayout)
			{
				return 0;
			}
			return base.NearestOrderIndex(screenPos);
		}

		protected override FOrderItem ItemAt(int index)
		{
			if (!_isSandwichLayout)
			{
				return base.ItemAt(index);
			}
			return sandwichItems[SandwichSlotIndex];
		}

		public override void ShowOrder(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
			bool usesSandwich = UsesSandwichLayout(orders);
			_isSandwichLayout = usesSandwich;
			if (!usesSandwich)
			{
				base.ShowOrder(orders, looks);
				HideSandwichOrder();
				return;
			}

			base.HideOrder();
			foreach (FOrderItem item in sandwichItems)
			{
				item.HideItem();
			}
			SetPreviewOrders(orders, looks);

			FOrderItem slot = sandwichItems[SandwichSlotIndex];
			if (slot == null)
			{
				return;
			}
			// TODO(unrecovered): the static scale constant applied to the slot transform is not recovered.
			if (slot.gameObject != null)
			{
				slot.gameObject.SetActive(true);
				if (orders != null)
				{
					slot.InitOrder(orders[0]);
					slot.ApplyLook(LookAt(0));
					return;
				}
			}
		}

		private bool UsesSandwichLayout(List<OrderSpec> orders)
		{
			if (orders == null)
			{
				throw new System.NullReferenceException();
			}
			if (orders.Count == 1 && sandwichItems != null && sandwichItems.Length > 0)
			{
				return IsSavorySandwich(orders[0]);
			}
			return false;
		}

		public override float GetLoadDuration(List<OrderSpec> orders)
		{
			if (UsesSandwichLayout(orders))
			{
				return 0f;
			}
			return base.GetLoadDuration(orders);
		}

		public override void HideOrder()
		{
			base.HideOrder();
			HideSandwichOrder();
		}

		private void HideSandwichOrder()
		{
			foreach (FOrderItem item in sandwichItems)
			{
				item.ClearOrder();
				item.HideItem();
			}
		}

		public override List<List<int>> Split(List<OrderSpec> orders)
		{
			List<List<int>> result = new List<List<int>>();
			List<int> plain = new List<int>();
			for (int i = 0; i < orders.Count; i++)
			{
				if (IsSavorySandwich(orders[i]))
				{
					List<int> single = new List<int>();
					single.Add(i);
					result.Add(single);
				}
				else
				{
					plain.Add(i);
				}
			}

			int chunk = Capacity > 1 ? MaxSidesPerBoard : 1;
			for (int start = 0; start < plain.Count; start += chunk)
			{
				List<int> group = new List<int>();
				for (int j = start; j < plain.Count && group.Count < chunk; j++)
				{
					group.Add(plain[j]);
				}
				result.Add(group);
			}

			result.Sort((a, b) => a[0].CompareTo(b[0]));
			return result;
		}

		private static bool IsSavorySandwich(OrderSpec order)
		{
			RecipeConfigSO recipe = MessyController.Ins != null ? MessyController.Ins.recipeConfig : null;
			if (recipe == null)
			{
				return false;
			}
			if (recipe.TryGetDishKindOfBaseId(order.BaseId, out int dishKind))
			{
				return dishKind == 1;
			}
			return false;
		}
	}
}
