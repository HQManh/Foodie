using UnityEngine;

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

		public int fps = 60;

		public override float ComponentDuration => animationDuration;

		private void OnAnimationChanged()
		{
			if (skeletonAnimation == null)
			{
				return;
			}
			if (skeletonAnimation.skeletonDataAsset == null)
			{
				throw new System.NullReferenceException();
			}
			Spine.SkeletonData skeletonData = skeletonAnimation.skeletonDataAsset.GetSkeletonData(true);
			if (skeletonData == null)
			{
				return;
			}
			Spine.Animation animation = skeletonData.FindAnimation(animationName);
			if (animation == null)
			{
				return;
			}
			animationDuration = animation.Duration;
			frameDuration = Mathf.Round(animationDuration * fps);
		}

		public override void ProcessFrame(float time)
		{
			if (skeletonAnimation == null)
			{
				throw new System.NullReferenceException();
			}
			Spine.AnimationState state = skeletonAnimation.AnimationState;
			Spine.Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null || state == null)
			{
				throw new System.NullReferenceException();
			}
			skeleton.SetToSetupPose();
			state.ClearTracks();
			Spine.TrackEntry entry = state.SetAnimation(0, animationName, loop);
			if (entry == null)
			{
				throw new System.NullReferenceException();
			}
			entry.TrackTime = time;
			state.Apply(skeletonAnimation.Skeleton);
			skeletonAnimation.Update(0f);
			// TODO(unrecovered): final virtual call on SkeletonAnimation (vtable +0x208, no arguments) is not identifiable from the stubs or the pseudocode.
		}
	}
}
