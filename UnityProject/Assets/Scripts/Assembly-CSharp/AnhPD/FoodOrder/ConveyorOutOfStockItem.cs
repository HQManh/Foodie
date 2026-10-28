using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class ConveyorOutOfStockItem : MonoBehaviour
	{
		[SerializeField]
		private float _widthInItems = 1f;

		public float GetWidth(float itemWidth)
		{
			return Mathf.Max(0.01f, _widthInItems) * itemWidth;
		}
	}
}
