using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorGrid
	{
		private class PromoteShift
		{
			public readonly List<ConveyorSlot> Rising;

			public readonly List<ConveyorSlot> Sinking;

			public int LiftTopRow;

			public bool SinkStarted;

			public float Age;
		}

		private IngredientSpawnerController _host;

		private readonly List<ConveyorColumn> _columns;

		private readonly List<ConveyorSlot> _slots;

		private readonly Dictionary<int, ConveyorChain> _chains;

		private readonly HashSet<int> _occupied;

		private const int RowStride = 1024;

		private const int SpawnRowOffset = 2;

		private readonly List<ConveyorSlot> _finished;

		private readonly List<ConveyorChain> _orphanBuffer;

		private readonly List<ConveyorBundle> _pendingBuffer;

		private readonly List<int> _rotateCols;

		private readonly List<ConveyorSlot> _rotateAbove;

		private readonly List<PromoteShift> _promoteShifts;

		private const float PromoteShiftTimeout = 5f;

		private readonly List<int> _groupBuffer;

		private readonly HashSet<int> _groupedCols;

		private readonly List<ConveyorSlot> _shiftBuffer;

		private readonly List<ConveyorSlot> _frontBuffer;

		public IEnumerable<ConveyorChain> Chains => null;

		public IReadOnlyList<ConveyorSlot> Slots => null;

		public int ColumnCount => 0;

		public int Capacity => 0;

		public int RowCount => 0;

		public bool HasPromoteShift => false;

		public void Setup(IngredientSpawnerController host)
		{
		}

		public void SetColumns(IReadOnlyList<ConveyorColumn> columns)
		{
		}

		public void Clear()
		{
		}

		private void RemapSlotColumns()
		{
		}

		public void Tick(float deltaTime)
		{
		}

		private void Advance()
		{
		}

		private void ReleaseFinishedSlots()
		{
		}

		private void SpawnPending()
		{
		}

		private bool WaitsForDataOrder(int col, int dataRow, int width)
		{
			return false;
		}

		private ConveyorChain JoinChain(ConveyorBundle bundle, ConveyorSlot slot)
		{
			return null;
		}

		private void LeaveChain(ConveyorSlot slot)
		{
		}

		public void DissolveChain(int chainId)
		{
		}

		private void DissolveChain(ConveyorChain chain)
		{
		}

		private void StripQueuedLinks(int chainId)
		{
		}

		private bool HasQueuedLink(int chainId)
		{
			return false;
		}

		public void PruneOrphanChains()
		{
		}

		private static string DescribeBundle(ConveyorBundle bundle)
		{
			return null;
		}

		private static string DescribeMembers(ConveyorChain chain)
		{
			return null;
		}

		public void AppendPendingChainCells(int chainId, List<Vector2Int> result)
		{
		}

		private void MoveVisuals(float deltaTime)
		{
		}

		private void RevealIfSettledAtFront(ConveyorSlot slot)
		{
		}

		public bool IsColumnMoving(int col)
		{
			return false;
		}

		private bool IsSettled(ConveyorSlot slot)
		{
			return false;
		}

		private Vector3 RowDownAt(int col, int row)
		{
			return default;
		}

		public Vector3 CellCenter(ConveyorSlot slot)
		{
			return default;
		}

		public Vector3 CellCenter(int col, int row)
		{
			return default;
		}

		public Vector3 RowCenter(int row)
		{
			return default;
		}

		public bool TryGetWindowRect(Transform space, int visibleRows, out Rect rect)
		{
			rect = default;
			return false;
		}

		private static int Key(int col, int row)
		{
			return 0;
		}

		private void RebuildOccupancy()
		{
		}

		private void SetOccupied(ConveyorSlot slot, bool on)
		{
		}

		private bool IsBlockFree(ConveyorSlot slot, int row, bool skipOwnCells)
		{
			return false;
		}

		private int HighestReachableRow(ConveyorSlot slot)
		{
			return 0;
		}

		private int HighestEntryRow(ConveyorSlot probe, int floor)
		{
			return 0;
		}

		private static bool IsOwnCell(ConveyorSlot slot, int col, int row)
		{
			return false;
		}

		public void ReleaseFor(IngredientConveyorItem item)
		{
		}

		private void ReleaseSlot(ConveyorSlot slot)
		{
		}

		private void Release(int index)
		{
		}

		private int IndexOf(IngredientConveyorItem item)
		{
			return 0;
		}

		public int ColumnIndexOf(ConveyorColumn column)
		{
			return 0;
		}

		public bool AreAdjacent(int a, int b)
		{
			return false;
		}

		public bool HasSlotOn(ConveyorColumn column)
		{
			return false;
		}

		public ConveyorSlot SlotAt(int col, int row)
		{
			return null;
		}

		public ConveyorSlot FrontSlotAt(int col)
		{
			return null;
		}

		public bool BreakChainAt(ConveyorSlot slot)
		{
			return false;
		}

		public bool TryRotateToFront(ConveyorSlot target)
		{
			return false;
		}

		public int PromoteRowToFront(int row)
		{
			return 0;
		}

		private void BuildColumnGroup(int startCol, int row, List<int> result)
		{
		}

		private bool BuildPromoteShift(List<int> cols, int row)
		{
			return false;
		}

		private Vector3 LiftPosition(PromoteShift shift, ConveyorSlot slot)
		{
			return default;
		}

		private void TickPromoteShifts(float deltaTime)
		{
		}

		private bool IsRunSettled(PromoteShift shift)
		{
			return false;
		}

		private bool IsSinkSettled(PromoteShift shift)
		{
			return false;
		}

		private static bool IsSlotAlive(ConveyorSlot slot)
		{
			return false;
		}

		private bool IsShiftAlive(PromoteShift shift)
		{
			return false;
		}

		private void EndPromoteShift(PromoteShift shift)
		{
		}

		private void CancelPromoteShift(ConveyorSlot slot)
		{
		}
	}
}
