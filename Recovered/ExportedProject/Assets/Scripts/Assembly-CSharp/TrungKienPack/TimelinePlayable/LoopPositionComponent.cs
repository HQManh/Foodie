using UnityEngine;

namespace TrungKienPack.TimelinePlayable
{
	public class LoopPositionComponent : BasePlayableComponent
	{
		[SerializeField]
		private Transform target;

		[SerializeField]
		private bool isUseX;

		[SerializeField]
		private bool isUseY;

		[SerializeField]
		private bool isUseZ;

		[SerializeField]
		private AnimationCurve curveX;

		[SerializeField]
		private AnimationCurve curveY;

		[SerializeField]
		private AnimationCurve curveZ;

		[SerializeField]
		private float duration;

		[SerializeField]
		private float scaleCurve;

		[SerializeField]
		private int loopTime;

		public float animationDuration;

		[SerializeField]
		private Vector3 defaultLocalPosition;

		public override float ComponentDuration => 0f;

		public override void ProcessFrame(float time)
		{
		}
	}
}
