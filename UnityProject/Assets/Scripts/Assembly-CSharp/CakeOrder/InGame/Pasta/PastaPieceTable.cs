using System;
using System.Collections.Generic;
using AnhPD.FoodOrder;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public static class PastaPieceTable
	{
		// The index tables below are filled by the original static constructor from RuntimeHelpers.InitializeArray
		// blobs that are not present in the recovered pseudocode, so their contents are not recovered here.
		// The tables below come from the static constructor; values were read from the metadata (string literals and <PrivateImplementationDetails> field data).
		// Indexes 6, 8 and 20 are null in the original (those pieces have no prepared id).
		private static readonly string[] PreparedIds = new string[23]
		{
			"spaghetti-boiled",
			"manicotti-boiled",
			"farfalle-boiled",
			"tomato-milk-sauce",
			"spinach-milk-sauce",
			"cheese-milk-sauce",
			null,
			"lettuce-cut",
			null,
			"lemon-sliced",
			"bread-grilled",
			"octopus-grilled",
			"shrimp-grilled",
			"clam-grilled",
			"beef-steak-grilled",
			"chicken-grilled",
			"soda-cup",
			"mayonaise",
			"ice",
			"ground-meat-cooked",
			null,
			"tomato-large-chopped",
			"apple-cut"
		};

		private static readonly int[] Shapes = new int[3]
		{
			(int)PastaPiece.Spaghetti,
			(int)PastaPiece.Manicotti,
			(int)PastaPiece.Farfalle
		};

		private static readonly int[] Sauces = new int[3]
		{
			(int)PastaPiece.TomatoSauce,
			(int)PastaPiece.SpinachSauce,
			(int)PastaPiece.CheeseSauce
		};

		private static readonly int[] Mix = new int[4]
		{
			(int)PastaPiece.Octopus,
			(int)PastaPiece.Shrimp,
			(int)PastaPiece.Clam,
			(int)PastaPiece.GroundMeat
		};

		private static readonly int[] CommonToppings = new int[5]
		{
			(int)PastaPiece.Lettuce,
			(int)PastaPiece.Lemon,
			(int)PastaPiece.Bread,
			(int)PastaPiece.ChoppedTomato,
			(int)PastaPiece.Apple
		};

		private static readonly int[] SaladToppings = new int[4]
		{
			(int)PastaPiece.Lemon,
			(int)PastaPiece.Bread,
			(int)PastaPiece.Beef,
			(int)PastaPiece.Chicken
		};

		private static readonly int[] SaladAdditions = new int[2]
		{
			(int)PastaPiece.ChoppedTomato,
			(int)PastaPiece.Apple
		};

		private static readonly int[] MeatBases = new int[6]
		{
			(int)PastaPiece.Octopus,
			(int)PastaPiece.Shrimp,
			(int)PastaPiece.Clam,
			(int)PastaPiece.Beef,
			(int)PastaPiece.Chicken,
			(int)PastaPiece.GroundMeat
		};

		private static readonly int[] MeatToppings = new int[6]
		{
			(int)PastaPiece.Lettuce,
			(int)PastaPiece.Lemon,
			(int)PastaPiece.Bread,
			(int)PastaPiece.Mayonaise,
			(int)PastaPiece.ChoppedTomato,
			(int)PastaPiece.Apple
		};

		public const int PieceCount = 23;

		public static string PreparedId(int piece)
		{
			if (piece < 0 || PreparedIds == null || piece >= PreparedIds.Length)
			{
				return null;
			}
			return PreparedIds[piece];
		}

		public static bool TryGetPiece(string ingredientId, out int piece)
		{
			if (string.IsNullOrEmpty(ingredientId))
			{
				piece = -1;
				return false;
			}
			piece = Array.IndexOf(PreparedIds, ingredientId);
			return piece >= 0;
		}

		public static string BaseId(PastaDish dish)
		{
			// The four base ids are literals decoded from the metadata: DAT_09220b38 "pasta", DAT_09221e60 "salad", DAT_0921f418 "meat-food-with-topping", DAT_09222f48 "soda".
			switch ((int)dish)
			{
				case 1:
					return "pasta";
				case 2:
					return "salad";
				case 3:
					return "meat-food-with-topping";
				case 4:
					return "soda";
				default:
					return null;
			}
		}

		public static bool TryGetDish(string baseId, out PastaDish dish)
		{
			for (int k = 1; k <= 4; k++)
			{
				if (BaseId((PastaDish)k) == baseId)
				{
					dish = (PastaDish)k;
					return true;
				}
			}
			dish = default;
			return false;
		}

		public static bool IsValid(PastaDish dish, PieceSet pieces, bool complete)
		{
			if (pieces.IsEmpty)
			{
				return false;
			}
			foreach ((int kind, int count) in EnumerateKinds(pieces))
			{
				if (count != 1)
				{
					return false;
				}
				if (!Allows(dish, kind))
				{
					return false;
				}
			}
			return FinalCheck(dish, pieces, complete);
		}

		private static bool FinalCheck(PastaDish dish, PieceSet pieces, bool complete)
		{
			switch ((int)dish)
			{
				case 1:
				{
					int sauces = Count(pieces, Sauces);
					if (Count(pieces, Shapes) != 1 || sauces > 1)
					{
						return false;
					}
					if (Count(pieces, Mix) > 1)
					{
						return false;
					}
					if (Count(pieces, CommonToppings) > 5)
					{
						return false;
					}
					if (sauces == 0 && pieces.TotalCount != 1)
					{
						return false;
					}
					return !complete || sauces == 1;
				}
				case 2:
				{
					if (pieces[7] != 1)
					{
						return false;
					}
					if (Count(pieces, SaladAdditions) >= 3)
					{
						return false;
					}
					if (pieces[0xe] + pieces[0xf] >= 2)
					{
						return false;
					}
					return Count(pieces, SaladToppings) < 4;
				}
				case 3:
				{
					if (Count(pieces, MeatBases) > 1)
					{
						return false;
					}
					int common = Count(pieces, CommonToppings);
					bool result = common < 6;
					if (common > 5 || !complete)
					{
						return result;
					}
					return Count(pieces, MeatBases) == 1;
				}
				case 4:
					return pieces[0x10] == 1;
				default:
					return false;
			}
		}

		public static bool IsComplete(PastaDish dish, PieceSet pieces)
		{
			return IsValid(dish, pieces, true);
		}

		public static bool CanOpenPlate(PastaDish dish, string itemBaseId, PieceSet pieces)
		{
			if (!IsValid(dish, pieces, false))
			{
				return false;
			}
			bool baseMatch = itemBaseId == BaseId(dish);
			bool notOne;
			int piece;
			if (!TryGetPiece(itemBaseId, out piece))
			{
				notOne = true;
			}
			else
			{
				notOne = !pieces.Equals(PieceSet.One(piece));
			}
			switch ((int)dish)
			{
				case 1:
				{
					bool bad = Count(pieces, Shapes) != 1;
					if (!(bad || baseMatch || notOne))
					{
						return Contains(Shapes, piece);
					}
					return baseMatch && !bad;
				}
				case 2:
				{
					bool bad = pieces[7] != 1;
					if (!(bad || baseMatch || notOne))
					{
						return piece == 7;
					}
					return baseMatch && !bad;
				}
				case 3:
				{
					bool bad = Count(pieces, MeatBases) != 1;
					if (!(bad || baseMatch || notOne))
					{
						return Contains(MeatBases, piece);
					}
					return baseMatch && !bad;
				}
				case 4:
				{
					bool bad = pieces[0x10] != 1;
					if (!(bad || baseMatch || notOne))
					{
						return piece == 0x10;
					}
					return baseMatch && !bad;
				}
				default:
					return false;
			}
		}

		public static bool Allows(PastaDish dish, int piece)
		{
			switch ((int)dish)
			{
				case 1:
					return Contains(Shapes, piece) || Contains(Sauces, piece) || Contains(Mix, piece) || Contains(CommonToppings, piece);
				case 2:
					if (piece == 7)
					{
						return true;
					}
					if (piece == 0x11 || Contains(SaladAdditions, piece))
					{
						return true;
					}
					return Contains(SaladToppings, piece);
				case 3:
					return Contains(MeatBases, piece) || Contains(MeatToppings, piece);
				case 4:
					return piece == 0x10 || piece == 9 || piece == 0x12;
				default:
					return false;
			}
		}

		public static bool IsBaseForm(PastaDish dish, int piece)
		{
			switch ((int)dish)
			{
				case 1:
					return Contains(Shapes, piece) || Contains(Sauces, piece) || Contains(Mix, piece);
				case 2:
					return piece == 7;
				case 3:
					return Contains(MeatBases, piece);
				case 4:
					return piece == 0x10 || piece == 0x12 || piece == 2;
				default:
					return true;
			}
		}

		private static bool Contains(int[] values, int piece)
		{
			return values != null && Array.IndexOf(values, piece) >= 0;
		}

		private static int Count(PieceSet pieces, int[] values)
		{
			if (values == null)
			{
				return 0;
			}
			int total = 0;
			foreach (int v in values)
			{
				total += pieces[v];
			}
			return total;
		}

		private static IEnumerable<(int kind, int count)> EnumerateKinds(PieceSet pieces)
		{
			PieceSet.Enumerator e = pieces.GetEnumerator();
			while (e.MoveNext())
			{
				yield return e.Current;
			}
		}

		public static bool TryDecode(PastaDish dish, string longId, out PieceSet pieces)
		{
			string baseId = BaseId(dish);
			pieces = FlexiblePieceId.PiecesOf(baseId, longId);
			if (baseId != null && FlexiblePieceId.Build(baseId, pieces) == longId)
			{
				return IsValid(dish, pieces, false);
			}
			return false;
		}

		public static bool TryInput(PastaDish dish, string ingredientId, out PieceSet pieces)
		{
			pieces = default;
			string baseOf = FlexibleId.BaseOf(ingredientId);
			if (TryGetDish(baseOf, out PastaDish found))
			{
				if (found == dish)
				{
					return TryDecode(dish, ingredientId, out pieces);
				}
				return false;
			}
			if (TryGetPiece(ingredientId, out int piece) && Allows(dish, piece))
			{
				pieces = PieceSet.One(piece);
				return true;
			}
			return false;
		}

		public static PieceSet PredictOpen(PastaDish dish, string ingredientId)
		{
			if (TryInput(dish, ingredientId, out PieceSet input))
			{
				string baseOf = FlexibleId.BaseOf(ingredientId);
				if (CanOpenPlate(dish, baseOf, input))
				{
					return input;
				}
			}
			return default;
		}

		public static PieceSet PredictCombine(PastaDish dish, string firstId, string secondId)
		{
			if (TryInput(dish, firstId, out PieceSet a) && TryInput(dish, secondId, out PieceSet b))
			{
				PieceSet combined = a.Add(b);
				if (IsValid(dish, combined, false))
				{
					return combined;
				}
			}
			return default;
		}

		public static bool CanAdd(PastaDish dish, PieceSet has, string ingredientId)
		{
			if (!IsValid(dish, has, false))
			{
				return false;
			}
			if (!TryInput(dish, ingredientId, out PieceSet input))
			{
				return false;
			}
			return IsValid(dish, has.Add(input), false);
		}

		public static List<string> IngredientIds(PieceSet pieces)
		{
			List<string> ids = new List<string>();
			PieceSet.Enumerator e = pieces.GetEnumerator();
			while (e.MoveNext())
			{
				(int kind, int count) = e.Current;
				for (int i = 0; i < count; i++)
				{
					string id = PreparedId(kind);
					if (id != null)
					{
						ids.Add(id);
					}
				}
			}
			return ids;
		}

		public static PieceSet Roll(PastaDish dish, int maxCount = 0)
		{
			PieceSet pieces = default;
			int d = (int)dish;
			if (d == 1)
			{
				pieces = pieces.Add(Shapes[UnityEngine.Random.Range(0, 3)], 1);
				pieces = pieces.Add(Sauces[UnityEngine.Random.Range(0, 3)], 1);
			}
			else if (d == 2)
			{
				pieces = pieces.Add(7, 1);
			}
			else if (d == 3)
			{
				pieces = pieces.Add(MeatBases[UnityEngine.Random.Range(0, MeatBases.Length)], 1);
			}
			else if (d == 4)
			{
				pieces = pieces.Add(0x10, 1);
			}
			else
			{
				return pieces;
			}

			List<int> pool = new List<int>();
			for (int kind = 0; kind != PieceCount; kind++)
			{
				if (Allows(dish, kind) && pieces[kind] == 0)
				{
					pool.Add(kind);
				}
			}

			while (pool.Count > 0)
			{
				if (maxCount > 0 && pieces.TotalCount >= maxCount)
				{
					break;
				}
				int index = UnityEngine.Random.Range(0, pool.Count);
				int kind = pool[index];
				pool.RemoveAt(index);
				if (UnityEngine.Random.value < 0.5f)
				{
					PieceSet candidate = pieces.Add(kind, 1);
					if (IsValid(dish, candidate, true))
					{
						pieces = candidate;
					}
				}
			}
			return pieces;
		}
	}
}
