using System;
using System.Collections.Generic;
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
			public float speed;

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
		private string sharedIngId;

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
		private List<Clip> process;

		[SerializeField]
		private List<Flavor> flavors;

		[SerializeField]
		private StationGroupView restView;

		private bool _hasOwn;

		private bool _hasShared;

		private int _stoppedFrame;

		private bool _stoppedHoldingSharedOnly;

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

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private float ProcessLength()
		{
			return 0f;
		}

		private static float RemainingOf(TrackEntry entry)
		{
			return 0f;
		}

		private void PlayThenLoop(Clip clip, Clip loop)
		{
		}

		private void Loop(Clip clip)
		{
		}

		private void Hold(Clip idle, Clip fill)
		{
		}

		private void Apply(TrackEntry entry, Clip clip, float stretch, bool startedNow, float sfxPitch = 1f)
		{
		}

		private static void PlaySfx(AudioClip sfx, float pitch)
		{
		}

		private void ApplySkin(string ingId)
		{
		}

		private void SetSkin(string skinName)
		{
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
