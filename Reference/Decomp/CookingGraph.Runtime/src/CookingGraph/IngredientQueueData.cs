using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class IngredientQueueData
{
	public List<IngredientQueueColumnData> columns;

	public List<QueueGroupData> groups;
}
