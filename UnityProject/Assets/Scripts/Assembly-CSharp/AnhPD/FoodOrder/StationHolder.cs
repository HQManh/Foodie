using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class StationHolder : MonoBehaviour
	{
		public List<CookingStation> stations = new List<CookingStation>();

		public bool IsActive { get; protected set; }

		public abstract float Width { get; }

		public abstract float Height { get; }

		public int ActiveStationCount
		{
			get
			{
				int count = 0;
				if (stations == null)
				{
					return 0;
				}
				foreach (CookingStation station in stations)
				{
					if (station != null && station.gameObject.activeSelf)
					{
						count++;
					}
				}
				return count;
			}
		}

		public bool HasActiveStation => ActiveStationCount > 0;

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
			if (stations == null)
			{
				return false;
			}
			foreach (CookingStation station in stations)
			{
				if (station.Id == stationId || station.alternativeStringId == stationId)
				{
					return true;
				}
			}
			return false;
		}

		public void Hide()
		{
			gameObject.SetActive(false);
			if (stations != null)
			{
				foreach (CookingStation station in stations)
				{
					station.gameObject.SetActive(false);
				}
			}
		}

		public virtual void ActiveStation(string stationId)
		{
			gameObject.SetActive(true);
		}

		public List<CookingStation> GetActiveStation()
		{
			List<CookingStation> active = new List<CookingStation>();
			if (stations == null)
			{
				return active;
			}
			foreach (CookingStation station in stations)
			{
				if (station.gameObject.activeSelf)
				{
					active.Add(station);
				}
			}
			return active;
		}
	}
}
