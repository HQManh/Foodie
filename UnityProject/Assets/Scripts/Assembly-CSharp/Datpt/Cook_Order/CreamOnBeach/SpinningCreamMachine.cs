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

		public override Transform OnTakeTF => snapBowlTf;

		private bool isHaveItem => false; // TODO(unrecovered): the pseudocode checks a moving item's position against snapBowlTf through unnamed helpers; the field layout is not confirmed by the stubs.

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): uses DOTween tweens, SoundControl and vtable calls on the moving item; the vtable targets are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the item type checks are unnamed IL2CPP type-hierarchy tests and the vtable call cannot be mapped to stub members.
			return false;
		}
	}
}
