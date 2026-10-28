using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class StationHolder : MonoBehaviour
	{
		public List<CookingStation> stations;

		public bool IsActive { get; protected set; }

		public abstract float Width { get; }

		public abstract float Height { get; }

		public int ActiveStationCount => 0;

		public bool HasActiveStation => false;

		public virtual void RefreshStations()
		{
		}

		public virtual void SetActiveCount(string stationId, int count)
		{
		}

		protected virtual void Awake()
		{
		}

		public bool IsContainStationId(string stationId)
		{
			return false;
		}

		public void Hide()
		{
		}

		public virtual void ActiveStation(string stationId)
		{
		}

		public List<CookingStation> GetActiveStation()
		{
			return null;
		}
	}
}
