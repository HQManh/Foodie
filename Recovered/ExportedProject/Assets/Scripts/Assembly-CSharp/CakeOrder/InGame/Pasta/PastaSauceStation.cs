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

		public bool IsWaitingForManualStart => false;

		public bool IsManualResult(string resultId)
		{
			return false;
		}

		protected override string ResolveResultId(int groupIndex)
		{
			return null;
		}

		public override bool TryGetIntakeGroup(string ingId, out int groupIndex, out int freeSlots)
		{
			groupIndex = default;
			freeSlots = default;
			return false;
		}

		protected override bool CanStartProcess(InteractVector vector)
		{
			return false;
		}

		public bool TryStartManualProcess()
		{
			return false;
		}

		public void OnPointerClick(PointerEventData eventData)
		{
		}
	}
}
