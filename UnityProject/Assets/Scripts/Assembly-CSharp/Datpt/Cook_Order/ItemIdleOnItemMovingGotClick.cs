using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ItemIdleOnItemMovingGotClick : ItemIdleBase
	{
		[SerializeField]
		private ItemMovingBase itemTarget;

		protected override void Editor()
		{
			base.Editor();
			if (itemTarget == null)
			{
				itemTarget = GetComponent<ItemMovingBase>();
			}
		}

		public override void OnClickDown()
		{
			if (itemTarget != null)
			{
				itemTarget.OnClickDown();
			}
		}
	}
}
