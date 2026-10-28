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

	public bool IsCleanDishStaff => false;

	public bool IsBoss => false;

	public bool IsShipper => false;

	private bool IsCharacterType(CharacterType type, ref bool? cache)
	{
		return false;
	}
}
}
