using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngCellFinder
	{
		private readonly IngGridLayout _layout;

		private readonly Func<Vector2Int, IngCell> _getOrCreateCell;

		private readonly Func<Vector2Int, IngCell> _tryGetCell;

		private bool _autoStack;

		private readonly List<string> _pending;

		private readonly List<float> _pendingTime;

		private const float PendingMaxAge = 5f;

		private readonly List<(DragItem Item, string Id, int MaxStack)> _owed;

		private bool HasClaims => _pending.Count > 0 || _owed.Count > 0;

		public IngCellFinder(IngGridLayout layout, Func<Vector2Int, IngCell> getOrCreateCell, Func<Vector2Int, IngCell> tryGetCell)
		{
			_layout = layout;
			_getOrCreateCell = getOrCreateCell;
			_tryGetCell = tryGetCell;
			_pending = new List<string>();
			_pendingTime = new List<float>();
			_owed = new List<(DragItem Item, string Id, int MaxStack)>();
		}

		public void SetAutoStack(bool autoStack)
		{
			_autoStack = autoStack;
		}

		public void ReservePending(string id)
		{
			if (string.IsNullOrEmpty(id))
			{
				return;
			}
			_pending.Add(id);
			_pendingTime.Add(Time.time);
		}

		public bool ReleasePending(string id)
		{
			int index = _pending.IndexOf(id);
			if (index < 0)
			{
				return false;
			}
			_pending.RemoveAt(index);
			_pendingTime.RemoveAt(index);
			return true;
		}

		private void PurgeStalePending()
		{
			for (int i = _pending.Count - 1; i >= 0; i--)
			{
				if (Time.time - _pendingTime[i] > PendingMaxAge)
				{
					/* literal recovered by guess */
					Debug.LogWarning(string.Format("Pending claim {0} expired after {1}s", _pending[i], PendingMaxAge));
					_pending.RemoveAt(i);
					_pendingTime.RemoveAt(i);
				}
			}
		}

		public string DebugPending()
		{
			if (_pending.Count == 0 && _owed.Count == 0)
			{
				return string.Empty;
			}
			var sb = new StringBuilder();
			for (int i = 0; i < _pending.Count; i++)
			{
				if (i != 0)
				{
					sb.Append(", "); /* literal recovered by guess */
				}
				float age = Time.time - _pendingTime[i];
				sb.Append(_pending[i]).Append('@').Append(age.ToString("F1")).Append('s'); /* format recovered by guess */
			}
			foreach (var entry in _owed)
			{
				if (sb.Length > 0)
				{
					sb.Append(", "); /* literal recovered by guess */
				}
				sb.Append(entry.Id);
			}
			return sb.ToString();
		}

		public void AddOwed(DragItem item)
		{
			if (item == null)
			{
				return;
			}
			_owed.Add((item, item.GetId(), item.maxStack));
		}

		public void RemoveOwed(DragItem item)
		{
			for (int i = 0; i < _owed.Count; i++)
			{
				if (_owed[i].Item == item)
				{
					_owed.RemoveAt(i);
					return;
				}
			}
		}

		private void PlaceClaims(List<string> cellId, List<int> cellRemaining)
		{
			foreach (string id in _pending)
			{
				TryPlaceInDraft(id, cellId, cellRemaining);
			}
			foreach (var entry in _owed)
			{
				TryPlaceInDraft(entry.Id, entry.MaxStack, cellId, cellRemaining);
			}
		}

		public bool IsCellAvailable(string id, int num)
		{
			return num <= CountAvailable(id, num);
		}

		public int CountAvailable(string id, int max)
		{
			// Rebuilt from the decompiled code: how many more of this ingredient the grid can take, counted up to max.
			if (max < 1)
			{
				return 0;
			}
			PurgeStalePending();
			if (HasClaims)
			{
				return CountAvailableAfterPending(id, max);
			}
			LevelInfo info = MessyController.Ins != null ? MessyController.Ins.Info : null;
			DragItem prefab = info != null ? info.GetIngredientPrefab(id) : null;
			if (prefab == null || _layout == null)
			{
				return max;
			}
			int perCell = prefab.maxStack;
			int count = 0;
			foreach (Vector2Int coord in _layout.EnabledCells())
			{
				IngCell cell = _tryGetCell(coord);
				if (cell == null || cell.IsEmpty)
				{
					count += perCell;
				}
				else if (cell.Items[0].GetId() == id && cell.OccupiedCount < perCell)
				{
					count += perCell - cell.OccupiedCount;
				}
				if (count >= max)
				{
					return max;
				}
			}
			return count;
		}

		public bool CanPlaceAll(IReadOnlyList<string> ids)
		{
			if (ids == null || ids.Count == 0)
			{
				return true;
			}
			PurgeStalePending();
			var cellId = new List<string>();
			var cellRemaining = new List<int>();
			BuildDraft(cellId, cellRemaining);
			PlaceClaims(cellId, cellRemaining);
			foreach (string id in ids)
			{
				if (!TryPlaceInDraft(id, cellId, cellRemaining))
				{
					return false;
				}
			}
			return true;
		}

		private int CountAvailableAfterPending(string id, int max)
		{
			var cellId = new List<string>();
			var cellRemaining = new List<int>();
			BuildDraft(cellId, cellRemaining);
			PlaceClaims(cellId, cellRemaining);
			if (max < 1)
			{
				return 0;
			}
			int count = 0;
			do
			{
				if (!TryPlaceInDraft(id, cellId, cellRemaining))
				{
					return count;
				}
				count++;
			} while (count != max);
			return max;
		}

		private void BuildDraft(List<string> cellId, List<int> cellRemaining)
		{
			foreach (Vector2Int coord in _layout.EnabledCells())
			{
				IngCell cell = _tryGetCell(coord);
				if (cell == null || cell.IsEmpty)
				{
					cellId.Add(null);
					cellRemaining.Add(0);
				}
				else
				{
					cellId.Add(cell.Items[0].GetId());
					cellRemaining.Add(cell.MaxStack - cell.OccupiedCount);
				}
			}
		}

		private bool HasRoomBeyondPending(DragItem item)
		{
			PurgeStalePending();
			if (!HasClaims)
			{
				return true;
			}
			var cellId = new List<string>();
			var cellRemaining = new List<int>();
			BuildDraft(cellId, cellRemaining);
			PlaceClaims(cellId, cellRemaining);
			return TryPlaceInDraft(item.GetId(), item.maxStack, cellId, cellRemaining);
		}

		private static bool TryPlaceInDraft(string id, List<string> cellId, List<int> cellRemaining)
		{
			DragItem prefab = MessyController.Ins.Info.GetIngredientPrefab(id);
			return TryPlaceInDraft(id, prefab.maxStack, cellId, cellRemaining);
		}

		private static bool TryPlaceInDraft(string id, int maxStack, List<string> cellId, List<int> cellRemaining)
		{
			for (int i = 0; i < cellId.Count; i++)
			{
				if (cellId[i] == id && cellRemaining[i] > 0)
				{
					cellRemaining[i] = cellRemaining[i] - 1;
					return true;
				}
			}
			for (int i = 0; i < cellId.Count; i++)
			{
				if (cellId[i] == null)
				{
					cellId[i] = id;
					cellRemaining[i] = maxStack - 1;
					return true;
				}
			}
			return false;
		}

		public bool TryGetCell(DragItem item, out IngCell result)
		{
			// Rebuilt from the decompiled code and its local functions. An item that came from a station takes the first cell; any other takes
			// the nearest. With auto-stacking on, a cell it can stack into is preferred over an empty one; otherwise the reverse.
			result = null;
			if (!HasRoomBeyondPending(item) || item == null || item.Tf == null)
			{
				return false;
			}
			Vector2 position = item.Tf.position;
			bool fromStation = item.DragOrigin == DragOrigin.Station;
			IngCell Find(Func<IngCell, bool> accept)
			{
				return fromStation ? FindFirst(accept) : FindNearest(position, accept);
			}
			IngCell TryFindEmpty()
			{
				return Find(cell => cell.IsEmpty);
			}
			IngCell TryFindStack()
			{
				return Find(cell => !cell.IsEmpty && cell.CanAccept(item));
			}
			result = _autoStack ? (TryFindStack() ?? TryFindEmpty()) : (TryFindEmpty() ?? TryFindStack());
			return result != null;
		}

		public bool TryGetCellNearest(DragItem item, out IngCell result)
		{
			result = null;
			if (!_layout.AnyEnabledCell() || item == null || item.Tf == null)
			{
				return false;
			}
			Vector2 position = item.Tf.position;
			IngCell nearest = FindNearest(position, null);
			if (nearest != null && nearest.CanAccept(item))
			{
				result = nearest;
				return true;
			}
			result = FindNearest(position, cell => cell.IsEmpty);
			if (result == null)
			{
				result = FindNearest(position, cell => !cell.IsEmpty && cell.CanAccept(item));
				return result != null;
			}
			return true;
		}

		public bool TryGetDirtyPlateCell(DragItem plate, out IngCell result)
		{
			result = null;
			if (!_layout.AnyEnabledCell() || !HasRoomBeyondPending(plate))
			{
				return false;
			}
			foreach (Vector2Int coord in _layout.EnabledCells())
			{
				IngCell cell = _tryGetCell(coord);
				if (cell != null && cell.HasDirtyPlate && cell.CanAccept(plate))
				{
					result = cell;
					return true;
				}
			}
			// No cell holds a dirty plate that can take this one, so it goes to the first empty cell.
			result = FindFirst(cell => cell.IsEmpty);
			return result != null;
		}

		private IngCell FindFirst(Func<IngCell, bool> accept)
		{
			foreach (Vector2Int coord in _layout.EnabledCells())
			{
				IngCell cell = _getOrCreateCell(coord);
				if (accept == null || accept(cell))
				{
					return cell;
				}
			}
			return null;
		}

		private IngCell FindNearest(Vector2 itemPos, Func<IngCell, bool> accept)
		{
			IngCell best = null;
			float bestDistSq = float.MaxValue;
			foreach (Vector2Int coord in _layout.EnabledCells())
			{
				IngCell cell = _getOrCreateCell(coord);
				if (accept != null && !accept(cell))
				{
					continue;
				}
				float dx = cell.WorldCenter.x - itemPos.x;
				float dy = cell.WorldCenter.y - itemPos.y;
				float distSq = dx * dx + dy * dy;
				if (bestDistSq <= distSq)
				{
					continue;
				}
				bestDistSq = distSq;
				best = cell;
			}
			return best;
		}
	}
}
