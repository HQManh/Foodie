using UnityEngine;

namespace TrungKienPack
{
	public class SimpleRotate : MonoBehaviour
	{
		[SerializeField]
		private Transform objFan;

		public float rotationSpeed = 45f;

		[SerializeField]
		private float multiSpeed = 1f;

		[SerializeField]
		private bool isRotate = true;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		public void SetRotate(bool status)
		{
			isRotate = status;
		}

		private void Update()
		{
			if (!isRotate)
			{
				return;
			}
			if (timeProperty == null || objFan == null)
			{
				return;
			}
			float dt = timeProperty.GetDeltaTime();
			objFan.Rotate(0f, 0f, rotationSpeed * multiSpeed * dt, Space.Self);
		}
	}
}
