using Spine.Unity;
using UnityEngine;

namespace TrungKienPack.TimelinePlayable
{
	public class SpineFadeComponent : BasePlayableComponent
	{
		public SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private float fadeTime;

		public float animationDuration;

		[SerializeField]
		private Color startColor;

		[SerializeField]
		private Color endColor;

		[SerializeField]
		private AnimationCurve fadeCurve;

		public override float ComponentDuration => 0f;

		public override void ProcessFrame(float time)
		{
		}
	}
}
