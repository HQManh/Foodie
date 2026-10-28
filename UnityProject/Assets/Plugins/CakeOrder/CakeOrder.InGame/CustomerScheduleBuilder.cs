using System;
using System.Collections.Generic;
using CakeOrder.DataSO;
using CookingGraph;

namespace CakeOrder.InGame
{

public sealed class CustomerScheduleBuilder : IOrderPriceProvider
{
	private readonly MapIngredientLookupTable _ingredientLookup;

	private const int PlaceholderMaxCustomers = 10;

	private const float PlaceholderWaitTime = 0f;

	private const int DefaultShuffleDistance = 5;

	private const float DefaultIngredientMultiplier = 1f;

	public CustomerScheduleBuilder(MapIngredientLookupTable ingredientLookup)
	{
		if (ingredientLookup == null)
		{
			throw new ArgumentNullException("ingredientLookup");
		}
		_ingredientLookup = ingredientLookup;
	}

	public CustomerSpawnData[] BuildAll(CakeLevelInitData initData, CustomerOrderData orderData)
	{
		if (orderData == null || orderData.customers == null || orderData.customers.Count == 0)
		{
			return BuildPlaceholders(initData);
		}
		CustomerSpawnData[] result = new CustomerSpawnData[orderData.customers.Count];
		for (int i = 0; i < result.Length; i++)
		{
			result[i] = Build(orderData.customers[i], initData);
			result[i].customerIndex = i;
		}
		return result;
	}

	public IngredientQueueInLevel BuildIngredientQueue(CakeLevelInitData initData, IngredientQueueData ingredientQueueData)
	{
		if (ingredientQueueData == null)
		{
			return null;
		}
		return new IngredientQueueInLevel
		{
			shuffleDistance = DefaultShuffleDistance,
			ingredientMultiplier = DefaultIngredientMultiplier,
			encodedQueues = BuildQueueColumns(ingredientQueueData.columns),
			combinedSlotGroups = BuildSlotGroups(ingredientQueueData.groups, QueueGroupKind.Combined),
			linkedSlotGroups = BuildSlotGroups(ingredientQueueData.groups, QueueGroupKind.Linked),
		};
	}

	private SingleIngredientQueueInLevel[] BuildQueueColumns(List<IngredientQueueColumnData> columns)
	{
		if (columns == null || columns.Count == 0)
		{
			return null;
		}
		List<SingleIngredientQueueInLevel> queues = new List<SingleIngredientQueueInLevel>(columns.Count);
		foreach (IngredientQueueColumnData column in columns)
		{
			if (column == null || column.items == null)
			{
				continue;
			}
			List<IngredientData> items = new List<IngredientData>(column.items.Count);
			foreach (QueueItemData item in column.items)
			{
				if (TryBuildQueueItem(item, out var data))
				{
					items.Add(data);
				}
			}
			if (items.Count > 0)
			{
				queues.Add(new SingleIngredientQueueInLevel { encodedQueue = items.ToArray() });
			}
		}
		return queues.Count > 0 ? queues.ToArray() : null;
	}

	private bool TryBuildQueueItem(QueueItemData item, out IngredientData data)
	{
		data = default(IngredientData);
		if (item == null)
		{
			return false;
		}
		int id;
		if ((int)item.kind == 1)
		{
			id = -1;
		}
		else if (item.ingredient != null)
		{
			if (!IngredientLookup.TryGetPickupableRecipePieceIndex(_ingredientLookup, item.ingredient, out id))
			{
				UnityEngine.Debug.LogWarning("[CustomerScheduleBuilder] queue ingredient " + item.ingredient.name + " is not a pickupable recipe piece in " + _ingredientLookup.name, _ingredientLookup);
				return false;
			}
		}
		else
		{
			UnityEngine.Debug.LogWarning("[CustomerScheduleBuilder] queue item " + item.id + " has no ingredient asset.", _ingredientLookup);
			return false;
		}
		BuildSlotStatuses(item.effects, out var statuses, out var statusParams);
		data = new IngredientData { id = id, amount = item.amount, statuses = statuses, statusParams = statusParams };
		return true;
	}

	private void BuildSlotStatuses(List<EffectData> effects, out int[] statuses, out int[] statusParams)
	{
		statuses = null;
		statusParams = null;
		if (effects == null || effects.Count == 0)
		{
			return;
		}
		List<int> statusList = new List<int>(effects.Count);
		List<int> paramList = new List<int>(effects.Count);
		foreach (EffectData effect in effects)
		{
			if (effect == null || effect.effectId == 0)
			{
				continue;
			}
			if (Enum.IsDefined(typeof(IngredientSlotStatus), effect.effectId))
			{
				statusList.Add(effect.effectId);
				paramList.Add(effect.parameters != null && effect.parameters.Count >= 1 ? effect.parameters[0] : -1);
			}
			else
			{
				UnityEngine.Debug.LogWarning("[CustomerScheduleBuilder] unknown slot effect " + effect.effectId + "; ignored.", _ingredientLookup);
			}
		}
		if (statusList.Count != 0)
		{
			statuses = statusList.ToArray();
			statusParams = paramList.ToArray();
		}
	}

	private static IngredientSlotGroup[] BuildSlotGroups(List<QueueGroupData> groups, QueueGroupKind kind)
	{
		List<IngredientSlotGroup> result = new List<IngredientSlotGroup>();
		if (groups == null)
		{
			return result.ToArray();
		}
		foreach (QueueGroupData group in groups)
		{
			if (group == null || group.kind != kind || group.cells == null)
			{
				continue;
			}
			List<UnityEngine.Vector2Int> slots = new List<UnityEngine.Vector2Int>(group.cells.Count);
			foreach (QueueCellData cell in group.cells)
			{
				if (cell != null && cell.x >= 0 && cell.y >= 0)
				{
					slots.Add(new UnityEngine.Vector2Int(cell.x, cell.y));
				}
			}
			if (slots.Count > 0)
			{
				result.Add(new IngredientSlotGroup { slots = slots.ToArray() });
			}
		}
		return result.ToArray();
	}

	public static CustomerSpawnData[] BuildPlaceholders(CakeLevelInitData initData)
	{
		int count = initData != null && initData.levelMetadata != null && initData.levelMetadata.numCustomers > 0 ? initData.levelMetadata.numCustomers : PlaceholderMaxCustomers;
		UnityEngine.Debug.LogWarning("[CustomerScheduleBuilder] no customer order data; building " + count + " placeholder customers.");
		return BuildPlaceholders(count);
	}

	public static CustomerSpawnData[] BuildPlaceholders(int count)
	{
		CustomerSpawnData[] result = new CustomerSpawnData[count];
		for (int i = 0; i < count; i++)
		{
			result[i] = new CustomerSpawnData
			{
				customerType = (CustomerType)0,
				waitTime = PlaceholderWaitTime,
				customerIndex = -1,
			};
		}
		return result;
	}

	private CustomerSpawnData Build(CustomerData customer, CakeLevelInitData initData)
	{
		if (customer == null)
		{
			return null;
		}
		// A customer whose weather effect is set takes the level's weather; otherwise none.
		WeatherEffect weather = default(WeatherEffect);
		if (initData != null && customer.weatherEffect != 0 && initData.levelMetadata != null)
		{
			weather = initData.levelMetadata.weatherEffect;
		}
		return new CustomerSpawnData
		{
			customerType = (CustomerType)customer.typeId,
			customerId = customer.customerId,
			customerIndex = -1,
			waitTime = customer.waitTime,
			weatherEffect = weather,
			orders = customer.typeId != 1 ? GenerateOrders(customer) : null,
		};
	}

	private List<int> CollectRecipePieces(DishOrderData dish)
	{
		List<int> pieces = new List<int>();
		CollectRecipePieces(dish != null ? dish.root : null, pieces);
		return pieces;
	}

	private void CollectRecipePieces(OrderMemberData member, List<int> pieces)
	{
		if (member == null)
		{
			return;
		}
		if (member.kind == 0)
		{
			if (member.asset is IngredientNodeAsset ingredient && IngredientLookup.TryGetServableRecipePieceIndex(_ingredientLookup, ingredient, out var pieceIndex))
			{
				pieces.Add(pieceIndex);
			}
			else
			{
				UnityEngine.Debug.LogWarning("[CustomerScheduleBuilder] order member " + member.id + " is not a servable recipe piece in " + _ingredientLookup.name, _ingredientLookup);
			}
		}
		if (member.members != null)
		{
			foreach (OrderMemberData child in member.members)
			{
				CollectRecipePieces(child, pieces);
			}
		}
	}

	private int GetPriceOfPieces(IReadOnlyList<int> recipePieceIndexes)
	{
		int total = 0;
		for (int i = 0; i < recipePieceIndexes.Count; i++)
		{
			total += IngredientLookup.GetRecipePiecePrice(_ingredientLookup, recipePieceIndexes[i]);
		}
		return total;
	}

	public int GetOrderPrice(string encodedRecipe)
	{
		return OrderRecipeCodec.TryDecode(encodedRecipe, out var decoded) ? GetPriceOfPieces(decoded.Pieces) : 0;
	}

	private List<CustomerSingleOrderSpawnData> GenerateOrders(CustomerData customer)
	{
		List<CustomerSingleOrderSpawnData> orders = new List<CustomerSingleOrderSpawnData>();
		if (customer == null || customer.dishes == null)
		{
			return orders;
		}
		for (int i = 0; i < customer.dishes.Count; i++)
		{
			DishOrderData dish = customer.dishes[i];
			List<int> pieces = CollectRecipePieces(dish);
			if (pieces.Count == 0)
			{
				continue;
			}
			orders.Add(new CustomerSingleOrderSpawnData
			{
				recipe = OrderRecipeCodec.Encode(DishOf(dish), pieces),
				price = GetPriceOfPieces(pieces),
				dishIndex = i,
				isMystery = HasEffect(dish, DishEffectType.Mystery),
			});
		}
		return orders;
	}

	private static bool HasEffect(DishOrderData dish, DishEffectType type)
	{
		if (dish == null || dish.effects == null)
		{
			return false;
		}
		foreach (EffectData effect in dish.effects)
		{
			if (effect != null && effect.effectId == (int)type)
			{
				return true;
			}
		}
		return false;
	}

	private int DishOf(DishOrderData dish)
	{
		if (!IngredientLookup.HasDishes(_ingredientLookup))
		{
			return 0;
		}
		OrderMemberData root = dish != null ? dish.root : null;
		if (root != null && root.asset is CompositeNodeAsset composite && IngredientLookup.TryGetDishKind(_ingredientLookup, composite, out var kind))
		{
			return kind;
		}
		UnityEngine.Debug.LogWarning("[CustomerScheduleBuilder] dish root " + (root != null ? root.id.ToString() : "null") + " has no dish kind in " + _ingredientLookup.name, _ingredientLookup);
		return 0;
	}

	public static DishOrderData ComposeDishFromPieces(CookingGraphAsset graph, MapIngredientLookupTable lookup, IReadOnlyList<int> recipePieceIndexes, Action<string> onWarning = null)
	{
		return null;
	}
}
}
