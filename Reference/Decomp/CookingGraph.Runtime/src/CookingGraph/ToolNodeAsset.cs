using System.Collections.Generic;

namespace CookingGraph;

public sealed class ToolNodeAsset : CookingNodeAsset
{
	public List<ToolSlotConfig> slotConfigs;

	public int preservationSlots;

	public float cookingTime;

	public List<int> upgradeCosts;

	public OptionalInt runtimeToolId;
}
