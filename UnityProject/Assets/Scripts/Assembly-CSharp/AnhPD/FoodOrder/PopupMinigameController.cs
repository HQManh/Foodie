using System;
using CakeOrder.DataSO;
using CakeOrder.PopupMinigame;
using EssentialSystemR1;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace AnhPD.FoodOrder
{
	public class PopupMinigameController : MonoSingleton<PopupMinigameController>
	{
		[SerializeField]
		private AssetReference[] assetRefs;

		public CookOrderPopupMinigameControllerAbstract CurrentMinigame { get; private set; }

		public void ShowMinigame(WeatherEffect weather, MinigameInitData initData, Action onWin)
		{
			int index = (int)weather - 1;
			if (index < 0)
			{
				return;
			}
			if (assetRefs == null || index >= assetRefs.Length)
			{
				return;
			}
			// TODO(unrecovered): stops the time control, resolves the CookOrderPopupMinigameLoader through an unidentified singleton chain and calls its ShowMinigame(assetRefs[index], initData, onFinished, onCreated); the lambdas were recovered as: onFinished clears CurrentMinigame, resumes time and invokes onWin when the result reports success; onCreated stores CurrentMinigame
		}
	}
}
