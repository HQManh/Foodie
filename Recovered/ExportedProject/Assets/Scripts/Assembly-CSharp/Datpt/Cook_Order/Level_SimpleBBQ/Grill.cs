using System.Collections.Generic;
using UnityEngine;

namespace Datpt.Cook_Order.Level_SimpleBBQ
{
	public class Grill : ItemIdleBase
	{
		[SerializeField]
		private float grillTimeConfig;

		[SerializeField]
		private List<SnapOnGrill> lstSnapSkew;

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}
	}
}
