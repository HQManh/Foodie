using System;
using CakeOrder.InGame.IceCream;

namespace AnhPD.FoodOrder
{
	public static class IceCreamPieceTable
	{
		private static readonly IceCreamPiece[] Flavors;

		private const int MaxIceCreamFlavors = 3;

		private const int MaxMilkshakeFlavors = 1;

		private static readonly IceCreamPiece[] Smoothies;

		private const int MaxSmoothies = 1;

		private static readonly IceCreamPiece[] Syrups;

		private const int MinSyrups = 0;

		private const int MaxSyrups = 1;

		private static readonly IceCreamPiece[] Fruits;

		private const int MaxFruits = 3;

		private static readonly IceCreamPiece[] Jellies;

		private const int MaxJellies = 1;

		private static readonly IceCreamPiece[] ToppingSyrups;

		private const int MaxToppingSyrups = 1;

		private static readonly IceCreamPiece[] BehindDecors;

		private const int MaxBehindDecors = 2;

		private static readonly IceCreamPiece[] SmoothieDecors;

		private const int MaxSmoothieDecors = 2;

		private static readonly IceCreamPiece[] CreamFinishes;

		private const int MaxCreamFinishes = 1;

		private static readonly IceCreamPiece[] WhippedCreams;

		private const int MaxWhippedCreamExtras = 4;

		private const int MaxSharedToppings = 5;

		private const int MaxShaveIceToppings = 6;

		private const int MaxMilkshakeToppings = 8;

		private const int MaxSmoothieToppings = 8;

		private static readonly IceCreamPiece[][] ToppingTables;

		private static RecipeConfigSO Config => null;

		private static bool Contains(IceCreamPiece[] table, IceCreamPiece piece)
		{
			return false;
		}

		private static int CountOf(PieceSet pieces, IceCreamPiece[] table)
		{
			return 0;
		}

		public static bool IsFlavor(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsSmoothie(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsSyrup(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsFruit(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsJelly(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsToppingSyrup(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsBehindDecor(IceCreamPiece piece)
		{
			return false;
		}

		public static bool IsWhippedCream(IceCreamPiece piece)
		{
			return false;
		}

		public static int LayerOf(int kind)
		{
			return 0;
		}

		public static bool IsRefined(string ingId)
		{
			return false;
		}

		public static bool TryGetRefinedOf(IceCreamPiece piece, out string refinedId)
		{
			refinedId = null;
			return false;
		}

		private static IceCreamPiece[] MainsOf(IceCreamDish dish)
		{
			return null;
		}

		private static int MinMainsOf(IceCreamDish dish)
		{
			return 0;
		}

		private static int MaxMainsOf(IceCreamDish dish)
		{
			return 0;
		}

		private static int MaxToppingsOf(IceCreamDish dish)
		{
			return 0;
		}

		private static bool IsMain(IceCreamDish dish, IceCreamPiece piece)
		{
			return false;
		}

		private static int MainCount(IceCreamDish dish, PieceSet pieces)
		{
			return 0;
		}

		private static bool HasBase(IceCreamDish dish, PieceSet pieces)
		{
			return false;
		}

		private static bool IsBase(IceCreamDish dish, IceCreamPiece piece)
		{
			return false;
		}

		private static int ToppingCount(IceCreamDish dish, PieceSet pieces)
		{
			return 0;
		}

		private static bool ToppingAllows(IceCreamDish dish, PieceSet has, IceCreamPiece piece)
		{
			return false;
		}

		public static bool CanDishAdd(IceCreamDish dish, PieceSet has, string ingId)
		{
			return false;
		}

		public static bool SyrupCanStillLand(PieceSet has, PieceSet want)
		{
			return false;
		}

		public static bool ScoopsCanStillLand(PieceSet has, PieceSet want)
		{
			return false;
		}

		private static bool MainsBeforeToppings(IceCreamDish dish)
		{
			return false;
		}

		public static bool CanOpen(IceCreamDish dish, string ingId)
		{
			return false;
		}

		public static PieceSet PredictOpen(IceCreamDish dish, string ingId)
		{
			return default;
		}

		public static PieceSet PredictStart(IceCreamDish dish, string firstIngId, string secondIngId)
		{
			return default;
		}

		private static PieceSet TryStart(IceCreamDish dish, string openerId, string nextId)
		{
			return default;
		}

		public static bool TryGetPiece(string ingId, out IceCreamPiece piece)
		{
			piece = default;
			return false;
		}

		public static PieceSet Roll(IceCreamDish dish, int maxToppings = 0, Func<IceCreamPiece, bool> canShow = null)
		{
			return default;
		}

		private static PieceSet RollToppings(IceCreamDish dish, PieceSet pieces, int maxToppings, Func<IceCreamPiece, bool> canShow)
		{
			return default;
		}

		private static bool IsUsable(IceCreamPiece piece, Func<IceCreamPiece, bool> canShow)
		{
			return false;
		}
	}
}
