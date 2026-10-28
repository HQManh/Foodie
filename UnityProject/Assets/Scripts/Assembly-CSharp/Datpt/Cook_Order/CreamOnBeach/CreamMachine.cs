using UnityEngine;

namespace Datpt.Cook_Order.CreamOnBeach
{
	public class CreamMachine : ItemIdleBase
	{
		[SerializeField]
		private Transform snapBowlCreamTf;

		[SerializeField]
		private Transform snapBaseConeTf;

		[SerializeField]
		private EIngredienType coneBaseType = (EIngredienType)4;

		[SerializeField]
		private ObjectShaking objectShaking;

		[SerializeField]
		private Shake2D shake2D;

		private ConeCreamBaseShaped currentConeBase;

		private EIngredienType currentBowlCreamType;

		private bool isHaveCream;

		private bool isHaveBaseCone
		{
			get
			{
				if (currentConeBase == null || !currentConeBase.gameObject.activeInHierarchy)
				{
					return false;
				}

				if (snapBaseConeTf == null || currentConeBase.TF == null)
				{
					return false;
				}

				float dx = currentConeBase.TF.position.x - snapBaseConeTf.position.x;
				return Mathf.Abs(dx) < 0.2f;
			}
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): uses DOTween tweens/callbacks, CheckCreateCream and vtable calls on the moving item; the vtable targets are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the item type checks are unnamed IL2CPP type-hierarchy tests and the vtable call cannot be mapped to stub members.
			return false;
		}

		private void CheckCreateCream()
		{
			// TODO(unrecovered): plays a SoundControl effect, then drives the Shake2D component (vtable slots, and a field that is not in the stub) and a DelayedCall; the Shake2D members are not in the stubs.
		}

		private void OnCancelCreateCream()
		{
			// TODO(unrecovered): stops a SoundControl effect and calls a vtable slot on the Shake2D component; the Shake2D members and the effect-stop API are not in the stubs.
		}
	}
}
