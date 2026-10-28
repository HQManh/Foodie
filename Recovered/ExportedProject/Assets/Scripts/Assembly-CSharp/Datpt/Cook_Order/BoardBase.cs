using UnityEngine;

namespace Datpt.Cook_Order
{
	public class BoardBase : ItemIdleBase
	{
		[SerializeField]
		protected Transform snapItem;

		[SerializeField]
		protected Transform squareTf;

		[SerializeField]
		protected KnifeBase knifeBase;

		[SerializeField]
		protected ObjectShaking objectShaking;

		private ItemMovingBase currentItemMoving;

		private ItemToCut itemToCut;

		private bool isHaveItem => false;

		protected override void Editor()
		{
		}

		private void Start()
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
