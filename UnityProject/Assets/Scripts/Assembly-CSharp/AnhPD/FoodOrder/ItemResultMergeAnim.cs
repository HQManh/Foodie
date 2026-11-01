using System;
using CakeOrder;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Serialization;

namespace AnhPD.FoodOrder
{
	public abstract class ItemResultMergeAnim : MonoBehaviour
	{
		[SerializeField]
		[Min(0f)]
		[FormerlySerializedAs("mergeSfxDelay")]
		private float sfxDelay;

		private Tween _sfxDelayTween;

		public abstract bool Handles(string ingBaseId);

		public abstract float GetMaxDuration(string ingBaseId);

		public abstract void Play(DragItem result, string ingBaseId, Action onComplete);

		protected void PlayMergeSfx(AudioClip clip)
		{
			_sfxDelayTween?.Kill();
			_sfxDelayTween = null;
			if (!clip)
			{
				return;
			}
			if (sfxDelay > 0f)
			{
				_sfxDelayTween = DOVirtual.DelayedCall(sfxDelay, delegate
				{
					_sfxDelayTween = null;
					PlaySfxNow(clip);
				}).SetLink(base.gameObject);
			}
			else
			{
				PlaySfxNow(clip);
			}
		}

		private static void PlaySfxNow(AudioClip clip)
		{
			if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(clip, 1f, (AudioManagerCakeOrder.AudioTrack)5);
		}

		private void TestMerge(string ingBaseId = "")
		{
			if (Application.isPlaying)
			{
				PlayTest(ingBaseId);
			}
			else
			{
				Debug.LogWarning("[" + GetType().Name + "] TestMerge only works in play mode.", this);
			}
		}

		protected virtual void PlayTest(string ingBaseId)
		{
			Play(null, ingBaseId, null);
		}
	}
}
