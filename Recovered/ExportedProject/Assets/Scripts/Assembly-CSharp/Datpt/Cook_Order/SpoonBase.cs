using UnityEngine;

namespace Datpt.Cook_Order
{
	public class SpoonBase : ItemMovingBase
	{
		[SerializeField]
		protected GameObject idleObj;

		[SerializeField]
		protected GameObject onTakeObj;

		[SerializeField]
		protected Transform tfToCheck;

		[SerializeField]
		protected float detectionRadius;

		[SerializeField]
		protected LayerMask detectLayer;

		[SerializeField]
		protected AudioClip clickSfx;

		public override bool IsCanMove => false;

		public bool IsOnTake { get; set; }

		protected virtual void LateUpdate()
		{
		}

		public virtual void OnCheckGotIngre(Collider2D hit)
		{
		}

		public override void OnClickDown()
		{
		}

		public override void OnDrop()
		{
		}

		protected virtual bool CheckReturnToIdle()
		{
			return false;
		}
	}
}
