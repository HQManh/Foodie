using System;
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
		}

		private static void PlaySfxNow(AudioClip clip)
		{
		}

		private void TestMerge(string ingBaseId = "")
		{
		}

		protected virtual void PlayTest(string ingBaseId)
		{
		}
	}
}
