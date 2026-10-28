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

		public override float Width => 0f;

		public override float Height => 0f;

		public override void ActiveStation(string stationId)
		{
		}
	}
}
