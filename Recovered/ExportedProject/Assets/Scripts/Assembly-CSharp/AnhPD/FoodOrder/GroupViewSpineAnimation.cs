using System;
using System.Collections.Generic;
using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewSpineAnimation : StationGroupView
	{
		[Serializable]
		private class EventSfx
		{
			[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string spineEvent;

			public AudioClip clip;

			[Range(0f, 1f)]
			public float volume;

			public bool everyEvent;

			[NonSerialized]
			public bool played;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string anim;

		[SerializeField]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
		private string skin;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idlePoseAnim;

		[SerializeField]
		[Min(0f)]
		private float idlePoseTime;

		[SerializeField]
		[SpineBone(null, null, true, false, dataField = "skeletonAnimation")]
		private string[] idlePoseBones;

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fxEvent;

		[SerializeField]
		private bool fxEveryEvent;

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		private float sfxDelay;

		[SerializeField]
		private List<EventSfx> eventSfxs;

		private Spine.Animation _idlePose;

		private bool _isPaused;

		private float _pausedTimeScale;

		private float _speedRate;

		private bool _fxPlayed;

		private Tween _sfxDelay;

		protected SkeletonAnimation SpineAnimation => null;

		private bool HasIdle => false;

		private void Start()
		{
		}

		private void PlayIdle()
		{
		}

		private Spine.Animation IdlePose()
		{
			return null;
		}

		public override void Play(float duration)
		{
		}

		private void HandleSpineEvent(TrackEntry trackEntry, Spine.Event e)
		{
		}

		private void PlayEventSfx(string eventName)
		{
		}

		private void ResetEventSfx()
		{
		}

		private void PlayFx()
		{
		}

		private void PlaySfx()
		{
		}

		private void KillSfxDelay()
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

		private void SetSkin(string skinName)
		{
		}

		private void OnDisable()
		{
		}

		public override void SetPaused(bool paused)
		{
		}
	}
}
