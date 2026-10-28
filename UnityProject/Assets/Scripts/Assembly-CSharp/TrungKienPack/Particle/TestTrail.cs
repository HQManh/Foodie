using UnityEngine;

namespace TrungKienPack.Particle
{
	public class TestTrail : MonoBehaviour
	{
		[SerializeField]
		private Camera cam;

		[SerializeField]
		private Transform tranTrail;

		private Vector3 mousePos;

		public Camera Cam
		{
			get
			{
				if (cam == null)
				{
					cam = Camera.main;
				}
				return cam;
			}
		}

		private void Update()
		{
			Camera c = Cam;
			if (c == null)
			{
				return;
			}
			mousePos = c.ScreenToWorldPoint(Input.mousePosition);
			if (tranTrail != null)
			{
				tranTrail.position = mousePos;
			}
		}
	}
}
