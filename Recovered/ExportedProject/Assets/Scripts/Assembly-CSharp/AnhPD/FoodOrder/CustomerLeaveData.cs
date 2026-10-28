using System.Collections.Generic;
using CakeOrder.InGame;

namespace AnhPD.FoodOrder
{
	public class CustomerLeaveData
	{
		public string customerId;

		public bool isSatisfied;

		public CustomerEmotion emotion;

		public Dictionary<string, int> countDict;

		public CustomerSpawnData spawnData;

		public int numDish;
	}
}
