using System;
using System.Collections.Generic;
using CakeOrder.DataSO;

namespace CakeOrder.InGame
{

[Serializable]
public class CustomerSpawnData
{
	public CustomerType customerType;

	public string customerId;

	public int customerIndex;

	public float waitTime;

	public WeatherEffect weatherEffect;

	public List<CustomerSingleOrderSpawnData> orders;

	// Inferred from game code that reads orderData as encoded order strings. Not verified.
	public string[] orderData;

	// Inferred alias for weatherEffect, which the game code reads as weather.
	public WeatherEffect weather
	{
		get => weatherEffect;
		set => weatherEffect = value;
	}

	private bool? _isBoss;

	private bool? _isShipper;

	// Rebuilt from the decompile: clean-dish staff is customer type 1; boss (character type 2) and shipper (character type 1) are decided by the
	// type of the character the customer's id names in the database, and cached once looked up.
	public bool IsCleanDishStaff => (int)customerType == 1;

	public bool IsBoss => IsCharacterType((CharacterType)2, ref _isBoss);

	public bool IsShipper => IsCharacterType((CharacterType)1, ref _isShipper);

	private bool IsCharacterType(CharacterType type, ref bool? cache)
	{
		if (cache.HasValue)
		{
			return cache.Value;
		}
		if (string.IsNullOrEmpty(customerId) || CakeOrderDatabaseSO.Instance == null)
		{
			return false;
		}
		CakeCharacterSO character = DatabaseApi.GetCharacterSOById(CakeOrderDatabaseSO.Instance, customerId);
		if (character == null)
		{
			return false;
		}
		cache = character.characterType == type;
		return cache.Value;
	}
}
}
