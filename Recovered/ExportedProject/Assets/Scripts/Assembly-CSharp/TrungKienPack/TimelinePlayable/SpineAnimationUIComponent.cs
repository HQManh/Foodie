using Spine.Unity;
using UnityEngine;

namespace TrungKienPack.TimelinePlayable
{
	public class SpineAnimationUIComponent : BasePlayableComponent
	{
		public SkeletonGraphic skeletonAnimation;

		[SpineAnimation(null, "skeletonAnimation", true, false, false)]
		public string animationName;

		public bool loop;

		[Tooltip("Plays the animation backwards: from its last frame to its first.")]
		public bool reverse;

		public float animationDuration;

		public float frameDuration;

		public int fps;

		public override float ComponentDuration => 0f;

		private void OnAnimationChanged()
		{
		}

		public override void ProcessFrame(float time)
		{
		}

		private float GetReversedTime(float time, float duration)
		{
			return 0f;
		}
	}
}
