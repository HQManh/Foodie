using System;
using System.Collections.Generic;
using CakeOrder.InGame.Coffee;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public static class CafePieceTable
	{
		public const string ColdCoffeeBaseId = "cup_cold_coffee_flex";

		public static readonly PieceSet ColdCoffeeBase = PieceSet.One(7);

		// element lists below come from raw array initializer data; contents/order recovered by guess from the enum
		private static readonly CoffeePiece[] ColdCoffeeAddonList = new CoffeePiece[9]
		{
			CoffeePiece.Milk,
			CoffeePiece.Ice,
			CoffeePiece.Cream,
			CoffeePiece.ChocoCream,
			CoffeePiece.Sprinkle,
			CoffeePiece.Blueberry,
			CoffeePiece.Strawberry,
			CoffeePiece.Kiwi,
			CoffeePiece.Pineapple
		};

		private static readonly HashSet<CoffeePiece> ColdCoffeeAddons = new HashSet<CoffeePiece>(ColdCoffeeAddonList);

		public const string CupcakeBaseId = "cupcake_flex";

		public static readonly PieceSet CupcakeBase = PieceSet.One(12);

		private static readonly CoffeePiece[] CupcakeToppings = new CoffeePiece[7]
		{
			CoffeePiece.Cream,
			CoffeePiece.ChocoCream,
			CoffeePiece.Sprinkle,
			CoffeePiece.Blueberry,
			CoffeePiece.Strawberry,
			CoffeePiece.Kiwi,
			CoffeePiece.Pineapple
		};

		public const string DonutBaseId = "donut";

		private static readonly CoffeePiece[] DonutShapes = new CoffeePiece[3]
		{
			CoffeePiece.Donut,
			CoffeePiece.DonutBar,
			CoffeePiece.DonutInf
		};

		private static readonly HashSet<CoffeePiece> DonutGlazes = new HashSet<CoffeePiece>
		{
			CoffeePiece.ChocoGlaze,
			CoffeePiece.StrawGlaze,
			CoffeePiece.VaniGlaze,
			CoffeePiece.BlueGlaze
		};

		private static readonly CoffeePiece[] DonutToppings = new CoffeePiece[9]
		{
			CoffeePiece.ChocoGlaze,
			CoffeePiece.StrawGlaze,
			CoffeePiece.VaniGlaze,
			CoffeePiece.BlueGlaze,
			CoffeePiece.Sprinkle,
			CoffeePiece.Blueberry,
			CoffeePiece.Strawberry,
			CoffeePiece.Kiwi,
			CoffeePiece.Pineapple
		};

		public static readonly PieceSet HotCoffeeBase = PieceSet.One(8);

		private static readonly CoffeePiece[] HotCoffeeAddonList = new CoffeePiece[1] { CoffeePiece.Milk };

		private static readonly HashSet<CoffeePiece> Fruits = new HashSet<CoffeePiece>
		{
			CoffeePiece.Blueberry,
			CoffeePiece.Strawberry,
			CoffeePiece.Kiwi,
			CoffeePiece.Pineapple
		};

		private static readonly HashSet<CoffeePiece> Creams = new HashSet<CoffeePiece>
		{
			CoffeePiece.Cream,
			CoffeePiece.ChocoCream
		};

		private static readonly List<int> PickBuffer = new List<int>();

		public static readonly CafeDish[] Dishes = new CafeDish[4]
		{
			CafeDish.ColdCoffee,
			CafeDish.Donut,
			CafeDish.Cupcake,
			CafeDish.HotCoffee
		};

		public static IEnumerable<CoffeePiece> Addons => ColdCoffeeAddons;

		private static bool DonutShapeAvailable
		{
			get
			{
				foreach (CoffeePiece piece in DonutShapes)
				{
					if (PieceLookup.ExistsSpawnable((int)piece) && !ExcludedFromRandom(piece))
					{
						return true;
					}
				}
				return false;
			}
		}

		private static CafeOrderStrategy Strategy
		{
			get
			{
				if (MessyController.Ins)
				{
					return MessyController.Ins.OrderStrategy as CafeOrderStrategy;
				}
				return null;
			}
		}

		public static bool IsAddon(CoffeePiece piece)
		{
			return ColdCoffeeAddons.Contains(piece);
		}

		public static bool TryGetAddon(string ingId, out CoffeePiece piece)
		{
			piece = CoffeePiece.Donut;
			PieceSet pieceSet = PieceLookup.PiecesOf(ingId);
			if (pieceSet.TotalCount == 1)
			{
				foreach (var (kind, count) in pieceSet)
				{
					piece = (CoffeePiece)kind;
					return IsAddon(piece);
				}
			}
			return false;
		}

		public static PieceSet RollColdCoffee(int maxAddons)
		{
			if (!AnyAvailable(ColdCoffeeAddonList))
			{
				Debug.LogWarning((PieceLookup.HasConfig ? "[CafePieceTable] No cold coffee addon is available to roll" : "[CafePieceTable] Missing piece config, cold coffee falls back to its base") /* literal recovered by guess */);
				return ColdCoffeeBase;
			}
			return RollToppings(ColdCoffeeBase, ColdCoffeeAddonList, maxAddons, NoExclusiveGroup, LayerAllows);
		}

		public static bool IsCupcakeTopping(CoffeePiece piece)
		{
			if (!IsCream(piece))
			{
				if (!IsFruit(piece))
				{
					return piece == CoffeePiece.Sprinkle;
				}
				return true;
			}
			return true;
		}

		public static bool TryGetCupcakeTopping(string ingId, out CoffeePiece piece)
		{
			piece = CoffeePiece.Donut;
			PieceSet pieceSet = PieceLookup.PiecesOf(ingId);
			if (pieceSet.TotalCount == 1)
			{
				foreach (var (kind, count) in pieceSet)
				{
					piece = (CoffeePiece)kind;
					return IsCupcakeTopping(piece);
				}
			}
			return false;
		}

		public static PieceSet RollCupcake(int maxToppings)
		{
			return RollToppings(CupcakeBase, CupcakeToppings, maxToppings, NoExclusiveGroup, LayerAllows);
		}

		public static bool IsGlaze(CoffeePiece piece)
		{
			return DonutGlazes.Contains(piece);
		}

		public static bool HasGlaze(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				if (IsGlaze((CoffeePiece)kind))
				{
					return true;
				}
			}
			return false;
		}

		public static bool IsDonutShape(CoffeePiece piece)
		{
			return piece < CoffeePiece.ChocoGlaze;
		}

		public static bool IsDonutTopping(CoffeePiece piece)
		{
			if (!IsGlaze(piece))
			{
				if (!IsFruit(piece))
				{
					return piece == CoffeePiece.Sprinkle;
				}
				return true;
			}
			return true;
		}

		public static bool TryGetDonutTopping(string ingId, out CoffeePiece piece)
		{
			piece = CoffeePiece.Donut;
			PieceSet pieceSet = PieceLookup.PiecesOf(ingId);
			if (pieceSet.TotalCount == 1)
			{
				foreach (var (kind, count) in pieceSet)
				{
					piece = (CoffeePiece)kind;
					return IsDonutTopping(piece);
				}
			}
			return false;
		}

		public static PieceSet RollDonut(int maxToppings)
		{
			List<CoffeePiece> list = new List<CoffeePiece>();
			CoffeePiece[] donutShapes = DonutShapes;
			foreach (CoffeePiece coffeePiece in donutShapes)
			{
				if (PieceLookup.ExistsSpawnable((int)coffeePiece) && !ExcludedFromRandom(coffeePiece))
				{
					list.Add(coffeePiece);
				}
			}
			if (list.Count == 0)
			{
				Debug.LogWarning((PieceLookup.HasConfig ? "[CafePieceTable] No donut shape is available to roll" : "[CafePieceTable] Missing piece config, donut roll is empty") /* literal recovered by guess */);
				return PieceSet.Empty;
			}
			CoffeePiece coffeePiece2 = list[UnityEngine.Random.Range(0, list.Count)];
			return RollToppings(PieceSet.One((int)coffeePiece2), DonutToppings, maxToppings, IsGlaze, LayerAllows);
		}

		public static PieceSet RollHotCoffee(int maxAddons)
		{
			// the exclusive-group predicate is not distinguishable here (single-addon catalog); NoExclusiveGroup is used
			PieceSet pieceSet = RollToppings(HotCoffeeBase, HotCoffeeAddonList, maxAddons, NoExclusiveGroup);
			if (!PieceLookup.HasPreparedOfSet(pieceSet))
			{
				return HotCoffeeBase;
			}
			return pieceSet;
		}

		public static bool IsFruit(CoffeePiece piece)
		{
			return Fruits.Contains(piece);
		}

		public static bool IsCream(CoffeePiece piece)
		{
			return Creams.Contains(piece);
		}

		public static bool HasCream(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				if (IsCream((CoffeePiece)kind))
				{
					return true;
				}
			}
			return false;
		}

		public static bool HasFruit(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				if (IsFruit((CoffeePiece)kind))
				{
					return true;
				}
			}
			return false;
		}

		private static bool IsCoating(CoffeePiece piece)
		{
			if (!IsCream(piece))
			{
				return IsGlaze(piece);
			}
			return true;
		}

		private static bool IsOverCoating(CoffeePiece piece)
		{
			if (piece != CoffeePiece.Sprinkle)
			{
				return IsFruit(piece);
			}
			return true;
		}

		private static int LayerOf(CoffeePiece piece)
		{
			if (IsCoating(piece))
			{
				return 1;
			}
			if (!IsOverCoating(piece))
			{
				return 0;
			}
			return 2;
		}

		public static string BareIdOf(string baseId, string longId)
		{
			PieceSet basePieces = PieceSet.Empty;
			foreach (var (kind, count) in FlexiblePieceId.PiecesOf(baseId, longId))
			{
				if (LayerOf((CoffeePiece)kind) == 0)
				{
					basePieces = basePieces.Add(kind, count);
				}
			}
			return FlexiblePieceId.Build(baseId, basePieces);
		}

		public static bool LayerAllows(PieceSet pieces, CoffeePiece piece)
		{
			int num = LayerOf(piece);
			bool flag = false;
			foreach (var (kind, count) in pieces)
			{
				CoffeePiece coffeePiece = (CoffeePiece)kind;
				if (num < LayerOf(coffeePiece))
				{
					return false;
				}
				if (IsCoating(coffeePiece))
				{
					flag = true;
					if (IsCoating(piece))
					{
						return false;
					}
				}
			}
			return flag || !IsOverCoating(piece);
		}

		public static bool CanAdd(PieceSet pieces, CoffeePiece piece)
		{
			if (pieces[(int)piece] < 1)
			{
				return LayerAllows(pieces, piece);
			}
			return false;
		}

		private static PieceSet RollToppings(PieceSet basePieces, CoffeePiece[] catalog, int maxToppings, Predicate<CoffeePiece> exclusiveGroup, Func<PieceSet, CoffeePiece, bool> allows = null)
		{
			List<CoffeePiece> list = new List<CoffeePiece>();
			foreach (CoffeePiece coffeePiece in catalog)
			{
				if (PieceLookup.Exists((int)coffeePiece) && !ExcludedFromRandom(coffeePiece))
				{
					list.Add(coffeePiece);
				}
			}
			if (list.Count == 0)
			{
				return basePieces;
			}
			int num = maxToppings;
			if (list.Count <= maxToppings)
			{
				num = list.Count;
			}
			if (maxToppings < 1)
			{
				num = list.Count;
			}
			int num2 = UnityEngine.Random.Range(0, num + 1);
			PieceSet result = basePieces;
			while (num2 > 0 && list.Count >= 1)
			{
				int num3 = PickAllowed(list, result, allows);
				if (num3 < 0)
				{
					break;
				}
				CoffeePiece coffeePiece2 = list[num3];
				result = result.Add((int)coffeePiece2);
				list.RemoveAt(num3);
				if (exclusiveGroup(coffeePiece2))
				{
					list.RemoveAll(exclusiveGroup);
				}
				num2--;
			}
			return result;
		}

		private static int PickAllowed(List<CoffeePiece> pool, PieceSet pieces, Func<PieceSet, CoffeePiece, bool> allows)
		{
			PickBuffer.Clear();
			for (int i = 0; i < pool.Count; i++)
			{
				if (RandomAllows(pieces, pool[i]) && (allows == null || allows(pieces, pool[i])))
				{
					PickBuffer.Add(i);
				}
			}
			if (PickBuffer.Count == 0)
			{
				return -1;
			}
			return PickBuffer[UnityEngine.Random.Range(0, PickBuffer.Count)];
		}

		private static bool RandomAllows(PieceSet pieces, CoffeePiece piece)
		{
			if (piece == CoffeePiece.Sprinkle && HasFruit(pieces))
			{
				return false;
			}
			if (IsFruit(piece) && pieces[15] > 0)
			{
				return false;
			}
			if (pieces[7] > 0)
			{
				if (pieces[11] > 0 && (IsCream(piece) || IsFruit(piece)))
				{
					return false;
				}
				if (piece == CoffeePiece.Ice && (HasCream(pieces) || HasFruit(pieces)))
				{
					return false;
				}
			}
			return true;
		}

		private static bool NoExclusiveGroup(CoffeePiece piece)
		{
			return false;
		}

		private static bool AnyAvailable(CoffeePiece[] pieces)
		{
			foreach (CoffeePiece piece in pieces)
			{
				if (PieceLookup.Exists((int)piece))
				{
					return true;
				}
			}
			return false;
		}

		public static CafeDish DishOfBase(CoffeePiece piece)
		{
			if (piece == CoffeePiece.CupCold)
			{
				return CafeDish.ColdCoffee;
			}
			if (piece < CoffeePiece.ChocoGlaze)
			{
				return CafeDish.Donut;
			}
			if (piece == CoffeePiece.Cupcake)
			{
				return CafeDish.Cupcake;
			}
			return CafeDish.None;
		}

		public static bool IsBasePiece(CoffeePiece piece)
		{
			return DishOfBase(piece) != CafeDish.None;
		}

		public static CafeDish DishOf(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				CafeDish cafeDish = DishOfBase((CoffeePiece)kind);
				if (cafeDish != CafeDish.None)
				{
					return cafeDish;
				}
			}
			return CafeDish.None;
		}

		public static bool HasBasePiece(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				if (IsBasePiece((CoffeePiece)kind))
				{
					return true;
				}
			}
			return false;
		}

		public static bool HasTopping(PieceSet pieces)
		{
			foreach (var (kind, count) in pieces)
			{
				CoffeePiece piece = (CoffeePiece)kind;
				if (IsAddon(piece) || IsDonutTopping(piece) || IsCupcakeTopping(piece))
				{
					return true;
				}
			}
			return false;
		}

		public static bool Belongs(CafeDish dish, CoffeePiece piece)
		{
			switch (dish)
			{
			case CafeDish.Cupcake:
				if (piece != CoffeePiece.Cupcake)
				{
					return IsCupcakeTopping(piece);
				}
				break;
			case CafeDish.Donut:
				if (piece >= CoffeePiece.ChocoGlaze)
				{
					return IsDonutTopping(piece);
				}
				break;
			default:
				if (dish != CafeDish.ColdCoffee)
				{
					return false;
				}
				if (piece != CoffeePiece.CupCold)
				{
					return IsAddon(piece);
				}
				break;
			}
			return true;
		}

		public static string BaseIdOf(CafeDish dish)
		{
			switch (dish)
			{
			case CafeDish.Cupcake:
				return CupcakeBaseId;
			case CafeDish.Donut:
				return DonutBaseId;
			case CafeDish.ColdCoffee:
				return ColdCoffeeBaseId;
			default:
				return null;
			}
		}

		public static CafeDish DishOfBaseId(string baseId)
		{
			if (baseId == ColdCoffeeBaseId)
			{
				return CafeDish.ColdCoffee;
			}
			if (baseId == DonutBaseId)
			{
				return CafeDish.Donut;
			}
			if (baseId == CupcakeBaseId)
			{
				return CafeDish.Cupcake;
			}
			return CafeDish.None;
		}

		public static bool CanDishAdd(CafeDish dish, PieceSet has, string ingId)
		{
			PieceSet pieceSet = PieceLookup.PiecesOf(ingId);
			if (pieceSet.TotalCount == 1)
			{
				foreach (var (kind, count) in pieceSet)
				{
					CoffeePiece piece = (CoffeePiece)kind;
					if (!IsBasePiece(piece) && Belongs(dish, piece))
					{
						return CanAdd(has, piece);
					}
					break;
				}
			}
			return false;
		}

		public static bool Available(CafeDish dish)
		{
			switch (dish)
			{
			case CafeDish.ColdCoffee:
				return BaseRollable(CoffeePiece.CupCold);
			case CafeDish.Donut:
				return DonutShapeAvailable;
			case CafeDish.Cupcake:
				return BaseRollable(CoffeePiece.Cupcake);
			case CafeDish.HotCoffee:
				return BaseRollable(CoffeePiece.CupHot);
			default:
				return false;
			}
		}

		private static bool BaseRollable(CoffeePiece piece)
		{
			if (!PieceLookup.Exists((int)piece))
			{
				return false;
			}
			return !ExcludedFromRandom(piece);
		}

		public static bool ExcludedFromRandom(CoffeePiece piece)
		{
			CafeOrderStrategy strategy = Strategy;
			if (strategy)
			{
				return strategy.IsExcludedFromRandom(piece);
			}
			return false;
		}

		public static PieceSet Roll(CafeDish dish, int maxToppings = 0)
		{
			if (maxToppings < 1)
			{
				CafeOrderStrategy strategy = Strategy;
				maxToppings = ((!strategy) ? 0 : strategy.MaxToppingsOf(dish));
			}
			switch (dish)
			{
			case CafeDish.ColdCoffee:
				return RollColdCoffee(maxToppings);
			case CafeDish.Donut:
				return RollDonut(maxToppings);
			case CafeDish.Cupcake:
				return RollCupcake(maxToppings);
			case CafeDish.HotCoffee:
				return RollHotCoffee(maxToppings);
			default:
				return PieceSet.Empty;
			}
		}
	}
}
