using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpawnService
	{
		private readonly List<DragItem> _dragItems;

		private readonly Dictionary<string, ItemGroup> _itemDict;

		private readonly AreaService _area;

		private readonly RecipeConfigSO _recipe;

		private LevelInfo _info;

		private Action<DragItem, CookingStation> _onItemLanded;

		public Action<DragItem> OnDespawn;

		public SpawnService(List<DragItem> dragItems, Dictionary<string, ItemGroup> itemDict, AreaService area, RecipeConfigSO recipe)
		{
			_dragItems = dragItems;
			_itemDict = itemDict;
			_area = area;
			_recipe = recipe;
		}

		public void SetInteractContext(LevelInfo info, Action<DragItem, CookingStation> onItemLanded)
		{
			_info = info;
			_onItemLanded = onItemLanded;
		}

		public DragItem Spawn(string id, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			if (_recipe == null)
			{
				return null;
			}
			DragItem prefab = _recipe.GetIngredientPrefab(id);
			DragItem item = SpawnSingle(prefab, position, isJump, registerCell, origin);
			string baseId = RecipeConfigSO.BaseIdOf(id);
			if (baseId != id && item != null)
			{
				// TODO(unrecovered): virtual call on item (vtable +0x258) with id and item field at +0x260; slot and field not identified.
			}
			if (item == null)
			{
				return null;
			}
			PieceLedger.Born(item);
			// TODO(unrecovered): PieceLedger.Step log line; the source value (item field at +0xA0, then its +0x10 member) and format string are not identified.
			_dragItems.Add(item);
			if (!_itemDict.ContainsKey(baseId))
			{
				_itemDict.Add(baseId, new ItemGroup(baseId));
			}
			_itemDict[baseId].AddItem(item);
			return item;
		}

		public DragItem SpawnSingle(DragItem prefab, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			// TODO(unrecovered): instantiation helper (FUN_04c37c04) and its parent transform are not recovered; SetActive, init virtual call (+0x1a8) and origin field (+0xec) also not mapped.
			return null;
		}

		public void SpawnIngredient(string id, int count, Vector3 position, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			for (int i = 0; i < count; i++)
			{
				DragItem item = TrySpawnToInteractStation(id, position, origin, onSpawned);
				if (item == null)
				{
					SpawnToShelfOrGrid(id, position, origin, onSpawned, false);
				}
			}
		}

		public void SpawnToPlannedShelf(string id, Vector3 position, DragOrigin origin, Action<DragItem> onSpawned = null)
		{
			SpawnToShelfOrGrid(id, position, origin, onSpawned, true);
		}

		private void SpawnToShelfOrGrid(string id, Vector3 position, DragOrigin origin, Action<DragItem> onSpawned = null, bool planned = false)
		{
			ServeShelfController shelf = MessyController.Ins != null ? MessyController.Ins.ServeShelf : null;
			DragItem item = Spawn(id, position, true, shelf == null, origin);
			if (onSpawned != null)
			{
				onSpawned(item);
			}
			// TODO(unrecovered): FUN_04b78b64(item, <static>) call not identified (same call appears in SpawnAndGetDragItem and SpawnToStation).
			if (shelf != null && !shelf.TryTakeDirect(item, planned))
			{
				DragInteractionSystem.HandleDropFallback(_area, item);
			}
		}

		public DragItem SpawnAndGetDragItem(string id, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			if (isJump)
			{
				DragItem station = TrySpawnToInteractStation(id, position, origin);
				if (station != null)
				{
					return station;
				}
			}
			DragItem item = Spawn(id, position, isJump, registerCell, origin);
			// TODO(unrecovered): FUN_04b78b64(item, <static>) call not identified.
			return item;
		}

		public bool TrySpawnInteractStation(string id, Vector3 position)
		{
			return TrySpawnToInteractStation(id, position) != null;
		}

		private DragItem TrySpawnToInteractStation(string id, Vector3 position, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			if ((int)origin == 2)
			{
				// Pseudocode checks origin == 2 here; the enum name for that value is not recovered.
				if (_recipe == null)
				{
					return null;
				}
				DragItem prefab = _recipe.GetIngredientPrefab(id);
				if (prefab == null)
				{
					return null;
				}
				// TODO(unrecovered): bool field at DragItem +0x90 checked here (must be true to continue); field name not identified.
			}
			if (_info == null)
			{
				return null;
			}
			if (!_info.TryGetInteractableStation(id, position, out CookingStation station))
			{
				return null;
			}
			return SpawnToStation(id, position, station, origin, onSpawned);
		}

		public DragItem SpawnToStation(string id, Vector3 position, CookingStation station, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			DragItem item = Spawn(id, position, false, false, origin);
			if (onSpawned != null)
			{
				onSpawned(item);
			}
			// TODO(unrecovered): FUN_04b78b64(item, <static>) call not identified.
			ThrowToStation(item, station);
			return item;
		}

		public void ThrowFromGridToStation(DragItem item, CookingStation station)
		{
			if (item == null)
			{
				return;
			}
			item.UnregisterCell();
			if (_area != null)
			{
				_area.RefreshCellDishes();
				ThrowToStation(item, station);
			}
		}

		public bool CanCombineWithExisting(string id)
		{
			return FindMergeableTargetForId(id) != null;
		}

		private DragItem FindMergeableTargetForId(string id)
		{
			// TODO(unrecovered): loop over _dragItems skipping items with Cell == null is recovered, but the class-type test (byte at item +0x130 vs DAT_09184728 type) and RecipeConfigSO.TryGetCombineResult / LevelInfo.CanAddTo branch need the item's id (protected field, no public accessor) and the type check; left returning null.
			return null;
		}

		private void ThrowToStation(DragItem item, CookingStation station)
		{
			if (_info != null && station != null)
			{
				// TODO(unrecovered): LevelInfo.MarkInbound(station, id) needs the item id (DragItem +0x78 not mapped); the flight tween chain (virtual call +0x1a8, CreateIngredientFlight, DOTween callbacks and append) is a closure not fully recovered.
			}
		}

		public void Despawn(DragItem item)
		{
			PieceLedger.Despawned(item);
			if (OnDespawn != null)
			{
				OnDespawn(item);
			}
			if (_dragItems == null)
			{
				return;
			}
			_dragItems.Remove(item);
			// TODO(unrecovered): _itemDict lookup keyed by the item's id (DragItem protected id at +0x78, no public accessor) and ItemGroup.RemoveItem(item) on the found group; not applied.
			item.Despawn();
		}

		public void DespawnAll(IEnumerable<DragItem> items)
		{
			foreach (DragItem item in items)
			{
				Despawn(item);
			}
		}
	}
}
