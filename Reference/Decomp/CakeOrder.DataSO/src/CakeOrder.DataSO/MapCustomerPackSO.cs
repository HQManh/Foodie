using System;
using System.Collections.Generic;
using UnityEngine;

namespace CakeOrder.DataSO;

[CreateAssetMenu(fileName = "CharacterPack-", menuName = "CakeOrder/CharacterPackSO", order = 1)]
public class MapCustomerPackSO : ScriptableObject
{
	[Serializable]
	private class CustomerPetPool
	{
		public CustomerType customerType;

		public CakeCharacterSO[] pets;

		[NonSerialized]
		public List<CakeCharacterSO> Bag;

		[NonSerialized]
		public CakeCharacterSO Last;

		public bool HasPet => false;

		public void ResetBag()
		{
		}
	}

	[SerializeField]
	private CustomerPetPool[] pools;

	private readonly Dictionary<CustomerType, CustomerPetPool> _byType;

	private readonly HashSet<CustomerType> _warnedTypes;

	private void OnEnable()
	{
	}

	public CakeCharacterSO GetRandomCustomer(CustomerType type = CustomerType.Customer)
	{
		return null;
	}

	public CakeCharacterSO GetCustomerById(string id, bool consumeFromBag = false)
	{
		return null;
	}

	private static CakeCharacterSO Draw(CustomerPetPool pool)
	{
		return null;
	}

	private static void Refill(CustomerPetPool pool)
	{
	}
}
