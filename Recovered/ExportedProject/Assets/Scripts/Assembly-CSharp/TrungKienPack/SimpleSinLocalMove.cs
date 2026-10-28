using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinLocalMove : MonoBehaviour
	{
		[SerializeField]
		private Transform tranRot;

		[SerializeField]
		private float amplitude;

		[SerializeField]
		private float frequency;

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
		}

		private void Update()
		{
		}

		public void ToDefaultPos()
		{
		}
	}
}
