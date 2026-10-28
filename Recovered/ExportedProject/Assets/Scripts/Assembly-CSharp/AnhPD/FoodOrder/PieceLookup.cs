using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class PieceLookup
	{
		public static RecipeConfigSO Config => null;

		public static RecipeConfigSO EditorConfig { get; set; }

		public static bool HasConfig => false;

		public static PieceSet PiecesOf(string ingId)
		{
			return default;
		}

		public static bool TryGetPreparedId(int kind, out string preparedId)
		{
			preparedId = null;
			return false;
		}

		public static List<string> PreparedIdsOf(PieceSet pieces)
		{
			return null;
		}

		public static List<string> PreparedIdsOf(PieceSet pieces, Func<int, int> layerOf)
		{
			return null;
		}

		public static bool Exists(int kind)
		{
			return false;
		}

		public static bool HasPreparedOfSet(PieceSet pieces)
		{
			return false;
		}

		public static bool ExistsSpawnable(int kind)
		{
			return false;
		}

		public static PieceSet PiecesOfAnyRole(string ingId)
		{
			return default;
		}
	}
}
