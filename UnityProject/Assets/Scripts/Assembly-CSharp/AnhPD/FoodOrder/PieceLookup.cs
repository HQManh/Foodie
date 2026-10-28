using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class PieceLookup
	{
		public static RecipeConfigSO Config => (MessyController.Ins != null) ? MessyController.Ins.recipeConfig : EditorConfig;

		public static RecipeConfigSO EditorConfig { get; set; }

		public static bool HasConfig => Config != null;

		public static PieceSet PiecesOf(string ingId)
		{
			RecipeConfigSO config = Config;
			RcPieceConfig pieceConfig = (config != null) ? config.GetPieceConfig(ingId) : null;
			if (pieceConfig == null || !pieceConfig.Offers)
			{
				return PieceSet.Empty;
			}
			return CollectPieces(pieceConfig);
		}

		public static bool TryGetPreparedId(int kind, out string preparedId)
		{
			preparedId = null;
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			return config.TryGetPreparedOfPiece(kind, out preparedId);
		}

		public static List<string> PreparedIdsOf(PieceSet pieces)
		{
			return PreparedIdsOf(pieces, null);
		}

		public static List<string> PreparedIdsOf(PieceSet pieces, Func<int, int> layerOf)
		{
			List<string> result = new List<string>();
			RecipeConfigSO config = Config;
			if (config == null || pieces.IsEmpty)
			{
				return result;
			}
			if (config.TryGetPreparedOfPieceSet(pieces, out string wholeId))
			{
				result.Add(wholeId);
				return result;
			}
			List<(int kind, int count)> items = new List<(int kind, int count)>();
			foreach (var item in pieces)
			{
				items.Add(item);
			}
			if (layerOf != null)
			{
				items.Sort((a, b) =>
				{
					int byLayer = layerOf(a.kind).CompareTo(layerOf(b.kind));
					return (byLayer != 0) ? byLayer : a.kind.CompareTo(b.kind);
				});
			}
			foreach (var (kind, count) in items)
			{
				if (!config.TryGetPreparedOfPiece(kind, out string preparedId))
				{
					continue;
				}
				for (int i = 0; i < count; i++)
				{
					result.Add(preparedId);
				}
			}
			return result;
		}

		public static bool Exists(int kind)
		{
			return TryGetPreparedId(kind, out _);
		}

		public static bool HasPreparedOfSet(PieceSet pieces)
		{
			RecipeConfigSO config = Config;
			return config != null && config.TryGetPreparedOfPieceSet(pieces, out _);
		}

		public static bool ExistsSpawnable(int kind)
		{
			RecipeConfigSO config = Config;
			return config != null && config.TryGetSpawnIdOfPiece(kind, out _);
		}

		public static PieceSet PiecesOfAnyRole(string ingId)
		{
			RecipeConfigSO config = Config;
			RcPieceConfig pieceConfig = (config != null) ? config.GetPieceConfig(ingId) : null;
			if (pieceConfig == null)
			{
				return PieceSet.Empty;
			}
			return CollectPieces(pieceConfig);
		}

		private static PieceSet CollectPieces(RcPieceConfig pieceConfig)
		{
			PieceSet set = PieceSet.Empty;
			foreach (int kind in pieceConfig.pieces)
			{
				if ((uint)kind < PieceSet.MaxKinds && set[kind] == 0)
				{
					set = set.Add(kind);
				}
			}
			return set;
		}
	}
}
