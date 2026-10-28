using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class RecipeConfig
	{
		public string resultId;

		public List<RecipeCombineConfig> combinations;

		[Tooltip("Nguyên liệu vào tự do (gạo; lá trà + cốc). Nguyên liệu KHÔNG có trong danh sách chỉ được nhận khi ít nhất một anchor đã nằm trong slot. Trống = không ràng buộc thứ tự.")]
		public List<string> anchorIds;

		[Tooltip("Order ingredient list only: shows these ids instead of the first combination. Empty = default.")]
		public List<string> displayIds;

		public RecipeConfig()
		{
			anchorIds = new List<string>();
			displayIds = new List<string>();
		}

		public bool IsAnchor(string ingId)
		{
			return anchorIds != null && anchorIds.Contains(ingId);
		}

		public IEnumerable<string> AnchorChoices()
		{
			HashSet<string> seen = new HashSet<string>();
			if (combinations == null)
			{
				yield break;
			}
			foreach (RecipeCombineConfig combination in combinations)
			{
				if (combination == null || combination.components == null)
				{
					continue;
				}
				foreach (CombinationComponent component in combination.components)
				{
					if (component != null && component.type == CombinationComponentType.Ingredient && !string.IsNullOrEmpty(component.id) && seen.Add(component.id))
					{
						yield return component.id;
					}
				}
			}
		}
	}
}
