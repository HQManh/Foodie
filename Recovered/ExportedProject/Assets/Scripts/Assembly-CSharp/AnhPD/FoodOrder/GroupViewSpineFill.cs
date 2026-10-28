using System;
using System.Collections.Generic;
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
			public float speed;
		}

		[Serializable]
		private class AnimSfx
		{
			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
			public string anim;

			public AudioClip clip;

			[Range(0f, 1f)]
			public float volume;
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
			public float volume;

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
		private List<Fill> fills;

		[SerializeField]
		private List<Clip> process;

		[SerializeField]
		private bool clipsSetCookTime;

		[SerializeField]
		private List<AnimSfx> animSfxs;

		[SerializeField]
		private List<EventSfx> eventSfxs;

		private readonly List<string> _shownSkins;

		private Spine.AnimationState _listenedState;

		private AudioSource _loopSource;

		private EventSfx _looping;

		private void Start()
		{
		}

		private void OnDisable()
		{
		}

		private void OnDestroy()
		{
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		public override void Play(float duration)
		{
		}

		public override float GetPlayDuration(float duration)
		{
			return 0f;
		}

		public override float GetProcessDuration(float fallbackDuration)
		{
			return 0f;
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void Rest()
		{
		}

		private void Run(Spine.AnimationState state, Clip clip, float stretch, Action onStart)
		{
		}

		private void ShowSkin(string skinName)
		{
		}

		private void HandleEvent(TrackEntry entry, Spine.Event e)
		{
		}

		private void StartLoop(EventSfx sfx)
		{
		}

		private void StopLoop()
		{
		}

		private AnimSfx AnimSfxOf(string anim)
		{
			return null;
		}

		private Fill FindFill(string ingId)
		{
			return null;
		}

		private float ProcessLength()
		{
			return 0f;
		}

		private static float FillLeft(Spine.AnimationState state)
		{
			return 0f;
		}

		private SkeletonData DataOf()
		{
			return null;
		}

		private Spine.AnimationState StateOf()
		{
			return null;
		}
	}
}
