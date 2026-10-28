using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.Model;
using UnityEngine;

namespace CakeOrder.InGame;

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

	private Queue<CustomerDataGeneral> _customersDataQueue;

	private CustomerDataGeneral _firstCustomerData;

	private CustomerVisual _firstCustomerVisual;

	private Queue<CustomerDataGeneral> _visibleCustomersBehind;

	private Dictionary<CustomerDataGeneral, CustomerVisual> _spawnedCustomer;

	public event Action<CustomerDataGeneral> onCustomerServed
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

	public event Action<CustomerDataGeneral> onCustomerFailed
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
