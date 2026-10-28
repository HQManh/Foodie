using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellDisplayPool
	{
		private readonly IngCellDisplay _prefab;

		private readonly Transform _parent;

		private readonly Dictionary<Vector2Int, IngCellDisplay> _displays;

		public IEnumerable<KeyValuePair<Vector2Int, IngCellDisplay>> All => _displays;

		public IngCellDisplayPool(IngCellDisplay prefab, Transform parent)
		{
			_displays = new Dictionary<Vector2Int, IngCellDisplay>();
			_prefab = prefab;
			_parent = parent;
		}

		public IngCellDisplay TryGet(Vector2Int coord)
		{
			if (_displays.TryGetValue(coord, out IngCellDisplay display) && display != null)
			{
				return display;
			}
			return null;
		}

		public IngCellDisplay GetOrCreate(Vector2Int coord, Vector3 worldPos)
		{
			if (_prefab == null)
			{
				return null;
			}
			if (_displays.TryGetValue(coord, out IngCellDisplay existing) && existing != null)
			{
				return existing;
			}
			// TODO(unrecovered): the spawn rotation is read from a config singleton whose type was not recovered; identity is used here
			IngCellDisplay created = Object.Instantiate(_prefab, worldPos, Quaternion.identity, _parent);
			if (created != null && created.gameObject != null)
			{
				created.gameObject.SetActive(true);
				created.Apply(default);
				created.SetDish(false);
				_displays.Add(coord, created);
				return created;
			}
			return null;
		}
	}
}
