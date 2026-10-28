using System.Collections.Generic;
using AnhPD.FoodOrder;

namespace CakeOrder.InGame.Pasta
{
	public static class PastaPieceTable
	{
		private static readonly string[] PreparedIds;

		private static readonly int[] Shapes;

		private static readonly int[] Sauces;

		private static readonly int[] Mix;

		private static readonly int[] CommonToppings;

		private static readonly int[] SaladToppings;

		private static readonly int[] SaladAdditions;

		private static readonly int[] MeatBases;

		private static readonly int[] MeatToppings;

		public const int PieceCount = 23;

		public static string PreparedId(int piece)
		{
			return null;
		}

		public static bool TryGetPiece(string ingredientId, out int piece)
		{
			piece = default;
			return false;
		}

		public static string BaseId(PastaDish dish)
		{
			return null;
		}

		public static bool TryGetDish(string baseId, out PastaDish dish)
		{
			dish = default;
			return false;
		}

		public static bool IsValid(PastaDish dish, PieceSet pieces, bool complete)
		{
			return false;
		}

		public static bool IsComplete(PastaDish dish, PieceSet pieces)
		{
			return false;
		}

		public static bool CanOpenPlate(PastaDish dish, string itemBaseId, PieceSet pieces)
		{
			return false;
		}

		public static bool Allows(PastaDish dish, int piece)
		{
			return false;
		}

		public static bool IsBaseForm(PastaDish dish, int piece)
		{
			return false;
		}

		private static bool Contains(int[] values, int piece)
		{
			return false;
		}

		private static int Count(PieceSet pieces, int[] values)
		{
			return 0;
		}

		public static bool TryDecode(PastaDish dish, string longId, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public static bool TryInput(PastaDish dish, string ingredientId, out PieceSet pieces)
		{
			pieces = default;
			return false;
		}

		public static PieceSet PredictOpen(PastaDish dish, string ingredientId)
		{
			return default;
		}

		public static PieceSet PredictCombine(PastaDish dish, string firstId, string secondId)
		{
			return default;
		}

		public static bool CanAdd(PastaDish dish, PieceSet has, string ingredientId)
		{
			return false;
		}

		public static List<string> IngredientIds(PieceSet pieces)
		{
			return null;
		}

		public static PieceSet Roll(PastaDish dish, int maxCount = 0)
		{
			return default;
		}
	}
}
