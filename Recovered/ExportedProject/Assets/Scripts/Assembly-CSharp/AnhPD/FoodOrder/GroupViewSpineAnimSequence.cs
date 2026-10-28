using System;
using System.Collections.Generic;
using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewSpineAnimSequence : StationGroupView
	{
		[Serializable]
		private class AnimStep
		{
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			[Min(0.01f)]
			public float speed;

			public AudioClip sfx;

			[Min(0f)]
			public float sfxDelay;
		}

		private const float MinSpeed = 0.01f;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		public string idle;

		[SerializeField]
		private List<AnimStep> steps;

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private AudioSource baseSfx;

		private AudioClip _openingSfx;

		private float _openingSfxSpeed;

		private float _openingSfxDelay;

		private readonly List<Tween> _pendingSfx;

		private bool _isPaused;

		private float _pausedTimeScale;

		private float _speedRate;

		public override void Play(float duration)
		{
		}

		private float QueueChain(Spine.AnimationState state, SkeletonData skeletonData)
		{
			return 0f;
		}

		private void PlayStepSfx(AudioClip clip, float stepSpeed, float delay)
		{
		}

		private static void PlayAt(AudioClip clip, float rate)
		{
		}

		private void KillPendingSfx()
		{
		}

		private void SetPendingSfxPaused(bool paused)
		{
		}

		public override float GetPlayDuration(float duration)
		{
			return 0f;
		}

		public override void Stop()
		{
		}

		private void ResetToSetupPose()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void PlayFx()
		{
		}
	}
}
