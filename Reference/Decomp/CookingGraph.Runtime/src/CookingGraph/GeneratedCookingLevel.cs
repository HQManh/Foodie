using UnityEngine;

namespace CookingGraph;

public sealed class GeneratedCookingLevel : ScriptableObject
{
	public CookingGraphAsset graph;

	public int seed;

	public int serveableSlots;

	public bool spiderCleansAllStacks;

	public bool saveMeClearsDirty;

	public int saveMeMaxCells;

	public string weather;

	public string levelTag;

	public string featureUnlock;

	public float shuffleDistance;

	public string outOfSlotPolicy;

	public string packingMode;

	public string toolProcessBehavior;

	[TextArea]
	public string levelJson;

	[TextArea]
	public string queueString;

	[TextArea]
	public string customerString;

	[TextArea]
	public string gridString;

	[TextArea]
	public string generatorSessionJson;

	public IngredientQueueData Queues()
	{
		return null;
	}

	public CustomerOrderData Customers()
	{
		return null;
	}

	public GridLayoutData Grid()
	{
		return null;
	}
}
