using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace CakeOrder.InGame
{

[Serializable]
public class CakeLevelRuntimeDataCustomer : IIngameNumberSource
{
	public int maxNumCustomers { get; private set; }

	public List<ResultCustomerData> servedCustomer { get; private set; } = new List<ResultCustomerData>();

	public List<ResultCustomerData> failedCustomer { get; private set; } = new List<ResultCustomerData>();

	public int NumDishServerd { get; private set; }

	public int NumDishFailed { get; private set; }

	public int Capacity => maxNumCustomers;

	public int Amount => servedCustomer.Count + failedCustomer.Count;

	public float Progress => maxNumCustomers > 0 ? (float)Amount / (float)maxNumCustomers : 0f;

	public event Action onAmountChanged;

	public event Action<ResultCustomerData> onAddCustomerServed;

	public event Action<ResultCustomerData> onAddCustomerFailed;

	public event Action onSingleDishServed;

	public event Action onSingleDishFailed;

	public event Action<int> onCustomerArrived;

	public event Action<int, bool> onCustomerEnded;

	public void TriggerSingleDishServed()
	{
		NumDishServerd++;
		this.onSingleDishServed?.Invoke();
	}

	public void TriggerSingleDishFailed()
	{
		NumDishFailed++;
		this.onSingleDishFailed?.Invoke();
	}

	public void ReportCustomerArrived(int customerIndex)
	{
		this.onCustomerArrived?.Invoke(customerIndex);
	}

	public void ReportCustomerEnded(int customerIndex, bool win)
	{
		this.onCustomerEnded?.Invoke(customerIndex, win);
	}

	public void AddServedCustomer(ResultCustomerData data)
	{
		servedCustomer.Add(data);
		this.onAddCustomerServed?.Invoke(data);
		this.onAmountChanged?.Invoke();
	}

	public void AddFailedCustomer(ResultCustomerData data)
	{
		failedCustomer.Add(data);
		this.onAddCustomerFailed?.Invoke(data);
		this.onAmountChanged?.Invoke();
	}

	public void SetMaxNumCustomers(int num)
	{
		maxNumCustomers = num;
		this.onAmountChanged?.Invoke();
	}

	public CakeLevelRuntimeDataCustomer Clone()
	{
		CakeLevelRuntimeDataCustomer copy = new CakeLevelRuntimeDataCustomer();
		copy.maxNumCustomers = maxNumCustomers;
		copy.servedCustomer = new List<ResultCustomerData>(servedCustomer);
		copy.failedCustomer = new List<ResultCustomerData>(failedCustomer);
		copy.NumDishServerd = NumDishServerd;
		copy.NumDishFailed = NumDishFailed;
		return copy;
	}
}
}
