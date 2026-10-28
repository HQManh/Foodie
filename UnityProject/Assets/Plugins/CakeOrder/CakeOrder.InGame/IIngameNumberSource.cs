using System;

namespace CakeOrder.InGame
{

public interface IIngameNumberSource
{
	int Capacity { get; }

	int Amount { get; }

	event Action onAmountChanged;
}
}
