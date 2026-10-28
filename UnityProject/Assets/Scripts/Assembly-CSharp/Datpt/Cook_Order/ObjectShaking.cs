using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class ObjectShaking : MonoBehaviour
	{
		[SerializeField]
		private Transform tfToShake;

		[SerializeField]
		private float rotStrength = 3f;

		[SerializeField]
		private float duration = 0.2f;

		[SerializeField]
		private int vibrato = 10;

		private Tween rotTween;

		public void Editor()
		{
			tfToShake = transform.Find("Square"); /* literal recovered by guess */
		}

		public void DoNormalShake()
		{
			// TODO(unrecovered): DOTween DOShakeRotation/TweenCallback/DelayedCallScaled setup (Utilities.DelayedCallScaled callees and DG.Tweening shortcut args are not confirmed by stubs).
		}

		public void ShakingObj(Transform tf, float duration = 0.2f, float rotStrength = 1f)
		{
			// TODO(unrecovered): spawns a shaking tween via DOTween helpers and Utilities.DelayedCallScaled; the tween parameters and the static Vector3 at DAT_0918c980 are not in stubs.
		}

		public void StartShake(Transform tf)
		{
			// TODO(unrecovered): stops the previous tween, then DOShakeRotation via DG.Tweening.ShortcutExtensions and FUN_04d962f4/FUN_04d95e8c (tween setters) which have no stub equivalents.
		}

		public void StopShake(Transform tf)
		{
			// TODO(unrecovered): kills rotTween through DG.Tweening.TweenExtensions and resets tf.localRotation from DAT_091898c0 (static rotation owner not in stubs).
		}
	}
}
