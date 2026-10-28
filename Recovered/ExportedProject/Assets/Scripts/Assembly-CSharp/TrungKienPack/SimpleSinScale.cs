using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinScale : MonoBehaviour
	{
		[SerializeField]
		private Transform tranRot;

		[SerializeField]
		private float amplitude;

		[SerializeField]
		private float frequency;

		[SerializeField]
		private Vector3 offsetScale;

		private float scale;

		[SerializeField]
		private bool isRotate;

		private Vector3 defaultScale;

		private Vector3 cacheScale;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		public void SetRotate(bool status)
		{
		}

		private void Awake()
		{
		}

		private void Update()
		{
		}
	}
}
