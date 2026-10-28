using System;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "MapPaletteSO", menuName = "ScriptableObjects/CakeOrder/MapPaletteSO", order = 1)]
[Obsolete]
public class HomeMapPaletteSO : ScriptableObject
{
	[Serializable]
	public class BackgroundConfigByWeather
	{
		public WeatherEffect weatherType;

		public Gradient gradient;

		public AssetReference assetEffectBack;

		public AssetReference assetEffectFront;
	}

	[Serializable]
	public class MapBackgroundConfigByWeather
	{
		public WeatherEffect weatherType;

		public AssetReference assetMapBackground;

		public AssetReference assetMapForeground;

		public Color buildingTint;
	}

	public BackgroundConfigByWeather defaultHomeBg;

	public BackgroundConfigByWeather[] gradientByWeathers;

	public MapBackgroundConfigByWeather[] mapBackgroundConfigByWeathers;
}
