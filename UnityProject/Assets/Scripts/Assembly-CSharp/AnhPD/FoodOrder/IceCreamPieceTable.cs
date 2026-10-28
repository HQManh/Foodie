using System;
using CakeOrder.InGame.IceCream;

namespace AnhPD.FoodOrder
{
	public static class IceCreamPieceTable
	{
		private static readonly IceCreamPiece[] Flavors = new IceCreamPiece[]
		{
			IceCreamPiece.VanillaIceCream,
			IceCreamPiece.StrawberryIceCream,
			IceCreamPiece.ChocolateIceCream,
			IceCreamPiece.MatchaIceCream,
			IceCreamPiece.GrapeIceCream,
			IceCreamPiece.MangoIceCream
		};

		private const int MaxIceCreamFlavors = 3;

		private const int MaxMilkshakeFlavors = 1;

		private static readonly IceCreamPiece[] Smoothies = new IceCreamPiece[]
		{
			IceCreamPiece.SmoothieStrawberry,
			IceCreamPiece.SmoothieBanana,
			IceCreamPiece.SmoothieBlueberry,
			IceCreamPiece.SmoothieAvocado,
			IceCreamPiece.SmoothieOrange
		};

		private const int MaxSmoothies = 1;

		private static readonly IceCreamPiece[] Syrups = new IceCreamPiece[]
		{
			IceCreamPiece.CherrySyrup,
			IceCreamPiece.GrapeSyrup,
			IceCreamPiece.LemonSyrup,
			IceCreamPiece.GreenAppleSyrup
		};

		private const int MinSyrups = 0;

		private const int MaxSyrups = 1;

		private static readonly IceCreamPiece[] Fruits = new IceCreamPiece[]
		{
			IceCreamPiece.Strawberry,
			IceCreamPiece.Banana,
			IceCreamPiece.Kiwi,
			IceCreamPiece.Blueberry,
			IceCreamPiece.Avocado,
			IceCreamPiece.Orange,
			IceCreamPiece.Cherry,
			IceCreamPiece.Coconut
		};

		private const int MaxFruits = 3;

		private static readonly IceCreamPiece[] Jellies = new IceCreamPiece[]
		{
			IceCreamPiece.RainbowJelly,
			IceCreamPiece.WhiteJelly
		};

		private const int MaxJellies = 1;

		private static readonly IceCreamPiece[] ToppingSyrups = new IceCreamPiece[]
		{
			IceCreamPiece.ChocolateToppingSyrup,
			IceCreamPiece.StrawberryToppingSyrup
		};

		private const int MaxToppingSyrups = 1;

		private static readonly IceCreamPiece[] BehindDecors = new IceCreamPiece[]
		{
			IceCreamPiece.Pocky
		};

		private const int MaxBehindDecors = 2;

		private static readonly IceCreamPiece[] SmoothieDecors = new IceCreamPiece[]
		{
			IceCreamPiece.Oreo,
			IceCreamPiece.Sprinkles
		};

		private const int MaxSmoothieDecors = 2;

		private static readonly IceCreamPiece[] CreamFinishes = new IceCreamPiece[]
		{
			IceCreamPiece.Cherry
		};

		private const int MaxCreamFinishes = 1;

		private static readonly IceCreamPiece[] WhippedCreams = new IceCreamPiece[]
		{
			IceCreamPiece.WhippingCream
		};

		private const int MaxWhippedCreamExtras = 4;

		private const int MaxSharedToppings = 5;

		private const int MaxShaveIceToppings = 6;

		private const int MaxMilkshakeToppings = 8;

		private const int MaxSmoothieToppings = 8;

		private static readonly IceCreamPiece[][] ToppingTables = new IceCreamPiece[][]
		{
			Fruits,
			Jellies,
			ToppingSyrups,
			SmoothieDecors,
			BehindDecors
		};

		private static RecipeConfigSO Config => (MessyController.Ins != null) ? MessyController.Ins.recipeConfig : null;

		private static bool Contains(IceCreamPiece[] table, IceCreamPiece piece)
		{
			if (table == null) return false;
			for (int i = 0; i < table.Length; i++)
			{
				if (table[i] == piece) return true;
			}
			return false;
		}

		private static int CountOf(PieceSet pieces, IceCreamPiece[] table)
		{
			int count = 0;
			foreach (var (kind, kindCount) in pieces)
			{
				if (Contains(table, (IceCreamPiece)kind))
				{
					count += kindCount;
				}
			}
			return count;
		}

		public static bool IsFlavor(IceCreamPiece piece) => Contains(Flavors, piece);

		public static bool IsSmoothie(IceCreamPiece piece) => Contains(Smoothies, piece);

		public static bool IsSyrup(IceCreamPiece piece) => Contains(Syrups, piece);

		public static bool IsFruit(IceCreamPiece piece) => Contains(Fruits, piece);

		public static bool IsJelly(IceCreamPiece piece) => Contains(Jellies, piece);

		public static bool IsToppingSyrup(IceCreamPiece piece) => Contains(ToppingSyrups, piece);

		public static bool IsBehindDecor(IceCreamPiece piece) => Contains(BehindDecors, piece);

		public static bool IsWhippedCream(IceCreamPiece piece) => Contains(WhippedCreams, piece);

		public static int LayerOf(int kind)
		{
			if ((kind | 2) == 0x12)
			{
				return 0;
			}
			var piece = (IceCreamPiece)kind;
			if (IsFlavor(piece) || IsSmoothie(piece))
			{
				return 1;
			}
			if (IsSyrup(piece))
			{
				return 2;
			}
			if (IsWhippedCream(piece))
			{
				return 3;
			}
			if (IsFruit(piece))
			{
				return 4;
			}
			if (IsJelly(piece))
			{
				return 5;
			}
			if (IsToppingSyrup(piece))
			{
				return 6;
			}
			if (IsBehindDecor(piece))
			{
				return 7;
			}
			return 8;
		}

		public static bool IsRefined(string ingId)
		{
			RecipeConfigSO config = PieceLookup.Config;
			if (config == null)
			{
				return false;
			}
			RcPieceConfig pieceConfig = config.GetPieceConfig(ingId);
			return pieceConfig != null && pieceConfig.role == PieceRole.Refined;
		}

		public static bool TryGetRefinedOf(IceCreamPiece piece, out string refinedId)
		{
			refinedId = null;
			return false;
		}

		private static IceCreamPiece[] MainsOf(IceCreamDish dish)
		{
			switch (dish)
			{
				case IceCreamDish.IceCream:
				case IceCreamDish.IceCreamCup:
				case IceCreamDish.Milkshake:
					return Flavors;
				case IceCreamDish.Smoothie:
					return Smoothies;
				case IceCreamDish.ShaveIce:
					return Syrups;
				default:
					return Array.Empty<IceCreamPiece>();
			}
		}

		private static int MinMainsOf(IceCreamDish dish) => 1;

		private static int MaxMainsOf(IceCreamDish dish)
		{
			switch (dish)
			{
				case IceCreamDish.IceCream:
				case IceCreamDish.IceCreamCup:
					return MaxIceCreamFlavors;
				case IceCreamDish.Milkshake:
					return MaxMilkshakeFlavors;
				case IceCreamDish.Smoothie:
					return MaxSmoothies;
				case IceCreamDish.ShaveIce:
					return MaxSyrups;
				default:
					return 1;
			}
		}

		private static int MaxToppingsOf(IceCreamDish dish)
		{
			switch (dish)
			{
				case IceCreamDish.ShaveIce: return MaxShaveIceToppings;
				case IceCreamDish.Milkshake: return MaxMilkshakeToppings;
				case IceCreamDish.Smoothie: return MaxSmoothieToppings;
				default: return MaxSharedToppings;
			}
		}

		private static bool IsMain(IceCreamDish dish, IceCreamPiece piece) => Contains(MainsOf(dish), piece);

		private static int MainCount(IceCreamDish dish, PieceSet pieces) => CountOf(pieces, MainsOf(dish));

		private static bool HasBase(IceCreamDish dish, PieceSet pieces)
		{
			// Inferred: Base is usually the first main or special container piece
			return MainCount(dish, pieces) > 0;
		}

		private static bool IsBase(IceCreamDish dish, IceCreamPiece piece) => IsMain(dish, piece);

		private static int ToppingCount(IceCreamDish dish, PieceSet pieces)
		{
			int count = 0;
			foreach (var table in ToppingTables)
			{
				count += CountOf(pieces, table);
			}
			return count;
		}

		private static bool ToppingAllows(IceCreamDish dish, PieceSet has, IceCreamPiece piece)
		{
			if (ToppingCount(dish, has) >= MaxToppingsOf(dish)) return false;
			// Add specific exclusion logic if found in pseudocode
			return true;
		}

		public static bool CanDishAdd(IceCreamDish dish, PieceSet has, string ingId)
		{
			if (!TryGetPiece(ingId, out IceCreamPiece piece)) return false;
			if (IsMain(dish, piece))
			{
				return MainCount(dish, has) < MaxMainsOf(dish);
			}
			return ToppingAllows(dish, has, piece);
		}

		public static bool SyrupCanStillLand(PieceSet has, PieceSet want) => true;

		public static bool ScoopsCanStillLand(PieceSet has, PieceSet want) => true;

		private static bool MainsBeforeToppings(IceCreamDish dish) => dish != IceCreamDish.ShaveIce;

		public static bool CanOpen(IceCreamDish dish, string ingId)
		{
			if (!TryGetPiece(ingId, out IceCreamPiece piece)) return false;
			return IsBase(dish, piece);
		}

		public static PieceSet PredictOpen(IceCreamDish dish, string ingId)
		{
			if (CanOpen(dish, ingId) && TryGetPiece(ingId, out IceCreamPiece piece))
			{
				return PieceSet.One((int)piece);
			}
			return PieceSet.Empty;
		}

		public static PieceSet PredictStart(IceCreamDish dish, string firstIngId, string secondIngId)
		{
			PieceSet res = PredictOpen(dish, firstIngId);
			if (res.IsEmpty)
			{
				res = PredictOpen(dish, secondIngId);
				if (!res.IsEmpty)
				{
					if (TryGetPiece(firstIngId, out IceCreamPiece p1)) res.Add((int)p1);
				}
			}
			else
			{
				if (TryGetPiece(secondIngId, out IceCreamPiece p2)) res.Add((int)p2);
			}
			return res;
		}

		private static PieceSet TryStart(IceCreamDish dish, string openerId, string nextId)
		{
			return PredictStart(dish, openerId, nextId);
		}

		public static bool TryGetPiece(string ingId, out IceCreamPiece piece)
		{
			return Enum.TryParse(ingId, out piece);
		}

		public static PieceSet Roll(IceCreamDish dish, int maxToppings = 0, Func<IceCreamPiece, bool> canShow = null)
		{
			PieceSet res = new PieceSet();
			IceCreamPiece[] mains = MainsOf(dish);
			if (mains.Length > 0)
			{
				int count = UnityEngine.Random.Range(MinMainsOf(dish), MaxMainsOf(dish) + 1);
				for (int i = 0; i < count; i++)
				{
					res.Add((int)mains[UnityEngine.Random.Range(0, mains.Length)]);
				}
			}
			return RollToppings(dish, res, maxToppings, canShow);
		}

		private static PieceSet RollToppings(IceCreamDish dish, PieceSet pieces, int maxToppings, Func<IceCreamPiece, bool> canShow)
		{
			int count = UnityEngine.Random.Range(0, Math.Min(maxToppings, MaxToppingsOf(dish)) + 1);
			for (int i = 0; i < count; i++)
			{
				IceCreamPiece[] table = ToppingTables[UnityEngine.Random.Range(0, ToppingTables.Length)];
				IceCreamPiece p = table[UnityEngine.Random.Range(0, table.Length)];
				if (IsUsable(p, canShow))
				{
					pieces.Add((int)p);
				}
			}
			return pieces;
		}

		private static bool IsUsable(IceCreamPiece piece, Func<IceCreamPiece, bool> canShow)
		{
			return canShow == null || canShow(piece);
		}
	}
}
