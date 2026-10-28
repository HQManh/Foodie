using System;
using System.Collections.Generic;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

[Obsolete("Use graph system instead")]
public class LevelCustomerOrdersConfig : MonoBehaviour
{
	[SerializeField]
	private SingleCustomerOrderData[] _customerOrderSequence;

	public SingleCustomerOrderData[] CustomerOrderSequence => _customerOrderSequence;

	public void LoadConfigStr(ReadOnlySpan<char> config)
	{
		if (!config.IsEmpty)
		{
			SingleCustomerOrderData[] data = ImportData(config);
			if (data == null)
			{
				Debug.LogWarning("[LevelCustomerOrdersConfig] customer data could not be parsed"); // literal recovered by guess
			}
			else
			{
				_customerOrderSequence = data;
			}
		}
	}

	// customers are separated by '|', fields by ';': type;waitTime;applyWeatherEffect;order;order...
	private SingleCustomerOrderData[] ImportData(ReadOnlySpan<char> data)
	{
		List<SingleCustomerOrderData> customers = new List<SingleCustomerOrderData>();
		foreach (StringExtension.StringSplitEntry customerEntry in data.SplitNonAlloc('|'))
		{
			SingleCustomerOrderData customer = new SingleCustomerOrderData();
			List<string> orders = new List<string>();
			int field = 0;
			foreach (StringExtension.StringSplitEntry fieldEntry in customerEntry.SplitNonAlloc(';'))
			{
				switch (field)
				{
				case 0:
					customer.customerType = Enum.TryParse(fieldEntry.Str.ToString(), true, out CustomerType type) ? type : default(CustomerType);
					break;
				case 1:
					customer.waitTime = fieldEntry.TryParseInt(out int wait) ? wait : 0;
					break;
				case 2:
					customer.applyWeatherEffect = fieldEntry.TryParseInt(out int weather) && weather == 1;
					break;
				default:
					if (fieldEntry.Str.Length > 0)
					{
						orders.Add(fieldEntry.Str.ToString());
					}
					break;
				}
				field++;
			}
			customer.data = orders.ToArray();
			customers.Add(customer);
		}
		return customers.ToArray();
	}
}
}
