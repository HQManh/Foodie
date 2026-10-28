using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sushi;

namespace AnhPD.FoodOrder
{
	public static class SushiPieceTable
	{
		public const SushiPiece NigiriBase = SushiPiece.Rice;

		public const int MaxSashimiFish = 3;

		// The tables below are filled by the static constructor from embedded data blobs; the values were read from the metadata (<PrivateImplementationDetails> field data).
		private static readonly SushiPiece[] Fishes = new SushiPiece[6]
		{
			SushiPiece.Tuna,
			SushiPiece.Salmon,
			SushiPiece.Hirame,
			SushiPiece.Mackerel,
			SushiPiece.Shrimp,
			SushiPiece.Octopus
		};

		private static readonly SushiPiece[] Mains = new SushiPiece[8]
		{
			SushiPiece.Tuna,
			SushiPiece.Salmon,
			SushiPiece.Hirame,
			SushiPiece.Mackerel,
			SushiPiece.Shrimp,
			SushiPiece.Octopus,
			SushiPiece.Avocado,
			SushiPiece.Egg
		};

		// In the static constructor CubeFoods is assigned the same array as Mains.
		private static readonly SushiPiece[] CubeFoods = Mains;

		private static readonly SushiPiece[] Roes = new SushiPiece[3]
		{
			SushiPiece.RoeOrange,
			SushiPiece.RoeBlack,
			SushiPiece.RoeGreen
		};

		private static readonly SushiPiece[] Decors = new SushiPiece[3]
		{
			SushiPiece.Wasabi,
			SushiPiece.Lemon,
			SushiPiece.Shiso
		};

		private static readonly HashSet<SushiPiece> GunkanRollExcluded = new HashSet<SushiPiece>
		{
			SushiPiece.Hirame,
			SushiPiece.Mackerel
		};

		private static RecipeConfigSO Config => PieceLookup.Config;

		private static bool Contains(SushiPiece[] table, SushiPiece piece)
		{
			foreach (SushiPiece entry in table)
			{
				if (entry == piece)
				{
					return true;
				}
			}
			return false;
		}

		private static bool HasAny(PieceSet pieces, SushiPiece[] table)
		{
			foreach (var (kind, _) in pieces)
			{
				if (Contains(table, (SushiPiece)kind))
				{
					return true;
				}
			}
			return false;
		}

		public static bool IsFish(SushiPiece piece)
		{
			return Contains(Fishes, piece);
		}

		public static bool IsMain(SushiPiece piece)
		{
			return Contains(Mains, piece);
		}

		public static bool IsRoe(SushiPiece piece)
		{
			return Contains(Roes, piece);
		}

		public static bool IsDecor(SushiPiece piece)
		{
			return Contains(Decors, piece);
		}

		public static int LayerOf(int kind)
		{
			if (kind == 0)
			{
				return 1;
			}
			if (kind == 1)
			{
				return 0;
			}
			SushiPiece piece = (SushiPiece)kind;
			if (IsMain(piece))
			{
				return 2;
			}
			if (IsRoe(piece))
			{
				return 3;
			}
			if (IsDecor(piece))
			{
				return 4;
			}
			return 5;
		}

		public static bool IsPlainBase(PieceSet pieces)
		{
			// TODO(unrecovered): decompiled loop never updates its exit flag, so the predicate cannot be recovered
			return false;
		}

		public static bool HasMain(PieceSet pieces)
		{
			return HasAny(pieces, Mains);
		}

		public static bool HasRoe(PieceSet pieces)
		{
			return HasAny(pieces, Roes);
		}

		public static bool IsCube(string ingId)
		{
			// TODO(unrecovered): reads a nullable piece kind from the RcPieceConfig field at +0x10 and compares it to 4; field mapping not confirmed in stubs
			return false;
		}

		public static bool TryGetCubeOf(SushiPiece piece, out string cubeId)
		{
			cubeId = null;
			RecipeConfigSO config = PieceLookup.Config;
			if (config == null || config.ingredients == null)
			{
				return false;
			}
			PieceSet target = PieceSet.One((int)piece);
			foreach (var ing in config.ingredients)
			{
				if (ing == null || !IsCube(ing.id))
				{
					continue;
				}
				if (PieceLookup.PiecesOf(ing.id).Equals(target))
				{
					cubeId = ing.id;
					return true;
				}
			}
			return false;
		}

		private static bool HasCubeOf(SushiPiece piece)
		{
			return TryGetCubeOf(piece, out _);
		}

		public static bool CanAddToNigiri(PieceSet pieces, SushiPiece piece, bool cube)
		{
			if (pieces[(int)piece] >= 1)
			{
				return false;
			}
			if (pieces[(int)NigiriBase] == 0)
			{
				return false;
			}
			if (!IsMain(piece))
			{
				if (!IsRoe(piece))
				{
					return IsDecor(piece) && HasMain(pieces);
				}
				return HasMain(pieces) && !HasRoe(pieces);
			}
			if (!cube)
			{
				return !HasMain(pieces);
			}
			return false;
		}

		public static bool CanAddToMaki(PieceSet pieces, SushiPiece piece, bool cube)
		{
			if (pieces[(int)piece] >= 1)
			{
				return false;
			}
			if (!HasSeaweedAndRice(pieces))
			{
				return false;
			}
			if (!IsMain(piece))
			{
				return IsDecor(piece) && HasMain(pieces);
			}
			if (!cube)
			{
				return !HasMain(pieces);
			}
			return false;
		}

		public static bool CanAddToGunkan(PieceSet pieces, SushiPiece piece, bool cube)
		{
			if (pieces[(int)piece] >= 1)
			{
				return false;
			}
			if (!HasSeaweedAndRice(pieces))
			{
				return false;
			}
			bool hasBase = HasMain(pieces) || HasRoe(pieces);
			if (IsRoe(piece))
			{
				return !hasBase;
			}
			if (!Contains(CubeFoods, piece))
			{
				return hasBase && IsDecor(piece);
			}
			return cube && !hasBase;
		}

		public static bool CanAddToSashimi(PieceSet pieces, SushiPiece piece, bool cube)
		{
			if (pieces[(int)piece] >= 1)
			{
				return false;
			}
			if (!IsFish(piece))
			{
				if (IsDecor(piece))
				{
					return CountFish(pieces) > 0;
				}
			}
			else if (!cube)
			{
				return CountFish(pieces) < MaxSashimiFish;
			}
			return false;
		}

		private static bool HasSeaweedAndRice(PieceSet pieces)
		{
			return pieces[(int)SushiPiece.Seaweed] > 0 && pieces[(int)SushiPiece.Rice] > 0;
		}

		private static int CountFish(PieceSet pieces)
		{
			int count = 0;
			foreach (var (kind, _) in pieces)
			{
				if (IsFish((SushiPiece)kind))
				{
					count++;
				}
			}
			return count;
		}

		public static bool CanOpen(SushiDish dish, string itemBaseId, PieceSet pieces)
		{
			switch (dish)
			{
			case SushiDish.Nigiri:
				return pieces[(int)SushiPiece.Rice] > 0;
			case SushiDish.Maki:
			case SushiDish.Gunkan:
				return pieces[(int)SushiPiece.Seaweed] > 0;
			case SushiDish.Sashimi:
				return CountFish(pieces) > 0 && !IsCube(itemBaseId);
			default:
				return false;
			}
		}

		public static PieceSet PredictSashimiOpen(string ingId)
		{
			if (TryGetPiece(ingId, out SushiPiece piece) && IsFish(piece) && !IsCube(ingId))
			{
				return PieceSet.One((int)piece);
			}
			return PieceSet.Empty;
		}

		public static bool CanDishAdd(SushiDish dish, PieceSet has, string ingId)
		{
			if (!TryGetPiece(ingId, out SushiPiece piece))
			{
				return false;
			}
			bool cube = IsCube(ingId);
			switch (dish)
			{
			case SushiDish.Nigiri:
				return CanAddToNigiri(has, piece, cube);
			case SushiDish.Maki:
				return CanAddToMaki(has, piece, cube);
			case SushiDish.Gunkan:
				return CanAddToGunkan(has, piece, cube);
			case SushiDish.Sashimi:
				return CanAddToSashimi(has, piece, cube);
			default:
				return false;
			}
		}

		public static PieceSet PredictStart(SushiDish dish, string firstIngId, string secondIngId)
		{
			PieceSet first = PieceLookup.PiecesOf(firstIngId);
			PieceSet second = PieceLookup.PiecesOf(secondIngId);
			PieceSet combined = first.Add(second);
			if (dish == SushiDish.Maki || dish == SushiDish.Gunkan)
			{
				if (combined.TotalCount == 2 && HasSeaweedAndRice(combined))
				{
					return combined;
				}
				return PieceSet.Empty;
			}
			if (dish == SushiDish.Sashimi)
			{
				PieceSet fish = PredictSashimiOpen(firstIngId);
				if (!fish.IsEmpty && CanDishAdd(dish, fish, secondIngId))
				{
					return combined;
				}
				PieceSet fishSecond = PredictSashimiOpen(secondIngId);
				if (fishSecond.IsEmpty)
				{
					return PieceSet.Empty;
				}
				return CanDishAdd(dish, fishSecond, firstIngId) ? combined : PieceSet.Empty;
			}
			PieceSet rice = PieceSet.One((int)NigiriBase);
			if (first.Equals(rice) && CanDishAdd(dish, rice, secondIngId))
			{
				return combined;
			}
			if (!second.Equals(rice))
			{
				return PieceSet.Empty;
			}
			return CanDishAdd(dish, rice, firstIngId) ? combined : PieceSet.Empty;
		}

		public static bool TryGetPiece(string ingId, out SushiPiece piece)
		{
			piece = default;
			PieceSet pieces = PieceLookup.PiecesOf(ingId);
			if (pieces.TotalCount == 1)
			{
				foreach (var (kind, _) in pieces)
				{
					piece = (SushiPiece)kind;
					return true;
				}
			}
			return false;
		}

		public static PieceSet RollNigiri(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			if (!PieceLookup.Exists((int)NigiriBase))
			{
				UnityEngine.Debug.LogWarning(PieceLookup.HasConfig ? "Nigiri base piece has no prepared id" /* literal recovered by guess */ : "Recipe config is missing for nigiri" /* literal recovered by guess */);
				return PieceSet.Empty;
			}
			SushiPiece? main = PickUsable(Mains, canShow);
			if (!main.HasValue)
			{
				UnityEngine.Debug.LogWarning("No usable nigiri topping" /* literal recovered by guess */);
				return PieceSet.Empty;
			}
			PieceSet pieces = PieceSet.One((int)NigiriBase).Add((int)main.Value, 1);
			SushiPiece? roe = PickUsable(Roes, canShow);
			if (roe.HasValue && UnityEngine.Random.value < 0.5f)
			{
				pieces = pieces.Add((int)roe.Value, 1);
			}
			return RollDecors(pieces, maxDecors, canShow);
		}

		public static PieceSet RollMaki(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			// Rebuilt from the decompiled code. The dish literal is "maki" (DAT_0921f0a8) and the warning text is DAT_092143c8, both decoded from the metadata.
			// The filling table is Mains: it is the static at +8, the same slot RollNigiri uses for Mains. Piece 1 is Seaweed and piece 0 is Rice.
			if (HasSeaweedAndRiceIngredients("maki"))
			{
				SushiPiece? filling = PickUsable(Mains, canShow);
				if (filling.HasValue)
				{
					PieceSet pieces = PieceSet.One((int)SushiPiece.Seaweed).Add((int)SushiPiece.Rice, 1).Add((int)filling.Value, 1);
					return RollDecors(pieces, maxDecors, canShow);
				}
				UnityEngine.Debug.LogWarning("[Sushi] không nhân maki nào vừa có nguyên liệu role=Prepared vừa có visual trên prefab — không sinh được maki nào.");
			}
			return PieceSet.Empty;
		}

		public static PieceSet RollGunkan(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			// Rebuilt from the decompiled code. The dish literal is "gunkan" (DAT_0921c8c0) and the warning text is DAT_092143d8, both decoded from the metadata.
			// The tables are the statics at +0x18 (Roes), +0x10 (CubeFoods) and +0x28 (GunkanRollExcluded), in field order.
			if (HasSeaweedAndRiceIngredients("gunkan"))
			{
				List<SushiPiece> toppings = new List<SushiPiece>();
				foreach (SushiPiece roe in Roes)
				{
					if (PieceLookup.Exists((int)roe) && (canShow == null || canShow(roe)))
					{
						toppings.Add(roe);
					}
				}
				foreach (SushiPiece cube in CubeFoods)
				{
					if (!GunkanRollExcluded.Contains(cube) && HasCubeOf(cube) && (canShow == null || canShow(cube)))
					{
						toppings.Add(cube);
					}
				}
				if (toppings.Count != 0)
				{
					PieceSet pieces = PieceSet.One((int)SushiPiece.Seaweed).Add((int)SushiPiece.Rice, 1).Add((int)toppings[UnityEngine.Random.Range(0, toppings.Count)], 1);
					return RollDecors(pieces, maxDecors, canShow);
				}
				UnityEngine.Debug.LogWarning("[Sushi] không top gunkan nào (trứng cá / đồ cắt cube) vừa có nguyên liệu vừa có visual trên prefab — không sinh được gunkan nào.");
			}
			return PieceSet.Empty;
		}

		public static PieceSet RollSashimi(int maxDecors = 0, Func<SushiPiece, bool> canShow = null)
		{
			// TODO(unrecovered): the decompiled body continues past line 2700 of batch021.txt, which is outside part 1.
			return default;
		}

		private static bool HasSeaweedAndRiceIngredients(string dishName)
		{
			if (PieceLookup.Exists((int)SushiPiece.Rice) && PieceLookup.Exists((int)SushiPiece.Seaweed))
			{
				return true;
			}
			UnityEngine.Debug.LogWarning("Missing rice or seaweed piece for " + dishName); /* literal recovered by guess */
			return false;
		}

		private static bool IsUsable(SushiPiece piece, Func<SushiPiece, bool> canShow)
		{
			if (!PieceLookup.Exists((int)piece))
			{
				return false;
			}
			return canShow == null || canShow(piece);
		}

		private static SushiPiece? PickUsable(IReadOnlyList<SushiPiece> table, Func<SushiPiece, bool> canShow)
		{
			List<SushiPiece> usable = new List<SushiPiece>();
			foreach (SushiPiece piece in table)
			{
				if (IsUsable(piece, canShow))
				{
					usable.Add(piece);
				}
			}
			if (usable.Count == 0)
			{
				return null;
			}
			return usable[UnityEngine.Random.Range(0, usable.Count)];
		}

		private static PieceSet RollDecors(PieceSet basePieces, int maxDecors, Func<SushiPiece, bool> canShow)
		{
			List<SushiPiece> options = new List<SushiPiece>();
			foreach (SushiPiece decor in Decors)
			{
				if (PieceLookup.Exists((int)decor) && (canShow == null || canShow(decor)))
				{
					options.Add(decor);
				}
			}
			if (options.Count == 0)
			{
				return basePieces;
			}
			int cap = (maxDecors < 1) ? options.Count : Math.Min(maxDecors, options.Count);
			int n = UnityEngine.Random.Range(0, cap + 1);
			PieceSet result = basePieces;
			for (int i = 0; i < n; i++)
			{
				int index = UnityEngine.Random.Range(0, options.Count);
				SushiPiece pick = options[index];
				result = result.Add((int)pick, 1);
				options.RemoveAt(index);
			}
			return result;
		}
	}
}
