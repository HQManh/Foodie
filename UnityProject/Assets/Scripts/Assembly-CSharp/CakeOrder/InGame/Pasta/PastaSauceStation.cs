using AnhPD.FoodOrder;
using CookingGraph;
using UnityEngine;
using UnityEngine.EventSystems;

namespace CakeOrder.InGame.Pasta
{
	public class PastaSauceStation : CookingStationCombineMultiChoice, IPointerClickHandler, IEventSystemHandler
	{
		[SerializeField]
		private CookingGraphAsset graph;

		public bool IsWaitingForManualStart
		{
			get
			{
				if (_orchestrator == null || WorkingResultId != null || groups == null)
				{
					return false;
				}
				foreach (StationInteractGroup group in groups)
				{
					if (group != null && !group.IsLocked && IsManualResult(group.resultId) && group.IsReadyToProcess())
					{
						return true;
					}
				}
				return false;
			}
		}

		public bool IsManualResult(string resultId)
		{
			// TODO(unrecovered): the predicate walks a graph list at graph+0x80 and compares node ids against the station id; the node/field layout is not in the stubs. Returning false.
			return false;
		}

		protected override string ResolveResultId(int groupIndex)
		{
			string result = base.ResolveResultId(groupIndex);
			if (result != null)
			{
				return result;
			}
			if (groups == null || groupIndex != groups.Length)
			{
				return null;
			}
			if (TryGetAcceptingGroup(BaseIngId, out int acceptingGroup))
			{
				return base.ResolveResultId(acceptingGroup);
			}
			return null;
		}

		public override bool TryGetIntakeGroup(string ingId, out int groupIndex, out int freeSlots)
		{
			bool ok = base.TryGetIntakeGroup(ingId, out groupIndex, out freeSlots);
			if (ok && groupIndex < 0 && ingId == BaseIngId && groups != null)
			{
				for (int i = 0; i < groups.Length; i++)
				{
					StationInteractGroup group = groups[i];
					if (group == null)
					{
						break;
					}
					if (group.IsInteracting && !group.IsLocked)
					{
						int count = group.CountFreeSlots(ingId);
						if (count > 0)
						{
							groupIndex = i;
							freeSlots = Mathf.Min(freeSlots, count);
							return true;
						}
					}
				}
			}
			return ok;
		}

		protected override bool CanStartProcess(InteractVector vector)
		{
			if (groups == null || vector.groupIndex < 0 || vector.groupIndex >= groups.Length)
			{
				return false;
			}
			StationInteractGroup group = groups[vector.groupIndex];
			if (group == null)
			{
				return false;
			}
			return !IsManualResult(group.resultId);
		}

		public bool TryStartManualProcess()
		{
			if (_orchestrator == null || !AcceptsNewIntake || !IsWaitingForManualStart)
			{
				return false;
			}
			for (int i = 0; i < groups.Length; i++)
			{
				StationInteractGroup group = groups[i];
				if (group != null && !group.IsLocked && IsManualResult(group.resultId) && group.IsReadyToProcess())
				{
					_orchestrator.TryStartProcess(new InteractVector(i, 0));
					return WorkingResultId == group.resultId;
				}
			}
			return false;
		}

		public void OnPointerClick(PointerEventData eventData)
		{
			// TODO(unrecovered): pseudocode returns early when an int field at eventData+0x188 is nonzero; the field is not identified. Guard omitted.
			TryStartManualProcess();
		}
	}
}
