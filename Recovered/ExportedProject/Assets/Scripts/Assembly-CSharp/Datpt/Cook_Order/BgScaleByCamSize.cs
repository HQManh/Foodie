using UnityEngine;

namespace Datpt.Cook_Order
{
	public class BgScaleByCamSize : MonoBehaviour
	{
		[SerializeField]
		private Transform bgTf;

		private const string ON_SIZE_CAMERA_CHANGE = "OSCC";

		private void Awake()
		{
		}

		private void OnCameraSizeChange()
		{
		}
	}
}
