using System;
using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class StationHolderMultiType : StationHolder
	{
		[Serializable]
		public class StationSlot
		{
			public CookingStation station;

			public Vector2 size;
		}

		[Tooltip("Fixed holder area; does not grow with active station count.")]
		[SerializeField]
		private Vector2 areaSize;

		[Tooltip("One station per type, with its size at scale 1. Base `stations` is rebuilt from this — don't edit it.")]
		[SerializeField]
		private List<StationSlot> slots;

		public override float Width => 0f;

		public override float Height => 0f;

		protected override void Awake()
		{
		}

		private void OnValidate()
		{
		}

		private void SyncStations()
		{
		}

		public override void ActiveStation(string stationId)
		{
		}

		public override void SetActiveCount(string stationId, int count)
		{
		}

		public override void RefreshStations()
		{
		}

		private void Place(CookingStation station, float localY, float scale)
		{
		}
	}
}
