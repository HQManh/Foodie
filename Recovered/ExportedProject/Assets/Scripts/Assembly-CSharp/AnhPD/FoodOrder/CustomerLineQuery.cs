using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerLineQuery
	{
		private readonly List<FCustomerLine> _orderLines;

		private readonly CustomerLineLayout _layout;

		public CustomerLineQuery(List<FCustomerLine> orderLines, CustomerLineLayout layout)
		{
		}

		public List<string> GetActiveUnservedRecipes()
		{
			return null;
		}

		public List<OrderSpec> GetActiveOpenOrderSpecs(bool servableOnly = false)
		{
			return null;
		}

		private static void AppendUnservedRecipes(FCustomerLine line, List<string> acc)
		{
		}

		public void FreezeWaitTime()
		{
		}

		public void RefillWaitTime()
		{
		}

		public bool TryGetServableLine(DragItem item, out FCustomerLine line)
		{
			line = null;
			return false;
		}

		public Vector2 GetActiveCustomerPosition()
		{
			return default;
		}

		public Transform GetActiveCustomerTransform()
		{
			return null;
		}

		public Transform GetActiveOrderTransform()
		{
			return null;
		}

		public Vector2 GetWeatherCustomerPosition()
		{
			return default;
		}

		public FCustomerLine GetWeatherCustomerLine()
		{
			return null;
		}

		public FCustomerLine PickWorstTimerLine(Func<FCustomerLine, bool> filter = null)
		{
			return null;
		}
	}
}
