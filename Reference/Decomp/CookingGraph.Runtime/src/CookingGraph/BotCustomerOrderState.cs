using System;
using System.Collections.Generic;

namespace CookingGraph;

[Serializable]
public sealed class BotCustomerOrderState
{
	public int customerIndex;

	public bool isStaff;

	public bool isBoss;

	public List<BotDishOrderState> dishes;
}
