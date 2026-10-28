using System;

namespace CakeOrder;

[Serializable]
public struct ToolUpgradeStat
{
	public int level;

	public float speedMultiplier;

	public float speedOffset;

	public static ToolUpgradeStat Default => default(ToolUpgradeStat);

	public float ApplySpeed(float baseSpeed)
	{
		return 0f;
	}
}
