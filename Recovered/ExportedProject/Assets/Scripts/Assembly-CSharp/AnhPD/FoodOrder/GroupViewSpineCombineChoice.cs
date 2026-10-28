using System;
using System.Collections.Generic;
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
			public float speed;

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
		private List<CupEntry> cups;

		private string _baseIngId;

		private bool _hasBase;

		private string _cupId;

		public override void OnBaseTaken(string ingId)
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

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private CupEntry FindCup(string ingId)
		{
			return null;
		}

		private AnimClip PourClip()
		{
			return null;
		}

		private void PlayOnce(AnimClip clip)
		{
		}

		private void ApplyClip(TrackEntry entry, AnimClip clip)
		{
		}

		private void BindSfx(TrackEntry entry, AnimClip clip)
		{
		}

		private static void PlaySfx(AnimClip clip)
		{
		}

		private Spine.AnimationState StateOf()
		{
			return null;
		}
	}
}
