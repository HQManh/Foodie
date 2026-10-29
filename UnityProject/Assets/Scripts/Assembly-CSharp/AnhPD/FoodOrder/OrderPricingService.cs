using System;
using System.Collections.Generic;
using CakeOrder.InGame;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class OrderPricingService
	{
		public void SpawnCoin(Vector2 pos, CustomerLeaveData customerLeaveData)
		{
			// Approximation: OrderPricingCalculator is an empty DLL shell, so the original price formula is unknown. Pays a flat amount per dish.
			if (customerLeaveData.spawnData != null && customerLeaveData.spawnData.IsCleanDishStaff) return;
			if (!customerLeaveData.isSatisfied) return;
			int dishes = Math.Max(1, customerLeaveData.numDish);
			SpawnCoinAmount(pos, dishes * 10, Math.Min(5, dishes * 2), false);
		}

		private void SpawnCoinAmount(Vector2 pos, int amount, int numCoins, bool isTip)
		{
			if (amount < 1)
			{
				return;
			}
			int value = (int)((float)amount / (float)numCoins);
			if (value < 2)
			{
				value = 1;
			}
			int count = (value != 0) ? amount / value : 0;
			MessyController messy = MessyController.Ins;
			if (count * value == amount)
			{
				messy.SpawnCoin(pos, count, value, isTip);
				return;
			}
			if (count > 1)
			{
				messy.SpawnCoin(pos, count - 1, value, isTip);
			}
			int remainder = value + amount - count * value;
			messy.SpawnCoin(pos, 1, remainder, isTip);
		}

		public OrderPricingInput SimulatePricing(CustomerSpawnData data)
		{
			// TODO(unrecovered): OrderPricingInput member names are not available in this project (only ctor, a reference field set to data and an int field set to 3 are visible)
			return null;
		}

		public List<OrderSpec> GetOrderSpecs(CustomerSpawnData data)
		{
			// Rebuilt from the decompiled code: a customer with authored orders gets those orders converted to specs (tagged with the customer
			// and dish index); one without gets random orders from the level's order strategy. Cleaning staff have no orders.
			if (data == null)
			{
				return null;
			}
			List<OrderSpec> specs = new List<OrderSpec>();
			if (data.IsCleanDishStaff)
			{
				return specs;
			}
			LevelInfo info = MessyController.Ins != null ? MessyController.Ins.Info : null;
			if (data.orders == null || data.orders.Count < 1)
			{
				List<string> random = info != null ? info.GetRandomListOrder() : null;
				if (random != null)
				{
					foreach (string orderId in random)
					{
						specs.Add(info.BuildOrderSpec(orderId, random));
					}
				}
				return specs;
			}
			foreach (CustomerSingleOrderSpawnData order in data.orders)
			{
				int first = specs.Count;
				specs.AddRange(info.ConvertOrderData(order.recipe));
				for (int i = first; i < specs.Count; i++)
				{
					specs[i] = specs[i].WithSource(data.customerIndex, order.dishIndex, order.isMystery);
				}
			}
			return specs;
		}
	}
}
