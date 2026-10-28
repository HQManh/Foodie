using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;

namespace CakeOrder.InGame;

[Serializable]
public class CakeLevelRuntimeDataCustomer : IIngameNumberSource
{
	public int maxNumCustomers { get; private set; }

	public List<ResultCustomerData> servedCustomer { get; private set; }

	public List<ResultCustomerData> failedCustomer { get; private set; }

	public int NumDishServerd { get; private set; }

	public int NumDishFailed { get; private set; }

	public int Capacity => 0;

	public int Amount => 0;

	public float Progress => 0f;

	public event Action onAmountChanged
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

	public event Action<ResultCustomerData> onAddCustomerServed
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

	public event Action<ResultCustomerData> onAddCustomerFailed
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

	public event Action onSingleDishServed
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

	public event Action onSingleDishFailed
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

	public event Action<int> onCustomerArrived
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

	public event Action<int, bool> onCustomerEnded
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

	public void TriggerSingleDishServed()
	{
	}

	public void TriggerSingleDishFailed()
	{
	}

	public void ReportCustomerArrived(int customerIndex)
	{
	}

	public void ReportCustomerEnded(int customerIndex, bool win)
	{
	}

	public void AddServedCustomer(ResultCustomerData data)
	{
	}

	public void AddFailedCustomer(ResultCustomerData data)
	{
	}

	public void SetMaxNumCustomers(int num)
	{
	}

	public CakeLevelRuntimeDataCustomer Clone()
	{
		return null;
	}
}
