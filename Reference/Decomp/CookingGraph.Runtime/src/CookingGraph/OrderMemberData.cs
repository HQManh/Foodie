using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class OrderMemberData
{
	public OrderMemberKind kind;

	public int id;

	public int index;

	public CookingNodeAsset asset;

	public List<OrderMemberData> members;
}
