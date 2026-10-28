using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Floating2D : ActionBase
	{
		[SerializeField]
		private float speed = 1f;

		[SerializeField]
		private AnimationCurve floatCurve;

		private float time;

		private Vector3 pos;

		[field: SerializeField]
		public Transform Square { get; private set; }

		public override void OnActive()
		{
			enabled = true;
			if (Square != null)
			{
				pos = Square.position;
				time = 0f;
			}
		}

		public void Active(float delay)
		{
			// TODO(unrecovered): the pseudocode cancels and re-invokes a delayed call using a method-name literal that is not recoverable from the pseudocode.
		}

		public override void OnStop()
		{
			// TODO(unrecovered): the pseudocode cancels a delayed call by name and tweens a local position toward a config Vector3 read from an unnamed singleton, which is not in the stubs.
			enabled = false;
		}

		private void LateUpdate()
		{
			time += Time.deltaTime * speed;
			if (floatCurve != null && Square != null)
			{
				// TODO(unrecovered): the position update adds curve-scaled offsets read from an unnamed config singleton that is not in the stubs.
			}
		}

		protected override void Setup()
		{
			enabled = false;
			Square = transform.Find("Square" /* literal recovered by guess */);

			floatCurve = new AnimationCurve(
				new Keyframe(0f, 0f, 0f, 0.05f),
				new Keyframe(1f, 0.05f, 0f, 0f),
				new Keyframe(3f, -0.05f, 0f, 0f),
				new Keyframe(4f, 0f, 0f, -0.05f));
			floatCurve.postWrapMode = WrapMode.Loop;
			floatCurve.preWrapMode = WrapMode.Loop;
		}
	}
}
