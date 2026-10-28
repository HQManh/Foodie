using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class StationSlot
	{
		public string ingId;

		public Transform jumpTarget;

		[Min(0f)]
		public float scaleRation = 1f;

		[NonSerialized]
		public bool isOccupied;

		public bool CanAccept(string id)
		{
			if (isOccupied)
			{
				return false;
			}
			return id == ingId;
		}

		public void Fill()
		{
			isOccupied = true;
		}

		public void Clear()
		{
			isOccupied = false;
		}
	}
}
