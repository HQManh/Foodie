using System;

namespace CakeOrder
{

[Serializable]
public struct ToolUpgradeStat
{
	public int level;

	public float speedMultiplier;

	public float speedOffset;

	public static ToolUpgradeStat Default => new ToolUpgradeStat { level = 1, speedMultiplier = 1f, speedOffset = 0f };

	public float ApplySpeed(float baseSpeed)
	{
		return speedMultiplier * baseSpeed + speedOffset;
	}
}
}
