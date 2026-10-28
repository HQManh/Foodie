using System;
using System.Collections.Generic;
using CakeOrder;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewSpineMixer : StationGroupView
	{
		[Serializable]
		private class Clip
		{
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			[Min(0.01f)]
			public float speed = 1f;

			public AudioClip sfx;
		}

		[Serializable]
		private class Flavor
		{
			public string ingId;

			[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
			public string skin;
		}

		private const float MinSpeed = 0.01f;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private string sharedIngId = "";

		[SerializeField]
		private Clip ownFirst;

		[SerializeField]
		private Clip ownIdle;

		[SerializeField]
		private Clip sharedFirst;

		[SerializeField]
		private Clip sharedIdle;

		[SerializeField]
		private Clip ownAfterShared;

		[SerializeField]
		private Clip sharedAfterOwn;

		[SerializeField]
		private List<Clip> process = new List<Clip>();

		[SerializeField]
		private List<Flavor> flavors = new List<Flavor>();

		[SerializeField]
		private StationGroupView restView;

		private bool _hasOwn;

		private bool _hasShared;

		private int _stoppedFrame = -1;

		private bool _stoppedHoldingSharedOnly;

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			base.gameObject.SetActive(true);
			if (ingId != sharedIngId)
			{
				ApplySkin(ingId);
				_hasOwn = true;
				if (_hasShared)
				{
					PlayThenLoop(ownAfterShared, null);
				}
				else
				{
					PlayThenLoop(ownFirst, ownIdle);
				}
				return;
			}
			bool justStoppedSharedOnly = _stoppedFrame == Time.frameCount && _stoppedHoldingSharedOnly;
			_hasShared = true;
			if (justStoppedSharedOnly && !_hasOwn)
			{
				Hold(sharedIdle, sharedFirst);
			}
			else if (_hasOwn)
			{
				PlayThenLoop(sharedAfterOwn, null);
			}
			else
			{
				PlayThenLoop(sharedFirst, sharedIdle);
			}
		}

		public override void Play(float duration)
		{
			base.gameObject.SetActive(true);
			Spine.AnimationState state = StateOf();
			if (state == null)
			{
				return;
			}
			float length = ProcessLength();
			if (!(length > 0f))
			{
				return;
			}
			float remaining = RemainingOf(state.GetCurrent(0));
			float left = ((duration > 0f) ? (duration - remaining) : length);
			float stretch = length / left;
			if (left <= 0.05f)
			{
				stretch = 1f;
			}
			float sfxPitch = ((stretch >= 1f) ? stretch : 1f);
			bool first = true;
			foreach (Clip clip in process)
			{
				if (clip != null && !string.IsNullOrEmpty(clip.anim))
				{
					TrackEntry current = state.GetCurrent(0);
					TrackEntry entry;
					bool startedNow;
					if (first && (current == null || current.Loop))
					{
						entry = state.SetAnimation(0, clip.anim, false);
						startedNow = true;
					}
					else
					{
						entry = state.AddAnimation(0, clip.anim, false, 0f);
						startedNow = false;
					}
					Apply(entry, clip, stretch, startedNow, sfxPitch);
					first = false;
				}
			}
		}

		public override float GetPlayDuration(float duration)
		{
			if (duration > 0f)
			{
				return duration;
			}
			return ProcessLength();
		}

		public override void Stop()
		{
			_stoppedFrame = Time.frameCount;
			_stoppedHoldingSharedOnly = _hasShared && !_hasOwn;
			_hasOwn = false;
			_hasShared = false;
			if (!skeletonAnimation)
			{
				return;
			}
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			if (state != null)
			{
				state.ClearTrack(0);
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			SetSkin(skeletonAnimation.initialSkinName);
			skeleton.SetToSetupPose();
			skeletonAnimation.timeScale = 1f;
			skeletonAnimation.Update(0f);
			skeletonAnimation.LateUpdate();
			if ((bool)restView)
			{
				restView.Stop();
			}
		}

		public override void SetPaused(bool paused)
		{
			if ((bool)skeletonAnimation)
			{
				skeletonAnimation.timeScale = (paused ? 0f : 1f);
			}
		}

		private float ProcessLength()
		{
			SkeletonData data = DataOf();
			if (data == null)
			{
				return 0f;
			}
			float total = 0f;
			foreach (Clip clip in process)
			{
				if (clip != null)
				{
					Spine.Animation animation = data.FindAnimation(clip.anim);
					if (animation != null)
					{
						float speed = clip.speed;
						if (speed <= 0.01f)
						{
							speed = 0.01f;
						}
						total += animation.Duration / speed;
					}
				}
			}
			return total;
		}

		private static float RemainingOf(TrackEntry entry)
		{
			if (entry != null && !entry.Loop)
			{
				float remaining = entry.AnimationEnd - entry.TrackTime;
				float speed = entry.TimeScale;
				if (speed <= 0.01f)
				{
					speed = 0.01f;
				}
				return ((remaining >= 0f) ? remaining : 0f) / speed;
			}
			return 0f;
		}

		private void PlayThenLoop(Clip clip, Clip loop)
		{
			Spine.AnimationState state = StateOf();
			if (clip != null && state != null && !string.IsNullOrEmpty(clip.anim))
			{
				TrackEntry entry = state.SetAnimation(0, clip.anim, false);
				Apply(entry, clip, 1f, true);
				if (loop != null && !string.IsNullOrEmpty(loop.anim))
				{
					TrackEntry loopEntry = state.AddAnimation(0, loop.anim, true, 0f);
					Apply(loopEntry, loop, 1f, false);
				}
			}
		}

		private void Loop(Clip clip)
		{
			Spine.AnimationState state = StateOf();
			if (clip != null && state != null && !string.IsNullOrEmpty(clip.anim))
			{
				TrackEntry entry = state.SetAnimation(0, clip.anim, true);
				Apply(entry, clip, 1f, true);
			}
		}

		private void Hold(Clip idle, Clip fill)
		{
			if (idle != null && !string.IsNullOrEmpty(idle.anim))
			{
				Loop(idle);
				return;
			}
			Spine.AnimationState state = StateOf();
			if (fill != null && state != null && !string.IsNullOrEmpty(fill.anim))
			{
				TrackEntry entry = state.SetAnimation(0, fill.anim, false);
				entry.TrackTime = entry.AnimationEnd;
				entry.AnimationLast = 0f;
				if ((bool)skeletonAnimation)
				{
					skeletonAnimation.timeScale = 1f;
				}
			}
		}

		private void Apply(TrackEntry entry, Clip clip, float stretch, bool startedNow, float sfxPitch = 1f)
		{
			if (entry == null)
			{
				return;
			}
			float speed = clip.speed;
			if (speed <= 0.01f)
			{
				speed = 0.01f;
			}
			entry.TimeScale = speed * stretch;
			if ((bool)skeletonAnimation)
			{
				skeletonAnimation.timeScale = 1f;
			}
			if ((bool)clip.sfx)
			{
				if (startedNow)
				{
					PlaySfx(clip.sfx, sfxPitch);
					return;
				}
				entry.Start += delegate
				{
					PlaySfx(clip.sfx, sfxPitch);
				};
			}
		}

		private static void PlaySfx(AudioClip sfx, float pitch)
		{
			if (!Mathf.Approximately(1f, pitch))
			{
				AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(sfx, (AudioManagerCakeOrder.AudioTrack)5, 1f, pitch);
			}
			else
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfx, 1f, (AudioManagerCakeOrder.AudioTrack)5);
			}
		}

		private void ApplySkin(string ingId)
		{
			foreach (Flavor flavor in flavors)
			{
				if (flavor != null && flavor.ingId == ingId)
				{
					SetSkin(flavor.skin);
					break;
				}
			}
		}

		private void SetSkin(string skinName)
		{
			if (!skeletonAnimation)
			{
				return;
			}
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

		private SkeletonData DataOf()
		{
			if (!skeletonAnimation)
			{
				return null;
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null)
			{
				return skeleton.Data;
			}
			if (!skeletonAnimation.skeletonDataAsset)
			{
				return null;
			}
			return skeletonAnimation.skeletonDataAsset.GetSkeletonData(true);
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
	}
}
