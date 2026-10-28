using UnityEngine;

namespace EpicToonFX
{
	public class ETFXRotation : MonoBehaviour
	{
		public enum spaceEnum
		{
			Local = 0,
			World = 1
		}

		[Header("Rotate axises by degrees per second")]
		public Vector3 rotateVector;

		public spaceEnum rotateSpace;

		// TODO(unrecovered): the constructor copies default rotateVector/rotateSpace values from an unnamed static block (DAT_0918cbd0); values not recoverable.

		private void Start()
		{
		}

		private void Update()
		{
			float dt = Time.deltaTime;
			Transform tf = transform;
			if (rotateSpace == spaceEnum.Local)
			{
				if (tf == null)
				{
					return;
				}
				tf.Rotate(rotateVector.x * dt, rotateVector.y * dt, rotateVector.z * dt);
				return;
			}
			if (rotateSpace == spaceEnum.World)
			{
				if (tf == null)
				{
					return;
				}
				tf.Rotate(rotateVector.x * dt, rotateVector.y * dt, rotateVector.z * dt, Space.World);
			}
		}
	}
}
