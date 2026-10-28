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
		protected float detectionRadius = 0.25f;

		[SerializeField]
		protected LayerMask detectLayer;

		[SerializeField]
		protected AudioClip clickSfx;

		public override bool IsCanMove => true;

		public bool IsOnTake { get; set; }

		protected virtual void LateUpdate()
		{
			if (tfToCheck != null)
			{
				Collider2D[] hits = Physics2D.OverlapCircleAll(tfToCheck.position, detectionRadius, detectLayer);
				if (hits != null)
				{
					foreach (Collider2D hit in hits)
					{
						OnCheckGotIngre(hit);
					}
					return;
				}
			}
		}

		public virtual void OnCheckGotIngre(Collider2D hit)
		{
		}

		public override void OnClickDown()
		{
			if (!IsCanMove)
			{
				return;
			}
			base.OnClickDown();
			if (clickSfx != null)
			{
				SoundControl ins = SoundControl.Ins;
				if (ins != null)
				{
					ins.PlayFX(clickSfx, false);
				}
			}
			if (idleObj != null)
			{
				idleObj.SetActive(false);
				if (onTakeObj != null)
				{
					onTakeObj.SetActive(true);
					IsOnTake = true;
				}
			}
		}

		public override void OnDrop()
		{
			base.OnDrop();
			IsOnTake = false;
			if (CheckReturnToIdle() && idleObj != null)
			{
				idleObj.SetActive(true);
				if (onTakeObj != null)
				{
					onTakeObj.SetActive(false);
				}
			}
			// TODO(unrecovered): a virtual call at vtable slot 0x378 (argument from 0x380) runs on both the return-to-idle and the not-idle paths; no stub member matches it.
		}

		protected virtual bool CheckReturnToIdle()
		{
			return true;
		}
	}
}
