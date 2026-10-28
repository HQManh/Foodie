using UnityEngine;

namespace AnhPD.PopupMinigame
{
	public class LiquidWaveSpring : MonoBehaviour
	{
		public float speed = 10f;

		public float velocity;

		public float force;

		public float height;

		private float targetHeight;

		private float maxHeight = 0.75f;

		[SerializeField]
		private bool isFlipLoop = true;

		public void SpringUpdate(float springStiffness, float dampening, float deltaTime)
		{
			// Note: the pseudocode reads the starting height from the dampening argument register; the height field is used here as the spring's current height.
			float h = height;
			force = -(dampening * velocity) - (h - targetHeight) * springStiffness;
			height = h;
			velocity += force;
			float next = h + velocity;
			float clamped = Mathf.Clamp(next, -maxHeight, maxHeight);
			float t = Mathf.Clamp01(speed * deltaTime);
			float scaleY = h + (clamped - h) * t;
			Vector3 s = transform.localScale;
			s.y = scaleY;
			transform.localScale = s;
			if (scaleY < 0f && -0.01f < scaleY && isFlipLoop)
			{
				FlipY();
			}
		}

		public void FlipY()
		{
			// TODO(unrecovered): the FlipY argument (flip toggle) is not recoverable from the pseudocode; the pseudocode sets transform.localEulerAngles to 180 or 0 on one axis depending on it.
		}

		public void Reset()
		{
			velocity = 0f;
			force = 0f;
			height = 0f;
			targetHeight = 0f;
		}
	}
}
