using System;
using System.Collections.Generic;
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

		private bool HasClaims => false;

		public IngCellFinder(IngGridLayout layout, Func<Vector2Int, IngCell> getOrCreateCell, Func<Vector2Int, IngCell> tryGetCell)
		{
		}

		public void SetAutoStack(bool autoStack)
		{
		}

		public void ReservePending(string id)
		{
		}

		public bool ReleasePending(string id)
		{
			return false;
		}

		private void PurgeStalePending()
		{
		}

		public string DebugPending()
		{
			return null;
		}

		public void AddOwed(DragItem item)
		{
		}

		public void RemoveOwed(DragItem item)
		{
		}

		private void PlaceClaims(List<string> cellId, List<int> cellRemaining)
		{
		}

		public bool IsCellAvailable(string id, int num)
		{
			return false;
		}

		public int CountAvailable(string id, int max)
		{
			return 0;
		}

		public bool CanPlaceAll(IReadOnlyList<string> ids)
		{
			return false;
		}

		private int CountAvailableAfterPending(string id, int max)
		{
			return 0;
		}

		private void BuildDraft(List<string> cellId, List<int> cellRemaining)
		{
		}

		private bool HasRoomBeyondPending(DragItem item)
		{
			return false;
		}

		private static bool TryPlaceInDraft(string id, List<string> cellId, List<int> cellRemaining)
		{
			return false;
		}

		private static bool TryPlaceInDraft(string id, int maxStack, List<string> cellId, List<int> cellRemaining)
		{
			return false;
		}

		public bool TryGetCell(DragItem item, out IngCell result)
		{
			result = null;
			return false;
		}

		public bool TryGetCellNearest(DragItem item, out IngCell result)
		{
			result = null;
			return false;
		}

		public bool TryGetDirtyPlateCell(DragItem plate, out IngCell result)
		{
			result = null;
			return false;
		}

		private IngCell FindFirst(Func<IngCell, bool> accept)
		{
			return null;
		}

		private IngCell FindNearest(Vector2 itemPos, Func<IngCell, bool> accept)
		{
			return null;
		}
	}
}
