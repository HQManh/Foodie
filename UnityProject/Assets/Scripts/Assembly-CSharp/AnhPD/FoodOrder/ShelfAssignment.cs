using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	internal static class ShelfAssignment
	{
		private const int MaxPlates = 10;

		private const int MaxOrders = 12;

		private const int MatchW = 20000000;

		private const int CompleteW = 1000000;

		private const int ReachableW = 500000;

		private const int SecuredW = 20000;

		private const int PriorityW = 1000;

		private const int ProgressW = 10;

		private const int StableW = 1;

		private const int MaxSecured = 20;

		// DP table, row-major [order row * 2^plates + plate mask]; grown by EnsureBuffers.
		private static int[] _score;

		// Chosen plate per DP state (-1 = skip this order).
		private static int[] _pick;

		// Per order: bitmask of plates it may be placed on.
		private static readonly int[] FeasMask = new int[MaxOrders];

		// Per plate: progress value (TotalCount * ProgressW).
		private static readonly int[] PlateValue = new int[MaxPlates];

		// Per (order, plate) pair: match score, stride MaxPlates.
		private static readonly int[] PairValue = new int[MaxOrders * MaxPlates];

		public static int Solve(IReadOnlyList<PieceSet?> plateHas, IReadOnlyList<PieceSet> orderPieces, IReadOnlyList<PieceSet?> plateLabels, IReadOnlyList<int> plateDishes, IReadOnlyList<int> orderDishes, PieceSet supply, Func<PieceSet, PieceSet, bool> canComplete, IReadOnlyList<string> plateSequences, IReadOnlyList<string> orderSequences, Func<int, string, string, bool> sequenceFits, int[] outAssign)
		{
			if (outAssign != null)
			{
				for (int i = 0; i < outAssign.Length; i++)
				{
					outAssign[i] = -1;
				}
			}
			int rawPlates = plateHas != null ? plateHas.Count : 0;
			if (orderPieces == null)
			{
				return 0;
			}
			int rawOrders = orderPieces.Count;
			int nPlates = Math.Min(rawPlates, MaxPlates);
			int nOrders = Math.Min(rawOrders, MaxOrders);
			if (rawPlates == 0 || rawOrders == 0)
			{
				return 0;
			}
			EnsureBuffers((nOrders + 1) << nPlates);
			for (int p = 0; p < nPlates; p++)
			{
				PieceSet? has = plateHas[p];
				PlateValue[p] = has.HasValue ? has.Value.TotalCount * ProgressW : 0;
			}
			for (int j = 0; j < nOrders; j++)
			{
				PieceSet order = orderPieces[j];
				int feas = 0;
				if (!order.IsEmpty && nPlates > 0)
				{
					for (int p = 0; p < nPlates; p++)
					{
						PieceSet? plateHasValue = plateHas[p];
						if (!plateHasValue.HasValue)
						{
							continue;
						}
						PieceSet plate = plateHasValue.Value;
						if (!order.Covers(plate))
						{
							continue;
						}
						if (!DishFits(plateDishes, p, orderDishes, j))
						{
							continue;
						}
						if (canComplete != null && !plate.IsEmpty && !canComplete(plate, order))
						{
							continue;
						}
						if (!SequenceFits(sequenceFits, plateSequences, p, orderSequences, j, orderDishes))
						{
							continue;
						}
						PieceSet rest = order.Subtract(plate);
						int secured = Math.Min(rest.IntersectCount(supply) + plate.TotalCount * 2, MaxSecured) * SecuredW;
						int value;
						if (rest.IsEmpty)
						{
							value = secured + CompleteW;
						}
						else
						{
							value = secured + (supply.Covers(rest) ? ReachableW : 0);
						}
						PairValue[j * MaxPlates + p] = value;
						feas |= 1 << p;
					}
				}
				FeasMask[j] = feas;
			}
			int size = 1 << nPlates;
			int clearBase = nOrders << nPlates;
			for (int k = 0; k < size; k++)
			{
				_score[clearBase + k] = 0;
			}
			for (int j = nOrders - 1; j >= 0; j--)
			{
				int rowNext = (j + 1) << nPlates;
				int rowCur = j << nPlates;
				for (int mask = 0; mask < size; mask++)
				{
					int best = _score[rowNext + mask];
					int bestPlate = -1;
					int avail = FeasMask[j] & ~mask;
					for (int u = 0; u < nPlates; u++)
					{
						if ((avail & (1 << u)) == 0)
						{
							continue;
						}
						int candidate = PlateValue[u] + (nOrders - 1 - j) * PriorityW + MatchW + PairValue[j * MaxPlates + u] + (IsSame(plateLabels, u, orderPieces[j]) ? StableW : 0) + _score[rowNext + (mask | (1 << u))];
						if (candidate > best)
						{
							best = candidate;
							bestPlate = u;
						}
					}
					_score[rowCur + mask] = best;
					_pick[rowCur + mask] = bestPlate;
				}
			}
			int usedMask = 0;
			for (int j = 0; j < nOrders; j++)
			{
				int pick = _pick[(j << nPlates) + usedMask];
				if (pick >= 0)
				{
					if (outAssign != null && pick < outAssign.Length)
					{
						outAssign[pick] = j;
					}
					usedMask |= 1 << pick;
				}
			}
			return _score[0];
		}

		private static bool DishFits(IReadOnlyList<int> plateDishes, int plate, IReadOnlyList<int> orderDishes, int order)
		{
			if (plateDishes != null && plate < plateDishes.Count)
			{
				int plateDish = plateDishes[plate];
				if (orderDishes == null || plateDish < 0)
				{
					return true;
				}
				if (order < orderDishes.Count)
				{
					int orderDish = orderDishes[order];
					return orderDish < 0 || orderDish == plateDish;
				}
			}
			return true;
		}

		private static bool SequenceFits(Func<int, string, string, bool> sequenceFits, IReadOnlyList<string> plateSequences, int plate, IReadOnlyList<string> orderSequences, int order, IReadOnlyList<int> orderDishes)
		{
			if (sequenceFits == null)
			{
				return true;
			}
			string plateSequence = null;
			if (plateSequences != null && plate < plateSequences.Count)
			{
				plateSequence = plateSequences[plate];
			}
			string orderSequence = null;
			if (orderSequences != null && order < orderSequences.Count)
			{
				orderSequence = orderSequences[order];
			}
			if (string.IsNullOrEmpty(plateSequence))
			{
				return true;
			}
			int dish = -1;
			if (orderDishes != null && order < orderDishes.Count)
			{
				dish = orderDishes[order];
			}
			// TODO(unrecovered): original falls back to a static string field when the order sequence is missing; string.Empty used here.
			if (orderSequence == null)
			{
				orderSequence = string.Empty;
			}
			return sequenceFits(dish, plateSequence, orderSequence);
		}

		private static bool IsSame(IReadOnlyList<PieceSet?> plateLabels, int plate, PieceSet order)
		{
			if (plateLabels == null || plate >= plateLabels.Count)
			{
				return false;
			}
			PieceSet? label = plateLabels[plate];
			return label.HasValue && label.Value == order;
		}

		private static void EnsureBuffers(int size)
		{
			if (_score != null && _score.Length >= size)
			{
				return;
			}
			_score = new int[size];
			_pick = new int[size];
		}
	}
}
