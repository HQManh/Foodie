using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellDisplayPool
	{
		private readonly IngCellDisplay _prefab;

		private readonly Transform _parent;

		private readonly Dictionary<Vector2Int, IngCellDisplay> _displays;

		public IEnumerable<KeyValuePair<Vector2Int, IngCellDisplay>> All => null;

		public IngCellDisplayPool(IngCellDisplay prefab, Transform parent)
		{
		}

		public IngCellDisplay TryGet(Vector2Int coord)
		{
			return null;
		}

		public IngCellDisplay GetOrCreate(Vector2Int coord, Vector3 worldPos)
		{
			return null;
		}
	}
}
