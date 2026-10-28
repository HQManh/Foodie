using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemToSell : ItemMovingBase, IItemToSell
	{
		[SerializeField]
		private float price = 1f;

		public float Price
		{
			get
			{
				return price;
			}
			set
			{
				price = value;
			}
		}
	}
}
