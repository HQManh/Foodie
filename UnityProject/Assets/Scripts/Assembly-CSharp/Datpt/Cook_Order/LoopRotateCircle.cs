using UnityEngine;

namespace Datpt.Cook_Order
{
	public class LoopRotateCircle : PoolingObject
	{
		[SerializeField]
		private bool clockwise;

		[SerializeField]
		private float speed = 1f;

		[SerializeField]
		private LayerMask detectLayer;

		private void Update()
		{
			if (transform != null)
			{
				float angle = clockwise ? -speed : speed;
				transform.Rotate(0f, 0f, angle * Time.deltaTime);
			}
		}

		public override void OnSpawn()
		{
			base.OnSpawn();
			// TODO(unrecovered): sets transform.localScale from the static Vector3 at DAT_0918cbd0->0xb8 (owning class not in stubs).
		}
	}
}
