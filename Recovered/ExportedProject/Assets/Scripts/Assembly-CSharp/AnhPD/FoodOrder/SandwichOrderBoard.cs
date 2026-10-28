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

		private bool UsesSandwichLayout(List<OrderSpec> orders)
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

		private void HideSandwichOrder()
		{
		}

		public override List<List<int>> Split(List<OrderSpec> orders)
		{
			return null;
		}

		private static bool IsSavorySandwich(OrderSpec order)
		{
			return false;
		}
	}
}
