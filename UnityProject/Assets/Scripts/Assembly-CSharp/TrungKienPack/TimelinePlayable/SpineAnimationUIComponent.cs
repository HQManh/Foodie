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
			float trackTime;
			if (!reverse)
			{
				if (entry == null)
				{
					throw new System.NullReferenceException();
				}
				trackTime = time;
			}
			else
			{
				if (entry == null || entry.Animation == null)
				{
					throw new System.NullReferenceException();
				}
				trackTime = GetReversedTime(time, entry.Animation.Duration);
			}
			entry.TrackTime = trackTime;
			state.Apply(skeletonAnimation.Skeleton);
			skeletonAnimation.Update(0f);
			skeletonAnimation.UpdateMesh();
		}

		private float GetReversedTime(float time, float duration)
		{
			float result = 0f;
			if (0f < duration)
			{
				if (loop)
				{
					time -= (int)(time / duration) * duration;
				}
				float clamped = duration;
				if (time <= duration)
				{
					clamped = time;
				}
				float positive = 0f;
				if (0f <= time)
				{
					positive = clamped;
				}
				result = duration - positive;
			}
			return result;
		}
	}
}
