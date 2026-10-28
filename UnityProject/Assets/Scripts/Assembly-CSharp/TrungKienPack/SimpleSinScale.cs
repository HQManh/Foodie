using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinScale : MonoBehaviour
	{
		[SerializeField]
		private Transform tranRot;

		[SerializeField]
		private float amplitude = 20f;

		[SerializeField]
		private float frequency = 1f;

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
			isRotate = status;
		}

		private void Awake()
		{
			if (tranRot == null)
			{
				return;
			}
			defaultScale = tranRot.localScale;
		}

		private void Update()
		{
			if (!isRotate)
			{
				return;
			}
			if (timeProperty == null || tranRot == null)
			{
				return;
			}
			float t = timeProperty.GetTime();
			float wave = Mathf.Sin(t * frequency);
			scale = amplitude * wave;
			cacheScale = defaultScale + offsetScale * scale;
			tranRot.localScale = cacheScale;
		}
	}
}
