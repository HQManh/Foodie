using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Bin : ItemIdleBase
	{
		[SerializeField]
		private Transform snapTf;

		[SerializeField]
		private Transform itemSnapTf;

		[SerializeField]
		private Collider2D binCollider;

		private const string BinIdTween = "BinTween";

		private float countIngreCuttedRemove;

		public override Transform OnTakeTF => null;

		protected override void Editor()
		{
		}

		private void Start()
		{
		}

		public void MoveIn()
		{
		}

		public void MoveOut()
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
