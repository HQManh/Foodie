using System;
using System.Collections.Generic;
using IapAdsSystem;
using UnityEngine;

namespace CakeOrder;

public class RemoteConfigDefaultSetterCakeOrder : MonoBehaviour, IRemoteConfigDefaultValueSetter
{
	[Serializable]
	public class ToolDetailConfig
	{
		public string toolId;

		public string configStr;
	}

	[Serializable]
	public class MapConfig
	{
		public string mapId;

		public string ingredient_process;

		public string recipe_piece;

		public string dirty_object;

		public string tool;

		public string upgrade_building;

		public string lv_metadata;

		public string[] levelDesigns;

		public string GetConfigByKey(RemoteKeyCakeOrderEachMap key)
		{
			return null;
		}

		public string GetLevelDesignByIndex(int levelIndex)
		{
			return null;
		}
	}

	public const string DefaultOverrideId = "default";

	public static readonly string[] OverrideAuthorIds;

	private static readonly Dictionary<string, string> TestAuthorOverrideBundles;

	[Header("Default Value Config")]
	[SerializeField]
	private MapConfig[] _mapConfig;

	[SerializeField]
	private string _mechanicFeaturesConfig;

	[SerializeField]
	private string _progressScenarioConfig;

	[SerializeField]
	private string _rewardConfig;

	[SerializeField]
	private string _speedUpConfig;

	[SerializeField]
	private string _extraLevelConfig;

	[SerializeField]
	private string _boosterConfig;

	[SerializeField]
	private string _saveMeConfig;

	[SerializeField]
	private string _boosterPackConfig;

	[SerializeField]
	private string _heartConfig;

	[SerializeField]
	private string _ingameHeartConfig;

	[SerializeField]
	private string _stackConfig;

	[SerializeField]
	private string _serveSlotConfig;

	[SerializeField]
	private string _journeyMilestoneConfig;

	[SerializeField]
	private string _mapMetadataConfig;

	[SerializeField]
	private string _rateGameConfig;

	private bool _authorOverrideCallbackRegistered;

	private static RemoteConfigDefaultSetterCakeOrder _registeredInstance;

	[Header("Shop IAP")]
	[SerializeField]
	private string _iapConfig;

	[SerializeField]
	private string _removeAdsConfig;

	public static string SelectedOverrideAuthorId { get; private set; }

	public static string GetRemoteKeyForMapConfig(string mapId, RemoteKeyCakeOrderEachMap key)
	{
		return null;
	}

	public static string GetRemoteKeyForMapLevelDesign(string mapId, int levelIndex)
	{
		return null;
	}

	public static string GetRemoteKeyForAuthorLevelOverride(string mapId, string authorId)
	{
		return null;
	}

	public static bool IsAuthorLevelOverrideKey(string key)
	{
		return false;
	}

	public static bool SelectOverrideAuthor(string authorId)
	{
		return false;
	}

	public static void ResetOverrideAuthorSelection()
	{
	}

	public static void SetTestAuthorOverrideBundle(string mapId, string value)
	{
	}

	public static void ClearTestAuthorOverrideBundles()
	{
	}

	public static void ReapplySelectedAuthorOverrides()
	{
	}

	public void SetupDefaultValues(ref Dictionary<string, long> defaultLong, ref Dictionary<string, double> defaultDouble, ref Dictionary<string, string> defaultString)
	{
	}

	private void ApplySelectedAuthorOverrides()
	{
	}
}
