using System.Collections.Generic;
using CookOrder.Cooking.Config;
using CookingGraph;
using UnityEngine;
using Utilities;

namespace CakeOrder.DataSO;

public class CakeOrderDatabaseSO : MonoSingleton<CakeOrderDatabaseSO>
{
	[Header("Cooking Graph")]
	[SerializeField]
	private CookingExecutionProfile _cookingExecutionProfile;

	[SerializeField]
	private CookingCustomerEatingProfile _cookingCustomerEatingProfile;

	[SerializeField]
	private CookingRepresentationProfile _cookingRepresentationProfile;

	[Header("Currency")]
	[SerializeField]
	private CakeCurrencySO[] _currencies;

	public CakeCurrencySO hardCurrencySO;

	public CakeCurrencySO softCurrencySO;

	public CakeCurrencySO starSO;

	[Header("Weather")]
	[SerializeField]
	private MapWeatherSO[] _weatherSOs;

	[Header("Map")]
	[SerializeField]
	private CakeMapSO[] _mapSOs;

	[Header("Customers")]
	[SerializeField]
	private CakeCharacterSO[] _characterSOs;

	public CookingExecutionProfile CookingExecutionProfile => null;

	public CookingCustomerEatingProfile CookingCustomerEatingProfile => null;

	public CookingRepresentationProfile CookingRepresentationProfile => null;

	public int NumMaps => 0;

	public CakeCurrencySO GetCurrencyById(string id)
	{
		return null;
	}

	public MapWeatherSO GetWeatherSO(WeatherEffect weatherEffect)
	{
		return null;
	}

	public string GetMapId(int index)
	{
		return null;
	}

	public int GetMapIndexById(string id)
	{
		return 0;
	}

	public CakeMapSO GetMapSO(int index)
	{
		return null;
	}

	public CakeMapSO GetMapSO(string id)
	{
		return null;
	}

	public IReadOnlyList<string> GetAllCharacterIds()
	{
		return null;
	}

	public List<CakeCharacterSO> GetCharacterSOsByType(CharacterType characterType)
	{
		return null;
	}

	public void GetRandomCustomerTiers(string mapId, List<CakeCharacterSO> own, List<CakeCharacterSO> past, List<CakeCharacterSO> future)
	{
	}

	public List<CakeCharacterSO> GetCharacterSOsByMap(string mapId)
	{
		return null;
	}

	public CakeCharacterSO GetCharacterSOById(string id)
	{
		return null;
	}
}
