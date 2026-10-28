using System;
using System.Collections.Generic;
using UnityEngine;

namespace CookingGraph;

[Serializable]
public sealed class CookingBotCustomerFailureMemory
{
	public int customerIndex;

	[Min(0f)]
	public int failureCount;

	public List<string> ingredientNodeNames;
}
