using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class IngGridLayout
	{
		[CompilerGenerated]
		private sealed class _003CEnabledCells_003Ed__25 : IEnumerable<Vector2Int>, IEnumerable, IEnumerator<Vector2Int>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private Vector2Int _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public IngGridLayout _003C_003E4__this;

			private int _003Ccol_003E5__2;

			private int _003Crow_003E5__3;

			Vector2Int IEnumerator<Vector2Int>.Current
			{
				[DebuggerHidden]
				get
				{
					return default;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CEnabledCells_003Ed__25(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<Vector2Int> IEnumerable<Vector2Int>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003CEnabledCellsFromRight_003Ed__27 : IEnumerable<Vector2Int>, IEnumerable, IEnumerator<Vector2Int>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private Vector2Int _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			public IngGridLayout _003C_003E4__this;

			private int _003Ccol_003E5__2;

			private int _003Crow_003E5__3;

			Vector2Int IEnumerator<Vector2Int>.Current
			{
				[DebuggerHidden]
				get
				{
					return default;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CEnabledCellsFromRight_003Ed__27(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}

			[DebuggerHidden]
			IEnumerator<Vector2Int> IEnumerable<Vector2Int>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		private readonly Transform _root;

		private readonly Vector2 _cellSize;

		private readonly int _cols;

		private readonly int _rows;

		private readonly HashSet<int> _occupiedCells;

		private readonly HashSet<int> _lockedCells;

		private int _reservedIndex;

		public int Cols => 0;

		public int Rows => 0;

		public Vector2 CellSize => default;

		public Vector2 Size => default;

		public string DebugReservedCell => null;

		public Vector2 Origin => default;

		public IngGridLayout(Transform root, Vector2 cellSize, int cols, int rows)
		{
		}

		public int CellIndex(Vector2Int c)
		{
			return 0;
		}

		public Vector2Int CellFromIndex(int index)
		{
			return default;
		}

		public bool InBounds(Vector2Int c)
		{
			return false;
		}

		public bool IsCellEnabled(Vector2Int c)
		{
			return false;
		}

		private bool IsNormalCellBlocked(int index)
		{
			return false;
		}

		public void SetReservedCell(int index)
		{
		}

		public void SetCellLocked(int index, bool locked)
		{
		}

		[IteratorStateMachine(typeof(_003CEnabledCells_003Ed__25))]
		public IEnumerable<Vector2Int> EnabledCells()
		{
			return null;
		}

		public int ScanOrder(Vector2Int c)
		{
			return 0;
		}

		[IteratorStateMachine(typeof(_003CEnabledCellsFromRight_003Ed__27))]
		public IEnumerable<Vector2Int> EnabledCellsFromRight()
		{
			return null;
		}

		public int ScanOrderFromRight(Vector2Int c)
		{
			return 0;
		}

		public bool AnyEnabledCell()
		{
			return false;
		}

		public Vector3 GetCellWorldCenter(int col, int row)
		{
			return default;
		}

		public bool TryWorldToCell(Vector3 worldPos, out Vector2Int cell)
		{
			cell = default;
			return false;
		}

		public bool IsInsideGrid(Vector2 worldPos)
		{
			return false;
		}

		public void RefreshOccupied(List<GridCellOccupier> occupiers)
		{
		}
	}
}
