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
		private int resultNumber = 1;

		[SerializeField]
		[FormerlySerializedAs("viewBehaviour")]
		private StationGroupView view;

		private int _filledCount;

		[NonSerialized]
		private IReadOnlyList<string> _anchorIds;

		public StationGroupView View => view ? view : null;

		public bool IsInteracting { get; private set; }

		public bool IsSingle => type == InteractType.Single;

		public bool IsLocked { get; private set; }

		public int FilledCount => _filledCount;

		public void SetLocked(bool locked)
		{
			IsLocked = locked;
		}

		public void SetAnchors(IReadOnlyList<string> anchorIds)
		{
			_anchorIds = anchorIds;
		}

		private bool WaitsForAnchor(string ingId)
		{
			if (_anchorIds == null || _anchorIds.Count == 0)
			{
				return false;
			}
			for (int i = 0; i < _anchorIds.Count; i++)
			{
				if (_anchorIds[i] == ingId)
				{
					return false;
				}
			}
			for (int i = 0; i < _anchorIds.Count; i++)
			{
				if (HasFilled(_anchorIds[i]))
				{
					return false;
				}
			}
			return true;
		}

		private bool HasFilled(string ingId)
		{
			if (slots == null)
			{
				return false;
			}
			for (int i = 0; i < slots.Length; i++)
			{
				if (slots[i].ingId == ingId && slots[i].isOccupied)
				{
					return true;
				}
			}
			return false;
		}

		public bool IsCanInteract(string ingId)
		{
			if (IsLocked || WaitsForAnchor(ingId))
			{
				return false;
			}
			if (slots == null)
			{
				return false;
			}
			foreach (StationSlot slot in slots)
			{
				if (!slot.isOccupied && slot.ingId == ingId)
				{
					return true;
				}
			}
			return false;
		}

		public int GetInteractIndex(string ingId)
		{
			if (IsLocked || WaitsForAnchor(ingId) || (type == InteractType.Single && IsInteracting))
			{
				return -1;
			}
			if (slots == null)
			{
				return -1;
			}
			for (int i = 0; i < slots.Length; i++)
			{
				StationSlot slot = slots[i];
				if (!slot.isOccupied && slot.ingId == ingId)
				{
					return i;
				}
			}
			return -1;
		}

		public void PutInIngredient(int slotIndex, ExecutionContext ctx)
		{
			if (!IsSlotIndex(slotIndex))
			{
				return;
			}
			StationSlot slot = slots[slotIndex];
			slot.isOccupied = true;
			IsInteracting = true;
			_filledCount++;
			StationGroupView groupView = View;
			if (groupView == null)
			{
				return;
			}
			groupView.OnSlotFilled(slotIndex, slot.ingId, ctx);
		}

		public string GetInteractId(int interactIndex)
		{
			return slots[interactIndex].ingId;
		}

		public Transform GetJumpTarget(int slotIndex)
		{
			if (!IsSlotIndex(slotIndex))
			{
				return null;
			}
			Transform target = slots[slotIndex].jumpTarget;
			return target ? target : null;
		}

		public float GetScaleRation(int slotIndex)
		{
			if (IsSlotIndex(slotIndex))
			{
				return slots[slotIndex].scaleRation;
			}
			return 1f;
		}

		private bool IsSlotIndex(int slotIndex)
		{
			return slotIndex >= 0 && slots != null && slotIndex < slots.Length;
		}

		public int CountFreeSlots(string ingId)
		{
			if (GetInteractIndex(ingId) < 0)
			{
				return 0;
			}
			if (type == InteractType.Single)
			{
				return 1;
			}
			int count = 0;
			if (slots != null)
			{
				foreach (StationSlot slot in slots)
				{
					if (!slot.isOccupied && slot.ingId == ingId)
					{
						count++;
					}
				}
			}
			return count;
		}

		public bool AcceptsId(string ingId)
		{
			if (IsLocked || slots == null)
			{
				return false;
			}
			foreach (StationSlot slot in slots)
			{
				if (slot.ingId == ingId)
				{
					return true;
				}
			}
			return false;
		}

		public int GetFirstFilledSlot()
		{
			for (int i = 0; i < slots.Length; i++)
			{
				if (slots[i].isOccupied)
				{
					return i;
				}
			}
			return -1;
		}

		public bool IsReadyToProcess()
		{
			if (type == InteractType.Single)
			{
				return _filledCount > 0;
			}
			return slots.Length <= _filledCount;
		}

		public void OnProcessStart(ExecutionContext ctx)
		{
			StationGroupView groupView = View;
			if (groupView != null)
			{
				groupView.OnProcessStart(ctx);
			}
		}

		public void SetPaused(bool paused)
		{
			StationGroupView groupView = View;
			if (groupView != null)
			{
				groupView.SetPaused(paused);
			}
		}

		public int GetResultNumber()
		{
			return resultNumber;
		}

		public void SetBaseResultNumber(int resultNumber)
		{
			this.resultNumber = resultNumber;
		}

		public void OnComplete()
		{
			IsInteracting = false;
			_filledCount = 0;
			if (slots == null)
			{
				return;
			}
			foreach (StationSlot slot in slots)
			{
				slot.isOccupied = false;
			}
			StationGroupView groupView = View;
			if (groupView != null)
			{
				groupView.OnProcessComplete();
			}
		}
	}
}
