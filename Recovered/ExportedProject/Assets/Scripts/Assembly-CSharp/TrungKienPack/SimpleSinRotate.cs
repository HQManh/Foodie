using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinRotate : MonoBehaviour
	{
		[SerializeField]
		private Transform tranRot;

		[SerializeField]
		private float offsetRotate;

		[SerializeField]
		private float amplitude;

		[SerializeField]
		private float frequency;

		private float angle;

		[SerializeField]
		private bool isRotate;

		private Vector3 defaultAngle;

		private Vector3 cacheAngle;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		public void SetRotate(bool status)
		{
		}

		private void Start()
		{
		}

		private void Update()
		{
		}

		public void ToDefaultRot()
		{
		}
	}
}
