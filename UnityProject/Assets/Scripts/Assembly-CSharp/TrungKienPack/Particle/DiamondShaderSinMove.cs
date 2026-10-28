using UnityEngine;

namespace TrungKienPack.Particle
{
	public class DiamondShaderSinMove : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spr;

		public float amplitude;

		public float sinSpeed = 1f;

		private float alpha;

		private MaterialPropertyBlock mpb;

		private const string shearProperty = "_Shear";

		[SerializeField]
		private bool isActive = true;

		public void SetActive(bool status)
		{
			isActive = status;
		}

		private void Start()
		{
			mpb = new MaterialPropertyBlock();
		}

		private void Update()
		{
			if (!isActive)
			{
				return;
			}
			alpha = amplitude * Mathf.Sin(Time.time * sinSpeed);
			if (mpb == null)
			{
				return;
			}
			mpb.SetFloat(shearProperty, alpha);
			if (spr != null)
			{
				spr.SetPropertyBlock(mpb);
			}
		}
	}
}
