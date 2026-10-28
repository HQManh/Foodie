using System;
using System.Runtime.CompilerServices;

namespace CakeOrder.InGame;

[Serializable]
public class SimpleIngameNumberSource : IIngameNumberSource
{
	private int _capacity;

	private int _amount;

	public int Capacity => 0;

	public int Amount => 0;

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

	public SimpleIngameNumberSource(int capacity, int amount)
	{
	}

	public void SetAmount(int newAmount)
	{
	}

	public void ChangeAmount(int delta)
	{
	}

	public void SetCapacity(int newCapacity)
	{
	}
}
