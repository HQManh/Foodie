using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinLocalMove : MonoBehaviour
	{
		[SerializeField]
		private Transform tranRot;

		[SerializeField]
		private float amplitude = 20f;

		[SerializeField]
		private float frequency = 1f;

		[SerializeField]
		private Vector3 direct;

		public Vector3 defaultLocalPos;

		private float lenght;

		[SerializeField]
		private bool isMove;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		public void SetMove(bool status)
		{
			isMove = status;
		}

		private void Update()
		{
			if (!isMove)
			{
				return;
			}
			if (timeProperty == null || tranRot == null)
			{
				return;
			}
			float t = timeProperty.GetTime();
			float wave = Mathf.Sin(t * frequency);
			lenght = amplitude * wave;
			tranRot.localPosition = defaultLocalPos + direct * lenght;
		}

		public void ToDefaultPos()
		{
			if (tranRot == null)
			{
				return;
			}
			tranRot.localPosition = defaultLocalPos;
		}
	}
}
