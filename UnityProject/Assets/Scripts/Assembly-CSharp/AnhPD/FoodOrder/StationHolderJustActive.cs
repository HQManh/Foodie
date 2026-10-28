using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StationHolderJustActive : StationHolder
	{
		[SerializeField]
		private CookingStation[] nonActiveStations;

		[Tooltip("Fixed footprint on StationHolderGrid; does not grow with station count.")]
		[SerializeField]
		private Vector2 areaSize;

		// TODO(unrecovered): original ctor seeds areaSize from a config static that is not in the stubs; no ctor stub exists to attach it to.

		public override float Width => areaSize.x;

		public override float Height => areaSize.y;

		public override void ActiveStation(string stationId)
		{
			gameObject.SetActive(true);
			IsActive = true;
		}
	}
}
