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
		private EIngredienType coneBaseType;

		[SerializeField]
		private ObjectShaking objectShaking;

		[SerializeField]
		private Shake2D shake2D;

		private ConeCreamBaseShaped currentConeBase;

		private EIngredienType currentBowlCreamType;

		private bool isHaveCream;

		private bool isHaveBaseCone => false;

		public override bool OnTake(IItem.IItemMoving item)
		{
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			return false;
		}

		private void CheckCreateCream()
		{
		}

		private void OnCancelCreateCream()
		{
		}
	}
}
