using System.Collections.Generic;
using System.Text;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorGrid
	{
		private class PromoteShift
		{
			public readonly List<ConveyorSlot> Rising = new List<ConveyorSlot>();

			public readonly List<ConveyorSlot> Sinking = new List<ConveyorSlot>();

			public int LiftTopRow;

			public bool SinkStarted;

			public float Age;
		}

		private IngredientSpawnerController _host;

		private readonly List<ConveyorColumn> _columns = new List<ConveyorColumn>();

		private readonly List<ConveyorSlot> _slots = new List<ConveyorSlot>();

		private readonly Dictionary<int, ConveyorChain> _chains = new Dictionary<int, ConveyorChain>();

		private readonly HashSet<int> _occupied = new HashSet<int>();

		private const int RowStride = 1024;

		private const int SpawnRowOffset = 2;

		private readonly List<ConveyorSlot> _finished = new List<ConveyorSlot>();

		private readonly List<ConveyorChain> _orphanBuffer = new List<ConveyorChain>();

		private readonly List<ConveyorBundle> _pendingBuffer = new List<ConveyorBundle>();

		private readonly List<int> _rotateCols = new List<int>();

		private readonly List<ConveyorSlot> _rotateAbove = new List<ConveyorSlot>();

		private readonly List<PromoteShift> _promoteShifts = new List<PromoteShift>();

		private const float PromoteShiftTimeout = 5f;

		private readonly List<int> _groupBuffer = new List<int>();

		private readonly HashSet<int> _groupedCols = new HashSet<int>();

		private readonly List<ConveyorSlot> _shiftBuffer = new List<ConveyorSlot>();

		private readonly List<ConveyorSlot> _frontBuffer = new List<ConveyorSlot>();

		public IEnumerable<ConveyorChain> Chains => _chains.Values;

		public IReadOnlyList<ConveyorSlot> Slots => _slots;

		public int ColumnCount => _columns.Count;

		public int Capacity
		{
			get
			{
				if (_host != null)
				{
					return _host.RowCapacity;
				}
				return 1;
			}
		}

		public int RowCount
		{
			get
			{
				int max = 0;
				foreach (ConveyorSlot slot in _slots)
				{
					max = Mathf.Max(max, slot.Row + slot.Height);
				}
				return max;
			}
		}

		public bool HasPromoteShift => _promoteShifts.Count > 0;

		public void Setup(IngredientSpawnerController host)
		{
			_host = host;
		}

		public void SetColumns(IReadOnlyList<ConveyorColumn> columns)
		{
			_columns.Clear();
			if (columns != null)
			{
				foreach (ConveyorColumn column in columns)
				{
					if (column != null)
					{
						_columns.Add(column);
					}
				}
			}
			RemapSlotColumns();
		}

		public void Clear()
		{
			_slots.Clear();
			_columns.Clear();
			_occupied.Clear();
			_chains.Clear();
			_promoteShifts.Clear();
		}

		private void RemapSlotColumns()
		{
			for (int i = _slots.Count - 1; i >= 0; i--)
			{
				ConveyorSlot slot = _slots[i];
				if (slot.Owner == null)
				{
					Release(i);
					continue;
				}
				int index = _columns.IndexOf(slot.Owner);
				if (index < 0)
				{
					Release(i);
				}
				else if (_columns.Count < slot.Width + index)
				{
					Release(i);
				}
				else
				{
					slot.Col = index;
				}
			}
			RebuildOccupancy();
		}

		public void Tick(float deltaTime)
		{
			Advance();
			SpawnPending();
			MoveVisuals(deltaTime);
			TickPromoteShifts(deltaTime);
		}

		private void Advance()
		{
			_slots.Sort((ConveyorSlot a, ConveyorSlot b) => a.Row.CompareTo(b.Row));
			RebuildOccupancy();
			foreach (ConveyorSlot slot in _slots)
			{
				if (slot.Row == 0)
				{
					continue;
				}
				if (!(slot.Item != null) || !slot.Item.IsBusy)
				{
					int row = HighestReachableRow(slot);
					if (row < slot.Row)
					{
						SetOccupied(slot, on: false);
						slot.Row = row;
						SetOccupied(slot, on: true);
					}
				}
			}
			ReleaseFinishedSlots();
		}

		private void ReleaseFinishedSlots()
		{
			if (_host != null)
			{
				return;
			}
			_finished.Clear();
			for (int i = _slots.Count - 1; i >= 0; i--)
			{
				ConveyorSlot slot = _slots[i];
				if (slot.Row == 0 && IsSettled(slot) && (slot.Chain == null || slot.Chain.IsReady))
				{
					_finished.Add(slot);
				}
			}
			foreach (ConveyorSlot slot2 in _finished)
			{
				ReleaseSlot(slot2);
			}
			_finished.Clear();
		}

		private void SpawnPending()
		{
			if (_host == null || !_host.IsRunning)
			{
				return;
			}
			for (int col = 0; col < _columns.Count; col++)
			{
				ConveyorColumn column = _columns[col];
				if (column == null || !_host.CanColumnSpawnNow(column))
				{
					continue;
				}
				ConveyorBundle peek = _host.PeekBundle(column);
				if (peek == null)
				{
					continue;
				}
				int width = peek.Width;
				int height = peek.Height;
				if (width < 2)
				{
					width = 1;
				}
				if (height < 2)
				{
					height = 1;
				}
				if (_columns.Count < width + col)
				{
					_host.DemoteBundleWidth(column);
				}
				else
				{
					if (WaitsForDataOrder(col, peek.DataRow, width))
					{
						continue;
					}
					if (Capacity < height)
					{
						height = Capacity;
					}
					ConveyorSlot slot = new ConveyorSlot();
					slot.Col = col;
					slot.Width = width;
					slot.Height = height;
					int row = HighestEntryRow(slot, Capacity - height);
					if (row < 0)
					{
						_host.NotifyColumnFilled(column);
						continue;
					}
					slot.Row = row;
					ConveyorBundle bundle = _host.TakeBundle(column);
					if (bundle == null)
					{
						continue;
					}
					IngredientConveyorItem item = _host.CreateSlotItem(column, col, bundle, width, height);
					if (item == null)
					{
						bundle.Width = 1;
						int count = 1;
						if (bundle.Items != null)
						{
							count = bundle.Items.Length;
						}
						if (count < 2)
						{
							count = 1;
						}
						bundle.Height = count;
						_host.PushFrontBundle(column, bundle);
						continue;
					}
					slot.Item = item;
					slot.Owner = column;
					slot.Chain = JoinChain(bundle, slot);
					item.AttachSlot(slot);
					_slots.Add(slot);
					SetOccupied(slot, on: true);
					_host.NotifyColumnSpawned(column);
					int capacity = Capacity;
					Transform tf = item.transform;
					Vector3 center = CellCenter(slot);
					Vector3 down = RowDownAt(slot.Col, slot.Row);
					float steps = capacity - slot.Row + 1;
					tf.position = center + down * steps;
				}
			}
		}

		private bool WaitsForDataOrder(int col, int dataRow, int width)
		{
			if (dataRow >= 0)
			{
				for (int c = col + 1; c < col + width; c++)
				{
					if (c >= _columns.Count)
					{
						break;
					}
					_pendingBuffer.Clear();
					_columns[c].AppendPendingBundles(_pendingBuffer);
					foreach (ConveyorBundle bundle in _pendingBuffer)
					{
						if ((uint)bundle.DataRow < (uint)dataRow)
						{
							return true;
						}
					}
				}
				if (col > 0)
				{
					for (int c2 = 0; c2 < col; c2++)
					{
						_pendingBuffer.Clear();
						_columns[c2].AppendPendingBundles(_pendingBuffer);
						foreach (ConveyorBundle bundle2 in _pendingBuffer)
						{
							if ((uint)bundle2.DataRow < (uint)dataRow)
							{
								int w = bundle2.Width;
								if (w < 2)
								{
									w = 1;
								}
								if (col <= c2 - 1 + w)
								{
									return true;
								}
							}
						}
					}
				}
			}
			return false;
		}

		private ConveyorChain JoinChain(ConveyorBundle bundle, ConveyorSlot slot)
		{
			if (bundle.ChainId == 0)
			{
				return null;
			}
			if (!_chains.TryGetValue(bundle.ChainId, out var chain))
			{
				int size = bundle.ChainSize;
				if (size > 1)
				{
					if (!HasQueuedLink(bundle.ChainId))
					{
						string message = string.Format("[ConveyorGrid] chain {0} has no queued link; ", bundle.ChainId) + string.Format("size={0} bundle={1}", bundle.ChainSize, DescribeBundle(bundle));
						Debug.LogError(message);
						bundle.ChainId = 0;
						return null;
					}
					size = bundle.ChainSize;
				}
				chain = new ConveyorChain(bundle.ChainId, size);
				_chains[bundle.ChainId] = chain;
			}
			chain.Members.Add(slot);
			return chain;
		}

		private void LeaveChain(ConveyorSlot slot)
		{
			ConveyorChain chain = slot.Chain;
			if (chain != null)
			{
				slot.Chain = null;
				DissolveChain(chain);
			}
		}

		public void DissolveChain(int chainId)
		{
			if (chainId != 0)
			{
				if (_chains.TryGetValue(chainId, out var chain))
				{
					DissolveChain(chain);
				}
				else
				{
					StripQueuedLinks(chainId);
				}
			}
		}

		private void DissolveChain(ConveyorChain chain)
		{
			foreach (ConveyorSlot member in chain.Members)
			{
				member.Chain = null;
			}
			chain.Members.Clear();
			if (_chains.TryGetValue(chain.Id, out var existing) && existing == chain)
			{
				_chains.Remove(chain.Id);
			}
			StripQueuedLinks(chain.Id);
		}

		private void StripQueuedLinks(int chainId)
		{
			for (int i = 0; i < _columns.Count; i++)
			{
				_pendingBuffer.Clear();
				_columns[i].AppendPendingBundles(_pendingBuffer);
				foreach (ConveyorBundle bundle in _pendingBuffer)
				{
					if (bundle.ChainId == chainId)
					{
						bundle.ChainId = 0;
					}
				}
			}
		}

		private bool HasQueuedLink(int chainId)
		{
			for (int i = 0; i < _columns.Count; i++)
			{
				_pendingBuffer.Clear();
				_columns[i].AppendPendingBundles(_pendingBuffer);
				foreach (ConveyorBundle bundle in _pendingBuffer)
				{
					if (bundle.ChainId == chainId)
					{
						return true;
					}
				}
			}
			return false;
		}

		public void PruneOrphanChains()
		{
			if (_chains.Count == 0)
			{
				return;
			}
			_orphanBuffer.Clear();
			foreach (ConveyorChain chain in _chains.Values)
			{
				if (chain.Members.Count < chain.Size && !HasQueuedLink(chain.Id))
				{
					_orphanBuffer.Add(chain);
				}
			}
			foreach (ConveyorChain orphan in _orphanBuffer)
			{
				string message = string.Format("[ConveyorGrid] orphan chain {0}: members={1} size={2}", orphan.Id, orphan.Members.Count, orphan.Size) + " [" + DescribeMembers(orphan) + "]";
				Debug.LogError(message);
				DissolveChain(orphan);
			}
		}

		private static string DescribeBundle(ConveyorBundle bundle)
		{
			if (bundle.Items == null)
			{
				return "<no items>";
			}
			StringBuilder sb = new StringBuilder();
			IngredientState[] items = bundle.Items;
			for (int i = 0; i < items.Length; i++)
			{
				IngredientState state = items[i];
				if (state != null)
				{
					sb.Append((sb.Length < 1) ? "" : ", ").Append(state.id).Append('x')
						.Append(state.amount);
				}
			}
			return sb.ToString();
		}

		private static string DescribeMembers(ConveyorChain chain)
		{
			StringBuilder sb = new StringBuilder();
			foreach (ConveyorSlot slot in chain.Members)
			{
				IngredientConveyorItem item = slot.Item;
				sb.Append((sb.Length < 1) ? "" : "; ").Append(string.Format("({0},{1})", slot.Col, slot.Row));
				if (item == null)
				{
					sb.Append(" <no item>");
					continue;
				}
				foreach (IngredientState state in item.Items)
				{
					if (state != null)
					{
						sb.Append(state.id).Append('x').Append(state.amount)
							.Append(' ');
					}
				}
			}
			return sb.ToString();
		}

		public void AppendPendingChainCells(int chainId, List<Vector2Int> result)
		{
			if (chainId == 0)
			{
				return;
			}
			for (int i = 0; i < _columns.Count; i++)
			{
				_pendingBuffer.Clear();
				_columns[i].AppendPendingBundles(_pendingBuffer);
				foreach (ConveyorBundle bundle in _pendingBuffer)
				{
					if (bundle.ChainId == chainId)
					{
						int height = bundle.Height;
						int capacity = Capacity;
						int clamped = height;
						if (capacity <= height)
						{
							clamped = capacity;
						}
						if (height < 1)
						{
							clamped = 1;
						}
						result.Add(new Vector2Int(i, capacity - clamped));
					}
				}
			}
		}

		private void MoveVisuals(float deltaTime)
		{
			foreach (ConveyorSlot slot in _slots)
			{
				if (!(slot.Item != null) || slot.Item.IsBusy)
				{
					continue;
				}
				Transform tf = slot.Item.transform;
				Vector3 current = tf.position;
				Vector3 target = CellCenter(slot);
				tf.position = _host.StepToward(current, target, deltaTime);
				slot.Item.SetSortingOrder(_host.SortingBase + slot.Row);
				RevealIfSettledAtFront(slot);
			}
		}

		private void RevealIfSettledAtFront(ConveyorSlot slot)
		{
			if (slot.Item.IsHidden && slot.Row == 0 && IsSettled(slot))
			{
				slot.Item.Reveal();
			}
		}

		public bool IsColumnMoving(int col)
		{
			foreach (ConveyorSlot slot in _slots)
			{
				if (col >= slot.Col && col <= slot.Col + slot.Width - 1 && slot.Item != null && !slot.Item.IsBusy && !IsSettled(slot))
				{
					return true;
				}
			}
			return false;
		}

		private bool IsSettled(ConveyorSlot slot)
		{
			if (!(slot.Item != null))
			{
				return false;
			}
			Vector3 position = slot.Item.transform.position;
			Vector3 center = CellCenter(slot);
			return (position - center).sqrMagnitude < 0.0001f;
		}

		private Vector3 RowDownAt(int col, int row)
		{
			return CellCenter(col, row + 1) - CellCenter(col, row);
		}

		public Vector3 CellCenter(ConveyorSlot slot)
		{
			Vector3 first = CellCenter(slot.Col, slot.Row);
			Vector3 last = CellCenter(slot.Col + slot.Width - 1, slot.Row + slot.Height - 1);
			return (first + last) * 0.5f;
		}

		public Vector3 CellCenter(int col, int row)
		{
			if (col >= 0 && _host != null && col < _columns.Count)
			{
				return _host.CellPosition(_columns[col], row);
			}
			return Vector3.zero;
		}

		public Vector3 RowCenter(int row)
		{
			if (_columns.Count == 0)
			{
				return Vector3.zero;
			}
			return (CellCenter(0, row) + CellCenter(_columns.Count - 1, row)) * 0.5f;
		}

		public bool TryGetWindowRect(Transform space, int visibleRows, out Rect rect)
		{
			rect = default;
			if (visibleRows > 0 && space != null && _columns.Count != 0 && _host != null)
			{
				int rows = Capacity;
				if (visibleRows < rows)
				{
					rows = visibleRows;
				}
				Vector3 a = space.InverseTransformPoint(CellCenter(0, 0));
				Vector3 b = space.InverseTransformPoint(CellCenter(_columns.Count - 1, rows - 1));
				float halfWidth = _host.ColumnWidth * 0.5f;
				float halfHeight = _host.RowPitch * 0.5f;
				float xMin = Mathf.Min(a.x, b.x) - halfWidth;
				float yMin = Mathf.Min(a.y, b.y) - halfHeight;
				float xMax = Mathf.Max(a.x, b.x) + halfWidth;
				float yMax = Mathf.Max(a.y, b.y) + halfHeight;
				rect = new Rect(xMin, yMin, xMax - xMin, yMax - yMin);
				return true;
			}
			return false;
		}

		private static int Key(int col, int row)
		{
			return row + col * RowStride;
		}

		private void RebuildOccupancy()
		{
			_occupied.Clear();
			foreach (ConveyorSlot slot in _slots)
			{
				SetOccupied(slot, on: true);
			}
		}

		private void SetOccupied(ConveyorSlot slot, bool on)
		{
			for (int c = slot.Col; c <= slot.Col + slot.Width - 1; c++)
			{
				for (int r = slot.Row; r <= slot.Row + slot.Height - 1; r++)
				{
					if (on)
					{
						_occupied.Add(Key(c, r));
					}
					else
					{
						_occupied.Remove(Key(c, r));
					}
				}
			}
		}

		private bool IsBlockFree(ConveyorSlot slot, int row, bool skipOwnCells)
		{
			if (row < 0)
			{
				return false;
			}
			if (slot.Height + row > Capacity)
			{
				return false;
			}
			for (int c = slot.Col; c <= slot.Col + slot.Width - 1; c++)
			{
				if (c < 0)
				{
					return false;
				}
				if (c >= _columns.Count)
				{
					return false;
				}
				for (int r = row; r < slot.Height + row; r++)
				{
					if (_occupied.Contains(Key(c, r)))
					{
						if (!skipOwnCells)
						{
							return false;
						}
						if (!IsOwnCell(slot, c, r))
						{
							return false;
						}
					}
				}
			}
			return true;
		}

		private int HighestReachableRow(ConveyorSlot slot)
		{
			int row = slot.Row;
			while (row >= 1 && IsBlockFree(slot, row - 1, skipOwnCells: true))
			{
				row--;
			}
			return row;
		}

		private int HighestEntryRow(ConveyorSlot probe, int floor)
		{
			if (floor < 0)
			{
				return -1;
			}
			if (!IsBlockFree(probe, floor, skipOwnCells: false))
			{
				return -1;
			}
			int row = floor;
			while (row >= 1 && IsBlockFree(probe, row - 1, skipOwnCells: false))
			{
				row--;
			}
			return row;
		}

		private static bool IsOwnCell(ConveyorSlot slot, int col, int row)
		{
			if (col >= slot.Col && col <= slot.Col + slot.Width - 1 && row >= slot.Row)
			{
				return row <= slot.Row + slot.Height - 1;
			}
			return false;
		}

		public void ReleaseFor(IngredientConveyorItem item)
		{
			int index = IndexOf(item);
			if (index >= 0)
			{
				Release(index);
			}
		}

		private void ReleaseSlot(ConveyorSlot slot)
		{
			int index = _slots.IndexOf(slot);
			if (index >= 0)
			{
				Release(index);
			}
		}

		private void Release(int index)
		{
			ConveyorSlot slot = _slots[index];
			_slots.RemoveAt(index);
			SetOccupied(slot, on: false);
			LeaveChain(slot);
			CancelPromoteShift(slot);
			if (slot.Item != null)
			{
				slot.Item.AttachSlot(null);
				_host.ReleaseItem(slot.Item);
			}
		}

		private int IndexOf(IngredientConveyorItem item)
		{
			for (int i = 0; i < _slots.Count; i++)
			{
				if (_slots[i].Item == item)
				{
					return i;
				}
			}
			return -1;
		}

		public int ColumnIndexOf(ConveyorColumn column)
		{
			if (column == null)
			{
				return -1;
			}
			return _columns.IndexOf(column);
		}

		public bool AreAdjacent(int a, int b)
		{
			if (a < 0 || b < 0)
			{
				return false;
			}
			if (a >= _columns.Count)
			{
				return false;
			}
			int diff = a - b;
			if (diff == 0)
			{
				return false;
			}
			if (b >= _columns.Count)
			{
				return false;
			}
			if (!(_host != null))
			{
				return Mathf.Abs(diff) == 1;
			}
			return Mathf.Abs(_columns[a].CenterX - _columns[b].CenterX) < _host.ColumnStep * 1.5f;
		}

		public bool HasSlotOn(ConveyorColumn column)
		{
			int index = ColumnIndexOf(column);
			if (index < 0)
			{
				return false;
			}
			foreach (ConveyorSlot slot in _slots)
			{
				if (index >= slot.Col && index <= slot.Col + slot.Width - 1)
				{
					return true;
				}
			}
			return false;
		}

		public ConveyorSlot SlotAt(int col, int row)
		{
			foreach (ConveyorSlot slot in _slots)
			{
				if (col >= slot.Col && col <= slot.Col + slot.Width - 1 && row >= slot.Row && row <= slot.Row + slot.Height - 1)
				{
					return slot;
				}
			}
			return null;
		}

		public ConveyorSlot FrontSlotAt(int col)
		{
			return SlotAt(col, 0);
		}

		public bool BreakChainAt(ConveyorSlot slot)
		{
			if (slot != null && slot.Chain != null)
			{
				LeaveChain(slot);
				return true;
			}
			return false;
		}

		public bool TryRotateToFront(ConveyorSlot target)
		{
			if (((target == null) ? null : target.Item) == null)
			{
				return false;
			}
			if (target.Row < 1)
			{
				return false;
			}
			BuildColumnGroup(target.Col, target.Row, _rotateCols);
			_rotateAbove.Clear();
			foreach (int c in _rotateCols)
			{
				for (int r = 0; r < target.Row; r++)
				{
					ConveyorSlot above = SlotAt(c, r);
					if (above == null || above == target)
					{
						return false;
					}
					if (!(above.Item != null))
					{
						return false;
					}
					if (above.Item.IsBusy)
					{
						return false;
					}
					if (!_rotateAbove.Contains(above))
					{
						_rotateAbove.Add(above);
					}
				}
			}
			if (_rotateAbove.Count == 0)
			{
				return false;
			}
			int height = target.Height;
			foreach (ConveyorSlot slot in _rotateAbove)
			{
				SetOccupied(slot, on: false);
			}
			SetOccupied(target, on: false);
			foreach (ConveyorSlot slot2 in _rotateAbove)
			{
				slot2.Row += height;
			}
			target.Row = 0;
			foreach (ConveyorSlot slot3 in _rotateAbove)
			{
				SetOccupied(slot3, on: true);
			}
			SetOccupied(target, on: true);
			foreach (ConveyorSlot slot4 in _rotateAbove)
			{
				slot4.Item.SetSortingOrder(_host.SortingBase + slot4.Row);
			}
			target.Item.SetSortingOrder(_host.SortingBase + target.Row);
			RebuildOccupancy();
			return true;
		}

		public int PromoteRowToFront(int row)
		{
			if (row < 1)
			{
				return 0;
			}
			if (_promoteShifts.Count > 0)
			{
				return 0;
			}
			_groupedCols.Clear();
			int promoted = 0;
			for (int col = 0; col < _columns.Count; col++)
			{
				if (_groupedCols.Contains(col))
				{
					continue;
				}
				BuildColumnGroup(col, row, _groupBuffer);
				foreach (int c in _groupBuffer)
				{
					_groupedCols.Add(c);
				}
				if (BuildPromoteShift(_groupBuffer, row))
				{
					promoted += _groupBuffer.Count;
				}
			}
			if (promoted > 0)
			{
				RebuildOccupancy();
			}
			return promoted;
		}

		private void BuildColumnGroup(int startCol, int row, List<int> result)
		{
			result.Clear();
			result.Add(startCol);
			for (int i = 0; i < result.Count; i++)
			{
				for (int r = 0; r <= row; r++)
				{
					ConveyorSlot slot = SlotAt(result[i], r);
					if (slot != null && slot.Width > 1)
					{
						for (int c = slot.Col; c <= slot.Col + slot.Width - 1; c++)
						{
							if (!result.Contains(c))
							{
								result.Add(c);
							}
						}
					}
				}
			}
		}

		private bool BuildPromoteShift(List<int> cols, int row)
		{
			_frontBuffer.Clear();
			_shiftBuffer.Clear();
			foreach (int c in cols)
			{
				ConveyorSlot front = SlotAt(c, 0);
				if (front == null)
				{
					return false;
				}
				if (!(front.Item != null))
				{
					return false;
				}
				if (front.Item.IsBusy)
				{
					return false;
				}
				if (!_frontBuffer.Contains(front))
				{
					_frontBuffer.Add(front);
				}
			}
			if (_frontBuffer.Count == 0)
			{
				return false;
			}
			int blockHeight = _frontBuffer[0].Height;
			foreach (ConveyorSlot front2 in _frontBuffer)
			{
				if (front2.Height != blockHeight)
				{
					return false;
				}
			}
			foreach (int c2 in cols)
			{
				for (int r = 1; r <= row; r++)
				{
					ConveyorSlot behind = SlotAt(c2, r);
					if (behind != null && !_frontBuffer.Contains(behind) && !_shiftBuffer.Contains(behind))
					{
						if (!(behind.Item != null))
						{
							return false;
						}
						if (behind.Item.IsBusy)
						{
							return false;
						}
						_shiftBuffer.Add(behind);
					}
				}
			}
			if (_shiftBuffer.Count == 0)
			{
				return false;
			}
			_shiftBuffer.Sort((ConveyorSlot a, ConveyorSlot b) => a.Row.CompareTo(b.Row));
			int lastRow = int.MinValue;
			foreach (ConveyorSlot behind2 in _shiftBuffer)
			{
				lastRow = Mathf.Max(lastRow, behind2.Row + behind2.Height - 1);
			}
			PromoteShift shift = new PromoteShift();
			shift.LiftTopRow = _frontBuffer[0].Row - blockHeight;
			foreach (ConveyorSlot behind3 in _shiftBuffer)
			{
				behind3.Row -= blockHeight;
				shift.Rising.Add(behind3);
				behind3.Item.SetSortingOrder(_host.SortingBase + behind3.Row);
				behind3.Item.SuspendTap(bright: false);
			}
			int newRow = lastRow - blockHeight + 1;
			foreach (ConveyorSlot front3 in _frontBuffer)
			{
				front3.Row = newRow;
				front3.Item.SetSortingOrder(_host.SortingBase + newRow);
				front3.Item.SetBusy(value: true);
				front3.Item.SuspendTap(bright: true);
				shift.Sinking.Add(front3);
			}
			_promoteShifts.Add(shift);
			return true;
		}

		private Vector3 LiftPosition(PromoteShift shift, ConveyorSlot slot)
		{
			Vector3 first = CellCenter(slot.Col, shift.LiftTopRow);
			Vector3 last = CellCenter(slot.Col + slot.Width - 1, shift.LiftTopRow + slot.Height - 1);
			return (first + last) * 0.5f;
		}

		private void TickPromoteShifts(float deltaTime)
		{
			for (int i = _promoteShifts.Count - 1; i >= 0; i--)
			{
				PromoteShift shift = _promoteShifts[i];
				shift.Age += deltaTime;
				if (!IsShiftAlive(shift) || shift.Age > PromoteShiftTimeout)
				{
					EndPromoteShift(shift);
					_promoteShifts.RemoveAt(i);
				}
				else if (!shift.SinkStarted)
				{
					bool arrived = true;
					foreach (ConveyorSlot slot in shift.Sinking)
					{
						Transform tf = slot.Item.transform;
						Vector3 target = LiftPosition(shift, slot);
						tf.position = _host.StepToward(tf.position, target, deltaTime);
						if ((tf.position - target).sqrMagnitude > 0.0001f)
						{
							arrived = false;
						}
					}
					if (IsRunSettled(shift) && arrived)
					{
						shift.SinkStarted = true;
						foreach (ConveyorSlot rising in shift.Rising)
						{
							if (rising.Row == 0 && IsSlotAlive(rising))
							{
								rising.Item.SuspendTap(bright: true);
							}
						}
						foreach (ConveyorSlot sinking in shift.Sinking)
						{
							sinking.Item.SetBusy(value: false);
						}
					}
				}
				else if (IsSinkSettled(shift))
				{
					EndPromoteShift(shift);
					_promoteShifts.RemoveAt(i);
				}
			}
		}

		private bool IsRunSettled(PromoteShift shift)
		{
			foreach (ConveyorSlot slot in shift.Rising)
			{
				if (!IsSettled(slot))
				{
					return false;
				}
			}
			return true;
		}

		private bool IsSinkSettled(PromoteShift shift)
		{
			foreach (ConveyorSlot slot in shift.Sinking)
			{
				if (!IsSettled(slot))
				{
					return false;
				}
			}
			return true;
		}

		private static bool IsSlotAlive(ConveyorSlot slot)
		{
			if (slot != null && slot.Item != null)
			{
				return slot.Item.Slot == slot;
			}
			return false;
		}

		private bool IsShiftAlive(PromoteShift shift)
		{
			foreach (ConveyorSlot slot in shift.Sinking)
			{
				if (!IsSlotAlive(slot))
				{
					return false;
				}
			}
			foreach (ConveyorSlot slot2 in shift.Rising)
			{
				if (!IsSlotAlive(slot2))
				{
					return false;
				}
			}
			return true;
		}

		private void EndPromoteShift(PromoteShift shift)
		{
			foreach (ConveyorSlot slot in shift.Rising)
			{
				if (IsSlotAlive(slot))
				{
					slot.Item.ResumeTap();
				}
			}
			foreach (ConveyorSlot slot2 in shift.Sinking)
			{
				if (IsSlotAlive(slot2))
				{
					slot2.Item.SetBusy(value: false);
					slot2.Item.ResumeTap();
				}
			}
		}

		private void CancelPromoteShift(ConveyorSlot slot)
		{
			for (int i = _promoteShifts.Count - 1; i >= 0; i--)
			{
				PromoteShift shift = _promoteShifts[i];
				if (shift.Sinking.Contains(slot) || shift.Rising.Contains(slot))
				{
					EndPromoteShift(shift);
					_promoteShifts.RemoveAt(i);
				}
			}
		}
	}
}
