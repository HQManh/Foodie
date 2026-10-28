using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class KFCDisplay : MonoBehaviour
	{
		[SerializeField]
		private KFCSingle[] kfcArray;

		public void Display(int typeIndex, int flavorIndex, bool hasCheese, bool hasChives)
		{
			KFCSingle[] array = kfcArray;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].Clear();
			}
			kfcArray[typeIndex].Display(flavorIndex, hasCheese, hasChives);
		}

		public void DisplayAllFlavors(int typeIndex, bool hasCheese, bool hasChives)
		{
			KFCSingle[] array = kfcArray;
			for (int i = 0; i < array.Length; i++)
			{
				array[i].Clear();
			}
			kfcArray[typeIndex].DisplayAllFlavors(hasCheese, hasChives);
		}
	}
}
