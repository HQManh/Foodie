using System;
using System.Collections.Generic;
using CakeOrder.DataSO;

namespace CakeOrder.InGame;

[Serializable]
public class CustomerSpawnData
{
	public CustomerType customerType;

	public string customerId;

	public int customerIndex;

	public float waitTime;

	public WeatherEffect weatherEffect;

	public List<CustomerSingleOrderSpawnData> orders;

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
