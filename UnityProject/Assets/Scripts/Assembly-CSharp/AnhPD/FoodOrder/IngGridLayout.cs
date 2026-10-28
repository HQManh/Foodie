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
		private readonly Transform _root;

		private readonly Vector2 _cellSize;

		private readonly int _cols;

		private readonly int _rows;

		private readonly HashSet<int> _occupiedCells = new HashSet<int>();

		private readonly HashSet<int> _lockedCells = new HashSet<int>();

		private int _reservedIndex = -1;

		public int Cols => _cols;

		public int Rows => _rows;

		public Vector2 CellSize => _cellSize;

		public Vector2 Size => new Vector2((float)_cols * _cellSize.x, (float)_rows * _cellSize.y); // TODO(unrecovered): cell-size multiply inferred (NEON scvtf only shows int->float of cols/rows)

		public string DebugReservedCell
		{
			get
			{
				if (_reservedIndex >= 0)
				{
					return CellFromIndex(_reservedIndex).ToString();
				}
				return "-"; /* decoded from the metadata */
			}
		}

		public Vector2 Origin
		{
			get
			{
				Vector3 position = _root.position;
				return new Vector2(position.x, position.y) - Size * 0.5f; // TODO(unrecovered): exact origin formula inferred (grid centered on root)
			}
		}

		public IngGridLayout(Transform root, Vector2 cellSize, int cols, int rows)
		{
			_root = root;
			_cellSize = cellSize;
			_cols = ((cols < 2) ? 1 : cols);
			_rows = ((rows < 2) ? 1 : rows);
		}

		public int CellIndex(Vector2Int c)
		{
			return c.x + _cols * (_rows - 1 - c.y);
		}

		public Vector2Int CellFromIndex(int index)
		{
			int num = index / _cols;
			return new Vector2Int(index - num * _cols, _rows - 1 - num);
		}

		public bool InBounds(Vector2Int c)
		{
			if (c.x >= 0 && c.y >= 0 && c.x < _cols)
			{
				return c.y < _rows;
			}
			return false;
		}

		public bool IsCellEnabled(Vector2Int c)
		{
			if (!InBounds(c))
			{
				return false;
			}
			return !IsNormalCellBlocked(CellIndex(c));
		}

		private bool IsNormalCellBlocked(int index)
		{
			if (_reservedIndex == index)
			{
				return true;
			}
			if (_occupiedCells.Contains(index))
			{
				return true;
			}
			return _lockedCells.Contains(index);
		}

		public void SetReservedCell(int index)
		{
			_reservedIndex = index;
		}

		public void SetCellLocked(int index, bool locked)
		{
			if (locked)
			{
				_lockedCells.Add(index);
			}
			else
			{
				_lockedCells.Remove(index);
			}
		}

		public IEnumerable<Vector2Int> EnabledCells()
		{
			for (int col = 0; col < _cols; col++)
			{
				for (int row = _rows - 1; row >= 0; row--)
				{
					Vector2Int cell = new Vector2Int(col, row);
					if (IsCellEnabled(cell))
					{
						yield return cell;
					}
				}
			}
		}

		public int ScanOrder(Vector2Int c)
		{
			return _rows - 1 - c.y + _rows * c.x;
		}

		public IEnumerable<Vector2Int> EnabledCellsFromRight()
		{
			for (int col = _cols - 1; col >= 0; col--)
			{
				for (int row = _rows - 1; row >= 0; row--)
				{
					Vector2Int cell = new Vector2Int(col, row);
					if (IsCellEnabled(cell))
					{
						yield return cell;
					}
				}
			}
		}

		public int ScanOrderFromRight(Vector2Int c)
		{
			return _rows - 1 - c.y + _rows * (_cols - 1 - c.x);
		}

		public bool AnyEnabledCell()
		{
			for (int i = 0; i < _rows; i++)
			{
				for (int j = 0; j < _cols; j++)
				{
					if (IsCellEnabled(new Vector2Int(j, i)))
					{
						return true;
					}
				}
			}
			return false;
		}

		public Vector3 GetCellWorldCenter(int col, int row)
		{
			Vector2 origin = Origin;
			return new Vector3(origin.x + ((float)col + 0.5f) * _cellSize.x, origin.y + ((float)row + 0.5f) * _cellSize.y, 0f);
		}

		public bool TryWorldToCell(Vector3 worldPos, out Vector2Int cell)
		{
			Vector2 origin = Origin;
			int x = Mathf.FloorToInt((worldPos.x - origin.x) / _cellSize.x);
			int y = Mathf.FloorToInt((worldPos.y - origin.y) / _cellSize.y);
			cell = new Vector2Int(x, y);
			if (x >= 0 && x < _cols && y >= 0)
			{
				return y < _rows;
			}
			return false;
		}

		public bool IsInsideGrid(Vector2 worldPos)
		{
			Vector2Int cell;
			return TryWorldToCell(new Vector3(worldPos.x, worldPos.y, 0f), out cell);
		}

		public void RefreshOccupied(List<GridCellOccupier> occupiers)
		{
			_occupiedCells.Clear();
			if (occupiers == null)
			{
				return;
			}
			foreach (GridCellOccupier occupier in occupiers)
			{
				if ((bool)occupier && occupier.gameObject.activeInHierarchy && occupier.occupiedCellIndices != null)
				{
					for (int i = 0; i < occupier.occupiedCellIndices.Length; i++)
					{
						_occupiedCells.Add(occupier.occupiedCellIndices[i]);
					}
				}
			}
		}
	}
}
