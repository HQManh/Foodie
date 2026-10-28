using System;
using System.Collections.Generic;

namespace CakeOrder.Model;

[Serializable]
public class CustomerDataGeneral
{
	private float _timeStartWait;

	private List<DishData> _dishesServed;

	private float _lastTimeServed;

	private float _waitTimeModified;

	public string CharacterId { get; private set; }

	public float MaxWaitTime { get; private set; }

	public int NumFailAllowed { get; private set; }

	public CustomerOrderData[] Orders { get; private set; }

	public bool[] MatchedOrders { get; private set; }

	public bool IsAllOrdersMatched { get; private set; }

	public int FailCount { get; private set; }

	public CustomerServeResultGeneral ServeResult { get; private set; }

	public CustomerDataGeneral(string characterId, float maxWaitTime, int numFailAllowed, params CustomerOrderData[] orders)
	{
	}

	public void RecordStartWait(float time)
	{
	}

	public bool RecordServed(DishData dish, float time)
	{
		return false;
	}

	public void AddWaitTimeModifier(float amount)
	{
	}

	public float GetWaitTimeRatio(float currentTime)
	{
		return 0f;
	}

	public bool IsTimeout(float currentTime)
	{
		return false;
	}

	public bool IsExceededFailAllowed()
	{
		return false;
	}

	public void SetServeResult(CustomerServeResultGeneral result)
	{
	}
}
