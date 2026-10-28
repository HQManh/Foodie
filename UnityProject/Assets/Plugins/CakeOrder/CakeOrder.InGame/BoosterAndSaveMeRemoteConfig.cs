using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using UnityEngine;

namespace CakeOrder.InGame
{

[Serializable]
public class BoosterAndSaveMeRemoteConfig : MonoBehaviour
{
	public const string RemoteConfigKeyBooster = "booster_config";

	public const string RemoteConfigKeySaveMe = "save_me_config";

	public const string RemoteConfigKeyBoosterPack = "booster_pack_config";

	public BoosterType[] boosterTypes;

	public CakeCurrencySO[] boosterSOs;

	public BoosterSaveMeConfig[] boosterConfigs;

	public BoosterSaveMeConfig[] saveMeConfigs;

	public BoosterPackConfig boosterPackConfig;

	private void Awake()
	{
	}

	public bool TryGetBoosterPack(string boosterId, out int packAmount, out int packPrice)
	{
		packAmount = default(int);
		packPrice = default(int);
		return false;
	}

	public BoosterSaveMeConfig GetBoosterConfig(string boosterId)
	{
		return null;
	}

	public int GetSaveMePrice(int numHardCurrencySaveMeUsedInLevel, int fallbackPrice)
	{
		return 0;
	}

	public BoosterSaveMeConfig GetSaveMeConfig(SaveMeType saveMeType)
	{
		return null;
	}

	private void UpdateRemoteConfigBooster(string remoteConfigStr)
	{
	}

	public LevelBaseCakeOrderAbstract.BoosterData CreateBoosterData(string boosterId)
	{
		return null;
	}

	public Dictionary<string, UIInLevelCakeOrder.BoosterUIData> GenerateDictBoosterUIData(int highestMapIndexPlayable, int highestLevelIndexPlayable)
	{
		return null;
	}

	private BoosterSaveMeConfig[] ImportData(string data)
	{
		return null;
	}

	private static BoosterPackConfig ImportPackData(string data)
	{
		return null;
	}
}
}
