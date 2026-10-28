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
			_orderLines = orderLines;
			_layout = layout;
		}

		public List<string> GetActiveUnservedRecipes()
		{
			List<string> list = new List<string>();
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.isShowingCustomer && orderLine.SpawnData != null)
				{
					AppendUnservedRecipes(orderLine, list);
				}
			}
			return list;
		}

		public List<OrderSpec> GetActiveOpenOrderSpecs(bool servableOnly = false)
		{
			List<OrderSpec> list = new List<OrderSpec>();
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (!orderLine || !orderLine.isShowingCustomer)
				{
					continue;
				}
				List<int> list2 = (servableOnly ? orderLine.GetServableOrderIndices() : orderLine.GetOpenOrderIndices());
				foreach (int item in list2)
				{
					OrderSpec orderSpec = orderLine.GetOrderSpec(item);
					if (orderSpec.IsValid)
					{
						list.Add(orderSpec);
					}
				}
			}
			return list;
		}

		private static void AppendUnservedRecipes(FCustomerLine line, List<string> acc)
		{
			if (line == null || line.SpawnData == null)
			{
				return;
			}
			HashSet<int> hashSet = new HashSet<int>(line.GetOpenOrderIndices());
			int num = 0;
			/* CustomerSpawnData member names guessed */
			foreach (var entry in line.SpawnData.orders)
			{
				int num2 = Math.Max(1, MessyController.Ins.Info.ConvertOrderData(entry.order).Length);
				int num3 = num + num2;
				for (int i = num; i < num3; i++)
				{
					if (hashSet.Contains(i))
					{
						acc.Add(entry.order);
						break;
					}
				}
				num = num3;
			}
		}

		public void FreezeWaitTime()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.isShowingCustomer)
				{
					orderLine.FreezeWaitTime();
				}
			}
		}

		public void RefillWaitTime()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.isShowingCustomer)
				{
					orderLine.RefillWaitTime();
				}
			}
		}

		public bool TryGetServableLine(DragItem item, out FCustomerLine line)
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.State == LineState.Ready && orderLine.CanAccept(item) && MessyController.Ins.Serve.CanReserve(orderLine, item))
				{
					line = orderLine;
					return true;
				}
			}
			line = null;
			return false;
		}

		public Vector2 GetActiveCustomerPosition()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.isShowingCustomer)
				{
					return orderLine.targetPos.position;
				}
			}
			return Vector2.zero;
		}

		public Transform GetActiveCustomerTransform()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.isShowingCustomer)
				{
					return orderLine.targetPos;
				}
			}
			return null;
		}

		public Transform GetActiveOrderTransform()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.isShowingCustomer)
				{
					return orderLine.orderRoot;
				}
			}
			return null;
		}

		public Vector2 GetWeatherCustomerPosition()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.isShowingCustomer && (int)orderLine.weatherEffect != 0)
				{
					return orderLine.targetPos.position;
				}
			}
			return Vector2.zero;
		}

		public FCustomerLine GetWeatherCustomerLine()
		{
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.isShowingCustomer && (int)orderLine.weatherEffect != 0)
				{
					return orderLine;
				}
			}
			return null;
		}

		public FCustomerLine PickWorstTimerLine(Func<FCustomerLine, bool> filter = null)
		{
			FCustomerLine fCustomerLine = null;
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if (orderLine.State != LineState.Ready)
				{
					continue;
				}
				if (orderLine.SpawnData != null && orderLine.SpawnData.IsCleanDishStaff)
				{
					continue;
				}
				List<int> openOrderIndices = orderLine.GetOpenOrderIndices();
				if (openOrderIndices.Count != 0 && (filter == null || filter(orderLine)))
				{
					if (!fCustomerLine)
					{
						fCustomerLine = orderLine;
					}
					else if (fCustomerLine.TimerRate < orderLine.TimerRate)
					{
						fCustomerLine = orderLine;
					}
				}
			}
			return fCustomerLine;
		}
	}
}
