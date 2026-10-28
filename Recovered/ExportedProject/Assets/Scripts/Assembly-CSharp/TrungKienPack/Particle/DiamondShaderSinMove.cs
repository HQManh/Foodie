using UnityEngine;

namespace TrungKienPack.Particle
{
	public class DiamondShaderSinMove : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spr;

		public float amplitude;

		public float sinSpeed;

		private float alpha;

		private MaterialPropertyBlock mpb;

		private const string shearProperty = "_Shear";

		[SerializeField]
		private bool isActive;

		public void SetActive(bool status)
		{
		}

		private void Start()
		{
		}

		private void Update()
		{
		}
	}
}
