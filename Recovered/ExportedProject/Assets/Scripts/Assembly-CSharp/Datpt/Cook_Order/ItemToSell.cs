using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemToSell : ItemMovingBase, IItemToSell
	{
		[SerializeField]
		private float price;

		public float Price
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}
	}
}
