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
		}
	}
}
