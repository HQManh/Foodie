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
		private EIngredienType coneBaseType;

		private bool isHaveItem;

		public override Transform OnTakeTF => null;

		protected override void Editor()
		{
		}

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
