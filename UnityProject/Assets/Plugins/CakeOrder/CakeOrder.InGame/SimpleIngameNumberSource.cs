using System;
using System.Runtime.CompilerServices;

namespace CakeOrder.InGame
{

[Serializable]
public class SimpleIngameNumberSource : IIngameNumberSource
{
	private int _capacity;

	private int _amount;

	public int Capacity => _capacity;

	public int Amount => _amount;

	public event Action onAmountChanged;

	public SimpleIngameNumberSource(int capacity, int amount)
	{
		_capacity = capacity;
		_amount = amount;
	}

	public void SetAmount(int newAmount)
	{
		if (_amount != newAmount)
		{
			_amount = newAmount;
			this.onAmountChanged?.Invoke();
		}
	}

	public void ChangeAmount(int delta)
	{
		if (delta != 0)
		{
			_amount += delta;
			this.onAmountChanged?.Invoke();
		}
	}

	public void SetCapacity(int newCapacity)
	{
		if (_capacity != newCapacity)
		{
			_capacity = newCapacity;
			this.onAmountChanged?.Invoke();
		}
	}
}
}
