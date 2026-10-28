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

		protected override GameObject VisualRoot => null;

		protected override int NearestOrderIndex(Vector2 screenPos)
		{
			return 0;
		}

		protected override FOrderItem ItemAt(int index)
		{
			return null;
		}

		public override void ShowOrder(List<OrderSpec> orders, IReadOnlyList<OrderItemLook> looks)
		{
		}

		private bool UsesBurgerLayout(List<OrderSpec> orders)
		{
			return false;
		}

		public override float GetLoadDuration(List<OrderSpec> orders)
		{
			return 0f;
		}

		public override void HideOrder()
		{
		}

		private void HideBurgerOrder()
		{
		}

		public override List<List<int>> Split(List<OrderSpec> orders)
		{
			return null;
		}

		private bool IsBurger(OrderSpec order)
		{
			return false;
		}
	}
}
