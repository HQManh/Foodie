using System;
using System.Collections.Generic;
using CookingGraph;

namespace CakeOrder.InGame;

public sealed class CustomerScheduleBuilder : IOrderPriceProvider
{
	private readonly MapIngredientLookupTable _ingredientLookup;

	private const int PlaceholderMaxCustomers = 10;

	private const float PlaceholderWaitTime = 0f;

	private const int DefaultShuffleDistance = 5;

	private const float DefaultIngredientMultiplier = 1f;

	public CustomerScheduleBuilder(MapIngredientLookupTable ingredientLookup)
	{
	}

	public CustomerSpawnData[] BuildAll(CakeLevelInitData initData, CustomerOrderData orderData)
	{
		return null;
	}

	public IngredientQueueInLevel BuildIngredientQueue(CakeLevelInitData initData, IngredientQueueData ingredientQueueData)
	{
		return null;
	}

	private SingleIngredientQueueInLevel[] BuildQueueColumns(List<IngredientQueueColumnData> columns)
	{
		return null;
	}

	private bool TryBuildQueueItem(QueueItemData item, out IngredientData data)
	{
		data = default(IngredientData);
		return false;
	}

	private void BuildSlotStatuses(List<EffectData> effects, out int[] statuses, out int[] statusParams)
	{
		statuses = null;
		statusParams = null;
	}

	private static IngredientSlotGroup[] BuildSlotGroups(List<QueueGroupData> groups, QueueGroupKind kind)
	{
		return null;
	}

	public static CustomerSpawnData[] BuildPlaceholders(CakeLevelInitData initData)
	{
		return null;
	}

	public static CustomerSpawnData[] BuildPlaceholders(int count)
	{
		return null;
	}

	private CustomerSpawnData Build(CustomerData customer, CakeLevelInitData initData)
	{
		return null;
	}

	private List<int> CollectRecipePieces(DishOrderData dish)
	{
		return null;
	}

	private void CollectRecipePieces(OrderMemberData member, List<int> pieces)
	{
	}

	private int GetPriceOfPieces(IReadOnlyList<int> recipePieceIndexes)
	{
		return 0;
	}

	public int GetOrderPrice(string encodedRecipe)
	{
		return 0;
	}

	private List<CustomerSingleOrderSpawnData> GenerateOrders(CustomerData customer)
	{
		return null;
	}

	private static bool HasEffect(DishOrderData dish, DishEffectType type)
	{
		return false;
	}

	private int DishOf(DishOrderData dish)
	{
		return 0;
	}

	public static DishOrderData ComposeDishFromPieces(CookingGraphAsset graph, MapIngredientLookupTable lookup, IReadOnlyList<int> recipePieceIndexes, Action<string> onWarning = null)
	{
		return null;
	}
}
