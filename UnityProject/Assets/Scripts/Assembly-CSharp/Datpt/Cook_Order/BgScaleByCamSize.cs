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
			Datpt.ObserverPattern.EventManager.StartListening(ON_SIZE_CAMERA_CHANGE, new UnityEngine.Events.UnityAction(OnCameraSizeChange));
		}

		private void OnCameraSizeChange()
		{
			// TODO(unrecovered): scales bgTf by a float from EventManager.GetFloat and a base scale read from an unnamed singleton (DAT_0918cbd0 +0xb8, static Vector3); EventManager.GetFloat now exists but the singleton owner is not in the stubs.
		}
	}
}
