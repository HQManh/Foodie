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
			// TODO(unrecovered): spawns through the PoolingParticle singleton (MonoSingleton.Instance, not in the stubs) and writes the request copy at offsets (0x38-0x40, 0x28) that do not match the stub field layout.
		}
	}
}
