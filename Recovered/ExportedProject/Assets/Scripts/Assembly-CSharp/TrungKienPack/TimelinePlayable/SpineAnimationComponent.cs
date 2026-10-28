using Spine.Unity;

namespace TrungKienPack.TimelinePlayable
{
	public class SpineAnimationComponent : BasePlayableComponent
	{
		public SkeletonAnimation skeletonAnimation;

		[SpineAnimation(null, "skeletonAnimation", true, false, false)]
		public string animationName;

		public bool loop;

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
	}
}
