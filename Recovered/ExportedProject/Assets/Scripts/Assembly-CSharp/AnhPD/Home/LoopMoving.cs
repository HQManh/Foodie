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

		public bool isMoving;

		public bool isPunching;

		public bool isRotate;

		private void GetAnchorPosition()
		{
		}

		protected override void Awake()
		{
		}
	}
}
