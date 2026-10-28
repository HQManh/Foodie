using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public class CookingStationSharedFirst : CookingStation
	{
		private HashSet<string> _shared;

		private readonly List<string> _moving = new List<string>();

		private static bool _choosing;

		private bool IsShared(string ingId)
		{
			if (_shared == null)
			{
				BuildShared();
			}
			if (ingId == null)
			{
				return false;
			}
			return _shared.Contains(ingId);
		}

		private void BuildShared()
		{
			_shared = new HashSet<string>();
			HashSet<string> hashSet = new HashSet<string>();
			for (int i = 0; i < groups.Length; i++)
			{
				StationInteractGroup stationInteractGroup = groups[i];
				if (stationInteractGroup == null || stationInteractGroup.slots == null)
				{
					continue;
				}
				HashSet<string> hashSet2 = new HashSet<string>();
				StationSlot[] slots = stationInteractGroup.slots;
				for (int j = 0; j < slots.Length; j++)
				{
					StationSlot stationSlot = slots[j];
					if (stationSlot != null && !string.IsNullOrEmpty(stationSlot.ingId))
					{
						hashSet2.Add(stationSlot.ingId);
					}
				}
				foreach (string item in hashSet2)
				{
					if (!hashSet.Add(item))
					{
						_shared.Add(item);
					}
				}
			}
		}

		protected int InteractingGroup()
		{
			for (int i = 0; i < groups.Length; i++)
			{
				if (groups[i].IsInteracting)
				{
					return i;
				}
			}
			return -1;
		}

		private bool HoldsOnlyShared(int groupIndex)
		{
			StationSlot[] slots = groups[groupIndex].slots;
			if (slots.Length < 1)
			{
				return false;
			}
			bool result = false;
			for (int i = 0; i < slots.Length; i++)
			{
				if (slots[i].isOccupied)
				{
					if (!IsShared(slots[i].ingId))
					{
						return false;
					}
					result = true;
				}
			}
			return result;
		}

		private static int FreeSlotOf(StationInteractGroup group, string ingId)
		{
			for (int i = 0; i < group.slots.Length; i++)
			{
				if (group.slots[i].ingId == ingId && !group.slots[i].isOccupied)
				{
					return i;
				}
			}
			return -1;
		}

		private bool CanHoldMoved(StationInteractGroup target, int from)
		{
			HashSet<int> hashSet = new HashSet<int>();
			StationSlot[] slots = groups[from].slots;
			for (int i = 0; i < slots.Length; i++)
			{
				StationSlot stationSlot = slots[i];
				if (!stationSlot.isOccupied)
				{
					continue;
				}
				bool flag = false;
				for (int j = 0; j < target.slots.Length; j++)
				{
					if (!hashSet.Contains(j) && target.slots[j].ingId == stationSlot.ingId)
					{
						hashSet.Add(j);
						flag = true;
						break;
					}
				}
				if (!flag)
				{
					return false;
				}
			}
			return true;
		}

		private bool TryGetRegroupVector(string ingId, out InteractVector vector)
		{
			vector = InteractVector.Invalid;
			if (IsShared(ingId))
			{
				return false;
			}
			int num = InteractingGroup();
			if (num < 0)
			{
				return false;
			}
			if (!HoldsOnlyShared(num))
			{
				return false;
			}
			LevelInfo levelInfo = null;
			if ((bool)MessyController.Ins)
			{
				levelInfo = MessyController.Ins.Info;
			}
			int num2 = int.MinValue;
			for (int i = 0; i < groups.Length; i++)
			{
				if (i == num)
				{
					continue;
				}
				StationInteractGroup stationInteractGroup = groups[i];
				if (stationInteractGroup.IsLocked)
				{
					continue;
				}
				int num3 = FreeSlotOf(stationInteractGroup, ingId);
				if (num3 >= 0 && CanHoldMoved(stationInteractGroup, num))
				{
					int num4 = 0;
					if (levelInfo != null && !_choosing)
					{
						_choosing = true;
						num4 = levelInfo.StationResultDemand(ResolveResultId(i));
						_choosing = false;
					}
					if (num2 < num4)
					{
						vector = new InteractVector(i, num3);
						num2 = num4;
					}
				}
			}
			if (vector.groupIndex < 0)
			{
				return false;
			}
			return vector.interactIndex >= 0;
		}

		public override InteractVector GetInteractVector(string ingId)
		{
			InteractVector interactVector = base.GetInteractVector(ingId);
			if (!interactVector.IsValid && TryGetRegroupVector(ingId, out var vector))
			{
				return vector;
			}
			return interactVector;
		}

		public override bool TryGetIntakeGroup(string ingId, out int groupIndex, out int freeSlots)
		{
			if (base.TryGetIntakeGroup(ingId, out groupIndex, out freeSlots))
			{
				return true;
			}
			if (groupIndex < 0 || !TryGetRegroupVector(ingId, out var vector) || vector.groupIndex != groupIndex)
			{
				return false;
			}
			freeSlots = 1;
			return true;
		}

		public override int CountFreeSlots(string ingId)
		{
			if (!IsShared(ingId))
			{
				return base.CountFreeSlots(ingId);
			}
			InteractVector interactVector = GetInteractVector(ingId);
			if (!interactVector.IsValid)
			{
				return 0;
			}
			int num = groups[interactVector.groupIndex].CountFreeSlots(ingId);
			if (num < 2)
			{
				num = 1;
			}
			return num;
		}

		public override void PutInIngredient(InteractVector vector)
		{
			int num = InteractingGroup();
			if (vector.IsValid && num >= 0 && num != vector.groupIndex && HoldsOnlyShared(num))
			{
				Regroup(num, vector.groupIndex);
			}
			base.PutInIngredient(vector);
		}

		private void Regroup(int from, int to)
		{
			_moving.Clear();
			StationSlot[] slots = groups[from].slots;
			for (int i = 0; i < slots.Length; i++)
			{
				if (slots[i].isOccupied)
				{
					_moving.Add(slots[i].ingId);
				}
			}
			groups[from].OnComplete();
			foreach (string item in _moving)
			{
				int num = FreeSlotOf(groups[to], item);
				if (num >= 0)
				{
					base.PutInIngredient(new InteractVector(to, num));
				}
			}
		}
	}
}
