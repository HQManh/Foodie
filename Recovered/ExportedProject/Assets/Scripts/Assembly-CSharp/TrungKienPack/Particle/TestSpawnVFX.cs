using UnityEngine;

namespace TrungKienPack.Particle
{
	public class TestSpawnVFX : MonoBehaviour
	{
		[SerializeField]
		private string particleID;

		[SerializeField]
		private float scale;

		[SerializeField]
		private float volume;

		[SerializeField]
		private Camera cam;

		private Vector3 mousePosition;

		public Camera Cam => null;

		private void Update()
		{
		}
	}
}
