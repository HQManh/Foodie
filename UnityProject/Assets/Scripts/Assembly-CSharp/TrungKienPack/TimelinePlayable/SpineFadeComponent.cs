using Spine.Unity;
using UnityEngine;

namespace TrungKienPack.TimelinePlayable
{
	public class SpineFadeComponent : BasePlayableComponent
	{
		public SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private float fadeTime = 0.5f;

		public float animationDuration;

		[SerializeField]
		private Color startColor;

		[SerializeField]
		private Color endColor;

		[SerializeField]
		private AnimationCurve fadeCurve = AnimationCurve.Linear(0f, 1f, 1f, 0f);

		public override float ComponentDuration => fadeTime;

		public override void ProcessFrame(float time)
		{
			if (fadeCurve == null || skeletonAnimation == null)
			{
				throw new System.NullReferenceException();
			}
			float t = time / fadeTime;
			float alpha = fadeCurve.Evaluate(t);
			float p = Mathf.Clamp01(t);
			float r = startColor.r + (endColor.r - startColor.r) * p;
			float g = startColor.g + (endColor.g - startColor.g) * p;
			float b = startColor.b + (endColor.b - startColor.b) * p;
			Spine.Skeleton skeleton = skeletonAnimation.Skeleton;
			SkeletonExtensions.SetColor(skeleton, new Color(r, g, b, alpha));
		}
	}
}
