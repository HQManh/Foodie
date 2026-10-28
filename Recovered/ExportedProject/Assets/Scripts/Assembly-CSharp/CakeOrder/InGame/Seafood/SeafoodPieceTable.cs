using System.Collections.Generic;
using AnhPD.FoodOrder;

namespace CakeOrder.InGame.Seafood
{
	public static class SeafoodPieceTable
	{
		public const int PieceCount = 26;

		private static readonly string[] PreparedIds;

		private static readonly string[] Bases;

		private static readonly int[] Openers;

		private static readonly uint[][] CompleteStates;

		public static string PreparedId(int piece)
		{
			return null;
		}

		public static bool TryGetPiece(string id, out int piece)
		{
			piece = default;
			return false;
		}

		public static string BaseId(SeafoodDish dish)
		{
			return null;
		}

		public static bool TryGetDish(string id, out SeafoodDish dish)
		{
			dish = default;
			return false;
		}

		private static bool Mask(PieceSet pieces, out uint mask)
		{
			mask = default;
			return false;
		}

		public static bool IsValid(SeafoodDish dish, PieceSet pieces, bool complete)
		{
			return false;
		}

		public static bool IsComplete(SeafoodDish dish, PieceSet pieces)
		{
			return false;
		}

		public static bool Allows(SeafoodDish dish, int piece)
		{
			return false;
		}

		public static bool CanOpenPlate(SeafoodDish dish, string id, PieceSet pieces)
		{
			return false;
		}

		public static bool TryDecode(SeafoodDish dish, string id, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public static bool TryInput(SeafoodDish dish, string id, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public static PieceSet PredictOpen(SeafoodDish dish, string id)
		{
			return default;
		}

		public static PieceSet PredictCombine(SeafoodDish dish, string a, string b)
		{
			return default;
		}

		public static bool CanAdd(SeafoodDish dish, PieceSet has, string id)
		{
			return false;
		}

		public static List<string> IngredientIds(PieceSet pieces)
		{
			return null;
		}

		public static PieceSet Roll(SeafoodDish dish, int maxCount = 0)
		{
			return default;
		}
	}
}
