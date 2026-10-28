using UnityEngine;

namespace Datpt.Cook_Order
{
	public class LoopRotateCircle : PoolingObject
	{
		[SerializeField]
		private bool clockwise;

		[SerializeField]
		private float speed;

		[SerializeField]
		private LayerMask detectLayer;

		private void Update()
		{
		}

		public override void OnSpawn()
		{
		}
	}
}
