using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Floating2D : ActionBase
	{
		[SerializeField]
		private float speed;

		[SerializeField]
		private AnimationCurve floatCurve;

		private float time;

		private Vector3 pos;

		[field: SerializeField]
		public Transform Square { get; private set; }

		public override void OnActive()
		{
		}

		public void Active(float delay)
		{
		}

		public override void OnStop()
		{
		}

		private void LateUpdate()
		{
		}

		protected override void Setup()
		{
		}
	}
}
