using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.CakeOrderSubsystem;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.InGame;

[Obsolete("Use levelpath instead of day system")]
public class LevelScenarioManager : MonoBehaviour
{
	[Serializable]
	private class FixedScenarioConfig
	{
		public int fameLv;

		public int dayOffset;

		public string scenarioId;

		public WeatherEffect weather;

		public IngredientSpawnStyle ingredientSpawnStyle;
	}

	private enum FeatureType
	{
		Scenario,
		Weather,
		IngredientSpawnStyle
	}

	[Serializable]
	private class MapFeatureAllowConfig
	{
		public int fameLv;

		public int dayCount;

		public FeatureType type;

		public string id;
	}

	[Serializable]
	private class CacheAllowConfig
	{
		public int fameLv;

		public int dayCount;

		public List<string> allowScenario;

		public List<WeatherEffect> allowWeather;

		public List<IngredientSpawnStyle> allowIngredientSpawnStyle;
	}

	[Serializable]
	private class MapScenarioConfig
	{
		public string mapId;

		public FixedScenarioConfig[] fixedScenario;

		public MapFeatureAllowConfig[] mapFeatureAllowConfig;
	}

	[Serializable]
	public class MapCurrentDayState
	{
		public string mapId;

		public int dayPlay;

		public string scenarioId;

		public WeatherEffect weather;

		public IngredientSpawnStyle ingredientSpawnStyle;
	}

	[Header("Ref")]
	[SerializeField]
	private PlayerMapLevelProgressDataAccess _playerMapLevelProgressDataAccess;

	[Header("Database")]
	[SerializeField]
	private MapWeatherSO[] _weatherSOs;

	[SerializeField]
	private AssetReference[] _assetScenarioSOs;

	[SerializeField]
	private string[] _scenarioIds;

	[Header("Config")]
	[SerializeField]
	private MapScenarioConfig[] _mapScenarioConfigs;

	[SerializeField]
	private MapFeatureAllowConfig[] _defaultMapFeatureAllowConfig;

	private Dictionary<string, MapCurrentDayState> _cacheMapCurrentDayStates;

	private Dictionary<string, CacheAllowConfig> _cacheAllowConfig;

	public string[] ScenarioIds => null;

	public event Action<string> onMapScenarioChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	private void OnMapDayPlayedChanged(string mapId)
	{
	}

	public AssetReference GetScenarioAssetById(string id)
	{
		return null;
	}

	public MapWeatherSO GetWeatherAsset(WeatherEffect weatherEffect)
	{
		return null;
	}

	private (string, WeatherEffect, IngredientSpawnStyle) GetRandomScenarioAndWeatherForMap(string mapId, MapFeatureAllowConfig[] mapFeatureAllowConfigs, int fameLv, int day)
	{
		return default((string, WeatherEffect, IngredientSpawnStyle));
	}

	public void CheatSetMapDayState(string mapId, string scenarioId, string weather, string ingredientSpawnStyle)
	{
	}

	public MapCurrentDayState GetCurrentMapDayState(string mapId)
	{
		return null;
	}

	private void OnDestroy()
	{
	}
}
