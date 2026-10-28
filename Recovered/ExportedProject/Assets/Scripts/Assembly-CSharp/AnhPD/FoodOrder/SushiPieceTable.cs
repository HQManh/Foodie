using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sushi;

namespace AnhPD.FoodOrder
{
	public static class SushiPieceTable
	{
		public const SushiPiece NigiriBase = SushiPiece.Rice;

		public const int MaxSashimiFish = 3;

		private static readonly SushiPiece[] Fishes;

		private static readonly SushiPiece[] Mains;

		private static readonly SushiPiece[] CubeFoods;

		private static readonly SushiPiece[] Roes;

		private static readonly SushiPiece[] Decors;

		private static readonly HashSet<SushiPiece> GunkanRollExcluded;

		private static RecipeConfigSO Config => null;

		private static bool Contains(SushiPiece[] table, SushiPiece piece)
		{
			return false;
		}

		private static bool HasAny(PieceSet pieces, SushiPiece[] table)
		{
			return false;
		}

		public static bool IsFish(SushiPiece piece)
		{
			return false;
		}

		public static bool IsMain(SushiPiece piece)
		{
			return false;
		}

		public static bool IsRoe(SushiPiece piece)
		{
			return false;
		}

		public static bool IsDecor(SushiPiece piece)
		{
			return false;
		}

		public static int LayerOf(int kind)
		{
			return 0;
		}

		public static bool IsPlainBase(PieceSet pieces)
		{
			return false;
		}

		public static bool HasMain(PieceSet pieces)
		{
			return false;
		}

		public static bool HasRoe(PieceSet pieces)
		{
			return false;
		}

		public static bool IsCube(string ingId)
		{
			return false;
		}

		public static bool TryGetCubeOf(SushiPiece piece, out string cubeId)
		{
			cubeId = null;
			return false;
		}

		private static bool HasCubeOf(SushiPiece piece)
		{
			return false;
		}

		public static bool CanAddToNigiri(PieceSet pieces, SushiPiece piece, bool cube)
		{
			return false;
		}

		public static bool CanAddToMaki(PieceSet pieces, SushiPiece piece, bool cube)
		{
			return false;
		}

		public static bool CanAddToGunkan(PieceSet pieces, SushiPiece piece, bool cube)
		{
			return false;
		}

		public static bool CanAddToSashimi(PieceSet pieces, SushiPiece piece, bool cube)
		{
			return false;
		}

		private static bool HasSeaweedAndRice(PieceSet pieces)
		{
			return false;
		}

		private static int CountFish(PieceSet pieces)
		{
			return 0;
		}

		public static bool CanOpen(SushiDish dish, string itemBaseId, PieceSet pieces)
		{
			return false;
		}

		public static PieceSet PredictSashimiOpen(string ingId)
		{
			return default;
		}

		public static bool CanDishAdd(SushiDish dish, PieceSet has, string ingId)
		{
			return false;
		}

		public static PieceSet PredictStart(SushiDish dish, string firstIngId, string secondIngId)
		{
			return default;
		}

		public static bool TryGetPiece(string ingId, out SushiPiece piece)
		{
			piece = default;
			return false;
		}

		public static PieceSet RollNigiri(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			return default;
		}

		public static PieceSet RollMaki(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			return default;
		}

		public static PieceSet RollGunkan(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			return default;
		}

		public static PieceSet RollSashimi(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			return default;
		}

		private static bool HasSeaweedAndRiceIngredients(string dishName)
		{
			return false;
		}

		private static bool IsUsable(SushiPiece piece, Func<SushiPiece, bool> canShow)
		{
			return false;
		}

		private static SushiPiece? PickUsable(IReadOnlyList<SushiPiece> table, Func<SushiPiece, bool> canShow)
		{
			return null;
		}

		private static PieceSet RollDecors(PieceSet basePieces, int maxDecors, Func<SushiPiece, bool> canShow)
		{
			return default;
		}
	}
}
