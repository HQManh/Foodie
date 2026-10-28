using System;
using System.Collections.Generic;
using CakeOrder;
using TrungKienPack.Particle;
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

			public IngCellOverlayStatus Status
			{
				get
				{
					if (dishId == null)
					{
						return IngCellOverlayStatus.OrderLock(remainingServes);
					}
					return IngCellOverlayStatus.IngredientSlot(icon, remainingServes);
				}
			}
		}

		private class ColorLockEntry
		{
			public int index;

			public int colorIndex;

			public int keysUnassigned;

			public int keysShown;

			public IngCellDisplay display;

			public IngCellOverlayStatus Status => IngCellOverlayStatus.ColorLock(colorIndex, keysShown);
		}

		private readonly IngGridLayout _layout;

		private readonly IngCellDisplayPool _pool;

		private readonly Action _onUnlocked;

		private readonly List<LockEntry> _locks = new List<LockEntry>();

		private readonly List<ColorLockEntry> _colorLocks = new List<ColorLockEntry>();

		private const float KeyFlyDuration = 1f;

		public IngCellStatus(IngGridLayout layout, IngCellDisplayPool pool, Action onUnlocked)
		{
			_layout = layout;
			_pool = pool;
			_onUnlocked = onUnlocked;
		}

		public void ShowDish(Vector2Int coord, DragItem item, Vector3 worldPos)
		{
			if (item.isNeedCellDish)
			{
				IngCellDisplay orCreate = _pool.GetOrCreate(coord, worldPos);
				if (orCreate != null)
				{
					orCreate.SetDish(show: true);
				}
			}
		}

		public void HideEmptyDishes(Func<Vector2Int, IngCell> tryGetCell)
		{
			foreach (KeyValuePair<Vector2Int, IngCellDisplay> item in _pool.All)
			{
				IngCellDisplay value = item.Value;
				if (value && value.IsDishShown)
				{
					IngCell ingCell = tryGetCell(item.Key);
					if (ingCell == null || ingCell.IsEmpty || !CellNeedsDish(ingCell))
					{
						value.SetDish(show: false);
					}
				}
			}
		}

		private static bool CellNeedsDish(IngCell cell)
		{
			IReadOnlyList<DragItem> items = cell.Items;
			for (int i = 0; i < items.Count; i++)
			{
				if (items[i] != null && items[i].isNeedCellDish)
				{
					return true;
				}
			}
			return false;
		}

		public void Setup(GridCellEffectData[] gridSequence, string[] ingredientIds)
		{
			if (gridSequence == null)
			{
				return;
			}
			for (int i = 0; i < gridSequence.Length; i++)
			{
				GridCellEffectData data = gridSequence[i];
				if (data == null)
				{
					continue;
				}
				int[] values = data.values; // TODO(unrecovered): GridCellEffectData field names guessed (type/values)
				switch ((int)data.type)
				{
				case 1:
					BlockCell(i);
					break;
				case 2:
				{
					int serves = ((values == null || values.Length < 1) ? 1 : Mathf.Max(1, values[0]));
					AddOpenableLock(new LockEntry
					{
						index = i,
						remainingServes = serves
					});
					break;
				}
				case 3:
				{
					int ingIdx = ((values == null || values.Length < 1) ? (-1) : values[0]);
					if (ingredientIds != null && ingIdx >= 0 && ingIdx < ingredientIds.Length)
					{
						int serves2 = ((values.Length == 1) ? 1 : Mathf.Max(1, values[1]));
						string text = ingredientIds[ingIdx];
						LockEntry lockEntry = new LockEntry
						{
							index = i,
							dishId = text,
							remainingServes = serves2
						};
						lockEntry.icon = (MessyController.Ins ? MessyController.Ins.Info.GetPrefabSprite(text) : null);
						AddOpenableLock(lockEntry);
					}
					else
					{
						Debug.LogWarningFormat("IngCellStatus: invalid ingredient slot at cell {0}, ingredient index {1}, ingredient count {2}", i, ingIdx, (ingredientIds == null) ? 0 : ingredientIds.Length); /* literal recovered by guess */
					}
					break;
				}
				case 4:
				{
					int colorIndex = 0;
					int keys = 1;
					if (values != null && values.Length >= 1)
					{
						colorIndex = values[0];
						if (values.Length != 1)
						{
							keys = Mathf.Max(1, values[1]);
						}
					}
					AddColorLock(new ColorLockEntry
					{
						index = i,
						colorIndex = colorIndex,
						keysUnassigned = keys,
						keysShown = keys
					});
					break;
				}
				}
			}
		}

		public void Subscribe()
		{
			GameEventBus.Subscribe<CustomerServedEvent>(OnServed);
		}

		public void Unsubscribe()
		{
			GameEventBus.Unsubscribe<CustomerServedEvent>(OnServed);
		}

		private void OnServed(CustomerServedEvent evt)
		{
			DragItem item = evt.item;
			for (int num = _locks.Count - 1; num >= 0; num--)
			{
				LockEntry lockEntry = _locks[num];
				if (lockEntry.dishId != null && !(item && item.GetBaseId() == lockEntry.dishId))
				{
					continue;
				}
				lockEntry.remainingServes--;
				if (lockEntry.remainingServes < 1)
				{
					_locks.RemoveAt(num);
					Unlock(lockEntry);
				}
				else if (lockEntry.display)
				{
					PlayBreakIce(lockEntry.display);
					lockEntry.display.Apply(lockEntry.Status);
				}
			}
		}

		private bool TryDrawAndLock(int index, IngCellOverlayStatus status, out IngCellDisplay display)
		{
			int cols = _layout.Cols;
			int row = index / cols;
			display = GetDisplay(new Vector2Int(index - row * cols, _layout.Rows - 1 - row));
			if (display && display.Apply(status))
			{
				_layout.SetCellLocked(index, locked: true);
				return true;
			}
			Debug.LogWarningFormat("IngCellStatus: failed to draw status {1} on cell {0}", index, status.Kind); /* literal recovered by guess */
			return false;
		}

		private void BlockCell(int index)
		{
			TryDrawAndLock(index, IngCellOverlayStatus.Blocked(), out var _);
		}

		private void AddOpenableLock(LockEntry entry)
		{
			if (TryDrawAndLock(entry.index, entry.Status, out var display))
			{
				entry.display = display;
				_locks.Add(entry);
			}
		}

		private void AddColorLock(ColorLockEntry entry)
		{
			if (TryDrawAndLock(entry.index, entry.Status, out var display))
			{
				entry.display = display;
				_colorLocks.Add(entry);
			}
		}

		private IngCellDisplay GetDisplay(Vector2Int coord)
		{
			if (coord.x < 0 || coord.y < 0 || coord.x >= _layout.Cols || coord.y >= _layout.Rows)
			{
				return null;
			}
			Vector2 origin = _layout.Origin;
			Vector2 cellSize = _layout.CellSize;
			Vector3 worldPos = new Vector3(origin.x + ((float)coord.x + 0.5f) * cellSize.x, origin.y + ((float)coord.y + 0.5f) * cellSize.y, 0f);
			return _pool.GetOrCreate(coord, worldPos);
		}

		private void Unlock(LockEntry entry)
		{
			_layout.SetCellLocked(entry.index, locked: false);
			if (entry.display)
			{
				PlayBreakIce(entry.display);
				entry.display.Apply(IngCellOverlayStatus.Normal);
			}
			_onUnlocked?.Invoke();
		}

		private static void PlayBreakIce(IngCellDisplay display)
		{
			PoolingParticle.Instance.Spawn((ParticleType)1).At(display.transform.position).Scale(1f).Volume(0.5f)
				.Play();
		}

		public void UnlockColorWithKey(KeyTag key)
		{
			ColorLockEntry entry = TakeColorLock(key.ColorIndex);
			if (entry == null)
			{
				if (key.Visual)
				{
					key.Visual.Despawn();
				}
				return;
			}
			int cols = _layout.Cols;
			int row = entry.index / cols;
			Vector2 origin = _layout.Origin;
			Vector2 cellSize = _layout.CellSize;
			Vector3 target = new Vector3(origin.x + ((float)(entry.index - row * cols) + 0.5f) * cellSize.x, origin.y + ((float)(_layout.Rows - 1 - row) + 0.5f) * cellSize.y, 0f);
			KeyObject visual = key.Visual;
			if (!visual)
			{
				OnKeyLanded(entry);
				return;
			}
			visual.FlyTo(target, 1f, delegate
			{
				visual.Despawn();
				OnKeyLanded(entry);
			});
		}

		private void OnKeyLanded(ColorLockEntry entry)
		{
			entry.keysShown--;
			IngCellDisplay display = entry.display;
			if (entry.keysShown > 0)
			{
				if (display != null)
				{
					display.Apply(entry.Status);
				}
			}
			else if (!display)
			{
				UnlockColorCell(entry);
			}
			else
			{
				display.PlayColorLockUnlock(delegate
				{
					UnlockColorCell(entry);
				});
			}
		}

		private ColorLockEntry TakeColorLock(int colorIndex)
		{
			int best = -1;
			for (int i = 0; i < _colorLocks.Count; i++)
			{
				if (_colorLocks[i].colorIndex == colorIndex && (best < 0 || _colorLocks[best].keysUnassigned > _colorLocks[i].keysUnassigned))
				{
					best = i;
				}
			}
			if (best < 0)
			{
				return null;
			}
			ColorLockEntry colorLockEntry = _colorLocks[best];
			colorLockEntry.keysUnassigned--;
			if (colorLockEntry.keysUnassigned < 1)
			{
				_colorLocks.RemoveAt(best);
			}
			return colorLockEntry;
		}

		private void UnlockColorCell(ColorLockEntry entry)
		{
			_layout.SetCellLocked(entry.index, locked: false);
			if (entry.display != null)
			{
				entry.display.Apply(IngCellOverlayStatus.Normal);
			}
			_onUnlocked?.Invoke();
		}
	}
}
