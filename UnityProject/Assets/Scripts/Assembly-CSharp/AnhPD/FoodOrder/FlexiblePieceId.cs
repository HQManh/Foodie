using System.Text;

namespace AnhPD.FoodOrder
{
	public static class FlexiblePieceId
	{
		public static string Build(string baseId, PieceSet pieces)
		{
			StringBuilder stringBuilder = new StringBuilder(baseId);
			stringBuilder.Append("-flex-");
			foreach (var (kind, count) in pieces)
			{
				for (int i = 0; i < count; i++)
				{
					stringBuilder.Append(FlexibleDragItem.ConvertIdToString(kind));
				}
			}
			return stringBuilder.ToString();
		}

		public static PieceSet PiecesOf(string baseId, string id)
		{
			if (string.IsNullOrEmpty(id) || FlexibleId.BaseOf(id) != baseId)
			{
				return PieceSet.Empty;
			}
			PieceSet result = PieceSet.Empty;
			foreach (int part in FlexibleId.Parts(id))
			{
				if (part < 48)
				{
					result = result.Add(part, 1);
				}
			}
			return result;
		}
	}
}
