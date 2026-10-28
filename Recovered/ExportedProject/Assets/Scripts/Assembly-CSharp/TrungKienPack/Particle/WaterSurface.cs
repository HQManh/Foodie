using UnityEngine;

namespace TrungKienPack.Particle
{
	public class WaterSurface : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer spr;

		[SerializeField]
		private float speed;

		[SerializeField]
		private float strength;

		[SerializeField]
		private float noiseScale;

		[SerializeField]
		private Vector2 noiseTiling;

		private const string speedName = "_Speed";

		private const string strengthName = "_Strength";

		private const string noiseScaleName = "_NoiseScale";

		private const string noiseTilingName = "_NoiseTiling";

		private MaterialPropertyBlock mpb;

		public SpriteRenderer Spr => null;

		private void Start()
		{
		}

		private void Modify()
		{
		}
	}
}
