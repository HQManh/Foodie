using System;
using System.Collections.Generic;
using CakeOrder.InGame.Coffee;

namespace AnhPD.FoodOrder
{
	public static class CafePieceTable
	{
		public const string ColdCoffeeBaseId = "cup_cold_coffee_flex";

		public static readonly PieceSet ColdCoffeeBase;

		private static readonly CoffeePiece[] ColdCoffeeAddonList;

		private static readonly HashSet<CoffeePiece> ColdCoffeeAddons;

		public const string CupcakeBaseId = "cupcake_flex";

		public static readonly PieceSet CupcakeBase;

		private static readonly CoffeePiece[] CupcakeToppings;

		public const string DonutBaseId = "donut";

		private static readonly CoffeePiece[] DonutShapes;

		private static readonly HashSet<CoffeePiece> DonutGlazes;

		private static readonly CoffeePiece[] DonutToppings;

		public static readonly PieceSet HotCoffeeBase;

		private static readonly CoffeePiece[] HotCoffeeAddonList;

		private static readonly HashSet<CoffeePiece> Fruits;

		private static readonly HashSet<CoffeePiece> Creams;

		private static readonly List<int> PickBuffer;

		public static readonly CafeDish[] Dishes;

		public static IEnumerable<CoffeePiece> Addons => null;

		private static bool DonutShapeAvailable => false;

		private static CafeOrderStrategy Strategy => null;

		public static bool IsAddon(CoffeePiece piece)
		{
			return false;
		}

		public static bool TryGetAddon(string ingId, out CoffeePiece piece)
		{
			piece = default;
			return false;
		}

		public static PieceSet RollColdCoffee(int maxAddons)
		{
			return default;
		}

		public static bool IsCupcakeTopping(CoffeePiece piece)
		{
			return false;
		}

		public static bool TryGetCupcakeTopping(string ingId, out CoffeePiece piece)
		{
			piece = default;
			return false;
		}

		public static PieceSet RollCupcake(int maxToppings)
		{
			return default;
		}

		public static bool IsGlaze(CoffeePiece piece)
		{
			return false;
		}

		public static bool HasGlaze(PieceSet pieces)
		{
			return false;
		}

		public static bool IsDonutShape(CoffeePiece piece)
		{
			return false;
		}

		public static bool IsDonutTopping(CoffeePiece piece)
		{
			return false;
		}

		public static bool TryGetDonutTopping(string ingId, out CoffeePiece piece)
		{
			piece = default;
			return false;
		}

		public static PieceSet RollDonut(int maxToppings)
		{
			return default;
		}

		public static PieceSet RollHotCoffee(int maxAddons)
		{
			return default;
		}

		public static bool IsFruit(CoffeePiece piece)
		{
			return false;
		}

		public static bool IsCream(CoffeePiece piece)
		{
			return false;
		}

		public static bool HasCream(PieceSet pieces)
		{
			return false;
		}

		public static bool HasFruit(PieceSet pieces)
		{
			return false;
		}

		private static bool IsCoating(CoffeePiece piece)
		{
			return false;
		}

		private static bool IsOverCoating(CoffeePiece piece)
		{
			return false;
		}

		private static int LayerOf(CoffeePiece piece)
		{
			return 0;
		}

		public static string BareIdOf(string baseId, string longId)
		{
			return null;
		}

		public static bool LayerAllows(PieceSet pieces, CoffeePiece piece)
		{
			return false;
		}

		public static bool CanAdd(PieceSet pieces, CoffeePiece piece)
		{
			return false;
		}

		private static PieceSet RollToppings(PieceSet basePieces, CoffeePiece[] catalog, int maxToppings, Predicate<CoffeePiece> exclusiveGroup, Func<PieceSet, CoffeePiece, bool> allows = null)
		{
			return default;
		}

		private static int PickAllowed(List<CoffeePiece> pool, PieceSet pieces, Func<PieceSet, CoffeePiece, bool> allows)
		{
			return 0;
		}

		private static bool RandomAllows(PieceSet pieces, CoffeePiece piece)
		{
			return false;
		}

		private static bool NoExclusiveGroup(CoffeePiece piece)
		{
			return false;
		}

		private static bool AnyAvailable(CoffeePiece[] pieces)
		{
			return false;
		}

		public static CafeDish DishOfBase(CoffeePiece piece)
		{
			return CafeDish.None;
		}

		public static bool IsBasePiece(CoffeePiece piece)
		{
			return false;
		}

		public static CafeDish DishOf(PieceSet pieces)
		{
			return CafeDish.None;
		}

		public static bool HasBasePiece(PieceSet pieces)
		{
			return false;
		}

		public static bool HasTopping(PieceSet pieces)
		{
			return false;
		}

		public static bool Belongs(CafeDish dish, CoffeePiece piece)
		{
			return false;
		}

		public static string BaseIdOf(CafeDish dish)
		{
			return null;
		}

		public static CafeDish DishOfBaseId(string baseId)
		{
			return CafeDish.None;
		}

		public static bool CanDishAdd(CafeDish dish, PieceSet has, string ingId)
		{
			return false;
		}

		public static bool Available(CafeDish dish)
		{
			return false;
		}

		private static bool BaseRollable(CoffeePiece piece)
		{
			return false;
		}

		public static bool ExcludedFromRandom(CoffeePiece piece)
		{
			return false;
		}

		public static PieceSet Roll(CafeDish dish, int maxToppings = 0)
		{
			return default;
		}
	}
}
