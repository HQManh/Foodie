using UnityEngine;

namespace AnhPD.Home
{
	public class LoopMoving : HomeBuildingPartIdleAnim
	{
		[SerializeField]
		private Vector3 offset;

		[SerializeField]
		private Vector3 punchScale;

		[SerializeField]
		private float angle;

		[SerializeField]
		private float delay;

		[SerializeField]
		private Vector3 anchorPos;

		public bool isMoving = true;

		public bool isPunching = true;

		public bool isRotate = true;

		private void GetAnchorPosition()
		{
			// TODO(unrecovered): the decompiled routine sets anchorPos.y and anchorPos.z from two float arguments that the stub signature (no parameters) does not carry, so the source of those values is unknown.
		}

		protected override void Awake()
		{
			base.Awake();
			// TODO(unrecovered): the rotation tween's end value is not recoverable: the decompile passes a Quaternion where a Vector3 is expected and the 'angle' field is never read, so the Sequence assembly (move/punch/rotate joins) cannot be reproduced faithfully.
		}
	}
}
