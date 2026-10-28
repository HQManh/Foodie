using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class DishOrderData
{
	public OrderMemberData root;

	public List<EffectData> effects;
}
