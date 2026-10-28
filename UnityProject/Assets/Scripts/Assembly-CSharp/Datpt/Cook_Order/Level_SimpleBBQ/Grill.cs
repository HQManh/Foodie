using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class Grill : ItemIdleBase
	{
		[SerializeField]
		private float grillTimeConfig = 5f;

		[SerializeField]
		private List<SnapOnGrill> lstSnapSkew;

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the take path builds a closure over the moving item, moves it onto the first free SnapOnGrill with IL2CPP virtual slots (0x3c8, 0x428), and schedules a DOTween callback; those slots and ItemMovingBase.OnSave's static target are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the fast-path condition reads two ItemMovingBase fields at offsets 0x100/0x110 that do not map to stub fields, then falls back to ItemIdleBase.CheckCanTake.
			return false;
		}
	}
}
