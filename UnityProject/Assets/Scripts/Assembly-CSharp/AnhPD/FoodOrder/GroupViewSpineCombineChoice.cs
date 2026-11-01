using System;
using System.Collections.Generic;
using CakeOrder;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewSpineCombineChoice : StationGroupView
	{
		[Serializable]
		private class AnimClip
		{
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			[Min(0.01f)]
			public float speed = 1f;

			public AudioClip sfx;

			[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string sfxEvent;
		}

		[Serializable]
		private class CupEntry
		{
			public string cupId;

			public AnimClip cupFirst;

			public AnimClip cupAfterBase;

			public AnimClip baseAfterCup;

			public AnimClip pour;
		}

		private const float MinSpeed = 0.01f;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private AnimClip animBaseFirst;

		[SerializeField]
		private AnimClip animEmpty;

		[SerializeField]
		private AnimClip animIdle;

		[SerializeField]
		private List<CupEntry> cups = new List<CupEntry>();

		private string _baseIngId;

		private bool _hasBase;

		private string _cupId;

		public override void OnBaseTaken(string ingId)
		{
			_baseIngId = ingId;
			_hasBase = true;
			CupEntry cup = FindCup(_cupId);
			PlayOnce((cup != null) ? cup.baseAfterCup : animBaseFirst);
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			base.gameObject.SetActive(true);
			if (string.IsNullOrEmpty(_baseIngId) || ingId != _baseIngId)
			{
				CupEntry cup = FindCup(ingId);
				if (cup != null)
				{
					_cupId = ingId;
					PlayOnce(_hasBase ? cup.cupAfterBase : cup.cupFirst);
				}
			}
		}

		public override void Play(float duration)
		{
			base.gameObject.SetActive(true);
			AnimClip clip = PourClip();
			Spine.AnimationState state = StateOf();
			if (state != null && clip != null && !string.IsNullOrEmpty(clip.anim))
			{
				TrackEntry entry = ((state.GetCurrent(0) == null) ? state.SetAnimation(0, clip.anim, false) : state.AddAnimation(0, clip.anim, false, 0f));
				ApplyClip(entry, clip);
			}
		}

		public override float GetPlayDuration(float duration)
		{
			AnimClip clip = PourClip();
			float result = 0f;
			if (clip != null && (bool)skeletonAnimation)
			{
				Skeleton skeleton = skeletonAnimation.Skeleton;
				if (skeleton != null && skeleton.Data != null)
				{
					Spine.Animation animation = skeleton.Data.FindAnimation(clip.anim);
					if (animation != null)
					{
						float speed = clip.speed;
						if (speed <= 0.01f)
						{
							speed = 0.01f;
						}
						result = animation.Duration / speed;
					}
				}
			}
			return result;
		}

		public override void Stop()
		{
			_cupId = null;
			_hasBase = false;
			bool emptyMissing = animEmpty == null || string.IsNullOrEmpty(animEmpty.anim);
			if (!emptyMissing)
			{
				PlayOnce(animEmpty);
			}
			if (animIdle == null || string.IsNullOrEmpty(animIdle.anim))
			{
				return;
			}
			Spine.AnimationState state = StateOf();
			if (state != null)
			{
				TrackEntry entry = ((!emptyMissing) ? state.AddAnimation(0, animIdle.anim, true, 0f) : state.SetAnimation(0, animIdle.anim, true));
				ApplyClip(entry, animIdle);
			}
		}

		public override void SetPaused(bool paused)
		{
			if ((bool)skeletonAnimation)
			{
				skeletonAnimation.timeScale = (paused ? 0f : 1f);
			}
		}

		private CupEntry FindCup(string ingId)
		{
			if (string.IsNullOrEmpty(ingId))
			{
				return null;
			}
			foreach (CupEntry cup in cups)
			{
				if (cup != null && cup.cupId == ingId)
				{
					return cup;
				}
			}
			return null;
		}

		private AnimClip PourClip()
		{
			CupEntry cup = FindCup(_cupId);
			if (cup != null && cup.pour != null && !string.IsNullOrEmpty(cup.pour.anim))
			{
				return cup.pour;
			}
			foreach (CupEntry item in cups)
			{
				if (item != null && item.pour != null && !string.IsNullOrEmpty(item.pour.anim))
				{
					return item.pour;
				}
			}
			return null;
		}

		private void PlayOnce(AnimClip clip)
		{
			Spine.AnimationState state = StateOf();
			if (clip != null && state != null && !string.IsNullOrEmpty(clip.anim))
			{
				TrackEntry entry = state.SetAnimation(0, clip.anim, false);
				ApplyClip(entry, clip);
			}
		}

		private void ApplyClip(TrackEntry entry, AnimClip clip)
		{
			if (entry != null)
			{
				float speed = clip.speed;
				if (speed <= 0.01f)
				{
					speed = 0.01f;
				}
				entry.TimeScale = speed;
				if ((bool)skeletonAnimation)
				{
					skeletonAnimation.timeScale = 1f;
				}
				BindSfx(entry, clip);
			}
		}

		private void BindSfx(TrackEntry entry, AnimClip clip)
		{
			if (!clip.sfx)
			{
				return;
			}
			if (!string.IsNullOrEmpty(clip.sfxEvent))
			{
				entry.Event += delegate(TrackEntry e, Spine.Event ev)
				{
					if (ev != null && ev.Data != null && ev.Data.Name == clip.sfxEvent)
					{
						PlaySfx(clip);
					}
				};
			}
			else
			{
				entry.Start += delegate
				{
					PlaySfx(clip);
				};
			}
		}

		private static void PlaySfx(AnimClip clip)
		{
			if (clip != null && (bool)clip.sfx)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(clip.sfx, 1f, (AudioManagerCakeOrder.AudioTrack)5);
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
	}
}
