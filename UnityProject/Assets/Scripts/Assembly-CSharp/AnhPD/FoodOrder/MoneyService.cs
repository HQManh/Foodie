using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class MoneyService
	{
		private readonly Action<int> _onCoinPickUp;

		private int _pendingCoins;

		public Action onPickAllCoin;

		public bool IsCollectAllCoin => _pendingCoins < 1;

		public MoneyService(Action<int> callback)
		{
			_onCoinPickUp = callback;
		}

		public void SpawnCoin(Vector2 pos, int numCoinSpawn = 1, int value = 5, bool isTip = false)
		{
			if (numCoinSpawn <= 0)
			{
				return;
			}
			// TODO(unrecovered): UIInLevelCakeOrder.InstanceUIInLevel money-effect target (field @0x218) and UIMoneyEffect.Play(pos, target, numCoinSpawn, OnCoinArrived(value)) types are not in the stubs; when the UI target is missing the pseudocode falls back to the loop below.
			do
			{
				_onCoinPickUp?.Invoke(value);
				numCoinSpawn--;
			}
			while (numCoinSpawn != 0);
		}

		private void OnCoinArrived(int value)
		{
			_onCoinPickUp?.Invoke(value);
			_pendingCoins--;
			if (_pendingCoins < 1)
			{
				onPickAllCoin?.Invoke();
			}
		}
	}
}
