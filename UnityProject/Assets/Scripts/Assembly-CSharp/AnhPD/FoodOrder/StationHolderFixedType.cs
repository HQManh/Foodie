using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StationHolderFixedType : StationHolder
	{
		[Tooltip("Size of ONE station slot. Holder width = x × active stations; y = holder height (grid row height).")]
		[SerializeField]
		private Vector2 slotSize;

		// TODO(unrecovered): original ctor seeds slotSize from a config static that is not in the stubs; no ctor stub exists to attach it to.

		public override float Width => slotSize.x * ActiveStationCount;

		public override float Height => slotSize.y;

		public override void ActiveStation(string stationId)
		{
			base.ActiveStation(stationId);
			IsActive = true;
			if (stations == null)
			{
				return;
			}
			foreach (CookingStation station in stations)
			{
				if (station.Id == stationId)
				{
					station.gameObject.SetActive(true);
				}
			}
		}

		public override void SetActiveCount(string stationId, int count)
		{
			if (stations == null)
			{
				return;
			}
			int shown = 0;
			foreach (CookingStation station in stations)
			{
				if (station.Id != stationId)
				{
					station.gameObject.SetActive(shown < count);
					if (shown < count)
					{
						shown++;
					}
				}
			}
		}
	}
}
