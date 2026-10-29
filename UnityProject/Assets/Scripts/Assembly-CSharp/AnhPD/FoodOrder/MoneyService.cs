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
			// The original reads the effect from UIInLevelCakeOrder (an empty shell here), so it is looked up in the loaded HUD instead.
			CakeOrder.InGame.UIMoneyEffect effect = UnityEngine.Object.FindFirstObjectByType<CakeOrder.InGame.UIMoneyEffect>();
			if (effect != null)
			{
				_pendingCoins += numCoinSpawn;
				effect.Play(pos, numCoinSpawn, () => OnCoinArrived(value));
				return;
			}
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
