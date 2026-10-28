using System;
using UnityEngine;

namespace CakeOrder
{

[Obsolete("Use graph system instead")]
public class LevelCustomerOrdersConfig : MonoBehaviour
{
	[SerializeField]
	private SingleCustomerOrderData[] _customerOrderSequence;

	public SingleCustomerOrderData[] CustomerOrderSequence => null;

	public void LoadConfigStr(ReadOnlySpan<char> config)
	{
	}

	private SingleCustomerOrderData[] ImportData(ReadOnlySpan<char> data)
	{
		return null;
	}
}
}
