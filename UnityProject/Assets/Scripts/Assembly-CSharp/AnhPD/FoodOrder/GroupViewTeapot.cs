using CakeOrder;
using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewTeapot : StationGroupView
	{
		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private string cupId = "cup" /* literal recovered by guess */;

		[SerializeField]
		private string teaId = "tea_leaf"; /* decoded from the metadata */

		[SerializeField]
		private string waterId = "water" /* literal recovered by guess */;

		[SerializeField]
		private SkeletonAnimation cupSkeleton;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string openAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putTeaAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putTeaToWaterAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putWaterAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putWaterToTeaAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string pourAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string pourEndAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupEmptyAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupPourAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupFilledAnim;

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupPourSfxEvent = "pour_sfx_start"; /* decoded from the metadata */

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupPourEndEvent = "pour_sfx_end"; /* decoded from the metadata */

		[SerializeField]
		private float cupPourDelay = 0.6f;

		[SerializeField]
		private float cupPourX = -0.39f;

		[SerializeField]
		private float cupSlideOutTime = 0.6f;

		[SerializeField]
		private AudioClip putTeaSfx;

		[SerializeField]
		private AudioClip putWaterSfx;

		[SerializeField]
		private float putWaterSfxDelay = 0.3f;

		[SerializeField]
		private AudioClip pourSfx;

		[SerializeField]
		private AudioClip lidSfx;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		private const float MinPourTime = 0.1f;

		private bool _hasTea;

		private bool _hasWater;

		private bool _isPaused;

		private float _pausedTimeScale = 1f;

		private Tween _putSfxTween;

		private float _cupRestX;

		private TrackEntry _slideEntry;

		private float _slideStart;

		private float _slideTime;

		private float _slideFrom;

		private float _slideTo;

		public override bool IsIntakeBusy
		{
			get
			{
				if ((bool)skeletonAnimation)
				{
					Spine.AnimationState state = skeletonAnimation.AnimationState;
					if (state == null)
					{
						return false;
					}
					TrackEntry current = state.GetCurrent(0);
					if (current == null)
					{
						return false;
					}
					if (!current.IsComplete)
					{
						string name = ((current.Animation == null) ? null : current.Animation.Name);
						if (!(name == putTeaAnim) && !(name == putTeaToWaterAnim) && !(name == putWaterAnim))
						{
							return name == putWaterToTeaAnim;
						}
						return true;
					}
				}
				return false;
			}
		}

		private void Awake()
		{
			if ((bool)cupSkeleton)
			{
				_cupRestX = cupSkeleton.transform.localPosition.x;
			}
			ShowCup(false);
		}

		private void Start()
		{
			PlayIdle();
		}

		private void Update()
		{
			if (_slideEntry == null)
			{
				return;
			}
			TrackEntry current = null;
			if ((bool)cupSkeleton)
			{
				Spine.AnimationState cupState = cupSkeleton.AnimationState;
				if (cupState != null)
				{
					current = cupState.GetCurrent(0);
				}
			}
			float t = 1f;
			if (current == _slideEntry && _slideTime > 0f)
			{
				t = Mathf.Clamp01((current.TrackTime - _slideStart) / _slideTime);
			}
			float s = ((t >= 0f) ? t : 0f);
			s = s * s * 3f - s * s * (s + s);
			SetCupX(_slideTo * s + _slideFrom * (1f - s));
			if (t >= 1f)
			{
				_slideEntry = null;
			}
		}

		private void StartCupSlide(TrackEntry entry, float to, float time)
		{
			_slideEntry = entry;
			_slideStart = entry.TrackTime;
			_slideTime = time;
			float from = to;
			if ((bool)cupSkeleton)
			{
				from = cupSkeleton.transform.localPosition.x;
			}
			_slideFrom = from;
			_slideTo = to;
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			base.gameObject.SetActive(true);
			if (ingId == cupId)
			{
				ShowCup(true);
				PlayCupEmpty();
			}
			else if (ingId == teaId)
			{
				PlayPut(_hasWater ? putTeaToWaterAnim : putTeaAnim, putTeaSfx);
				_hasTea = true;
			}
			else if (ingId == waterId)
			{
				PlayPut(_hasTea ? putWaterToTeaAnim : putWaterAnim, putWaterSfx, putWaterSfxDelay);
				_hasWater = true;
				if ((bool)vfxSmoke)
				{
					vfxSmoke.Play();
				}
			}
		}

		public override void Play(float duration)
		{
			float timeScale = 1f;
			base.gameObject.SetActive(true);
			Spine.AnimationState state = StateOf();
			if (state == null || string.IsNullOrEmpty(pourAnim))
			{
				return;
			}
			float pourLength = LengthOf(pourAnim);
			float endLength = LengthOf(pourEndAnim);
			float remaining = RemainingOfCurrent(state);
			if (duration > 0f && pourLength + endLength > 0f)
			{
				float available = Mathf.Max(0.1f, duration - remaining);
				timeScale = Mathf.Max(1f, (pourLength + endLength) / available);
			}
			TrackEntry entry = Enqueue(state, pourAnim);
			if (entry == null)
			{
				if (string.IsNullOrEmpty(pourEndAnim))
				{
					return;
				}
			}
			else
			{
				entry.TimeScale = timeScale;
				if (state.GetCurrent(0) == entry)
				{
					PlayCupPour(timeScale);
				}
				else
				{
					entry.Start += delegate
					{
						PlayCupPour(timeScale);
					};
				}
				if (string.IsNullOrEmpty(pourEndAnim))
				{
					entry.Complete += delegate
					{
						StopSmoke();
					};
					return;
				}
			}
			TrackEntry endEntry = state.AddAnimation(0, pourEndAnim, false, 0f);
			if (endEntry != null)
			{
				endEntry.TimeScale = timeScale;
				endEntry.Complete += delegate
				{
					StopSmoke();
				};
			}
		}

		private void StopSmoke()
		{
			if ((bool)vfxSmoke)
			{
				vfxSmoke.Stop();
			}
		}

		public override float GetPlayDuration(float duration)
		{
			if (duration <= 0f)
			{
				duration = LengthOf(pourAnim) + LengthOf(pourEndAnim);
			}
			return duration;
		}

		public override void Stop()
		{
			_hasTea = false;
			_hasWater = false;
			_isPaused = false;
			_pausedTimeScale = 1f;
			if (_putSfxTween != null)
			{
				_putSfxTween.Kill();
			}
			StopSmoke();
			_slideEntry = null;
			SetCupX(_cupRestX);
			PlayCupEmpty();
			ShowCup(false);
			PlayIdle();
		}

		public override void SetPaused(bool paused)
		{
			if (_isPaused == paused || !skeletonAnimation)
			{
				return;
			}
			_isPaused = paused;
			bool pause = paused;
			if (_putSfxTween != null && _putSfxTween.IsActive())
			{
				if (paused)
				{
					_putSfxTween.Pause();
				}
				else
				{
					_putSfxTween.Play();
				}
			}
			if (pause)
			{
				if (skeletonAnimation.timeScale > 0f)
				{
					_pausedTimeScale = skeletonAnimation.timeScale;
				}
				skeletonAnimation.timeScale = 0f;
			}
			else
			{
				skeletonAnimation.timeScale = ((_pausedTimeScale <= 0f) ? 1f : _pausedTimeScale);
			}
			if ((bool)cupSkeleton)
			{
				cupSkeleton.timeScale = skeletonAnimation.timeScale;
			}
		}

		private void SetCupX(float x)
		{
			if ((bool)cupSkeleton)
			{
				Transform t = cupSkeleton.transform;
				Vector3 p = t.localPosition;
				p.x = x;
				t.localPosition = p;
			}
		}

		private void ShowCup(bool show)
		{
			if ((bool)cupSkeleton)
			{
				cupSkeleton.gameObject.SetActive(show);
			}
		}

		private void PlayCupEmpty()
		{
			Spine.AnimationState state = CupStateOf();
			if (state == null)
			{
				return;
			}
			cupSkeleton.timeScale = (_isPaused ? 0f : 1f);
			state.ClearTracks();
			Skeleton skeleton = cupSkeleton.Skeleton;
			if (skeleton != null)
			{
				skeleton.SetToSetupPose();
				if (!string.IsNullOrEmpty(cupEmptyAnim))
				{
					state.SetAnimation(0, cupEmptyAnim, true);
				}
				cupSkeleton.Update(0f);
			}
		}

		private void PlayCupPour(float timeScale)
		{
			Spine.AnimationState state = CupStateOf();
			if (state == null || string.IsNullOrEmpty(cupPourAnim))
			{
				PlaySfx(pourSfx);
				return;
			}
			ShowCup(true);
			TrackEntry entry = ((!string.IsNullOrEmpty(cupEmptyAnim)) ? state.SetAnimation(0, cupEmptyAnim, true) : state.SetEmptyAnimation(0, 0f));
			if (entry == null)
			{
				return;
			}
			entry.TimeScale = timeScale;
			StartCupSlide(entry, cupPourX, cupPourDelay);
			float delay = ((cupPourDelay >= 0.0001f) ? cupPourDelay : 0.0001f);
			TrackEntry pour = state.AddAnimation(0, cupPourAnim, false, delay);
			if (pour != null)
			{
				pour.TimeScale = timeScale;
				pour.Event += delegate(TrackEntry sender, Spine.Event e)
				{
					if (e != null && e.Data != null)
					{
						if (e.Data.Name == cupPourSfxEvent)
						{
							PlaySfx(pourSfx);
						}
						else if (e.Data.Name == cupPourEndEvent)
						{
							StartCupSlide(sender, _cupRestX, cupSlideOutTime);
						}
					}
				};
				if (!string.IsNullOrEmpty(cupFilledAnim))
				{
					state.AddAnimation(0, cupFilledAnim, true, 0f);
				}
			}
		}

		private void PlayPut(string anim, AudioClip sfx, float sfxDelay = 0f)
		{
			Spine.AnimationState state = StateOf();
			if (state != null && !string.IsNullOrEmpty(anim))
			{
				TrackEntry entry = state.SetAnimation(0, anim, false);
				PlayPutSfx(sfx, sfxDelay);
				if (entry != null && (anim == putTeaToWaterAnim || anim == putWaterToTeaAnim))
				{
					entry.Complete += delegate
					{
						PlaySfx(lidSfx);
					};
				}
			}
		}

		private void PlayPutSfx(AudioClip clip, float delay)
		{
			if (!clip)
			{
				return;
			}
			if (delay <= 0f)
			{
				PlaySfx(clip);
				return;
			}
			if (_putSfxTween != null)
			{
				_putSfxTween.Kill();
			}
			_putSfxTween = DOVirtual.DelayedCall(delay, delegate
			{
				PlaySfx(clip);
			}).SetLink(base.gameObject);
			if (_isPaused)
			{
				_putSfxTween.Pause();
			}
		}

		private TrackEntry Enqueue(Spine.AnimationState state, string anim)
		{
			TrackEntry current = state.GetCurrent(0);
			if (current != null)
			{
				string name = ((current.Animation == null) ? null : current.Animation.Name);
				if (!current.IsComplete && name != idleAnim && name != openAnim)
				{
					return state.AddAnimation(0, anim, false, 0f);
				}
			}
			return state.SetAnimation(0, anim, false);
		}

		private static float RemainingOfCurrent(Spine.AnimationState state)
		{
			TrackEntry current = state.GetCurrent(0);
			float result = 0f;
			if (current != null && !current.IsComplete && !current.Loop)
			{
				float remaining = current.AnimationEnd - current.TrackTime;
				if (remaining > 0f)
				{
					float speed = current.TimeScale;
					if (speed <= 0.01f)
					{
						speed = 0.01f;
					}
					result = remaining / speed;
				}
			}
			return result;
		}

		private float LengthOf(string anim)
		{
			if (string.IsNullOrEmpty(anim) || !skeletonAnimation)
			{
				return 0f;
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null && skeleton.Data != null)
			{
				Spine.Animation animation = skeleton.Data.FindAnimation(anim);
				if (animation != null)
				{
					return animation.Duration;
				}
			}
			return 0f;
		}

		private void PlayIdle()
		{
			Spine.AnimationState state = StateOf();
			if (state == null)
			{
				return;
			}
			skeletonAnimation.timeScale = 1f;
			if (string.IsNullOrEmpty(idleAnim))
			{
				state.ClearTrack(0);
			}
			else if (string.IsNullOrEmpty(openAnim))
			{
				state.SetAnimation(0, idleAnim, true);
			}
			else
			{
				state.SetAnimation(0, openAnim, false);
				state.AddAnimation(0, idleAnim, true, 0f);
				PlaySfx(lidSfx);
			}
		}

		private static void PlaySfx(AudioClip clip)
		{
			if ((bool)clip)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(clip, 1f, (AudioManagerCakeOrder.AudioTrack)5);
			}
		}

		private Spine.AnimationState StateOf()
		{
			if (!skeletonAnimation)
			{
				return null;
			}
			if (skeletonAnimation.AnimationState == null)
			{
				skeletonAnimation.Initialize(false);
			}
			return skeletonAnimation.AnimationState;
		}

		private Spine.AnimationState CupStateOf()
		{
			if (!cupSkeleton)
			{
				return null;
			}
			if (cupSkeleton.AnimationState == null)
			{
				cupSkeleton.Initialize(false);
			}
			return cupSkeleton.AnimationState;
		}
	}
}
