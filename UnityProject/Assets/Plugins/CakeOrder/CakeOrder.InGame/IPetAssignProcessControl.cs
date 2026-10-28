using System;

namespace CakeOrder.InGame
{

public interface IPetAssignProcessControl
{
	void StartAssignProcess(Action onFinished);
}
}
