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

		public override Transform OnTakeTF => itemSnapTf;

		protected override void Editor()
		{
			base.Editor();
			binCollider = GetComponent<Collider2D>();
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
			// TODO(unrecovered): uses IL2CPP vtable slots on the moving item, DOTween tweens/callbacks, LevelControlCookOrder.Ins and PocketRandomItem.AddPocketNum; the vtable targets are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the type-hierarchy checks and the vtable call on the moving item cannot be mapped to stub members.
			return false;
		}
	}
}
