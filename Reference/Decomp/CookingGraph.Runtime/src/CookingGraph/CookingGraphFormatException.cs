using System;

namespace CookingGraph;

public sealed class CookingGraphFormatException : FormatException
{
	public int Position { get; }

	public string Context { get; }

	public CookingGraphFormatException(string message, int position, string context)
	{
	}
}
