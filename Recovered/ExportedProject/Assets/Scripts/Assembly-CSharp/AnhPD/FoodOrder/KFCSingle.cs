using System;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	[Serializable]
	public class KFCSingle
	{
		[SerializeField]
		private GameObject[] flavor;

		[SerializeField]
		private GameObject[] addOn;

		public void Clear()
		{
		}

		public void Display(int flavorIndex, bool hasCheese, bool hasChives)
		{
		}

		public void DisplayAllFlavors(bool hasCheese, bool hasChives)
		{
		}
	}
}
