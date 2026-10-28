using System;
using System.Collections.Generic;
using CakeOrder;
using CakeOrder.InGame;
using CookingGraph;
using UnityEngine;

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

		public long Revision => _revision;

		public int UnmappedIdCount => _ids.Unmapped.Count;

		public CookingBotBridge(MessyController game, LevelBaseCakeOrderAbstract level, GraphNodeIdMap ids, CustomerOrderData orders, CakeLevelInitData init)
		{
			_pending = new List<PendingCommitment>();
			_stations = new List<CookingStation>();
			_seenDishes = new HashSet<int>();
			_seenRandomRecipes = new HashSet<string>();
			_randomDishCache = new Dictionary<string, DishOrderData>();
			_revision = 1L;
			_activeThisSnapshot = new HashSet<int>();
			_unservedLastSnapshot = new HashSet<int>();
			_timedOutCustomers = new HashSet<int>();
			_game = game;
			_level = level;
			_ids = ids;
			_orders = orders;
			_init = init;
		}

		public BotGameState ReadState()
		{
			BotGameState state = new BotGameState();
			state.isPlaying = IsPlayable();
			state.gameplayTimeSeconds = Time.time;
			state.remainingCustomerCount = RemainingCustomerCount();
			ExpirePendingCommitments();
			AddQueues(state);
			AddPickupables(state);
			AddGrid(state);
			AddSaveMeBag(state);
			AddCommitted(state);
			AddCustomerOrders(state);
			int fingerprint = Fingerprint(state);
			if (fingerprint != _fingerprint)
			{
				_fingerprint = fingerprint;
				_revision++;
			}
			state.revision = _revision;
			return state;
		}

		private int RemainingCustomerCount()
		{
			if (_level != null)
			{
				CakeLevelRuntimeDataCustomer customerData = _level.RuntimeData.customerData;
				if (customerData != null && customerData.Capacity > 0)
				{
					return Math.Max(0, customerData.Capacity - customerData.Amount);
				}
			}
			return -1;
		}

		private bool IsPlayable()
		{
			if (_game == null || _level == null)
			{
				return false;
			}
			if (!_level.IsAllowInteract)
			{
				return false;
			}
			IngredientSpawnerController spawner = _game.Spawner;
			if (spawner == null)
			{
				return false;
			}
			return spawner.IsRunning;
		}

		private void AddQueues(BotGameState state)
		{
			IngredientSpawnerController spawner = _game.Spawner;
			if (spawner == null)
			{
				return;
			}
			ConveyorGrid grid = spawner.Grid;
			if (grid == null)
			{
				return;
			}
			int columnCount = grid.ColumnCount;
			for (int i = 0; i < columnCount; i++)
			{
				state.visibleQueues.Add(new BotQueueLaneState());
			}
			List<List<ConveyorSlot>> lanes = new List<List<ConveyorSlot>>(Math.Max(columnCount, 0));
			for (int j = 0; j < columnCount; j++)
			{
				lanes.Add(new List<ConveyorSlot>());
			}
			foreach (ConveyorSlot slot in grid.Slots)
			{
				if (slot.Item != null && slot.Col >= 0 && slot.Col < columnCount)
				{
					lanes[slot.Col].Add(slot);
				}
			}
			for (int k = 0; k < columnCount; k++)
			{
				lanes[k].Sort((ConveyorSlot a, ConveyorSlot b) => a.Row.CompareTo(b.Row));
				foreach (ConveyorSlot slot2 in lanes[k])
				{
					BotQueueItemState queueItem = new BotQueueItemState();
					queueItem.itemId = ItemIdOf(slot2.Item);
					queueItem.kind = ((slot2.Item.Kind == IngredientSlotKind.Cleaner) ? QueueItemKind.Sweeper : QueueItemKind.Ingredient);
					queueItem.ingredient = FirstPickupableNode(slot2.Item);
					queueItem.status = StatusOf(slot2.Item);
					state.visibleQueues[k].items.Add(queueItem);
				}
			}
		}

		private BotQueueItemStatus StatusOf(IngredientConveyorItem item)
		{
			if (!item.IsBusy && !item.ReleasePopPending)
			{
				if (item.IsFrozen)
				{
					return BotQueueItemStatus.Frozen;
				}
				if (item.IsAtFrontRow && !item.IsPickable)
				{
					return BotQueueItemStatus.Locked;
				}
				return BotQueueItemStatus.Ready;
			}
			return BotQueueItemStatus.Departing;
		}

		private void AddPickupables(BotGameState state)
		{
			IngredientSpawnerController spawner = _game.Spawner;
			ConveyorPickup pickup = null;
			if (spawner != null)
			{
				pickup = spawner.Pickup;
			}
			if (spawner == null || pickup == null || spawner.Grid == null || !state.isPlaying)
			{
				return;
			}
			foreach (ConveyorSlot slot in spawner.Grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (item == null || !pickup.CanPick(item) || !pickup.HasRoomFor(item))
				{
					continue;
				}
				BotPickupOption option = new BotPickupOption();
				option.queueIndex = slot.Col;
				option.itemId = ItemIdOf(item);
				option.footprint = 0;
				option.picksSweeper = item.Kind == IngredientSlotKind.Cleaner;
				IReadOnlyList<ConveyorSlot> chain = item.ChainMembers;
				if (chain != null && chain.Count > 0)
				{
					foreach (ConveyorSlot member in chain)
					{
						if (member.Item != null)
						{
							option.consumedItemIds.Add(ItemIdOf(member.Item));
							AddPickupIngredients(option, member.Item);
						}
					}
				}
				else
				{
					option.consumedItemIds.Add(option.itemId);
					AddPickupIngredients(option, item);
				}
				state.pickupables.Add(option);
			}
		}

		private void AddPickupIngredients(BotPickupOption option, IngredientConveyorItem item)
		{
			foreach (IngredientState ingredient in item.Items)
			{
				IngredientNodeAsset node = _ids.PickupableNodeOf(ingredient.id);
				if (node != null)
				{
					option.ingredients.Add(node);
				}
				else
				{
					_ids.ReportUnmapped(ingredient.id);
				}
			}
		}

		private IngredientNodeAsset FirstPickupableNode(IngredientConveyorItem item)
		{
			foreach (IngredientState ingredient in item.Items)
			{
				IngredientNodeAsset node = _ids.PickupableNodeOf(ingredient.id);
				if (node != null)
				{
					return node;
				}
			}
			return null;
		}

		private void AddGrid(BotGameState state)
		{
			GridIngController grid = _game.IngGrid;
			if (grid == null)
			{
				return;
			}
			bool hasSaveMeBag = grid.HasSaveMeBag;
			Vector2Int saveMeCoord = grid.SaveMeCoord;
			foreach (IngCell cell in grid.CellsInScanOrder())
			{
				if (cell == null)
				{
					continue;
				}
				if (!hasSaveMeBag || cell.Coord != saveMeCoord)
				{
					state.grid.cells.Add(BuildCell(cell));
					continue;
				}
				BotGridCellState bagCell = new BotGridCellState();
				bagCell.kind = BotGridItemKind.Backpack;
				bagCell.canHoldItem = false;
				state.grid.cells.Add(bagCell);
			}
		}

		private BotGridCellState BuildCell(IngCell cell)
		{
			if (cell.IsEmpty)
			{
				BotGridCellState emptyCell = new BotGridCellState();
				emptyCell.kind = BotGridItemKind.Empty;
				emptyCell.canHoldItem = true;
				return emptyCell;
			}
			bool hasDirtyPlate = cell.HasDirtyPlate;
			BotGridCellState result = new BotGridCellState();
			if (hasDirtyPlate)
			{
				result.kind = BotGridItemKind.Dirty;
				result.canHoldItem = false;
				result.dirtyCount = cell.OccupiedCount;
				return result;
			}
			result.canHoldItem = false;
			DragItem first = null;
			foreach (DragItem item in cell.Items)
			{
				if (item == null || item.isDirtyPlate)
				{
					continue;
				}
				if (first == null)
				{
					first = item;
				}
				string itemId = item.GetId();
				IngredientNodeAsset node = _ids.NodeOf(itemId);
				if (node != null)
				{
					result.ingredients.Add(node);
				}
				else
				{
					_ids.ReportUnmapped(itemId);
				}
			}
			if (first == null)
			{
				return result;
			}
			string firstId = first.GetId();
			result.ingredient = _ids.NodeOf(firstId);
			result.usesLeft = 1;
			result.kind = (_ids.IsServableId(firstId) ? BotGridItemKind.Cooked : BotGridItemKind.Raw);
			if (result.ingredients.Count >= 2)
			{
				result.kind = BotGridItemKind.Backpack;
			}
			return result;
		}

		private void AddSaveMeBag(BotGameState state)
		{
			SpawnBagSaveMe bag = SpawnBagSaveMe.Active;
			if (bag == null || bag.IsEmpty)
			{
				return;
			}
			BotSaveMeBagState bagState = new BotSaveMeBagState();
			bagState.bagId = bag.GetInstanceID().ToString();
			for (int i = 0; i < bag.EntryCount; i++)
			{
				string entryId = bag.EntryIdAt(i);
				if (string.IsNullOrEmpty(entryId))
				{
					continue;
				}
				IngredientNodeAsset node = _ids.NodeOf(entryId);
				if (node != null)
				{
					BotSaveMeBagItemState bagItem = new BotSaveMeBagItemState();
					bagItem.itemId = string.Format("{0}:{1}", bagState.bagId, i); /* literal recovered by guess */
					bagItem.ingredient = node;
					bagState.items.Add(bagItem);
				}
				else
				{
					_ids.ReportUnmapped(entryId);
				}
			}
			state.saveMeBag = bagState;
		}

		private void AddCommitted(BotGameState state)
		{
			_stations.Clear();
			List<CookingStation> stations = _game.GetCookingStations();
			if (stations != null)
			{
				_stations.AddRange(stations);
			}
			foreach (CookingStation station in _stations)
			{
				if (station == null)
				{
					continue;
				}
				foreach (StationInteractGroup group in station.Groups)
				{
					StationSlot[] slots = group?.slots;
					if (slots == null)
					{
						continue;
					}
					for (int i = 0; i < slots.Length; i++)
					{
						StationSlot slot = slots[i];
						if (slot != null && slot.isOccupied)
						{
							IngredientNodeAsset node = _ids.PickupableNodeOf(slot.ingId);
							if (node == null)
							{
								node = _ids.NodeOf(slot.ingId);
							}
							if (node != null)
							{
								BotCommittedIngredientState committed = new BotCommittedIngredientState();
								committed.ingredient = node;
								committed.amount = 1f;
								state.committedIngredients.Add(committed);
							}
							else
							{
								_ids.ReportUnmapped(slot.ingId);
							}
						}
					}
				}
			}
			foreach (PendingCommitment pending in _pending)
			{
				BotCommittedIngredientState committed2 = new BotCommittedIngredientState();
				committed2.ingredient = pending.Ingredient;
				committed2.sourceItemId = pending.SourceItemId;
				committed2.amount = 1f;
				state.committedIngredients.Add(committed2);
			}
			AddActiveWorkCounts(state);
		}

		private void AddActiveWorkCounts(BotGameState state)
		{
			int activeProcesses = 0;
			foreach (CookingStation station in _stations)
			{
				if (station == null)
				{
					continue;
				}
				foreach (StationInteractGroup group in station.Groups)
				{
					if (group != null && group.IsInteracting)
					{
						activeProcesses += (group.IsReadyToProcess() ? 1 : 0);
					}
				}
			}
			state.activeToolProcessCount = activeProcesses;
			ServeShelfController serveShelf = _game.ServeShelf;
			state.activeMergeAnimationCount = ((serveShelf != null) ? serveShelf.PendingMergeCount : 0);
		}

		private void AddCustomerOrders(BotGameState state)
		{
			if (_orders == null || _orders.customers == null || _init == null || _init.customerSpawnData == null)
			{
				return;
			}
			FCustomerLineHandle lineHandle = _game.LineHandle;
			if (lineHandle == null)
			{
				return;
			}
			FCustomerLine[] lines = lineHandle.GetComponentsInChildren<FCustomerLine>(true);
			int highestActive = -1;
			if (lines != null)
			{
				for (int i = 0; i < lines.Length; i++)
				{
					FCustomerLine line = lines[i];
					if (line == null || !line.isShowingCustomer || line.HasVacatedCell)
					{
						continue;
					}
					CustomerSpawnData spawnData = line.SpawnData;
					if (spawnData == null)
					{
						continue;
					}
					int customerIndex = spawnData.customerIndex;
					if (customerIndex < 0 || customerIndex >= _orders.customers.Count)
					{
						continue;
					}
					highestActive = Math.Max(customerIndex, highestActive);
					CustomerData customerData = _orders.customers[customerIndex];
					BotCustomerOrderState customerOrder = new BotCustomerOrderState();
					customerOrder.customerIndex = customerIndex;
					customerOrder.isStaff = spawnData.IsCleanDishStaff;
					customerOrder.isBoss = spawnData.IsBoss;
					List<int> openIndices = line.GetOpenOrderIndices();
					if (openIndices != null && customerData.dishes != null)
					{
						_seenDishes.Clear();
						_seenRandomRecipes.Clear();
						foreach (int openIndex in openIndices)
						{
							OrderSpec spec = line.GetOrderSpec(openIndex);
							int dishIndex = spec.DishIndex;
							if (dishIndex < 0)
							{
								BotDishOrderState randomDish = ComposeRandomDish(spec);
								if (randomDish != null)
								{
									customerOrder.dishes.Add(randomDish);
								}
							}
							else if (dishIndex < customerData.dishes.Count && _seenDishes.Add(dishIndex))
							{
								BotDishOrderState dish = BuildDish(customerData.dishes[dishIndex]);
								if (dish != null)
								{
									customerOrder.dishes.Add(dish);
								}
							}
						}
					}
					if (customerOrder.dishes.Count > 0 || customerOrder.isStaff)
					{
						state.customerOrders.Add(customerOrder);
					}
				}
			}
			state.customerOrders.Sort((BotCustomerOrderState a, BotCustomerOrderState b) => a.customerIndex.CompareTo(b.customerIndex));
			TrackTimedOutCustomers(state);
			state.timedOutCustomerIndices.AddRange(_timedOutCustomers);
			AddPreviewOrders(state, highestActive);
		}

		private void TrackTimedOutCustomers(BotGameState state)
		{
			_activeThisSnapshot.Clear();
			foreach (BotCustomerOrderState customerOrder in state.customerOrders)
			{
				_activeThisSnapshot.Add(customerOrder.customerIndex);
			}
			foreach (int customerIndex in _unservedLastSnapshot)
			{
				if (!_activeThisSnapshot.Contains(customerIndex))
				{
					_timedOutCustomers.Add(customerIndex);
				}
			}
			_unservedLastSnapshot.Clear();
			foreach (BotCustomerOrderState customerOrder2 in state.customerOrders)
			{
				if (!customerOrder2.isStaff && customerOrder2.dishes.Count > 0)
				{
					_unservedLastSnapshot.Add(customerOrder2.customerIndex);
				}
			}
		}

		private void AddPreviewOrders(BotGameState state, int highestActive)
		{
			int next = highestActive;
			while (true)
			{
				next++;
				if (next >= _orders.customers.Count || state.previewOrders.Count > 2)
				{
					return;
				}
				CustomerSpawnData[] spawns = _init.customerSpawnData;
				if (next < spawns.Length && spawns[next] != null && spawns[next].IsBoss)
				{
					state.previewOrdersBlockedByBoss = state.previewOrders.Count == 0;
					return;
				}
				CustomerData customerData = _orders.customers[next];
				BotPreviewOrderState preview = new BotPreviewOrderState();
				preview.customerIndex = next;
				preview.isStaff = next < spawns.Length && spawns[next] != null && spawns[next].IsCleanDishStaff;
				if (customerData.dishes != null)
				{
					foreach (DishOrderData dish in customerData.dishes)
					{
						CompositeNodeAsset asset = dish?.root?.asset as CompositeNodeAsset;
						if (asset != null)
						{
							preview.dishes.Add(asset);
						}
					}
				}
				state.previewOrders.Add(preview);
			}
		}

		private BotDishOrderState ComposeRandomDish(OrderSpec spec)
		{
			string recipe = spec.Recipe;
			if (string.IsNullOrEmpty(recipe))
			{
				return null;
			}
			if (!_seenRandomRecipes.Add(recipe))
			{
				return null;
			}
			DishOrderData dish;
			if (!_randomDishCache.TryGetValue(recipe, out dish))
			{
				dish = null;
				OrderRecipe decoded;
				if (OrderRecipeCodec.TryDecode(recipe, out decoded) && decoded.IsValid)
				{
					Action<string> warn = delegate(string message)
					{
						Debug.LogWarning("[CookingBot] random recipe " + spec.Recipe + ": " + message); /* literal recovered by guess */
					};
					dish = CustomerScheduleBuilder.ComposeDishFromPieces(_level.CookingProcessGraphSO, _level.IngredientLookupTable, decoded.Pieces, warn);
					if (dish == null)
					{
						Debug.LogWarning("[CookingBot] random recipe " + recipe + " could not be composed"); /* literal recovered by guess */
					}
				}
				_randomDishCache[recipe] = dish;
			}
			if (dish != null)
			{
				return BuildDish(dish);
			}
			return null;
		}

		private BotDishOrderState BuildDish(DishOrderData dish)
		{
			if (dish == null || dish.root == null)
			{
				return null;
			}
			BotDishOrderState result = new BotDishOrderState();
			result.orderable = dish.root.asset as CompositeNodeAsset;
			CollectSlots(dish.root, result, false);
			if (result.slots.Count > 0)
			{
				return result;
			}
			return null;
		}

		private void CollectSlots(OrderMemberData member, BotDishOrderState into, bool isBaseBranch)
		{
			if (member == null)
			{
				return;
			}
			IngredientNodeAsset ingredientAsset = member.asset as IngredientNodeAsset;
			if (member.kind == OrderMemberKind.Ingredient && ingredientAsset != null)
			{
				BotOrderSlotState slot = new BotOrderSlotState();
				slot.ingredient = ingredientAsset;
				slot.filled = false;
				slot.isBase = isBaseBranch || into.slots.Count == 0;
				slot.gateOpen = true;
				into.slots.Add(slot);
				return;
			}
			for (int i = 0; i < member.members.Count; i++)
			{
				bool childIsBase = i == 0 && member.members.Count > 1;
				CollectSlots(member.members[i], into, childIsBase);
			}
		}

		public bool TryPick(BotPickCommand command)
		{
			if (command == null || !IsPlayable() || command.observedRevision != _revision)
			{
				return false;
			}
			IngredientSpawnerController spawner = _game.Spawner;
			ConveyorPickup pickup = null;
			if (spawner != null)
			{
				pickup = spawner.Pickup;
			}
			if (spawner == null || pickup == null || spawner.Grid == null)
			{
				return false;
			}
			IngredientConveyorItem found = null;
			foreach (ConveyorSlot slot in spawner.Grid.Slots)
			{
				IngredientConveyorItem item = slot.Item;
				if (item != null && slot.Col == command.queueIndex && ItemIdOf(item) == command.expectedItemId)
				{
					found = item;
					break;
				}
			}
			if (found == null)
			{
				return false;
			}
			if (!pickup.CanPick(found))
			{
				return false;
			}
			if (!pickup.HasRoomFor(found))
			{
				return false;
			}
			CommitPending(found);
			pickup.Tap(found);
			_revision++;
			return true;
		}

		private void CommitPending(IngredientConveyorItem item)
		{
			float expiry = Time.time + CommitmentLifetimeSeconds;
			IReadOnlyList<ConveyorSlot> chain = item.ChainMembers;
			if (chain != null && chain.Count > 0)
			{
				foreach (ConveyorSlot member in chain)
				{
					if (member.Item != null)
					{
						CommitOne(member.Item, expiry);
					}
				}
			}
			else
			{
				CommitOne(item, expiry);
			}
		}

		private void CommitOne(IngredientConveyorItem item, float expiry)
		{
			string sourceItemId = ItemIdOf(item);
			foreach (IngredientState ingredient in item.Items)
			{
				IngredientNodeAsset node = _ids.PickupableNodeOf(ingredient.id);
				if (node != null)
				{
					PendingCommitment commitment = new PendingCommitment();
					commitment.Ingredient = node;
					commitment.SourceItemId = sourceItemId;
					commitment.ExpiresAt = expiry;
					_pending.Add(commitment);
				}
			}
		}

		private void ExpirePendingCommitments()
		{
			for (int i = _pending.Count - 1; i >= 0; i--)
			{
				if (_pending[i].ExpiresAt <= Time.time)
				{
					_pending.RemoveAt(i);
				}
			}
		}

		public void Reset()
		{
			_pending.Clear();
			_unservedLastSnapshot.Clear();
			_timedOutCustomers.Clear();
			_randomDishCache.Clear();
			_fingerprint = 0;
			_revision++;
		}

		private static string ItemIdOf(IngredientConveyorItem item)
		{
			if (item != null)
			{
				return item.GetInstanceID().ToString();
			}
			return null;
		}

		private static int Fingerprint(BotGameState state)
		{
			unchecked
			{
				int hash = 17;
				foreach (BotQueueLaneState lane in state.visibleQueues)
				{
					foreach (BotQueueItemState queueItem in lane.items)
					{
						int idHash = ((queueItem.itemId != null) ? queueItem.itemId.GetHashCode() : 0);
						hash = (hash * 31 + idHash) * 31 + (int)queueItem.status;
					}
				}
				foreach (BotGridCellState cell in state.grid.cells)
				{
					int ingredientId = ((cell.ingredient != null) ? cell.ingredient.GetInstanceID() : 0);
					hash = cell.usesLeft + (ingredientId + ((int)cell.kind + hash * 31) * 31) * 31;
				}
				int bagCount = ((state.saveMeBag != null) ? state.saveMeBag.items.Count : 0);
				hash = bagCount + (state.committedIngredients.Count + (state.pickupables.Count + hash * 31) * 31) * 31;
				foreach (BotCustomerOrderState customerOrder in state.customerOrders)
				{
					hash = customerOrder.dishes.Count + (customerOrder.customerIndex + hash * 31) * 31;
				}
				return hash;
			}
		}
	}
}
