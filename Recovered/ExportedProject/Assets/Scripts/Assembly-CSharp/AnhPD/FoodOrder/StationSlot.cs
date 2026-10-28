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
		public float scaleRation;

		[NonSerialized]
		public bool isOccupied;

		public bool CanAccept(string id)
		{
			return false;
		}

		public void Fill()
		{
		}

		public void Clear()
		{
		}
	}
}
