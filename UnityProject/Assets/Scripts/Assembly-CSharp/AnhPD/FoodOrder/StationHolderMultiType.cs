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

			public Vector2 size = Vector2.one;
		}

		[Tooltip("Fixed holder area; does not grow with active station count.")]
		[SerializeField]
		private Vector2 areaSize = new Vector2(3f, 1.6f);

		[Tooltip("One station per type, with its size at scale 1. Base `stations` is rebuilt from this — don't edit it.")]
		[SerializeField]
		private List<StationSlot> slots = new List<StationSlot>();

		public override float Width => areaSize.x;

		public override float Height => areaSize.y;

		protected override void Awake()
		{
			SyncStations();
		}

		private void OnValidate()
		{
			SyncStations();
		}

		private void SyncStations()
		{
			stations.Clear();
			foreach (StationSlot slot in slots)
			{
				if (slot.station != null)
				{
					stations.Add(slot.station);
				}
			}
		}

		public override void ActiveStation(string stationId)
		{
			base.ActiveStation(stationId);
			IsActive = true;
			foreach (StationSlot slot in slots)
			{
				if (slot.station != null && slot.station.Id == stationId)
				{
					slot.station.gameObject.SetActive(true);
				}
			}
		}

		public override void SetActiveCount(string stationId, int count)
		{
			foreach (StationSlot slot in slots)
			{
				if (slot.station != null && slot.station.Id == stationId)
				{
					slot.station.gameObject.SetActive(count > 0);
				}
			}
		}

		public override void RefreshStations()
		{
			List<StationSlot> active = new List<StationSlot>();
			float sumHeight = 0f;
			foreach (StationSlot slot in slots)
			{
				if (slot.station != null && slot.station.gameObject.activeSelf)
				{
					active.Add(slot);
					sumHeight += slot.size.y;
				}
			}
			if (active.Count == 0)
			{
				return;
			}
			if (active.Count == 1)
			{
				StationSlot only = active[0];
				float scale = 1f;
				if (only.size.x > 0f)
				{
					scale = areaSize.x / only.size.x;
				}
				Place(only.station, 0f, scale);
				return;
			}
			int gapCount = active.Count - 1;
			float gap = Mathf.Max(0f, areaSize.y - sumHeight) / gapCount;
			float y = (sumHeight + gap * gapCount) * 0.5f;
			foreach (StationSlot slot in active)
			{
				Place(slot.station, y + slot.size.y * -0.5f, 1f);
				y -= gap + slot.size.y;
			}
		}

		private void Place(CookingStation station, float localY, float scale)
		{
			Transform t = station.transform;
			t.localPosition = new Vector3(0f, localY, t.localPosition.z);
			t.localScale = new Vector3(scale, scale, 1f);
		}
	}
}
