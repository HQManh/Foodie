using System;
using System.Collections.Generic;
using CakeOrder;
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
			public float speed = 1f;

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
		private List<AnimStep> steps = new List<AnimStep>();

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private AudioSource baseSfx;

		private AudioClip _openingSfx;

		private float _openingSfxSpeed = 1f;

		private float _openingSfxDelay;

		private readonly List<Tween> _pendingSfx = new List<Tween>();

		private bool _isPaused;

		private float _pausedTimeScale = 1f;

		private float _speedRate = 1f;

		public override void Play(float duration)
		{
			base.gameObject.SetActive(true);
			if (!skeletonAnimation || steps == null || steps.Count == 0)
			{
				return;
			}
			skeletonAnimation.gameObject.SetActive(true);
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null || state == null || skeleton.Data == null)
			{
				return;
			}
			skeleton.SetToSetupPose();
			float total = QueueChain(state, skeleton.Data);
			float rate = ((total > 0f && duration > 0f) ? (total / duration) : 1f);
			_speedRate = rate;
			PlayStepSfx(_openingSfx, _openingSfxSpeed, _openingSfxDelay);
			PlayFx();
			if (!_isPaused)
			{
				skeletonAnimation.timeScale = rate;
				return;
			}
			_pausedTimeScale = rate;
			skeletonAnimation.timeScale = 0f;
			StationGroupView.SetAudioPaused(baseSfx, true);
		}

		private float QueueChain(Spine.AnimationState state, SkeletonData skeletonData)
		{
			_openingSfx = null;
			float delay = 0f;
			float total = 0f;
			bool first = true;
			foreach (AnimStep step in steps)
			{
				if (step == null || string.IsNullOrEmpty(step.anim))
				{
					continue;
				}
				Spine.Animation animation = skeletonData.FindAnimation(step.anim);
				if (animation == null)
				{
					continue;
				}
				float speed = step.speed;
				TrackEntry entry = (first ? state.SetAnimation(0, animation, false) : state.AddAnimation(0, animation, false, delay));
				if (entry == null)
				{
					continue;
				}
				if (speed <= 0.01f)
				{
					speed = 0.01f;
				}
				entry.MixDuration = 0f;
				entry.TimeScale = speed;
				AudioClip stepSfx = step.sfx;
				float stepDelay = step.sfxDelay;
				if ((bool)stepSfx)
				{
					if (first)
					{
						_openingSfx = stepSfx;
						_openingSfxSpeed = speed;
					}
					else
					{
						entry.Start += delegate
						{
							PlayStepSfx(stepSfx, speed, stepDelay);
						};
					}
				}
				delay = animation.Duration;
				total += delay / speed;
				first = false;
			}
			return total;
		}

		private void PlayStepSfx(AudioClip clip, float stepSpeed, float delay)
		{
			if (!clip)
			{
				return;
			}
			float rate = _speedRate * stepSpeed;
			if (rate <= 0.01f)
			{
				rate = 0.01f;
			}
			if (delay <= 0f)
			{
				PlayAt(clip, rate);
				return;
			}
			Tween tween = DOVirtual.DelayedCall(delay / rate, delegate
			{
				PlayAt(clip, rate);
			}).SetUpdate(false).SetTarget(this);
			_pendingSfx.RemoveAll((Tween t) => t == null || !t.IsActive());
			_pendingSfx.Add(tween);
			if (_isPaused)
			{
				tween.Pause();
			}
		}

		private static void PlayAt(AudioClip clip, float rate)
		{
			if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(clip, (AudioManagerCakeOrder.AudioTrack)5, 1f, rate);
		}

		private void KillPendingSfx()
		{
			foreach (Tween item in _pendingSfx)
			{
				if (item != null)
				{
					item.Kill();
				}
			}
			_pendingSfx.Clear();
		}

		private void SetPendingSfxPaused(bool paused)
		{
			foreach (Tween item in _pendingSfx)
			{
				if (item != null && item.IsActive())
				{
					if (paused)
					{
						item.Pause();
					}
					else
					{
						item.Play();
					}
				}
			}
		}

		public override float GetPlayDuration(float duration)
		{
			if (duration <= 0f)
			{
				duration = 0f;
				if ((bool)skeletonAnimation)
				{
					Skeleton skeleton = skeletonAnimation.Skeleton;
					if (skeleton != null && skeleton.Data != null && steps != null)
					{
						foreach (AnimStep step in steps)
						{
							if (step != null && !string.IsNullOrEmpty(step.anim))
							{
								Spine.Animation animation = skeleton.Data.FindAnimation(step.anim);
								if (animation != null)
								{
									float speed = step.speed;
									if (speed <= 0.01f)
									{
										speed = 0.01f;
									}
									duration += animation.Duration / speed;
								}
							}
						}
					}
				}
			}
			return duration;
		}

		public override void Stop()
		{
			bool noIdle = string.IsNullOrEmpty(idle);
			if ((bool)skeletonAnimation)
			{
				Spine.AnimationState state = skeletonAnimation.AnimationState;
				if (state != null)
				{
					state.ClearTrack(0);
				}
				ResetToSetupPose();
				skeletonAnimation.timeScale = 1f;
				if (!noIdle)
				{
					state = skeletonAnimation.AnimationState;
					if (state != null)
					{
						state.SetAnimation(0, idle, true);
					}
				}
				else
				{
					skeletonAnimation.gameObject.SetActive(false);
				}
			}
			_isPaused = false;
			_pausedTimeScale = 1f;
			KillPendingSfx();
			if ((bool)vfx)
			{
				vfx.Stop();
			}
			if ((bool)baseSfx)
			{
				baseSfx.Stop();
			}
			if (noIdle)
			{
				base.gameObject.SetActive(false);
			}
		}

		private void ResetToSetupPose()
		{
			if (!(skeletonAnimation == null))
			{
				Skeleton skeleton = skeletonAnimation.Skeleton;
				if (skeleton != null)
				{
					skeleton.SetToSetupPose();
					skeletonAnimation.Update(0f);
					skeletonAnimation.LateUpdate();
				}
			}
		}

		public override void SetPaused(bool paused)
		{
			if (_isPaused == paused)
			{
				return;
			}
			_isPaused = paused;
			StationGroupView.SetAudioPaused(baseSfx, paused);
			SetPendingSfxPaused(paused);
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

		private void PlayFx()
		{
			if ((bool)baseSfx)
			{
				baseSfx.Play();
			}
			if ((bool)vfx)
			{
				vfx.Play();
			}
		}
	}
}
