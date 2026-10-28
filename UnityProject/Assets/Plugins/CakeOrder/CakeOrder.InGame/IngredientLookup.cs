using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using CookingGraph;

namespace CakeOrder.InGame
{

// Replacement for the lookup methods of MapIngredientLookupTable. The game's managed DLLs are metadata-only shells (IL2CPP build), so
// the methods on that type do nothing; this rebuilds them from the decompiled code and reads the table's serialized arrays directly.
public static class IngredientLookup
{
	private class Cache
	{
		public MapIngredientLookupTable.IngredientEntry[] servable;

		public MapIngredientLookupTable.IngredientEntry[] pickupable;

		public MapIngredientLookupTable.DishEntry[] dishes;

		public Dictionary<IngredientNodeAsset, MapIngredientLookupTable.IngredientEntry> servableByNode = new Dictionary<IngredientNodeAsset, MapIngredientLookupTable.IngredientEntry>();

		public Dictionary<IngredientNodeAsset, MapIngredientLookupTable.IngredientEntry> pickupableByNode = new Dictionary<IngredientNodeAsset, MapIngredientLookupTable.IngredientEntry>();

		public Dictionary<int, MapIngredientLookupTable.IngredientEntry> servableByPiece = new Dictionary<int, MapIngredientLookupTable.IngredientEntry>();

		public Dictionary<string, int> dishByComposite = new Dictionary<string, int>();
	}

	private static readonly ConditionalWeakTable<MapIngredientLookupTable, Cache> Caches = new ConditionalWeakTable<MapIngredientLookupTable, Cache>();

	private const BindingFlags AnyField = BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic;

	private static T Field<T>(MapIngredientLookupTable table, string name) where T : class
	{
		FieldInfo field = typeof(MapIngredientLookupTable).GetField(name, AnyField);
		return field != null ? field.GetValue(table) as T : null;
	}

	private static Cache CacheOf(MapIngredientLookupTable table)
	{
		if (Caches.TryGetValue(table, out var cached))
		{
			return cached;
		}
		Cache cache = new Cache
		{
			servable = Field<MapIngredientLookupTable.IngredientEntry[]>(table, "_servableIngredients") ?? new MapIngredientLookupTable.IngredientEntry[0],
			pickupable = Field<MapIngredientLookupTable.IngredientEntry[]>(table, "_pickupableIngredients") ?? new MapIngredientLookupTable.IngredientEntry[0],
			dishes = Field<MapIngredientLookupTable.DishEntry[]>(table, "_dishes") ?? new MapIngredientLookupTable.DishEntry[0],
		};
		foreach (MapIngredientLookupTable.IngredientEntry entry in cache.servable)
		{
			if (entry == null)
			{
				continue;
			}
			if (entry.node != null)
			{
				cache.servableByNode[entry.node] = entry;
			}
			if (entry.recipePieceIndex >= 0 && !cache.servableByPiece.ContainsKey(entry.recipePieceIndex))
			{
				cache.servableByPiece[entry.recipePieceIndex] = entry;
			}
		}
		foreach (MapIngredientLookupTable.IngredientEntry entry in cache.pickupable)
		{
			if (entry != null && entry.node != null)
			{
				cache.pickupableByNode[entry.node] = entry;
			}
		}
		foreach (MapIngredientLookupTable.DishEntry dish in cache.dishes)
		{
			if (dish != null && dish.composite != null && !string.IsNullOrEmpty(dish.composite.nodeName))
			{
				cache.dishByComposite[dish.composite.nodeName] = dish.dishKind;
			}
		}
		Caches.Add(table, cache);
		return cache;
	}

	public static bool HasDishes(MapIngredientLookupTable table)
	{
		return CacheOf(table).dishes.Length != 0;
	}

	public static MapIngredientLookupTable.IngredientEntry[] ServableIngredients(MapIngredientLookupTable table)
	{
		return CacheOf(table).servable;
	}

	public static MapIngredientLookupTable.IngredientEntry[] PickupableIngredients(MapIngredientLookupTable table)
	{
		return CacheOf(table).pickupable;
	}

	public static bool TryGetServableRecipePieceIndex(MapIngredientLookupTable table, IngredientNodeAsset node, out int pieceIndex)
	{
		if (node != null && CacheOf(table).servableByNode.TryGetValue(node, out var entry))
		{
			pieceIndex = entry.recipePieceIndex;
			return true;
		}
		pieceIndex = -1;
		return false;
	}

	public static bool TryGetPickupableRecipePieceIndex(MapIngredientLookupTable table, IngredientNodeAsset node, out int pieceIndex)
	{
		if (node != null && CacheOf(table).pickupableByNode.TryGetValue(node, out var entry))
		{
			pieceIndex = entry.recipePieceIndex;
			return true;
		}
		pieceIndex = -1;
		return false;
	}

	public static IngredientNodeAsset GetServableNodeByRecipePiece(MapIngredientLookupTable table, int pieceIndex)
	{
		return CacheOf(table).servableByPiece.TryGetValue(pieceIndex, out var entry) ? entry.node : null;
	}

	public static int GetRecipePiecePrice(MapIngredientLookupTable table, int pieceIndex)
	{
		IngredientNodeAsset node = GetServableNodeByRecipePiece(table, pieceIndex);
		return node != null ? node.price : 0;
	}

	public static bool TryGetDishKind(MapIngredientLookupTable table, CompositeNodeAsset composite, out int dishKind)
	{
		dishKind = 0;
		if (composite == null || string.IsNullOrEmpty(composite.nodeName))
		{
			return false;
		}
		return CacheOf(table).dishByComposite.TryGetValue(composite.nodeName, out dishKind);
	}
}
}
