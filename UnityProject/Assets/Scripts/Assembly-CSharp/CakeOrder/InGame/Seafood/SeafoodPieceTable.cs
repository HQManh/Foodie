using System;
using System.Collections.Generic;
using AnhPD.FoodOrder;

namespace CakeOrder.InGame.Seafood
{
	public static class SeafoodPieceTable
	{
		public const int PieceCount = 26;

		// The tables below come from the static constructor; values were read from the metadata (string literals and <PrivateImplementationDetails> field data).
		private static readonly string[] PreparedIds = new string[26]
		{
			"cedar-plank",
			"hoisin-mustard-glaze",
			"maple-dijon-glaze",
			"dill-sprig",
			"capers",
			"lettuce-shredded",
			"chives-chopped",
			"seafood-seasoning",
			"oyster-crackers",
			"lobster-grilled",
			"lobster-salad",
			"king-crab-steamed",
			"salmon-grilled",
			"scallops-broiled",
			"split-top-roll-toasted",
			"clam-chowder-cooked",
			"garlic-butter-melted",
			"chili-butter-melted",
			"lemon-herb-butter-melted",
			"lemon-wedge",
			"parsley-chopped",
			"celery-diced",
			"corn-grilled",
			"potatoes-roasted",
			"garlic-bread-broiled",
			"gratin-topping-browned"
		};

		private static readonly string[] Bases = new string[6]
		{
			"grilled-lobster",
			"steamed-king-crab",
			"cedar-plank-salmon",
			"scallop-gratin",
			"lobster-roll",
			"clam-chowder"
		};

		private static readonly int[] Openers = new int[6]
		{
			(int)SeafoodPiece.LobsterGrilled,
			(int)SeafoodPiece.KingCrabSteamed,
			(int)SeafoodPiece.SalmonGrilled,
			(int)SeafoodPiece.ScallopsBroiled,
			(int)SeafoodPiece.LobsterSalad,
			(int)SeafoodPiece.ClamChowderCooked
		};

		private static readonly uint[][] CompleteStates = new uint[6][]
		{
			new uint[12] { 131584u, 66048u, 262656u, 131648u, 655872u, 1180160u, 66112u, 262720u, 590336u, 1114624u, 786944u, 1311232u },
			new uint[27] { 4327424u, 657408u, 8521728u, 4261888u, 4458496u, 591872u, 8456192u, 788480u, 8652800u, 5376000u, 4327552u, 1705984u, 657536u, 9570304u, 8521856u, 5310464u, 4262016u, 5507072u, 4458624u, 1640448u, 592000u, 9504768u, 8456320u, 1837056u, 788608u, 9701376u, 8652928u },
			new uint[6] { 4097u, 4113u, 4105u, 4099u, 528385u, 4101u },
			new uint[1] { 33562624u },
			new uint[4] { 17408u, 2114560u, 17472u, 17440u },
			new uint[4] { 32768u, 16809984u, 33024u, 1081344u }
		};

		public static string PreparedId(int piece)
		{
			// Rebuilt from the decompiled code: PreparedIds[piece] for pieces 0..25, otherwise null.
			return (piece >= 0 && piece < PieceCount) ? PreparedIds[piece] : null;
		}

		public static bool TryGetPiece(string id, out int piece)
		{
			piece = Array.IndexOf(PreparedIds, id);
			return piece >= 0;
		}

		public static string BaseId(SeafoodDish dish)
		{
			int index = (int)dish - 1;
			return (index >= 0 && index < 6) ? Bases[index] : null;
		}

		public static bool TryGetDish(string id, out SeafoodDish dish)
		{
			int index = Array.IndexOf(Bases, id);
			dish = (index >= 0) ? (SeafoodDish)(index + 1) : SeafoodDish.None;
			return index >= 0;
		}

		private static bool Mask(PieceSet pieces, out uint mask)
		{
			// Each piece must appear exactly once and have kind 0..25; the mask has one bit per piece kind.
			mask = 0u;
			foreach ((int kind, int count) in pieces)
			{
				if (count != 1 || kind < 0 || kind > 25)
				{
					return false;
				}
				mask |= 1u << kind;
			}
			return mask != 0;
		}

		public static bool IsValid(SeafoodDish dish, PieceSet pieces, bool complete)
		{
			// The opener piece of the dish must be present exactly once; then the piece mask must equal a complete state (complete),
			// or be a subset of one (not complete).
			int index = (int)dish - 1;
			if (index < 0 || index >= 6)
			{
				return false;
			}
			if (!Mask(pieces, out var mask))
			{
				return false;
			}
			if (pieces[Openers[index]] != 1)
			{
				return false;
			}
			foreach (uint state in CompleteStates[index])
			{
				if (complete ? (mask == state) : ((mask & ~state) == 0))
				{
					return true;
				}
			}
			return false;
		}

		public static bool IsComplete(SeafoodDish dish, PieceSet pieces)
		{
			return IsValid(dish, pieces, complete: true);
		}

		public static bool Allows(SeafoodDish dish, int piece)
		{
			// True if any complete state of the dish contains the piece.
			int index = (int)dish - 1;
			if (piece < 0 || piece > 25 || index < 0 || index >= 6)
			{
				return false;
			}
			foreach (uint state in CompleteStates[index])
			{
				if ((state & (1u << piece)) != 0)
				{
					return true;
				}
			}
			return false;
		}

		public static bool CanOpenPlate(SeafoodDish dish, string id, PieceSet pieces)
		{
			if (!IsValid(dish, pieces, complete: false))
			{
				return false;
			}
			if (id == BaseId(dish))
			{
				return true;
			}
			return TryGetPiece(id, out var piece) && piece == Openers[(int)dish - 1];
		}

		public static bool TryDecode(SeafoodDish dish, string id, out PieceSet pieces)
		{
			string baseId = BaseId(dish);
			pieces = FlexiblePieceId.PiecesOf(baseId, id);
			if (baseId == null)
			{
				return false;
			}
			return FlexiblePieceId.Build(baseId, pieces) == id && IsValid(dish, pieces, complete: false);
		}

		public static bool TryInput(SeafoodDish dish, string id, out PieceSet pieces)
		{
			pieces = PieceSet.Empty;
			if (TryGetDish(FlexibleId.BaseOf(id), out var idDish))
			{
				// The id is a flexible dish id: it must be for this dish.
				return idDish == dish && TryDecode(dish, id, out pieces);
			}
			if (TryGetPiece(id, out var piece) && Allows(dish, piece))
			{
				pieces = PieceSet.One(piece);
				return true;
			}
			return false;
		}

		public static PieceSet PredictOpen(SeafoodDish dish, string id)
		{
			if (TryInput(dish, id, out var pieces) && CanOpenPlate(dish, FlexibleId.BaseOf(id), pieces))
			{
				return pieces;
			}
			return PieceSet.Empty;
		}

		public static PieceSet PredictCombine(SeafoodDish dish, string a, string b)
		{
			if (TryInput(dish, a, out var first) && TryInput(dish, b, out var second))
			{
				PieceSet combined = first.Add(second);
				if (IsValid(dish, combined, complete: false))
				{
					return combined;
				}
			}
			return PieceSet.Empty;
		}

		public static bool CanAdd(SeafoodDish dish, PieceSet has, string id)
		{
			if (!IsValid(dish, has, complete: false))
			{
				return false;
			}
			return TryInput(dish, id, out var add) && IsValid(dish, has.Add(add), complete: false);
		}

		public static List<string> IngredientIds(PieceSet pieces)
		{
			List<string> ids = new List<string>();
			foreach ((int kind, int count) in pieces)
			{
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

		public static PieceSet Roll(SeafoodDish dish, int maxCount = 0)
		{
			// Pick a random complete state of the dish; maxCount (when positive) limits the number of pieces.
			int index = (int)dish - 1;
			if (index >= 0 && index < 6)
			{
				List<PieceSet> candidates = new List<PieceSet>();
				foreach (uint state in CompleteStates[index])
				{
					PieceSet set = PieceSet.Empty;
					for (int bit = 0; bit < 26; bit++)
					{
						if (((state >> bit) & 1) != 0)
						{
							set = set.Add(bit);
						}
					}
					if (maxCount < 1 || set.TotalCount <= maxCount)
					{
						candidates.Add(set);
					}
				}
				if (candidates.Count != 0)
				{
					return candidates[UnityEngine.Random.Range(0, candidates.Count)];
				}
			}
			return PieceSet.Empty;
		}
	}
}
