using System;
using System.Collections.Generic;
using CakeOrder;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellStatus
	{
		private class LockEntry
		{
			public int index;

			public int remainingServes;

			public string dishId;

			public Sprite icon;

			public IngCellDisplay display;

			public IngCellOverlayStatus Status => default;
		}

		private class ColorLockEntry
		{
			public int index;

			public int colorIndex;

			public int keysUnassigned;

			public int keysShown;

			public IngCellDisplay display;

			public IngCellOverlayStatus Status => default;
		}

		private readonly IngGridLayout _layout;

		private readonly IngCellDisplayPool _pool;

		private readonly Action _onUnlocked;

		private readonly List<LockEntry> _locks;

		private readonly List<ColorLockEntry> _colorLocks;

		private const float KeyFlyDuration = 1f;

		public IngCellStatus(IngGridLayout layout, IngCellDisplayPool pool, Action onUnlocked)
		{
		}

		public void ShowDish(Vector2Int coord, DragItem item, Vector3 worldPos)
		{
		}

		public void HideEmptyDishes(Func<Vector2Int, IngCell> tryGetCell)
		{
		}

		private static bool CellNeedsDish(IngCell cell)
		{
			return false;
		}

		public void Setup(GridCellEffectData[] gridSequence, string[] ingredientIds)
		{
		}

		public void Subscribe()
		{
		}

		public void Unsubscribe()
		{
		}

		private void OnServed(CustomerServedEvent evt)
		{
		}

		private bool TryDrawAndLock(int index, IngCellOverlayStatus status, out IngCellDisplay display)
		{
			display = null;
			return false;
		}

		private void BlockCell(int index)
		{
		}

		private void AddOpenableLock(LockEntry entry)
		{
		}

		private void AddColorLock(ColorLockEntry entry)
		{
		}

		private IngCellDisplay GetDisplay(Vector2Int coord)
		{
			return null;
		}

		private void Unlock(LockEntry entry)
		{
		}

		private static void PlayBreakIce(IngCellDisplay display)
		{
		}

		public void UnlockColorWithKey(KeyTag key)
		{
		}

		private void OnKeyLanded(ColorLockEntry entry)
		{
		}

		private ColorLockEntry TakeColorLock(int colorIndex)
		{
			return null;
		}

		private void UnlockColorCell(ColorLockEntry entry)
		{
		}
	}
}
