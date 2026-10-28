using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class OrderSpecExtensions
	{
		public static List<string> ToDisplayIds(this IReadOnlyList<OrderSpec> specs)
		{
			if (specs == null)
			{
				return new List<string>();
			}
			List<string> ids = new List<string>(specs.Count);
			for (int i = 0; i < specs.Count; i++)
			{
				ids.Add(specs[i].DisplayId);
			}
			return ids;
		}
	}
}
