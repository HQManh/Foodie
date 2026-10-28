using UnityEngine;

namespace TrungKienPack.Particle
{
	public class WaterSurface : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spr;

		[SerializeField]
		private float speed = 2f;

		[SerializeField]
		private float strength = 1f;

		[SerializeField]
		private float noiseScale = 8f;

		[SerializeField]
		private Vector2 noiseTiling = new Vector2(1f, 5f);

		private const string speedName = "_Speed";

		private const string strengthName = "_Strength";

		private const string noiseScaleName = "_NoiseScale";

		private const string noiseTilingName = "_NoiseTiling";

		private MaterialPropertyBlock mpb;

		public SpriteRenderer Spr
		{
			get
			{
				if (spr == null)
				{
					spr = GetComponent<SpriteRenderer>();
				}
				return spr;
			}
		}

		private void Start()
		{
			mpb = new MaterialPropertyBlock();
			Modify();
		}

		private void Modify()
		{
			if (mpb == null)
			{
				return;
			}
			mpb.SetFloat(speedName, speed);
			mpb.SetFloat(strengthName, strength);
			mpb.SetFloat(noiseScaleName, noiseScale);
			mpb.SetVector(noiseTilingName, noiseTiling);
			SpriteRenderer renderer = Spr;
			if (renderer != null)
			{
				renderer.SetPropertyBlock(mpb);
			}
		}
	}
}
