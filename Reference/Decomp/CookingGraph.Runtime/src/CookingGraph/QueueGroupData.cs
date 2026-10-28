using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class QueueGroupData
{
	public QueueGroupKind kind;

	public List<QueueCellData> cells;
}
