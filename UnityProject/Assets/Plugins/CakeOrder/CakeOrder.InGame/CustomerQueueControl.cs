using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.Model;
using UnityEngine;

namespace CakeOrder.InGame
{

public class CustomerQueueControl : MonoBehaviour
{
	[Serializable]
	public class Config
	{
		public int maxVisibleCustomersBehindFirst;
	}

	[SerializeField]
	private Config _config;

	[SerializeField]
	private CustomerVisual.VisualConfig _customerVisualConfig;

	[SerializeField]
	private CustomerVisual _prefabCustomerBehavior;

	[SerializeField]
	private Transform _customerObjectContainer;

	[SerializeField]
	private Transform _visibleStartPoint;

	[SerializeField]
	private Transform _visibleEndPoint;

	private Queue<CustomerDataGeneral> _customersDataQueue = new Queue<CustomerDataGeneral>();

	private CustomerDataGeneral _firstCustomerData;

	private CustomerVisual _firstCustomerVisual;

	private Queue<CustomerDataGeneral> _visibleCustomersBehind = new Queue<CustomerDataGeneral>();

	private Dictionary<CustomerDataGeneral, CustomerVisual> _spawnedCustomer = new Dictionary<CustomerDataGeneral, CustomerVisual>();

	public event Action<CustomerDataGeneral> onCustomerServed;

	public event Action<CustomerDataGeneral> onCustomerFailed;

	public int GetTotalCustomersInQueue()
	{
		return 0;
	}

	public void EnqueueCustomer(CustomerDataGeneral customerData)
	{
	}

	private CustomerVisual SpawnCustomer(CustomerDataGeneral data, int initIndexInVisibleQueue)
	{
		return null;
	}

	public bool IsCanServeDish()
	{
		return false;
	}

	public void ServeDish(DishData dishData)
	{
	}

	public bool IterateQueue()
	{
		return false;
	}
}
}
