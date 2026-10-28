using System.Collections.Generic;
using System.Text;
using CakeOrder;
using CookingGraph;

namespace AnhPD.FoodOrder.Autoplay
{
	public sealed class GraphNodeIdMap
	{
		private readonly Dictionary<string, IngredientNodeAsset> _pickupableByLegacyId = new Dictionary<string, IngredientNodeAsset>();

		private readonly Dictionary<string, IngredientNodeAsset> _servableByLegacyId = new Dictionary<string, IngredientNodeAsset>();

		public readonly List<string> Unmapped = new List<string>();

		public int PickupableCount => _pickupableByLegacyId.Count;

		public int ServableCount => _servableByLegacyId.Count;

		public bool IsEmpty => _pickupableByLegacyId.Count == 0 && _servableByLegacyId.Count == 0;

		public static GraphNodeIdMap Build(RecipeConfigSO recipe, MapIngredientLookupTable lookup)
		{
			GraphNodeIdMap map = new GraphNodeIdMap();
			if (recipe == null || lookup == null)
			{
				return map;
			}
			foreach (MapIngredientLookupTable.IngredientEntry entry in CakeOrder.InGame.IngredientLookup.PickupableIngredients(lookup))
			{
				if (entry != null && entry.node != null && entry.recipePieceIndex >= 0)
				{
					string spawnId;
					if (recipe.TryGetSpawnIdOfPiece(entry.recipePieceIndex, out spawnId) && !string.IsNullOrEmpty(spawnId))
					{
						map._pickupableByLegacyId[spawnId] = entry.node;
					}
				}
			}
			foreach (MapIngredientLookupTable.IngredientEntry entry2 in CakeOrder.InGame.IngredientLookup.ServableIngredients(lookup))
			{
				if (entry2 != null && entry2.node != null && entry2.recipePieceIndex >= 0)
				{
					string preparedId;
					if (recipe.TryGetPreparedOfPiece(entry2.recipePieceIndex, out preparedId) && !string.IsNullOrEmpty(preparedId))
					{
						map._servableByLegacyId[preparedId] = entry2.node;
					}
				}
			}
			return map;
		}

		public IngredientNodeAsset PickupableNodeOf(string legacyId)
		{
			IngredientNodeAsset node = null;
			if (legacyId == null)
			{
				return null;
			}
			if (!_pickupableByLegacyId.TryGetValue(legacyId, out node))
			{
				node = null;
			}
			return node;
		}

		public IngredientNodeAsset ServableNodeOf(string legacyId)
		{
			IngredientNodeAsset node = null;
			if (legacyId == null)
			{
				return null;
			}
			if (!_servableByLegacyId.TryGetValue(legacyId, out node))
			{
				node = null;
			}
			return node;
		}

		public IngredientNodeAsset NodeOf(string legacyId)
		{
			IngredientNodeAsset servable = ServableNodeOf(legacyId);
			if (servable != null)
			{
				return servable;
			}
			return PickupableNodeOf(legacyId);
		}

		public bool IsServableId(string legacyId)
		{
			if (legacyId == null)
			{
				return false;
			}
			return _servableByLegacyId.ContainsKey(legacyId);
		}

		public void ReportUnmapped(string legacyId)
		{
			if (!string.IsNullOrEmpty(legacyId) && !Unmapped.Contains(legacyId))
			{
				Unmapped.Add(legacyId);
			}
		}

		public string Describe()
		{
			StringBuilder sb = new StringBuilder();
			sb.AppendLine(string.Format("[CookingBot] id map: {0} pickupable, {1} servable", _pickupableByLegacyId.Count, _servableByLegacyId.Count)); /* literal recovered by guess */
			sb.AppendLine("pickupable:"); /* literal recovered by guess */
			foreach (KeyValuePair<string, IngredientNodeAsset> pair in _pickupableByLegacyId)
			{
				sb.AppendLine(string.Format("  {0} -> {1}", pair.Key, pair.Value.nodeName));
			}
			sb.AppendLine("servable:"); /* literal recovered by guess */
			foreach (KeyValuePair<string, IngredientNodeAsset> pair2 in _servableByLegacyId)
			{
				sb.AppendLine(string.Format("  {0} -> {1}", pair2.Key, pair2.Value.nodeName));
			}
			if (Unmapped.Count > 0)
			{
				sb.AppendLine("unmapped:"); /* literal recovered by guess */
				foreach (string unmapped in Unmapped)
				{
					sb.AppendLine("  " + unmapped);
				}
			}
			return sb.ToString();
		}
	}
}
