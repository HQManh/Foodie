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
		private float durationShow;

		[SerializeField]
		private float durationHold;

		[SerializeField]
		private float durationHide;

		[SerializeField]
		private AudioSource audioSource;

		[SerializeField]
		private AudioClip sfxPositive;

		[SerializeField]
		private AudioClip sfxNegative;

		private static readonly int AnimPositive;

		private static readonly int AnimNegative;

		private Sequence _sequenceShowEmoji;

		private Vector3 _originScale;

		public override void OnSpawn()
		{
		}

		public void HideEmoji()
		{
		}

		public void ShowPositive(float delay = 0f)
		{
		}

		public void ShowNegative(float delay = 0f)
		{
		}
	}
}
