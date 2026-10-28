using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class FlexibleId
	{
		// The separator literal is "-flex-" (decoded from the metadata; it was previously guessed as "@").
		private const string Separator = "-flex-";

		public static bool IsFlexible(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return false;
			}
			return id.Contains(Separator);
		}

		public static string BaseOf(string id)
		{
			if (IsFlexible(id))
			{
				return APDUtilities.SplitByKey(id, Separator).Item1;
			}
			return id;
		}

		public static string StateOf(string id)
		{
			if (!IsFlexible(id))
			{
				return string.Empty;
			}
			return APDUtilities.SplitByKey(id, Separator).Item2;
		}

		public static List<int> Parts(string id)
		{
			List<int> list = new List<int>();
			string text = StateOf(id);
			for (int i = 0; i + 1 < text.Length; i += 2)
			{
				if (int.TryParse(text.Substring(i, 2), out var result))
				{
					list.Add(result);
				}
			}
			return list;
		}
	}
}
