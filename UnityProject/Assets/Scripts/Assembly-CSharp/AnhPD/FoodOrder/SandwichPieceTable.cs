using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;

namespace AnhPD.FoodOrder
{
	public static class SandwichPieceTable
	{
		// The tables below come from the static constructor; values were read from the metadata (<PrivateImplementationDetails> field data).
		private static readonly SandwichPiece[] Fillings = new SandwichPiece[8]
		{
			SandwichPiece.Lettuce,
			SandwichPiece.Ham,
			SandwichPiece.Tomato,
			SandwichPiece.Chicken,
			SandwichPiece.Cucumber,
			SandwichPiece.Bacon,
			SandwichPiece.Cheese,
			SandwichPiece.Egg
		};

		private static readonly SandwichPiece[] Fruits = new SandwichPiece[4]
		{
			SandwichPiece.Strawberry,
			SandwichPiece.Kiwi,
			SandwichPiece.Mango,
			SandwichPiece.Grape
		};

		private const SandwichPiece SaladBase = SandwichPiece.Lettuce;

		private static readonly SandwichPiece[] SaladToppings = new SandwichPiece[5]
		{
			SandwichPiece.Tomato,
			SandwichPiece.Cucumber,
			SandwichPiece.SweetCorn,
			SandwichPiece.Egg,
			SandwichPiece.Mayonnaise
		};

		// In the static constructor Juices is assigned the same array as Fruits.
		private static readonly SandwichPiece[] Juices = Fruits;

		private static readonly SandwichPiece[] Soups = new SandwichPiece[3]
		{
			SandwichPiece.Tomato,
			SandwichPiece.Pumpkin,
			SandwichPiece.Mushroom
		};

		private static readonly SandwichPiece[] SoupToppings = new SandwichPiece[4]
		{
			SandwichPiece.Bread,
			SandwichPiece.Parsley,
			SandwichPiece.SweetCorn,
			SandwichPiece.WhippedCream
		};

		public const int MaxFillings = 8;

		public const int MaxFruits = 4;

		public const int MinSaladToppings = 1;

		public const int MaxSaladToppings = 5;

		public const int MaxSoupToppings = 2;

		private static RecipeConfigSO Config => PieceLookup.Config;

		private static bool Contains(SandwichPiece[] table, SandwichPiece piece)
		{
			foreach (SandwichPiece p in table)
			{
				if (p == piece)
				{
					return true;
				}
			}
			return false;
		}

		private static int CountIn(PieceSet pieces, SandwichPiece[] table)
		{
			int total = 0;
			foreach (var entry in pieces)
			{
				if (Contains(table, (SandwichPiece)entry.kind))
				{
					total += entry.count;
				}
			}
			return total;
		}

		public static bool WantsRefined(SandwichDish dish, SandwichPiece piece)
		{
			switch (dish)
			{
				case SandwichDish.SavorySandwich:
					return piece == SandwichPiece.Bread;
				case (SandwichDish)3:
					return (int)piece == 2;
				case SandwichDish.Juice:
					return Contains(Juices, piece);
				case SandwichDish.Soup:
					return piece == SandwichPiece.Bread || piece == SandwichPiece.Tomato;
				default:
					return false;
			}
		}

		public static bool IsRefined(string ingId)
		{
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			RcPieceConfig pieceConfig = config.GetPieceConfig(ingId);
			return pieceConfig != null && (int)pieceConfig.role == 4;
		}

		public static bool TryGetFormOf(SandwichDish dish, SandwichPiece piece, out string ingId)
		{
			ingId = null;
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			if (WantsRefined(dish, piece))
			{
				return TryGetRefinedOf(config, piece, out ingId);
			}
			return config.TryGetPreparedOfPiece((int)piece, out ingId);
		}

		public static bool HasSeveralForms(SandwichPiece piece)
		{
			RecipeConfigSO config = Config;
			if (config == null)
			{
				return false;
			}
			return TryGetRefinedOf(config, piece, out _);
		}

		private static bool TryGetRefinedOf(RecipeConfigSO config, SandwichPiece piece, out string refinedId)
		{
			refinedId = null;
			if (config.ingredients == null)
			{
				return false;
			}
			PieceSet wanted = PieceSet.One((int)piece);
			foreach (RecipeComponentIngredient ing in config.ingredients)
			{
				if (ing == null || !IsRefined(ing.id))
				{
					continue;
				}
				if (PieceLookup.PiecesOf(ing.id) == wanted)
				{
					refinedId = ing.id;
					return true;
				}
			}
			return false;
		}

		public static bool TryGetPiece(string ingId, out SandwichPiece piece)
		{
			piece = default;
			PieceSet pieces = PieceLookup.PiecesOf(ingId);
			if (pieces.TotalCount != 1)
			{
				return false;
			}
			foreach (var entry in pieces)
			{
				piece = (SandwichPiece)entry.kind;
				return true;
			}
			return false;
		}

		private static bool TryGetDishPiece(SandwichDish dish, string ingId, out SandwichPiece piece)
		{
			piece = default;
			if (!TryGetPiece(ingId, out piece))
			{
				return false;
			}
			return IsRefined(ingId) == WantsRefined(dish, piece);
		}

		public static int FillingRank(SandwichPiece piece)
		{
			int index = Array.IndexOf(Fillings, piece);
			return index < 0 ? int.MaxValue : index;
		}

		public static int LayerOf(SandwichDish dish, int kind)
		{
			if (IsOpener(dish, (SandwichPiece)kind))
			{
				return 0;
			}
			int layer = 2;
			if (kind == 9 && (int)dish == 2)
			{
				layer = 1;
			}
			return layer;
		}

		private static bool IsOpener(SandwichDish dish, SandwichPiece piece)
		{
			switch ((int)dish)
			{
				case 1:
				case 2:
					return piece == SandwichPiece.Bread;
				case 3:
					return piece == SandwichPiece.Lettuce;
				case 4:
					return Contains(Juices, piece);
				case 5:
					return Contains(Soups, piece);
				default:
					return false;
			}
		}

		public static bool CanDishAdd(SandwichDish dish, PieceSet has, string ingId)
		{
			// Rebuilt from the decompiled code. A piece that is already present can never be added again.
			if (!TryGetDishPiece(dish, ingId, out var piece) || has[(int)piece] > 0)
			{
				return false;
			}
			switch ((int)dish)
			{
			case 1:
				// Savory sandwich: needs bread, and takes up to MaxFillings fillings.
				return has[(int)SandwichPiece.Bread] > 0 && Contains(Fillings, piece) && CountIn(has, Fillings) < MaxFillings;
			case 2:
				// Fruit sandwich: needs bread; whipped cream is always allowed, fruits need whipped cream first.
				if (has[(int)SandwichPiece.Bread] == 0)
				{
					return false;
				}
				if (piece == SandwichPiece.WhippedCream)
				{
					return true;
				}
				return has[(int)SandwichPiece.WhippedCream] > 0 && Contains(Fruits, piece) && CountIn(has, Fruits) < MaxFruits;
			case 3:
				// Salad: needs lettuce, and takes up to MaxSaladToppings toppings.
				return has[(int)SandwichPiece.Lettuce] > 0 && Contains(SaladToppings, piece) && CountIn(has, SaladToppings) < MaxSaladToppings;
			case 4:
				// Juice: one juice fruit; ice cubes only once a juice fruit is in.
				if (Contains(Juices, piece))
				{
					return CountIn(has, Juices) == 0;
				}
				if (piece == SandwichPiece.IceCubes)
				{
					return CountIn(has, Juices) > 0;
				}
				return false;
			case 5:
				// Soup: one soup base; toppings only once a base is in, up to MaxSoupToppings.
				if (Contains(Soups, piece))
				{
					return CountIn(has, Soups) == 0;
				}
				return Contains(SoupToppings, piece) && CountIn(has, Soups) > 0 && CountIn(has, SoupToppings) < MaxSoupToppings;
			default:
				return false;
			}
		}

		public static bool CanOpen(SandwichDish dish, string ingId)
		{
			// Rebuilt from the decompiled code.
			return TryGetDishPiece(dish, ingId, out var piece) && IsOpener(dish, piece);
		}

		public static PieceSet PredictOpen(SandwichDish dish, string ingId)
		{
			// Only dishes 4 and 5 (Juice and Soup) open with a single ingredient.
			if (((int)dish & -2) == 4 && CanOpen(dish, ingId) && TryGetPiece(ingId, out var piece))
			{
				return PieceSet.One((int)piece);
			}
			return PieceSet.Empty;
		}

		public static PieceSet PredictStart(SandwichDish dish, string firstIngId, string secondIngId)
		{
			PieceSet started = TryStart(dish, firstIngId, secondIngId);
			if (started.IsEmpty)
			{
				started = TryStart(dish, secondIngId, firstIngId);
			}
			return started;
		}

		private static PieceSet TryStart(SandwichDish dish, string openerId, string nextId)
		{
			if (CanOpen(dish, openerId) && TryGetPiece(openerId, out var openerPiece))
			{
				PieceSet opener = PieceSet.One((int)openerPiece);
				if (CanDishAdd(dish, opener, nextId) && TryGetPiece(nextId, out var nextPiece))
				{
					return opener.Add((int)nextPiece, 1);
				}
			}
			return PieceSet.Empty;
		}

		public static PieceSet Roll(SandwichDish dish, int maxExtras = 0, Func<SandwichPiece, bool> canShow = null)
		{
			// Rebuilt from the decompiled code. Warning texts are string literals decoded from the metadata.
			if (!PieceLookup.HasConfig)
			{
				UnityEngine.Debug.LogWarning("[Sandwich] chưa có MessyController.recipeConfig (bấm nút lúc chưa Play?) — không tra được nguyên liệu.");
				return PieceSet.Empty;
			}
			PieceSet result = PieceSet.Empty;
			switch ((int)dish)
			{
			case 1:
				if (IsUsable(dish, SandwichPiece.Bread, null))
				{
					result = PickSome(dish, PieceSet.One((int)SandwichPiece.Bread), Fillings, 1, Cap(MaxFillings, maxExtras), canShow);
				}
				break;
			case 2:
				if (IsUsable(dish, SandwichPiece.Bread, null) && IsUsable(dish, SandwichPiece.WhippedCream, null))
				{
					PieceSet start = PieceSet.One((int)SandwichPiece.Bread).Add((int)SandwichPiece.WhippedCream, 1);
					result = PickSome(dish, start, Fruits, 1, Cap(MaxFruits, maxExtras), canShow);
				}
				break;
			case 3:
				if (IsUsable(dish, SandwichPiece.Lettuce, canShow))
				{
					result = PickSome(dish, PieceSet.One((int)SandwichPiece.Lettuce), SaladToppings, 1, Cap(MaxSaladToppings, maxExtras), canShow);
				}
				break;
			case 4:
				result = PickSome(dish, PieceSet.Empty, Juices, 1, 1, canShow);
				if (!result.IsEmpty)
				{
					result = MaybeAdd(dish, result, SandwichPiece.IceCubes, canShow);
				}
				break;
			case 5:
				result = PickSome(dish, PieceSet.Empty, Soups, 1, 1, canShow);
				if (!result.IsEmpty)
				{
					result = PickSome(dish, result, SoupToppings, 0, Cap(MaxSoupToppings, maxExtras), canShow);
				}
				break;
			}
			if (result.IsEmpty)
			{
				UnityEngine.Debug.LogWarning(string.Format("[Sandwich] món {0} không đủ nguyên liệu vừa có trong RecipeConfigSO vừa có ", dish) + "visual trên prefab — không sinh được đơn nào.");
			}
			return result;
		}

		private static int Cap(int graphMax, int maxExtras)
		{
			// maxExtras limits the graph maximum when it is positive.
			return (maxExtras < 1) ? graphMax : Math.Min(graphMax, maxExtras);
		}

		private static PieceSet PickSome(SandwichDish dish, PieceSet basePieces, SandwichPiece[] table, int min, int max, Func<SandwichPiece, bool> canShow)
		{
			// Rebuilt from the decompiled code: draw between min and max distinct usable pieces from the table.
			List<SandwichPiece> pool = new List<SandwichPiece>();
			foreach (SandwichPiece piece in table)
			{
				if (basePieces[(int)piece] == 0 && IsUsable(dish, piece, canShow))
				{
					pool.Add(piece);
				}
			}
			if (pool.Count < min)
			{
				return PieceSet.Empty;
			}
			int upper = Math.Min(max, pool.Count);
			int count = UnityEngine.Random.Range(min, upper + 1);
			PieceSet result = basePieces;
			for (int i = 0; i < count; i++)
			{
				int index = UnityEngine.Random.Range(0, pool.Count);
				result = result.Add((int)pool[index], 1);
				pool.RemoveAt(index);
			}
			return result;
		}

		private static PieceSet MaybeAdd(SandwichDish dish, PieceSet pieces, SandwichPiece piece, Func<SandwichPiece, bool> canShow)
		{
			// A usable piece is added with probability 0.5.
			if (IsUsable(dish, piece, canShow) && UnityEngine.Random.value < 0.5f)
			{
				return pieces.Add((int)piece, 1);
			}
			return pieces;
		}

		private static bool IsUsable(SandwichDish dish, SandwichPiece piece, Func<SandwichPiece, bool> canShow)
		{
			if (!TryGetFormOf(dish, piece, out var form))
			{
				return false;
			}
			return canShow == null || canShow(piece);
		}
	}
}
