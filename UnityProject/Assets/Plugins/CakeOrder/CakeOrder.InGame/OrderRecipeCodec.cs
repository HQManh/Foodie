using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using UnityEngine;

namespace CakeOrder.InGame
{
	// Recipe string format: "<dish>#<piece>.<piece>...". Recovered from the original pseudocode.
	// Note: the original Encode also rejects out-of-order piece indexes via a virtual lookup that is not recovered;
	// that check is not reproduced here.
	public static class OrderRecipeCodec
	{
		private const char DishSeparator = '#';

		private const char PieceSeparator = '.';

		public static string Encode(int dish, IReadOnlyList<int> recipePieceIndexes)
		{
			var sb = new StringBuilder();
			sb.Append(dish.ToString(CultureInfo.InvariantCulture));
			sb.Append(DishSeparator);
			for (int i = 0; i < recipePieceIndexes.Count; i++)
			{
				if (i > 0)
				{
					sb.Append(PieceSeparator);
				}
				sb.Append(recipePieceIndexes[i].ToString(CultureInfo.InvariantCulture));
			}
			return sb.ToString();
		}

		public static bool TryDecode(string recipe, out OrderRecipe result)
		{
			result = default(OrderRecipe);
			if (string.IsNullOrEmpty(recipe))
			{
				return false;
			}

			int dish = 0;
			int separator = recipe.IndexOf(DishSeparator);
			string dishPart = separator < 0 ? recipe : recipe.Substring(0, separator);
			if (!int.TryParse(dishPart, NumberStyles.Integer, CultureInfo.InvariantCulture, out dish))
			{
				Debug.LogWarning("[OrderRecipeCodec] invalid dish in recipe: " + recipe);
				dish = 0;
			}

			var pieces = new List<int>();
			if (separator >= 0)
			{
				string[] parts = recipe.Substring(separator + 1).Split(PieceSeparator);
				foreach (string part in parts)
				{
					if (int.TryParse(part, NumberStyles.Integer, CultureInfo.InvariantCulture, out int piece))
					{
						pieces.Add(piece);
					}
					else
					{
						Debug.LogWarning("[OrderRecipeCodec] invalid piece '" + part + "' in recipe: " + recipe);
					}
				}
			}

			if (pieces.Count == 0)
			{
				return false;
			}

			result = new OrderRecipe(dish, pieces.ToArray());
			return true;
		}

		public static bool TryDecode(ReadOnlySpan<char> recipe, out OrderRecipe result)
		{
			return TryDecode(recipe.ToString(), out result);
		}
	}
}
