using UnityEngine;

namespace TrungKienPack
{
	public class SimpleRotate : MonoBehaviour
	{
		[SerializeField]
		private Transform objFan;

		public float rotationSpeed;

		[SerializeField]
		private float multiSpeed;

		[SerializeField]
		private bool isRotate;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		public void SetRotate(bool status)
		{
		}

		private void Update()
		{
		}
	}
}
