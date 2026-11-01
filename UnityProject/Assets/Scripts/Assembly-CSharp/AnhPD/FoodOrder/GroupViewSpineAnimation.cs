using System;
using System.Collections.Generic;
using CakeOrder;
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
			public float volume = 1f;

			public bool everyEvent = true;

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
		private List<EventSfx> eventSfxs = new List<EventSfx>();

		private Spine.Animation _idlePose;

		private bool _isPaused;

		private float _pausedTimeScale = 1f;

		private float _speedRate = 1f;

		private bool _fxPlayed;

		private Tween _sfxDelay;

		protected SkeletonAnimation SpineAnimation => skeletonAnimation;

		private bool HasIdle
		{
			get
			{
				if (!skeletonAnimation)
				{
					return false;
				}
				if (string.IsNullOrEmpty(idleAnim))
				{
					return !string.IsNullOrEmpty(idlePoseAnim);
				}
				return true;
			}
		}

		private void Start()
		{
			if (HasIdle)
			{
				PlayIdle();
			}
		}

		private void PlayIdle()
		{
			skeletonAnimation.gameObject.SetActive(true);
			skeletonAnimation.timeScale = 1f;
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			if (state == null)
			{
				return;
			}
			Spine.Animation pose = IdlePose();
			if (pose == null)
			{
				if (!string.IsNullOrEmpty(idleAnim))
				{
					state.SetAnimation(0, idleAnim, true);
				}
				return;
			}
			TrackEntry entry = state.SetAnimation(0, pose, true);
			float t = Mathf.Min(idlePoseTime, pose.Duration);
			entry.AnimationStart = t;
			entry.AnimationEnd = t;
		}

		private Spine.Animation IdlePose()
		{
			if (_idlePose != null || string.IsNullOrEmpty(idlePoseAnim) || idlePoseBones == null)
			{
				return _idlePose;
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null || skeleton.Data == null)
			{
				return null;
			}
			SkeletonData data = skeleton.Data;
			Spine.Animation source = data.FindAnimation(idlePoseAnim);
			if (source == null)
			{
				return null;
			}
			HashSet<int> boneIndices = new HashSet<int>();
			for (int i = 0; i < idlePoseBones.Length; i++)
			{
				BoneData bone = data.FindBone(idlePoseBones[i]);
				if (bone != null)
				{
					boneIndices.Add(bone.Index);
				}
			}
			ExposedList<Timeline> kept = new ExposedList<Timeline>();
			foreach (Timeline timeline in source.Timelines)
			{
				IBoneTimeline boneTimeline = timeline as IBoneTimeline;
				if (boneTimeline != null && boneIndices.Contains(boneTimeline.BoneIndex))
				{
					kept.Add(timeline);
				}
			}
			_idlePose = new Spine.Animation(idlePoseAnim + "@pose" /* decoded from the metadata */, kept, source.Duration);
			return _idlePose;
		}

		public override void Play(float duration)
		{
			base.gameObject.SetActive(true);
			if (!skeletonAnimation || string.IsNullOrEmpty(anim))
			{
				return;
			}
			skeletonAnimation.gameObject.SetActive(true);
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			if (state == null)
			{
				return;
			}
			SetSkin(skin);
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null)
			{
				skeleton.SetToSetupPose();
			}
			TrackEntry entry = state.SetAnimation(0, anim, false);
			if (entry == null)
			{
				return;
			}
			if (!string.IsNullOrEmpty(fxEvent) || eventSfxs.Count > 0)
			{
				entry.Event += HandleSpineEvent;
			}
			_fxPlayed = false;
			ResetEventSfx();
			float length = entry.Animation.Duration;
			float rate = ((length > 0f && duration > 0f) ? (length / duration) : 1f);
			float scale = 0f;
			if (!_isPaused)
			{
				scale = rate;
			}
			else
			{
				_pausedTimeScale = rate;
			}
			skeletonAnimation.timeScale = scale;
			_speedRate = rate;
			if (string.IsNullOrEmpty(fxEvent))
			{
				PlayFx();
			}
		}

		private void HandleSpineEvent(TrackEntry trackEntry, Spine.Event e)
		{
			if (!string.IsNullOrEmpty(fxEvent) && e.Data.Name == fxEvent)
			{
				PlayFx();
			}
			PlayEventSfx(e.Data.Name);
		}

		private void PlayEventSfx(string eventName)
		{
			foreach (EventSfx item in eventSfxs)
			{
				if (item != null && (bool)item.clip && !(item.spineEvent != eventName) && (!item.played || item.everyEvent))
				{
					item.played = true;
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(item.clip, item.volume, (AudioManagerCakeOrder.AudioTrack)5);
				}
			}
		}

		private void ResetEventSfx()
		{
			foreach (EventSfx item in eventSfxs)
			{
				if (item != null)
				{
					item.played = false;
				}
			}
		}

		private void PlayFx()
		{
			if (_fxPlayed && !fxEveryEvent)
			{
				return;
			}
			_fxPlayed = true;
			if ((bool)vfx)
			{
				vfx.Play();
			}
			if (!sfx)
			{
				return;
			}
			if (sfxDelay <= 0f)
			{
				PlaySfx();
				return;
			}
			if (_sfxDelay != null)
			{
				_sfxDelay.Kill();
			}
			float rate = _speedRate;
			if (rate <= 0.01f)
			{
				rate = 0.01f;
			}
			_sfxDelay = DOVirtual.DelayedCall(sfxDelay / rate, PlaySfx).SetTarget(this);
			if (_isPaused)
			{
				_sfxDelay.Pause();
			}
		}

		private void PlaySfx()
		{
			_sfxDelay = null;
			if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(sfx, (AudioManagerCakeOrder.AudioTrack)5, 1f, _speedRate);
		}

		private void KillSfxDelay()
		{
			if (_sfxDelay != null)
			{
				_sfxDelay.Kill();
			}
			_sfxDelay = null;
		}

		public override float GetPlayDuration(float duration)
		{
			if (duration <= 0f)
			{
				duration = 0f;
				if ((bool)skeletonAnimation && !string.IsNullOrEmpty(anim))
				{
					Skeleton skeleton = skeletonAnimation.Skeleton;
					if (skeleton != null && skeleton.Data != null)
					{
						Spine.Animation animation = skeleton.Data.FindAnimation(anim);
						if (animation != null)
						{
							duration = animation.Duration;
						}
					}
				}
			}
			return duration;
		}

		public override void Stop()
		{
			if ((bool)skeletonAnimation)
			{
				Spine.AnimationState state = skeletonAnimation.AnimationState;
				if (state != null)
				{
					state.ClearTrack(0);
				}
				ResetToSetupPose();
				skeletonAnimation.timeScale = 1f;
				if (!HasIdle)
				{
					skeletonAnimation.gameObject.SetActive(false);
				}
			}
			_isPaused = false;
			_pausedTimeScale = 1f;
			_fxPlayed = false;
			ResetEventSfx();
			KillSfxDelay();
			if ((bool)vfx)
			{
				vfx.Stop();
			}
			if (HasIdle)
			{
				PlayIdle();
			}
			else
			{
				base.gameObject.SetActive(false);
			}
		}

		private void ResetToSetupPose()
		{
			if (skeletonAnimation == null)
			{
				return;
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			if (!string.IsNullOrEmpty(skin))
			{
				string initial = skeletonAnimation.initialSkinName;
				SetSkin(string.IsNullOrEmpty(initial) ? "default" : initial);
			}
			skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null)
			{
				skeleton.SetToSetupPose();
				skeletonAnimation.Update(0f);
				skeletonAnimation.LateUpdate();
			}
		}

		private void SetSkin(string skinName)
		{
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null && !string.IsNullOrEmpty(skinName))
			{
				Skin found = skeleton.Data.FindSkin(skinName);
				if (found != null && skeleton.Skin != found)
				{
					skeleton.SetSkin(found);
					skeleton.SetSlotsToSetupPose();
				}
			}
		}

		private void OnDisable()
		{
			KillSfxDelay();
		}

		public override void SetPaused(bool paused)
		{
			if (_isPaused == paused)
			{
				return;
			}
			_isPaused = paused;
			if (!paused)
			{
				if (_sfxDelay != null)
				{
					_sfxDelay.Play();
				}
			}
			else if (_sfxDelay != null)
			{
				_sfxDelay.Pause();
			}
			if ((bool)skeletonAnimation)
			{
				if (!paused)
				{
					skeletonAnimation.timeScale = ((_pausedTimeScale <= 0f) ? 1f : _pausedTimeScale);
					return;
				}
				if (skeletonAnimation.timeScale > 0f)
				{
					_pausedTimeScale = skeletonAnimation.timeScale;
				}
				skeletonAnimation.timeScale = 0f;
			}
		}
	}
}
