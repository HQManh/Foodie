using System;
using System.Collections.Generic;

namespace CakeOrder.InGame;

public static class OrderRecipeCodec
{
	private const char DishSeparator = '#';

	private const char PieceSeparator = '.';

	public static string Encode(int dish, IReadOnlyList<int> recipePieceIndexes)
	{
		return null;
	}

	public static bool TryDecode(string recipe, out OrderRecipe result)
	{
		result = default(OrderRecipe);
		return false;
	}

	public static bool TryDecode(ReadOnlySpan<char> recipe, out OrderRecipe result)
	{
		result = default(OrderRecipe);
		return false;
	}

	private static bool Contains(ReadOnlySpan<char> str, char c)
	{
		return false;
	}

	private static void ReadPieces(ReadOnlySpan<char> str, List<int> pieces)
	{
	}
}
