using System;
using System.Collections.Generic;

namespace CookingGraph;

public sealed class CookingLevelEvent
{
	public CookingLevelEventKind Kind { get; }

	public Guid RunId { get; }

	public double Time { get; }

	public int Subject { get; }

	public string Detail { get; }

	public IReadOnlyList<long> Participants { get; }

	internal CookingLevelEvent(CookingLevelEventKind kind, Guid run, double time, int subject, string detail, IEnumerable<long> participants)
	{
	}
}
