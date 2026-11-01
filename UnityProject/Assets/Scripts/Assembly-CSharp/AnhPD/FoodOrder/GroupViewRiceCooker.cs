using CakeOrder;
using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewRiceCooker : StationGroupView
	{
		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private string riceId;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fillRiceAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string riceIdleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fillWaterAnim;

		[SerializeField]
		private AudioClip fillRiceSfx;

		[SerializeField]
		private float fillRiceSfxDelay = 0.3f;

		[SerializeField]
		private AudioClip fillWaterSfx;

		[SerializeField]
		private float fillWaterSfxDelay = 0.5f;

		private Tween _fillRiceSfxTween;

		private Tween _fillWaterSfxTween;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		private bool _isPaused;

		private float _pausedTimeScale = 1f;


		public override bool IsIntakeBusy
		{
			get
			{
				if (skeletonAnimation != null && skeletonAnimation.AnimationState != null)
				{
					TrackEntry current = skeletonAnimation.AnimationState.GetCurrent(0);
					if (current != null && (current.Animation?.Name) == fillRiceAnim)
					{
						return !current.IsComplete;
					}
				}
				return false;
			}
		}

		private void Start()
		{
			PlayIdle();
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			gameObject.SetActive(true);
			if (!(ingId != riceId))
			{
				Spine.AnimationState spineState = StateOf();
				if (spineState != null && !string.IsNullOrEmpty(fillRiceAnim))
				{
					spineState.SetAnimation(0, fillRiceAnim, false);
					if (!string.IsNullOrEmpty(riceIdleAnim))
					{
						spineState.AddAnimation(0, riceIdleAnim, true, 0f);
					}
					PlayDelayedSfx(fillRiceSfx, fillRiceSfxDelay, ref _fillRiceSfxTween);
				}
			}
		}

		private void PlayDelayedSfx(AudioClip clip, float delay, ref Tween tween)
		{
			if (tween != null)
			{
				tween.Kill();
			}
			tween = null;
			if (clip != null)
			{
				if (delay <= 0f)
				{
					PlaySfx(clip);
					return;
				}
				tween = DOVirtual.DelayedCall(delay, delegate
				{
					PlaySfx(clip);
				}).SetLink(gameObject);
				if (_isPaused)
				{
					tween.Pause();
				}
			}
		}

		private new static void SetTweenPaused(Tween tween, bool paused)
		{
			if (tween != null && tween.IsActive())
			{
				if (paused)
				{
					tween.Pause();
				}
				else
				{
					tween.Play();
				}
			}
		}

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			Spine.AnimationState spineState = StateOf();
			if (spineState == null || string.IsNullOrEmpty(fillWaterAnim))
			{
				return;
			}
			TrackEntry current = spineState.GetCurrent(0);
			TrackEntry entry;
			if (current == null || (current.Animation?.Name) != fillRiceAnim || current.IsComplete)
			{
				entry = spineState.SetAnimation(0, fillWaterAnim, false);
			}
			else
			{
				entry = spineState.AddAnimation(0, fillWaterAnim, false, 0f);
			}
			if (entry != null && entry.Animation != null)
			{
				float animDuration = entry.Animation.Duration;
				entry.TimeScale = ((animDuration > 0f && duration > 0f) ? (animDuration / duration) : 1f);
				if (spineState.GetCurrent(0) == entry)
				{
					OnFillWaterStart(entry.TimeScale);
				}
				else
				{
					entry.Start += delegate
					{
						OnFillWaterStart(entry.TimeScale);
					};
				}
			}
		}

		private void OnFillWaterStart(float animRate)
		{
			if (animRate <= 0f)
			{
				animRate = 1f;
			}
			PlayDelayedSfx(fillWaterSfx, fillWaterSfxDelay / animRate, ref _fillWaterSfxTween);
			if (vfxSmoke != null)
			{
				vfxSmoke.Play();
			}
		}

		public override float GetPlayDuration(float duration)
		{
			if (duration <= 0f)
			{
				duration = 0f;
				if (skeletonAnimation != null)
				{
					Skeleton skeleton = skeletonAnimation.Skeleton;
					if (skeleton != null && skeleton.Data != null)
					{
						Spine.Animation animation = skeleton.Data.FindAnimation(fillWaterAnim);
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
			_isPaused = false;
			_pausedTimeScale = 1f;
			if (_fillRiceSfxTween != null)
			{
				_fillRiceSfxTween.Kill();
			}
			if (_fillWaterSfxTween != null)
			{
				_fillWaterSfxTween.Kill();
			}
			if (vfxSmoke != null)
			{
				vfxSmoke.Stop();
			}
			PlayIdle();
		}

		public override void SetPaused(bool paused)
		{
			if (_isPaused == paused || !(skeletonAnimation != null))
			{
				return;
			}
			_isPaused = paused;
			SetTweenPaused(_fillRiceSfxTween, paused);
			SetTweenPaused(_fillWaterSfxTween, paused);
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

		private void PlayIdle()
		{
			Spine.AnimationState spineState = StateOf();
			if (spineState != null)
			{
				skeletonAnimation.timeScale = 1f;
				if (string.IsNullOrEmpty(idleAnim))
				{
					spineState.ClearTrack(0);
				}
				else
				{
					spineState.SetAnimation(0, idleAnim, true);
				}
			}
		}

		private static void PlaySfx(AudioClip clip)
		{
			if (clip != null)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(clip, 1f, (AudioManagerCakeOrder.AudioTrack)5);
			}
		}

		private Spine.AnimationState StateOf()
		{
			if (!(skeletonAnimation != null))
			{
				return null;
			}
			if (skeletonAnimation.AnimationState == null)
			{
				skeletonAnimation.Initialize(false);
			}
			return skeletonAnimation.AnimationState;
		}
	}
}
