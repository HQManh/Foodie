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

		private bool isHaveItem
		{
			get
			{
				if (currentItemMoving == null || !currentItemMoving.gameObject.activeSelf)
				{
					return false;
				}

				if (snapItem == null)
				{
					return false;
				}

				float dx = currentItemMoving.transform.position.x - snapItem.position.x;
				return Mathf.Abs(dx) < 0.2f;
			}
		}

		protected override void Editor()
		{
			base.Editor();
			squareTf = transform.Find("Square" /* literal recovered by guess */);
		}

		private void Start()
		{
			// TODO(unrecovered): the handler delegate passed to KnifeBase.OnCut is an unnamed method; its target is not in the stubs.
		}

		public override bool OnTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): uses IL2CPP vtable slots on the moving item, DOTween tweens/callbacks and Utilities.DelayedCallScaled; the vtable targets are not in the stubs.
			return false;
		}

		public override bool CheckCanTake(IItem.IItemMoving item)
		{
			// TODO(unrecovered): the type-hierarchy checks and the vtable call on the moving item cannot be mapped to stub members.
			return false;
		}
	}
}
