using System.Collections.Generic;
using System.Text;
using CakeOrder.InGame.IceCream;

namespace AnhPD.FoodOrder
{
	public static class IceCreamScoopOrder
	{
		private static readonly List<int> Buffer = new List<int>();

		public static string BuildId(string baseId, PieceSet pieces, IReadOnlyList<int> order)
		{
			// "-flex-" matches the separator used by FlexibleId.
			StringBuilder stringBuilder = new StringBuilder(baseId);
			stringBuilder.Append("-flex-");
			foreach (var (kind, count) in pieces)
			{
				if (!IsFlavor(kind) && count > 0)
				{
					for (int n = 0; n < count; n++)
					{
						stringBuilder.Append(FlexibleDragItem.ConvertIdToString(kind));
					}
				}
			}
			PieceSet used = PieceSet.Empty;
			if (order != null)
			{
				for (int i = 0; i < order.Count; i++)
				{
					int kind2 = order[i];
					if (kind2 < 0x30 && IsFlavor(kind2) && used[kind2] < pieces[kind2])
					{
						used = used.Add(kind2);
						stringBuilder.Append(FlexibleDragItem.ConvertIdToString(kind2));
					}
				}
			}
			foreach (var (kind3, count3) in pieces)
			{
				if (IsFlavor(kind3))
				{
					int remaining = count3 - used[kind3];
					for (int n = 0; n < remaining; n++)
					{
						stringBuilder.Append(FlexibleDragItem.ConvertIdToString(kind3));
					}
				}
			}
			return stringBuilder.ToString();
		}

		public static void ReadOrder(string id, List<int> into)
		{
			if (string.IsNullOrEmpty(id))
			{
				return;
			}
			if (!FlexibleId.IsFlexible(id))
			{
				if (IceCreamPieceTable.TryGetPiece(id, out IceCreamPiece piece) && IsFlavor((int)piece))
				{
					into.Add((int)piece);
				}
				return;
			}
			foreach (int part in FlexibleId.Parts(id))
			{
				if (IsFlavor(part))
				{
					into.Add(part);
				}
			}
		}

		public static string Sequence(string id)
		{
			Buffer.Clear();
			ReadOrder(id, Buffer);
			if (Buffer.Count == 0)
			{
				// Empty-result sentinel inferred from context (literal recovered by guess).
				return string.Empty;
			}
			StringBuilder stringBuilder = new StringBuilder(Buffer.Count * 2);
			foreach (int kind in Buffer)
			{
				stringBuilder.Append(FlexibleDragItem.ConvertIdToString(kind));
			}
			return stringBuilder.ToString();
		}

		private static bool IsFlavor(int kind)
		{
			if (kind > 0x2f)
			{
				return false;
			}
			return IceCreamPieceTable.IsFlavor((IceCreamPiece)kind);
		}
	}
}
