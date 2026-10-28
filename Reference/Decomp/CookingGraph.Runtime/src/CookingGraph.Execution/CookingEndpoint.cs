using System;

namespace CookingGraph.Execution;

public readonly struct CookingEndpoint : IEquatable<CookingEndpoint>
{
	public CookingEndpointKind Kind { get; }

	public string Owner { get; }

	public int Index { get; }

	public int Slot { get; }

	public CookingEndpoint(CookingEndpointKind kind, string owner, int index = 0, int slot = 0)
	{
		Kind = CookingEndpointKind.QueueItem;
		Owner = null;
		Index = 0;
		Slot = 0;
	}

	public bool Equals(CookingEndpoint other)
	{
		return false;
	}

	public override bool Equals(object obj)
	{
		return false;
	}

	public override int GetHashCode()
	{
		return 0;
	}

	public override string ToString()
	{
		return null;
	}
}
