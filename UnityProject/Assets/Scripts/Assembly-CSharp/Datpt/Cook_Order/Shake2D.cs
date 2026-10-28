using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Shake2D : ActionBase
	{
		[SerializeField]
		private float duration = 100f;

		[SerializeField]
		private Transform square;

		[SerializeField]
		private ShakeType shakeType;

		public override void OnActive()
		{
			// TODO(unrecovered): picks amplitude/vibrato per shakeType and calls unnamed helper FUN_066d17f0 before DOShakePosition (DOTween); helper has no stub equivalent.
		}

		public override void OnStop()
		{
			// TODO(unrecovered): DOKill on square and resets square.localPosition from the static Vector3 at DAT_0918cbd0->0xb8 (owning class not in stubs).
		}

		protected override void Setup()
		{
			base.Setup();
			if (square == null)
			{
				square = transform.Find("Square"); /* literal recovered by guess */
			}
		}

		public void OnActive(ShakeType shakeType)
		{
			if (this.shakeType == shakeType)
			{
				return;
			}
			this.shakeType = shakeType;
			OnActive();
		}

		private void OnDestroy()
		{
			OnStop();
		}
	}
}
