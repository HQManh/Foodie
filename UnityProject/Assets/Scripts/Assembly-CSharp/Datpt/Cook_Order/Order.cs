using System;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Order : ItemIdleBase
	{
		[SerializeField]
		protected Transform tfToScale;

		[SerializeField]
		protected float showTime;

		[SerializeField]
		protected GameObject completeIconOnOrderObj;

		protected bool isShowing;

		public Action OnCompleteOrder;

		public Action OnWrongOrder;

		public bool IsComplete { get; set; }

		protected override void Editor()
		{
			base.Editor();
			// TODO(unrecovered): sets tfToScale.localScale from the static Vector3 at DAT_0918cbd0->0xb8 (owning class not in stubs).
		}

		public virtual void Init()
		{
			OnCompleteOrder = null;
			OnWrongOrder = null;
			IsComplete = false;
			if (completeIconOnOrderObj != null)
			{
				completeIconOnOrderObj.SetActive(false);
				ResetOrder();
			}
		}

		public virtual void ShowOrder()
		{
			if (!isShowing)
			{
				isShowing = true;
				// TODO(unrecovered): DOScale tween of tfToScale plus Utilities.DelayedCallScaled(showTime) that calls the virtual HideOrder(null); DOTween and static scale owner are not in stubs.
			}
		}

		public void OnChangeOrder()
		{
			// TODO(unrecovered): DOScale tween of tfToScale with a TweenCallback that sets isShowing = false and calls ResetOrder(); DOTween and static scale owner are not in stubs.
		}

		public virtual void HideOrder(Action onComplete = null)
		{
			// TODO(unrecovered): DOScale tween of tfToScale and a tween callback (isShowing = false; onComplete()); the virtual dispatch at vtable 0x328 before the tween has no stub member.
		}

		public virtual void ResetOrder()
		{
		}

		public override void OnClickDown()
		{
			ResetOrder();
			SoundControl.Ins?.PlayFX(Datpt.ESfx.Click, false);
		}
	}
}
