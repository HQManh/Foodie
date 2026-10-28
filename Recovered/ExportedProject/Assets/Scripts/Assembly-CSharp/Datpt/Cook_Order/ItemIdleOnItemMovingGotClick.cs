using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemIdleOnItemMovingGotClick : ItemIdleBase
	{
		[SerializeField]
		private ItemMovingBase itemTarget;

		protected override void Editor()
		{
		}

		public override void OnClickDown()
		{
		}
	}
}
