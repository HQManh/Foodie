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
			GameObject[] array = flavor;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].SetActive(value: false);
			}
			array = addOn;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].SetActive(value: false);
			}
		}

		public void Display(int flavorIndex, bool hasCheese, bool hasChives)
		{
			flavor[flavorIndex].SetActive(value: true);
			addOn[0].SetActive(hasCheese);
			addOn[1].SetActive(hasChives);
		}

		public void DisplayAllFlavors(bool hasCheese, bool hasChives)
		{
			GameObject[] array = flavor;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].SetActive(value: true);
			}
			addOn[0].SetActive(hasCheese);
			addOn[1].SetActive(hasChives);
		}
	}
}
