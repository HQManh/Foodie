using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerLineLayout
	{
		private readonly Transform _root;

		private readonly List<FCustomerLine> _orderLines;

		private readonly int _numCells;

		private readonly float _cellSize;

		private readonly float _petCellRatio;

		private readonly float _eatingCellRatio;

		private readonly float _height;

		private readonly float _relayoutDuration;

		private readonly float _exitMargin;

		private readonly float _waitingSpacing;

		private readonly float _orderOffsetX;

		private readonly float _waitingBaseZ;

		private readonly float _waitingDepthZ;

		private readonly float _orderZ;

		private readonly FCustomerLine _linePrefab;

		private readonly bool _startFromRight;

		private readonly List<FCustomerLine> _activeBuffer = new List<FCustomerLine>();

		private bool _squeezed;

		private FCustomerLine _centerParked;

		public float RelayoutDuration => _relayoutDuration;

		public int NumCells => Mathf.Max(1, _numCells);

		public bool StartFromRight => _startFromRight;

		public CustomerLineLayout(Transform root, List<FCustomerLine> orderLines, int numCells, float cellSize, float height, float relayoutDuration, float exitMargin, float waitingSpacing, float waitingBaseZ, float waitingDepthZ, FCustomerLine linePrefab, bool startFromRight = false, float petCellRatio = 0.5f, float eatingCellRatio = 0.25f, float orderOffsetCells = 0f)
		{
			_startFromRight = startFromRight;
			_root = root;
			_orderLines = orderLines;
			_numCells = numCells;
			_relayoutDuration = relayoutDuration;
			_exitMargin = exitMargin;
			if (petCellRatio <= 0f)
			{
				petCellRatio = 1f;
			}
			if (eatingCellRatio <= 0f)
			{
				eatingCellRatio = petCellRatio;
			}
			_cellSize = cellSize;
			_petCellRatio = petCellRatio;
			_eatingCellRatio = eatingCellRatio;
			_height = height;
			_waitingSpacing = ((waitingSpacing > 0f) ? waitingSpacing : cellSize);
			_orderOffsetX = cellSize * orderOffsetCells;
			_waitingBaseZ = waitingBaseZ;
			_waitingDepthZ = waitingDepthZ;
			_orderZ = (linePrefab ? linePrefab.transform.localPosition.z : 0f);
			_linePrefab = linePrefab;
		}

		private float WaitingZ(int queueIndex)
		{
			return _orderZ + _waitingBaseZ + _waitingDepthZ * (float)queueIndex;
		}

		private float PetCellsOf(FCustomerLine line)
		{
			if ((bool)line)
			{
				float? slotCells = line.SlotCells;
				if (slotCells.HasValue)
				{
					return slotCells.Value;
				}
			}
			return _petCellRatio;
		}

		private float PetCells(float petCells, int boardCount, bool squeezed)
		{
			float num = Mathf.Max(1f, petCells);
			if (boardCount < 2 && !squeezed)
			{
				return num;
			}
			return petCells;
		}

		private float PetCells(FCustomerLine line, bool squeezed)
		{
			if ((bool)line && line.IsFinishingOrder)
			{
				return PetCellsOf(line) * (_eatingCellRatio / _petCellRatio);
			}
			float petCells = PetCellsOf(line);
			bool flag = (bool)line && line.OrderBoardCount > 1;
			return PetCells(petCells, flag ? 2 : 1, squeezed);
		}

		private float LineCells(float petCells, int boardCount, bool squeezed)
		{
			return PetCells(petCells, boardCount, squeezed) + (float)boardCount;
		}

		private float LineCells(FCustomerLine line, bool squeezed)
		{
			if (!line)
			{
				return 0f;
			}
			return PetCells(line, squeezed) + (float)line.OrderBoardCount;
		}

		private float SumActiveCells(bool squeezed)
		{
			float num = 0f;
			for (int i = 0; i < _activeBuffer.Count; i++)
			{
				num += LineCells(_activeBuffer[i], squeezed);
			}
			return num;
		}

		private float PetWidth(FCustomerLine line)
		{
			return PetCells(line, _squeezed) * _cellSize;
		}

		private float LineCells(FCustomerLine line)
		{
			return LineCells(line, _squeezed);
		}

		private float PetRight(float petCells)
		{
			return Mathf.Min(petCells, 1f) * 0.5f * _cellSize;
		}

		private float PetRight(FCustomerLine line)
		{
			return _cellSize * Mathf.Min(PetCells(line, _squeezed), 1f) * 0.5f;
		}

		private int OrderCells(bool fullWidth)
		{
			int num = Mathf.Max(1, _numCells) - (fullWidth ? 0 : 1);
			return Mathf.Max(1, num);
		}

		private static bool IsBossLine(FCustomerLine line)
		{
			if ((bool)line && line.SpawnData != null)
			{
				return line.SpawnData.IsBoss;
			}
			return false;
		}

		private bool BufferHasBoss()
		{
			for (int i = 0; i < _activeBuffer.Count; i++)
			{
				if (IsBossLine(_activeBuffer[i]))
				{
					return true;
				}
			}
			return false;
		}

		private float WaitingSlotLocalX(int queueIndex)
		{
			float num = _cellSize * (float)Mathf.Max(1, _numCells) * 0.5f - _cellSize * 0.5f;
			if (_startFromRight)
			{
				return num + _waitingSpacing * (float)queueIndex;
			}
			return 0f - num - _waitingSpacing * (float)queueIndex;
		}

		public Vector3 WaitingSlotLocal(int queueIndex)
		{
			return new Vector3(WaitingSlotLocalX(queueIndex), 0f, WaitingZ(queueIndex));
		}

		private float OrderCursorStart(float gap, bool fullWidth)
		{
			int num = Mathf.Max(1, _numCells);
			if (!fullWidth)
			{
				float num2 = (_startFromRight ? 0f : _cellSize);
				return _orderOffsetX + (num2 + _cellSize * (float)(-num) * 0.5f + gap);
			}
			return _cellSize * (float)(-num) * 0.5f + gap;
		}

		public float OrderCursorStartLocalX(bool fullWidth = false)
		{
			return OrderCursorStart(0f, fullWidth);
		}

		public float CountUsedCells()
		{
			return CountUsedCells(_squeezed);
		}

		private float CountUsedCells(bool squeezed)
		{
			float num = 0f;
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.State != LineState.Empty)
				{
					num += LineCells(orderLine, squeezed);
				}
			}
			return num;
		}

		public bool CanFitNewLine(List<OrderSpec> orders, bool incomingIsBoss = false, FCustomerLine incoming = null)
		{
			float num = 1f;
			if ((bool)_linePrefab)
			{
				num = _linePrefab.GetBoardCount(orders);
			}
			float num2 = CountUsedCells(squeezed: true);
			float num3 = PetCellsOf(incoming);
			return num2 + num + num3 <= (float)OrderCells(incomingIsBoss) + 0.001f;
		}

		public void PlaceWaitingLine(FCustomerLine line, int queueIndex)
		{
			if ((bool)line)
			{
				line.transform.DOKill();
				Vector3 localPosition = line.transform.localPosition;
				line.transform.localPosition = new Vector3(WaitingSlotLocalX(queueIndex), localPosition.y, _orderZ + _waitingBaseZ + _waitingDepthZ * (float)queueIndex);
			}
		}

		public void PlaceNewLineAtOrderSlot(FCustomerLine line, List<OrderSpec> orders)
		{
			if ((bool)line)
			{
				int boardCount = 1;
				if ((bool)_linePrefab)
				{
					boardCount = _linePrefab.GetBoardCount(orders);
				}
				line.transform.DOKill();
				Vector3 localPosition = line.transform.localPosition;
				float x = NewLineOrderSlotLocalX(PetCellsOf(line), boardCount);
				line.transform.localPosition = new Vector3(x, localPosition.y, _orderZ);
			}
		}

		public void PlaceNewLineAtAreaCenter(FCustomerLine line)
		{
			if ((bool)line)
			{
				line.transform.DOKill();
				Vector3 localPosition = line.transform.localPosition;
				line.transform.localPosition = new Vector3(0f, localPosition.y, _orderZ);
				_centerParked = line;
			}
		}

		public void ReleaseCenterPark(FCustomerLine line)
		{
			if (_centerParked == line)
			{
				_centerParked = null;
			}
		}

		private void FillActiveBuffer()
		{
			_activeBuffer.Clear();
			foreach (FCustomerLine orderLine in _orderLines)
			{
				if ((bool)orderLine && orderLine.gameObject.activeSelf && orderLine.State != LineState.Empty && !orderLine.HasVacatedCell)
				{
					_activeBuffer.Add(orderLine);
				}
			}
		}

		private float NewLineOrderSlotLocalX(float petCells, int boardCount)
		{
			FillActiveBuffer();
			int count = _activeBuffer.Count;
			bool flag = BufferHasBoss();
			_squeezed = false;
			int num = Mathf.Max(1, Mathf.Max(1, _numCells) - (flag ? 0 : 1));
			float num2 = SumActiveCells(squeezed: false);
			float num3 = Mathf.Max(1f, petCells);
			float num4 = ((boardCount < 2) ? num3 : petCells);
			float num5 = num4 + (float)boardCount + num2;
			if ((float)num + 0.001f < num5)
			{
				_squeezed = true;
				num5 = (float)boardCount + petCells + SumActiveCells(squeezed: true);
			}
			float num6 = (float)num - num5;
			float num7 = _cellSize * Mathf.Max(0f, num6) / (float)(count + 2);
			float num8 = OrderCursorStart(num7, flag);
			if (_startFromRight)
			{
				for (int i = 0; i < _activeBuffer.Count; i++)
				{
					float num9 = LineCells(_activeBuffer[i], _squeezed);
					num8 += num7 + num9 * _cellSize;
				}
			}
			if (!_squeezed && boardCount < 2)
			{
				petCells = num3;
			}
			return num8 + _cellSize * petCells + _cellSize * Mathf.Min(petCells, 1f) * -0.5f;
		}

		public void MoveWaitingLine(FCustomerLine line, int queueIndex)
		{
			if ((bool)line)
			{
				line.transform.DOKill();
				float x = WaitingSlotLocalX(queueIndex);
				Vector3 localPosition = line.transform.localPosition;
				line.transform.DOLocalMove(new Vector3(x, localPosition.y, _orderZ + _waitingBaseZ + _waitingDepthZ * (float)queueIndex), _relayoutDuration).SetEase(Ease.Linear);
			}
		}

		public Vector3 RelayoutSnapping(FCustomerLine line)
		{
			if (!line)
			{
				Relayout();
				return Vector3.zero;
			}
			Vector3 position = line.transform.position;
			Relayout(line);
			Vector3 position2 = line.transform.position;
			return position - position2;
		}

		public void Relayout()
		{
			Relayout(null);
		}

		private void Relayout(FCustomerLine snapLine)
		{
			FillActiveBuffer();
			int count = _activeBuffer.Count;
			if (count == 0)
			{
				return;
			}
			bool flag = BufferHasBoss();
			_squeezed = false;
			int num = Mathf.Max(1, Mathf.Max(1, _numCells) - (flag ? 0 : 1));
			float num2 = SumActiveCells(squeezed: false);
			if ((float)num + 0.001f < num2)
			{
				_squeezed = true;
				num2 = SumActiveCells(squeezed: true);
			}
			float num3 = (float)num - num2;
			float num4 = _cellSize * Mathf.Max(0f, num3) / (float)(count + 1);
			float num5 = OrderCursorStart(num4, flag);
			for (int i = 0; i < count; i++)
			{
				int index = (_startFromRight ? i : (count - 1 - i));
				FCustomerLine fCustomerLine = _activeBuffer[index];
				float num6 = LineCells(fCustomerLine, _squeezed);
				float cellSize = _cellSize;
				if (fCustomerLine != _centerParked)
				{
					float num7 = PetCells(fCustomerLine, _squeezed);
					float x = num5 + num7 * _cellSize + _cellSize * Mathf.Min(num7, 1f) * -0.5f;
					fCustomerLine.transform.DOKill();
					Vector3 localPosition = fCustomerLine.transform.localPosition;
					Vector3 vector = new Vector3(x, localPosition.y, _orderZ);
					if (fCustomerLine == snapLine)
					{
						fCustomerLine.transform.localPosition = vector;
					}
					else
					{
						fCustomerLine.transform.DOLocalMove(vector, _relayoutDuration).SetEase(Ease.Linear);
					}
				}
				num5 += num4 + num6 * cellSize;
			}
		}

		public float ExitTargetWorldX()
		{
			return EdgeWorldX(_startFromRight ? (-1f) : 1f);
		}

		public float EntryTargetWorldX()
		{
			return EdgeWorldX(_startFromRight ? 1f : (-1f));
		}

		private float EdgeWorldX(float sign)
		{
			int num = Mathf.Max(1, _numCells);
			return _root.TransformPoint((_exitMargin + _cellSize * (float)num * 0.5f) * sign, 0f, 0f).x;
		}

		public Rect GetLineLocalRect(FCustomerLine line)
		{
			Vector3 localPosition = line.transform.localPosition;
			float width = LineCells(line) * _cellSize;
			float num = PetCells(line, _squeezed);
			float x = localPosition.x + _cellSize * Mathf.Min(num, 1f) * 0.5f - num * _cellSize;
			// TODO(unrecovered): only the x origin was visible in the pseudocode; y/width/height of the Rect are a best guess
			return new Rect(x, localPosition.y, width, _height);
		}
	}
}
