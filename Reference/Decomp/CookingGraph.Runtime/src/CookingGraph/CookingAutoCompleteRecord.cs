using System;
using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingAutoCompleteRecord
{
	public Guid RunId { get; }

	public int Customer { get; }

	public int Dish { get; }

	public IReadOnlyList<CookingAutoCompleteTake> Takes { get; }

	internal CookingAutoCompleteRecord(Guid run, int customer, int dish, IEnumerable<CookingAutoCompleteTake> takes)
	{
	}
}
