using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CookingGraph;
using UnityEngine;

namespace CakeOrder;

[CreateAssetMenu(fileName = "IngredientLookup-", menuName = "ScriptableObjects/CakeOrder/Map Ingredient Lookup Table", order = 1)]
public class MapIngredientLookupTable : ScriptableObject
{
	[Serializable]
	public class IngredientEntry
	{
		public IngredientNodeAsset node;

		public CakeIngredientSO ingredient;

		[Tooltip("Index into MapCookingProcessConfig.RecipePieceConfigs == the map piece enum value. -1 when this node maps to no piece.")]
		public int recipePieceIndex;
	}

	[Serializable]
	public class ToolEntry
	{
		public ToolNodeAsset node;

		public CakeToolSO tool;
	}

	[Serializable]
	public class DishEntry
	{
		public CompositeNodeAsset composite;

		[Tooltip("Value of the map dish enum (RecipeConfigSO.dishEnumType). 0 = None.")]
		public int dishKind;
	}

	public const int NoRecipePiece = -1;

	[Tooltip("Nodes a customer can order - the processed/servable form. Drives recipe encoding and price.")]
	[SerializeField]
	private IngredientEntry[] _servableIngredients;

	[Tooltip("Nodes the belt hands the player - the pickupable form. Drives the ingredient queue.")]
	[SerializeField]
	private IngredientEntry[] _pickupableIngredients;

	[SerializeField]
	private ToolEntry[] _tools;

	[Tooltip("Orderable composite -> dish kind. Only for maps where two dishes can share every ingredient (sushi): list every orderable, incl. each '-with-topping' variant. Empty = every order gets dish 0.")]
	[SerializeField]
	private DishEntry[] _dishes;

	private Dictionary<IngredientNodeAsset, IngredientEntry> _servableByNode;

	private Dictionary<IngredientNodeAsset, IngredientEntry> _pickupableByNode;

	private Dictionary<int, IngredientEntry> _servableByRecipePiece;

	private Dictionary<ToolNodeAsset, ToolEntry> _toolByNode;

	private Dictionary<string, int> _dishByComposite;

	public IReadOnlyList<IngredientEntry> ServableIngredients => null;

	public IReadOnlyList<IngredientEntry> PickupableIngredients => null;

	public IReadOnlyList<ToolEntry> Tools => null;

	public bool HasDishes => false;

	private Dictionary<IngredientNodeAsset, IngredientEntry> ServableByNode => null;

	private Dictionary<IngredientNodeAsset, IngredientEntry> PickupableByNode => null;

	private Dictionary<ToolNodeAsset, ToolEntry> ToolByNode => null;

	private Dictionary<int, IngredientEntry> ServableByRecipePiece => null;

	private Dictionary<string, int> DishByComposite => null;

	private void OnEnable()
	{
	}

	private void OnValidate()
	{
	}

	private void InvalidateCache()
	{
	}

	private static Dictionary<IngredientNodeAsset, IngredientEntry> BuildByNode(IngredientEntry[] entries)
	{
		return null;
	}

	public bool TryGetServableEntry(IngredientNodeAsset node, out IngredientEntry entry)
	{
		entry = null;
		return false;
	}

	public CakeIngredientSO GetServableIngredient(IngredientNodeAsset node)
	{
		return null;
	}

	public int GetServableRecipePieceIndex(IngredientNodeAsset node)
	{
		return 0;
	}

	public bool TryGetServableRecipePieceIndex(IngredientNodeAsset node, out int recipePieceIndex)
	{
		recipePieceIndex = default(int);
		return false;
	}

	public IngredientNodeAsset GetServableNodeByRecipePiece(int recipePieceIndex)
	{
		return null;
	}

	public int GetRecipePiecePrice(int recipePieceIndex)
	{
		return 0;
	}

	public bool TryGetPickupableEntry(IngredientNodeAsset node, out IngredientEntry entry)
	{
		entry = null;
		return false;
	}

	public CakeIngredientSO GetPickupableIngredient(IngredientNodeAsset node)
	{
		return null;
	}

	public int GetPickupableRecipePieceIndex(IngredientNodeAsset node)
	{
		return 0;
	}

	public bool TryGetPickupableRecipePieceIndex(IngredientNodeAsset node, out int recipePieceIndex)
	{
		recipePieceIndex = default(int);
		return false;
	}

	public CakeToolSO GetTool(ToolNodeAsset node)
	{
		return null;
	}

	public bool TryGetDishKind(CompositeNodeAsset composite, out int dishKind)
	{
		dishKind = default(int);
		return false;
	}
}
