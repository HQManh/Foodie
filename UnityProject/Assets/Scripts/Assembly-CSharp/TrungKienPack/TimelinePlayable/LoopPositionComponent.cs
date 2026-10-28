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
		private float duration = 1f;

		[SerializeField]
		private float scaleCurve;

		[SerializeField]
		private int loopTime = 1;

		public float animationDuration;

		[SerializeField]
		private Vector3 defaultLocalPosition;

		public override float ComponentDuration => duration * loopTime * 60f;

		public override void ProcessFrame(float time)
		{
			float t = (time % duration) / duration;
			float x = 0f;
			float y = 0f;
			float z = 0f;
			if (isUseX)
			{
				if (curveX == null)
				{
					throw new System.NullReferenceException();
				}
				x = curveX.Evaluate(t);
			}
			if (isUseY)
			{
				if (curveY == null)
				{
					throw new System.NullReferenceException();
				}
				y = curveY.Evaluate(t);
			}
			if (isUseZ)
			{
				if (curveZ == null)
				{
					throw new System.NullReferenceException();
				}
				z = curveZ.Evaluate(t);
			}
			if (target == null)
			{
				throw new System.NullReferenceException();
			}
			target.localPosition = new Vector3(defaultLocalPosition.x + x * scaleCurve, defaultLocalPosition.y + y * scaleCurve, defaultLocalPosition.z + z * scaleCurve);
		}
	}
}
