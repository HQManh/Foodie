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
		}

		public void SetInteractContext(LevelInfo info, Action<DragItem, CookingStation> onItemLanded)
		{
		}

		public DragItem Spawn(string id, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			return null;
		}

		public DragItem SpawnSingle(DragItem prefab, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			return null;
		}

		public void SpawnIngredient(string id, int count, Vector3 position, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
		}

		public void SpawnToPlannedShelf(string id, Vector3 position, DragOrigin origin, Action<DragItem> onSpawned = null)
		{
		}

		private void SpawnToShelfOrGrid(string id, Vector3 position, DragOrigin origin, Action<DragItem> onSpawned = null, bool planned = false)
		{
		}

		public DragItem SpawnAndGetDragItem(string id, Vector3 position, bool isJump = true, bool registerCell = true, DragOrigin origin = DragOrigin.None)
		{
			return null;
		}

		public bool TrySpawnInteractStation(string id, Vector3 position)
		{
			return false;
		}

		private DragItem TrySpawnToInteractStation(string id, Vector3 position, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			return null;
		}

		public DragItem SpawnToStation(string id, Vector3 position, CookingStation station, DragOrigin origin = DragOrigin.None, Action<DragItem> onSpawned = null)
		{
			return null;
		}

		public void ThrowFromGridToStation(DragItem item, CookingStation station)
		{
		}

		public bool CanCombineWithExisting(string id)
		{
			return false;
		}

		private DragItem FindMergeableTargetForId(string id)
		{
			return null;
		}

		private void ThrowToStation(DragItem item, CookingStation station)
		{
		}

		public void Despawn(DragItem item)
		{
		}

		public void DespawnAll(IEnumerable<DragItem> items)
		{
		}
	}
}
