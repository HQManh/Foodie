using CakeOrder;
using System.Collections;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewJuiceExtractor : StationGroupView
	{
		private const int MainTrack = 0;

		private const int GlassTrack = 1;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
		private string glassSkin;

		[SerializeField]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
		private string fruitSkin;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fruitInAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string glassInAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string extractAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string glassOutAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		private AudioClip sfx;

		[SerializeField]
		[Min(0f)]
		private float sfxDelay;

		[SerializeField]
		private ParticleSystem extractVfx;

		private Coroutine _sfxRoutine;

		private Skin _restSkin;

		private Skin _cookSkin;

		private bool _restSkinCached;

		private bool _isPaused;

		private float _pausedTimeScale = 1f;

		private float _speedRate;

		private void Start()
		{
			if (!string.IsNullOrEmpty(idleAnim))
			{
				PlayIdle();
			}
		}

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			if (skeletonAnimation == null)
			{
				return;
			}
			skeletonAnimation.gameObject.SetActive(true);
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (state == null || skeleton == null)
			{
				return;
			}
			ApplySkin(CookSkin(skeleton.Data));
			Spine.Animation fruitIn = skeleton.Data.FindAnimation(fruitInAnim);
			Spine.Animation glassIn = skeleton.Data.FindAnimation(glassInAnim);
			Spine.Animation extract = skeleton.Data.FindAnimation(extractAnim);
			Spine.Animation glassOut = skeleton.Data.FindAnimation(glassOutAnim);
			state.ClearTracks();
			if (fruitIn == null)
			{
				return;
			}
			TrackEntry trackEntry = state.SetAnimation(0, fruitIn, false);
			float num = fruitIn.Duration;
			trackEntry.MixDuration = 0f;
			if (glassIn != null)
			{
				TrackEntry trackEntry2 = state.SetAnimation(1, glassIn, false);
				trackEntry2.MixDuration = 0f;
				trackEntry2.TrackEnd = glassIn.Duration;
				num = Mathf.Max(num, glassIn.Duration);
			}
			float num2 = num;
			if (extract != null)
			{
				TrackEntry trackEntry3 = state.AddAnimation(0, extract, false, num);
				trackEntry3.MixDuration = 0f;
				trackEntry3.Start += delegate
				{
					if (extractVfx != null)
					{
						extractVfx.Play();
					}
				};
				num2 = num + extract.Duration;
				num = extract.Duration;
			}
			if (glassOut != null)
			{
				TrackEntry trackEntry4 = state.AddAnimation(0, glassOut, false, num);
				num = glassOut.Duration;
				trackEntry4.MixDuration = 0f;
				num2 += num;
			}
			_speedRate = ((num2 > 0f && duration > 0f) ? (num2 / duration) : 1f);
			StopSfx();
			if (sfx != null)
			{
				_sfxRoutine = StartCoroutine(PlaySfxAfterDelay());
			}
			if (!_isPaused)
			{
				skeletonAnimation.timeScale = _speedRate;
				return;
			}
			_pausedTimeScale = _speedRate;
			skeletonAnimation.timeScale = 0f;
		}

		private IEnumerator PlaySfxAfterDelay()
		{
			float elapsed = 0f;
			while (elapsed < sfxDelay)
			{
				yield return null;
				elapsed += Time.deltaTime * skeletonAnimation.timeScale;
			}
			_sfxRoutine = null;
			if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(sfx, (AudioManagerCakeOrder.AudioTrack)5, 1f, _speedRate);
		}

		private void StopSfx()
		{
			if (_sfxRoutine != null)
			{
				StopCoroutine(_sfxRoutine);
				_sfxRoutine = null;
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
						SkeletonData data = skeleton.Data;
						float a = DurationOf(data, fruitInAnim);
						float b = DurationOf(data, glassInAnim);
						float num = Mathf.Max(a, b);
						float num2 = DurationOf(data, extractAnim);
						float num3 = DurationOf(data, glassOutAnim);
						duration = num + num2 + num3;
					}
				}
			}
			return duration;
		}

		private static float DurationOf(SkeletonData data, string anim)
		{
			if (string.IsNullOrEmpty(anim))
			{
				return 0f;
			}
			Spine.Animation animation = data.FindAnimation(anim);
			if (animation == null)
			{
				return 0f;
			}
			return animation.Duration;
		}

		public override void Stop()
		{
			_isPaused = false;
			_pausedTimeScale = 1f;
			StopSfx();
			if (extractVfx != null)
			{
				extractVfx.Stop();
			}
			if (skeletonAnimation != null)
			{
				Spine.AnimationState state = skeletonAnimation.AnimationState;
				if (state != null)
				{
					state.ClearTracks();
				}
				skeletonAnimation.timeScale = 1f;
				if (_restSkinCached)
				{
					ApplySkin(_restSkin);
				}
				if (string.IsNullOrEmpty(idleAnim))
				{
					ResetToSetupPose();
				}
				else
				{
					PlayIdle();
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
			if (skeletonAnimation != null)
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

		private void PlayIdle()
		{
			if (skeletonAnimation != null && skeletonAnimation.AnimationState != null)
			{
				skeletonAnimation.gameObject.SetActive(true);
				ResetToSetupPose();
				skeletonAnimation.AnimationState.SetAnimation(0, idleAnim, true);
			}
		}

		private Skin CookSkin(SkeletonData data)
		{
			if (_cookSkin == null)
			{
				_cookSkin = new Skin("cook-" + fruitSkin);
				AddSkin(data, glassSkin);
				AddSkin(data, fruitSkin);
			}
			return _cookSkin;
		}

		private void AddSkin(SkeletonData data, string skinName)
		{
			if (!string.IsNullOrEmpty(skinName))
			{
				Skin skin = data.FindSkin(skinName);
				if (skin != null)
				{
					_cookSkin.AddSkin(skin);
				}
			}
		}

		private void ApplySkin(Skin skin)
		{
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (!_restSkinCached)
			{
				_restSkin = skeleton.Skin;
				_restSkinCached = true;
			}
			skeleton.SetSkin(skin);
			skeleton.SetToSetupPose();
		}

		private void ResetToSetupPose()
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
}
