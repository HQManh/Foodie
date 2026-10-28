using System;
using CakeOrder.InGame.Sandwich;

namespace AnhPD.FoodOrder
{
	public static class SandwichPieceTable
	{
		private static readonly SandwichPiece[] Fillings;

		private static readonly SandwichPiece[] Fruits;

		private const SandwichPiece SaladBase = SandwichPiece.Lettuce;

		private static readonly SandwichPiece[] SaladToppings;

		private static readonly SandwichPiece[] Juices;

		private static readonly SandwichPiece[] Soups;

		private static readonly SandwichPiece[] SoupToppings;

		public const int MaxFillings = 8;

		public const int MaxFruits = 4;

		public const int MinSaladToppings = 1;

		public const int MaxSaladToppings = 5;

		public const int MaxSoupToppings = 2;

		private static RecipeConfigSO Config => null;

		private static bool Contains(SandwichPiece[] table, SandwichPiece piece)
		{
			return false;
		}

		private static int CountIn(PieceSet pieces, SandwichPiece[] table)
		{
			return 0;
		}

		public static bool WantsRefined(SandwichDish dish, SandwichPiece piece)
		{
			return false;
		}

		public static bool IsRefined(string ingId)
		{
			return false;
		}

		public static bool TryGetFormOf(SandwichDish dish, SandwichPiece piece, out string ingId)
		{
			ingId = null;
			return false;
		}

		public static bool HasSeveralForms(SandwichPiece piece)
		{
			return false;
		}

		private static bool TryGetRefinedOf(RecipeConfigSO config, SandwichPiece piece, out string refinedId)
		{
			refinedId = null;
			return false;
		}

		public static bool TryGetPiece(string ingId, out SandwichPiece piece)
		{
			piece = default;
			return false;
		}

		private static bool TryGetDishPiece(SandwichDish dish, string ingId, out SandwichPiece piece)
		{
			piece = default;
			return false;
		}

		public static int FillingRank(SandwichPiece piece)
		{
			return 0;
		}

		public static int LayerOf(SandwichDish dish, int kind)
		{
			return 0;
		}

		private static bool IsOpener(SandwichDish dish, SandwichPiece piece)
		{
			return false;
		}

		public static bool CanDishAdd(SandwichDish dish, PieceSet has, string ingId)
		{
			return false;
		}

		public static bool CanOpen(SandwichDish dish, string ingId)
		{
			return false;
		}

		public static PieceSet PredictOpen(SandwichDish dish, string ingId)
		{
			return default;
		}

		public static PieceSet PredictStart(SandwichDish dish, string firstIngId, string secondIngId)
		{
			return default;
		}

		private static PieceSet TryStart(SandwichDish dish, string openerId, string nextId)
		{
			return default;
		}

		public static PieceSet Roll(SandwichDish dish, int maxExtras = 0, Func<SandwichPiece, bool> canShow = null)
		{
			return default;
		}

		private static int Cap(int graphMax, int maxExtras)
		{
			return 0;
		}

		private static PieceSet PickSome(SandwichDish dish, PieceSet basePieces, SandwichPiece[] table, int min, int max, Func<SandwichPiece, bool> canShow)
		{
			return default;
		}

		private static PieceSet MaybeAdd(SandwichDish dish, PieceSet pieces, SandwichPiece piece, Func<SandwichPiece, bool> canShow)
		{
			return default;
		}

		private static bool IsUsable(SandwichDish dish, SandwichPiece piece, Func<SandwichPiece, bool> canShow)
		{
			return false;
		}
	}
}
