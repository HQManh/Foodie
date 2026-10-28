using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StationHolderFixedType : StationHolder
	{
		[Tooltip("Size of ONE station slot. Holder width = x × active stations; y = holder height (grid row height).")]
		[SerializeField]
		private Vector2 slotSize;

		public override float Width => 0f;

		public override float Height => 0f;

		public override void ActiveStation(string stationId)
		{
		}

		public override void SetActiveCount(string stationId, int count)
		{
		}
	}
}
