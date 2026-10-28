using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class StationInteractGroup
	{
		public StationSlot[] slots;

		public InteractType type;

		public string resultId;

		[SerializeField]
		private int resultNumber;

		[SerializeField]
		[FormerlySerializedAs("viewBehaviour")]
		private StationGroupView view;

		private int _filledCount;

		[NonSerialized]
		private IReadOnlyList<string> _anchorIds;

		public StationGroupView View => null;

		public bool IsInteracting { get; private set; }

		public bool IsSingle => false;

		public bool IsLocked { get; private set; }

		public int FilledCount => 0;

		public void SetLocked(bool locked)
		{
		}

		public void SetAnchors(IReadOnlyList<string> anchorIds)
		{
		}

		private bool WaitsForAnchor(string ingId)
		{
			return false;
		}

		private bool HasFilled(string ingId)
		{
			return false;
		}

		public bool IsCanInteract(string ingId)
		{
			return false;
		}

		public int GetInteractIndex(string ingId)
		{
			return 0;
		}

		public void PutInIngredient(int slotIndex, ExecutionContext ctx)
		{
		}

		public string GetInteractId(int interactIndex)
		{
			return null;
		}

		public Transform GetJumpTarget(int slotIndex)
		{
			return null;
		}

		public float GetScaleRation(int slotIndex)
		{
			return 0f;
		}

		private bool IsSlotIndex(int slotIndex)
		{
			return false;
		}

		public int CountFreeSlots(string ingId)
		{
			return 0;
		}

		public bool AcceptsId(string ingId)
		{
			return false;
		}

		public int GetFirstFilledSlot()
		{
			return 0;
		}

		public bool IsReadyToProcess()
		{
			return false;
		}

		public void OnProcessStart(ExecutionContext ctx)
		{
		}

		public void SetPaused(bool paused)
		{
		}

		public int GetResultNumber()
		{
			return 0;
		}

		public void SetBaseResultNumber(int resultNumber)
		{
		}

		public void OnComplete()
		{
		}
	}
}
