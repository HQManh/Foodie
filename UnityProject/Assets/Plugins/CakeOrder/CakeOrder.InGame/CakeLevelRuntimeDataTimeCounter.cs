using System;

namespace CakeOrder.InGame
{

[Serializable]
public class CakeLevelRuntimeDataTimeCounter
{
	public float totalTime;

	public void Update(float deltaTime)
	{
		totalTime += deltaTime;
	}
}
}
