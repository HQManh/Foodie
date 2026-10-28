using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class MoneyService
	{
		private readonly Action<int> _onCoinPickUp;

		private int _pendingCoins;

		public Action onPickAllCoin;

		public bool IsCollectAllCoin => false;

		public MoneyService(Action<int> callback)
		{
		}

		public void SpawnCoin(Vector2 pos, int numCoinSpawn = 1, int value = 5, bool isTip = false)
		{
		}

		private void OnCoinArrived(int value)
		{
		}
	}
}
