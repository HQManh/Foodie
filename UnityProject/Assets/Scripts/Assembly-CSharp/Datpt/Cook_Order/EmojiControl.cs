using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class EmojiControl : PoolingObject
	{
		[SerializeField]
		private Animator spriteAnimator;

		[SerializeField]
		private Transform scaleTransform;

		[SerializeField]
		private float durationShow = 0.25f;

		[SerializeField]
		private float durationHold = 2f;

		[SerializeField]
		private float durationHide = 0.25f;

		[SerializeField]
		private AudioSource audioSource;

		[SerializeField]
		private AudioClip sfxPositive;

		[SerializeField]
		private AudioClip sfxNegative;

		private static readonly int AnimPositive = Animator.StringToHash("Positive" /* literal recovered by guess */);

		private static readonly int AnimNegative = Animator.StringToHash("Negative" /* literal recovered by guess */);

		private Sequence _sequenceShowEmoji;

		private Vector3 _originScale;

		public override void OnSpawn()
		{
			base.OnSpawn();
			// TODO(unrecovered): the rest of OnSpawn stores origin scale components from parameters that the stub signature does not have.
		}

		public void HideEmoji()
		{
			// TODO(unrecovered): builds a DOTween sequence that scales toward a config Vector3 read from an unnamed singleton, whose type is not in the stubs.
		}

		public void ShowPositive(float delay = 0f)
		{
			// TODO(unrecovered): plays an Animator state and builds a DOTween sequence that scales toward a config Vector3 read from an unnamed singleton; the singleton is not in the stubs.
		}

		public void ShowNegative(float delay = 0f)
		{
			// TODO(unrecovered): plays an Animator state and builds a DOTween sequence that scales toward a config Vector3 read from an unnamed singleton; the singleton is not in the stubs.
		}
	}
}
