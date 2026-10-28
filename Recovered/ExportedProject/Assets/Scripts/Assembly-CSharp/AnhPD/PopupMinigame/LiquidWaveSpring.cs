using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class LiquidWaveSpring : MonoBehaviour
	{
		public float speed;

		public float velocity;

		public float force;

		public float height;

		private float targetHeight;

		private float maxHeight;

		[SerializeField]
		private bool isFlipLoop;

		public void SpringUpdate(float springStiffness, float dampening, float deltaTime)
		{
		}

		public void FlipY()
		{
		}

		public void Reset()
		{
		}
	}
}
