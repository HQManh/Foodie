using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class ConeCreamBaseMachine : ItemIdleBase
	{
		[SerializeField]
		private Transform snapConeBaseTf;

		[SerializeField]
		private Transform tfOutNewIngre;

		[SerializeField]
		private ObjectShaking objectShaking;

		[SerializeField]
		private EIngredienType coneBaseType = (EIngredienType)4;

		private bool isHaveItem;

		public override Transform OnTakeTF => snapConeBaseTf;

		protected override void Editor()
		{
			base.Editor();
			// TODO(unrecovered): the pseudocode looks up ObjectShaking through two unnamed component lookups (direct, then a child lookup) whose type arguments are not recoverable from the stubs.
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): uses DOTween scale/callback chains, SoundControl and vtable calls on the moving item; the vtable targets are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the item type check is an unnamed IL2CPP type-hierarchy test; the target type cannot be identified from the stubs.
			return false;
		}
	}
}
