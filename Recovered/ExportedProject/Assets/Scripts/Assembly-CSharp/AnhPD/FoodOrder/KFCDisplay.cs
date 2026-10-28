using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class KFCDisplay : MonoBehaviour
	{
		[SerializeField]
		private KFCSingle[] kfcArray;

		public void Display(int typeIndex, int flavorIndex, bool hasCheese, bool hasChives)
		{
		}

		public void DisplayAllFlavors(int typeIndex, bool hasCheese, bool hasChives)
		{
		}
	}
}
