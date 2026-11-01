using Utilities;
using System;
using System.Collections.Generic;
using CakeOrder;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewSpineFill : StationGroupView
	{
		[Serializable]
		private class Clip
		{
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			[Min(0.01f)]
			public float speed = 1f;
		}

		[Serializable]
		private class AnimSfx
		{
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			public AudioClip clip;

			[Range(0f, 1f)]
			public float volume = 1f;
		}

		[Serializable]
		private class Fill
		{
			public string ingId;

			[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation")]
			public string skin;

			public Clip clip;
		}

		[Serializable]
		private class EventSfx
		{
			[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string spineEvent;

			[Tooltip("Chỉ khi event nằm trong anim này; trống = mọi anim. Một event dùng chung (lid_sfx: đóng nắp trong close_lid, mở nắp cuối blend) nhờ vậy mang được tiếng riêng cho từng anim.")]
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			public AudioClip clip;

			[Range(0f, 1f)]
			public float volume = 1f;

			[Tooltip("Có = clip lặp từ spineEvent tới event này (tiếng xay kéo theo cook time); trống = phát một lần.")]
			[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string stopEvent;
		}

		private const float MinSpeed = 0.01f;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string restAnim;

		[SerializeField]
		private List<Fill> fills = new List<Fill>();

		[SerializeField]
		private List<Clip> process = new List<Clip>();

		[SerializeField]
		private bool clipsSetCookTime;

		[SerializeField]
		private List<AnimSfx> animSfxs = new List<AnimSfx>();

		[SerializeField]
		private List<EventSfx> eventSfxs = new List<EventSfx>();

		private readonly List<string> _shownSkins = new List<string>();

		private Spine.AnimationState _listenedState;

		private AudioSource _loopSource;

		private EventSfx _looping;

		private void Start()
		{
			Rest();
		}

		private void OnDisable()
		{
			StopLoop();
		}

		private void OnDestroy()
		{
			if (_listenedState != null)
			{
				_listenedState.Event -= HandleEvent;
			}
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			Fill fill = FindFill(ingId);
			if (fill == null)
			{
				return;
			}
			Spine.AnimationState state = StateOf();
			if (state != null && fill.clip != null && !string.IsNullOrEmpty(fill.clip.anim))
			{
				Run(state, fill.clip, 1f, delegate
				{
					ShowSkin(fill.skin);
				});
			}
			else
			{
				ShowSkin(fill.skin);
			}
		}

		public override void Play(float duration)
		{
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
			float left = length;
			if (duration > 0f)
			{
				left = duration - FillLeft(state);
			}
			float stretch = length / left;
			if (left <= 0.05f)
			{
				stretch = 1f;
			}
			foreach (Clip clip in process)
			{
				if (clip != null && !string.IsNullOrEmpty(clip.anim))
				{
					Run(state, clip, stretch, null);
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

		public override float GetProcessDuration(float fallbackDuration)
		{
			if (clipsSetCookTime)
			{
				Spine.AnimationState state = StateOf();
				float length = ProcessLength();
				return length + ((state == null) ? 0f : FillLeft(state));
			}
			return base.GetProcessDuration(fallbackDuration);
		}

		public override void Stop()
		{
			StopLoop();
			_shownSkins.Clear();
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
			if (skeleton != null)
			{
				string initial = skeletonAnimation.initialSkinName;
				Skin initialSkin = null;
				if (!string.IsNullOrEmpty(initial))
				{
					initialSkin = skeleton.Data.FindSkin(initial);
				}
				skeleton.SetSkin(initialSkin);
				skeleton.SetToSetupPose();
			}
			skeletonAnimation.timeScale = 1f;
			skeletonAnimation.Update(0f);
			skeletonAnimation.LateUpdate();
			Rest();
		}

		public override void SetPaused(bool paused)
		{
			if ((bool)skeletonAnimation)
			{
				skeletonAnimation.timeScale = (paused ? 0f : 1f);
			}
			if (_looping != null)
			{
				StationGroupView.SetAudioPaused(_loopSource, paused);
			}
		}

		private void Rest()
		{
			Spine.AnimationState state = StateOf();
			if (state != null && !string.IsNullOrEmpty(restAnim))
			{
				state.SetAnimation(0, restAnim, true);
			}
		}

		private void Run(Spine.AnimationState state, Clip clip, float stretch, Action onStart)
		{
			AnimSfx animSfx = AnimSfxOf(clip.anim);
			if (animSfx != null)
			{
				onStart = (Action)Delegate.Combine(onStart, (Action)delegate
				{
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(animSfx.clip, animSfx.volume, (AudioManagerCakeOrder.AudioTrack)5);
				});
			}
			TrackEntry current = state.GetCurrent(0);
			TrackEntry entry;
			if (current == null || (current.Loop && current.Next == null) || (current.IsComplete && current.Next == null))
			{
				entry = state.SetAnimation(0, clip.anim, false);
				if (onStart != null)
				{
					onStart();
				}
			}
			else
			{
				entry = state.AddAnimation(0, clip.anim, false, 0f);
				if (onStart != null)
				{
					entry.Start += delegate
					{
						onStart();
					};
				}
			}
			float speed = clip.speed;
			if (speed <= 0.01f)
			{
				speed = 0.01f;
			}
			entry.TimeScale = speed * stretch;
		}

		private void ShowSkin(string skinName)
		{
			if (string.IsNullOrEmpty(skinName) || _shownSkins.Contains(skinName))
			{
				return;
			}
			_shownSkins.Add(skinName);
			if (!skeletonAnimation)
			{
				return;
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			Skin combined = new Skin("fill" /* literal recovered by guess */);
			foreach (string shown in _shownSkins)
			{
				Skin found = skeleton.Data.FindSkin(shown);
				if (found != null)
				{
					combined.AddSkin(found);
				}
			}
			skeleton.SetSkin(combined);
		}

		private void HandleEvent(TrackEntry entry, Spine.Event e)
		{
			if (e == null || e.Data == null)
			{
				return;
			}
			string currentAnim = null;
			if (entry != null && entry.Animation != null)
			{
				currentAnim = entry.Animation.Name;
			}
			foreach (EventSfx sfx in eventSfxs)
			{
				if (sfx == null || !sfx.clip || (!string.IsNullOrEmpty(sfx.anim) && sfx.anim != currentAnim))
				{
					continue;
				}
				if (sfx.spineEvent == e.Data.Name)
				{
					if (string.IsNullOrEmpty(sfx.stopEvent))
					{
						if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfx.clip, sfx.volume, (AudioManagerCakeOrder.AudioTrack)5);
					}
					else
					{
						StartLoop(sfx);
					}
				}
				else if (sfx == _looping && sfx.stopEvent == e.Data.Name)
				{
					StopLoop();
				}
			}
		}

		private void StartLoop(EventSfx sfx)
		{
			if (!_loopSource)
			{
				_loopSource = base.gameObject.AddComponent<AudioSource>();
				_loopSource.playOnAwake = false;
				_loopSource.loop = true;
				if (MonoSingleton<AudioManagerCakeOrder>.HasInstance)
				{
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.RegisterAudioSource(_loopSource, (AudioManagerCakeOrder.AudioTrack)5);
				}
			}
			_looping = sfx;
			_loopSource.clip = sfx.clip;
			_loopSource.volume = sfx.volume;
			_loopSource.Play();
		}

		private void StopLoop()
		{
			_looping = null;
			if ((bool)_loopSource)
			{
				_loopSource.Stop();
			}
		}

		private AnimSfx AnimSfxOf(string anim)
		{
			foreach (AnimSfx sfx in animSfxs)
			{
				if (sfx != null && (bool)sfx.clip && sfx.anim == anim)
				{
					return sfx;
				}
			}
			return null;
		}

		private Fill FindFill(string ingId)
		{
			foreach (Fill fill in fills)
			{
				if (fill != null && fill.ingId == ingId)
				{
					return fill;
				}
			}
			return null;
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

		private static float FillLeft(Spine.AnimationState state)
		{
			float total = 0f;
			for (TrackEntry entry = state.GetCurrent(0); entry != null; entry = entry.Next)
			{
				if (!entry.Loop)
				{
					float remaining = entry.AnimationEnd - entry.AnimationStart - entry.TrackTime;
					float speed = entry.TimeScale;
					if (speed <= 0.01f)
					{
						speed = 0.01f;
					}
					total += ((remaining >= 0f) ? remaining : 0f) / speed;
				}
			}
			return total;
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
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			if (state == null)
			{
				return null;
			}
			if (state == _listenedState)
			{
				return state;
			}
			if (_listenedState != null)
			{
				_listenedState.Event -= HandleEvent;
			}
			state.Event += HandleEvent;
			_listenedState = state;
			return state;
		}
	}
}
