using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class SpinningCreamMachine : ItemIdleBase
	{
		[SerializeField]
		private Transform snapBowlTf;

		[SerializeField]
		private ObjectShaking objectShaking;

		private BowlCreamItemIngre bowlCreamItemIngre;

		public override Transform OnTakeTF => null;

		private bool isHaveItem => false;

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
