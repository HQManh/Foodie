using System.Collections.Generic;
using CakeOrder;
using CakeOrder.InGame;
using CookingGraph;

namespace AnhPD.FoodOrder.Autoplay
{
	public sealed class CookingBotBridge : ICookingBotStateReader, ICookingBotCommandSink
	{
		private sealed class PendingCommitment
		{
			public IngredientNodeAsset Ingredient;

			public string SourceItemId;

			public float ExpiresAt;
		}

		private const float CommitmentLifetimeSeconds = 0.9f;

		private readonly MessyController _game;

		private readonly LevelBaseCakeOrderAbstract _level;

		private readonly GraphNodeIdMap _ids;

		private readonly CustomerOrderData _orders;

		private readonly CakeLevelInitData _init;

		private readonly List<PendingCommitment> _pending;

		private readonly List<CookingStation> _stations;

		private readonly HashSet<int> _seenDishes;

		private readonly HashSet<string> _seenRandomRecipes;

		private readonly Dictionary<string, DishOrderData> _randomDishCache;

		private long _revision;

		private int _fingerprint;

		private readonly HashSet<int> _activeThisSnapshot;

		private readonly HashSet<int> _unservedLastSnapshot;

		private readonly HashSet<int> _timedOutCustomers;

		public long Revision => 0L;

		public int UnmappedIdCount => 0;

		public CookingBotBridge(MessyController game, LevelBaseCakeOrderAbstract level, GraphNodeIdMap ids, CustomerOrderData orders, CakeLevelInitData init)
		{
		}

		public BotGameState ReadState()
		{
			return null;
		}

		private int RemainingCustomerCount()
		{
			return 0;
		}

		private bool IsPlayable()
		{
			return false;
		}

		private void AddQueues(BotGameState state)
		{
		}

		private BotQueueItemStatus StatusOf(IngredientConveyorItem item)
		{
			return BotQueueItemStatus.Ready;
		}

		private void AddPickupables(BotGameState state)
		{
		}

		private void AddPickupIngredients(BotPickupOption option, IngredientConveyorItem item)
		{
		}

		private IngredientNodeAsset FirstPickupableNode(IngredientConveyorItem item)
		{
			return null;
		}

		private void AddGrid(BotGameState state)
		{
		}

		private BotGridCellState BuildCell(IngCell cell)
		{
			return null;
		}

		private void AddSaveMeBag(BotGameState state)
		{
		}

		private void AddCommitted(BotGameState state)
		{
		}

		private void AddActiveWorkCounts(BotGameState state)
		{
		}

		private void AddCustomerOrders(BotGameState state)
		{
		}

		private void TrackTimedOutCustomers(BotGameState state)
		{
		}

		private void AddPreviewOrders(BotGameState state, int highestActive)
		{
		}

		private BotDishOrderState ComposeRandomDish(OrderSpec spec)
		{
			return null;
		}

		private BotDishOrderState BuildDish(DishOrderData dish)
		{
			return null;
		}

		private void CollectSlots(OrderMemberData member, BotDishOrderState into, bool isBaseBranch)
		{
		}

		public bool TryPick(BotPickCommand command)
		{
			return false;
		}

		private void CommitPending(IngredientConveyorItem item)
		{
		}

		private void CommitOne(IngredientConveyorItem item, float expiry)
		{
		}

		private void ExpirePendingCommitments()
		{
		}

		public void Reset()
		{
		}

		private static string ItemIdOf(IngredientConveyorItem item)
		{
			return null;
		}

		private static int Fingerprint(BotGameState state)
		{
			return 0;
		}
	}
}
