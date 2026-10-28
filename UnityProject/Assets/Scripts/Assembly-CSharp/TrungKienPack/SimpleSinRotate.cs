using DG.Tweening;
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
		private float amplitude = 20f;

		[SerializeField]
		private float frequency = 1f;

		private float angle;

		[SerializeField]
		private bool isRotate;

		private Vector3 defaultAngle;

		private Vector3 cacheAngle;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		public void SetRotate(bool status)
		{
			isRotate = status;
		}

		private void Start()
		{
			if (tranRot == null)
			{
				return;
			}
			defaultAngle = tranRot.localEulerAngles;
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
			cacheAngle = defaultAngle;
			angle = amplitude * wave;
			cacheAngle.z = angle + offsetRotate;
			tranRot.localEulerAngles = cacheAngle;
		}

		public void ToDefaultRot()
		{
			if (tranRot == null)
			{
				return;
			}
			tranRot.DOLocalRotate(defaultAngle, 0.2f, RotateMode.Fast);
		}
	}
}
