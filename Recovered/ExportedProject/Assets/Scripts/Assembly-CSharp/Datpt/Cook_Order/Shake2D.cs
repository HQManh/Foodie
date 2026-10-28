using UnityEngine;

namespace Datpt.Cook_Order
{
	public class Shake2D : ActionBase
	{
		[SerializeField]
		private float duration;

		[SerializeField]
		private Transform square;

		[SerializeField]
		private ShakeType shakeType;

		public override void OnActive()
		{
		}

		public override void OnStop()
		{
		}

		protected override void Setup()
		{
		}

		public void OnActive(ShakeType shakeType)
		{
		}

		private void OnDestroy()
		{
		}
	}
}
