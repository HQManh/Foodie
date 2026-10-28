using System.Collections.Generic;
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

		private readonly List<FCustomerLine> _activeBuffer;

		private bool _squeezed;

		private FCustomerLine _centerParked;

		public float RelayoutDuration => 0f;

		public int NumCells => 0;

		public bool StartFromRight => false;

		public CustomerLineLayout(Transform root, List<FCustomerLine> orderLines, int numCells, float cellSize, float height, float relayoutDuration, float exitMargin, float waitingSpacing, float waitingBaseZ, float waitingDepthZ, FCustomerLine linePrefab, bool startFromRight = false, float petCellRatio = 0.5f, float eatingCellRatio = 0.25f, float orderOffsetCells = 0f)
		{
		}

		private float WaitingZ(int queueIndex)
		{
			return 0f;
		}

		private float PetCellsOf(FCustomerLine line)
		{
			return 0f;
		}

		private float PetCells(float petCells, int boardCount, bool squeezed)
		{
			return 0f;
		}

		private float PetCells(FCustomerLine line, bool squeezed)
		{
			return 0f;
		}

		private float LineCells(float petCells, int boardCount, bool squeezed)
		{
			return 0f;
		}

		private float LineCells(FCustomerLine line, bool squeezed)
		{
			return 0f;
		}

		private float SumActiveCells(bool squeezed)
		{
			return 0f;
		}

		private float PetWidth(FCustomerLine line)
		{
			return 0f;
		}

		private float LineCells(FCustomerLine line)
		{
			return 0f;
		}

		private float PetRight(float petCells)
		{
			return 0f;
		}

		private float PetRight(FCustomerLine line)
		{
			return 0f;
		}

		private int OrderCells(bool fullWidth)
		{
			return 0;
		}

		private static bool IsBossLine(FCustomerLine line)
		{
			return false;
		}

		private bool BufferHasBoss()
		{
			return false;
		}

		private float WaitingSlotLocalX(int queueIndex)
		{
			return 0f;
		}

		public Vector3 WaitingSlotLocal(int queueIndex)
		{
			return default;
		}

		private float OrderCursorStart(float gap, bool fullWidth)
		{
			return 0f;
		}

		public float OrderCursorStartLocalX(bool fullWidth = false)
		{
			return 0f;
		}

		public float CountUsedCells()
		{
			return 0f;
		}

		private float CountUsedCells(bool squeezed)
		{
			return 0f;
		}

		public bool CanFitNewLine(List<OrderSpec> orders, bool incomingIsBoss = false, FCustomerLine incoming = null)
		{
			return false;
		}

		public void PlaceWaitingLine(FCustomerLine line, int queueIndex)
		{
		}

		public void PlaceNewLineAtOrderSlot(FCustomerLine line, List<OrderSpec> orders)
		{
		}

		public void PlaceNewLineAtAreaCenter(FCustomerLine line)
		{
		}

		public void ReleaseCenterPark(FCustomerLine line)
		{
		}

		private float NewLineOrderSlotLocalX(float petCells, int boardCount)
		{
			return 0f;
		}

		public void MoveWaitingLine(FCustomerLine line, int queueIndex)
		{
		}

		public Vector3 RelayoutSnapping(FCustomerLine line)
		{
			return default;
		}

		public void Relayout()
		{
		}

		private void Relayout(FCustomerLine snapLine)
		{
		}

		public float ExitTargetWorldX()
		{
			return 0f;
		}

		public float EntryTargetWorldX()
		{
			return 0f;
		}

		private float EdgeWorldX(float sign)
		{
			return 0f;
		}

		public Rect GetLineLocalRect(FCustomerLine line)
		{
			return default;
		}
	}
}
