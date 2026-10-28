using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinFade : MonoBehaviour
	{
		[SerializeField]
		public SpriteRenderer[] renderers;

		public float defaultAlpha;

		public float amplitude;

		public float fadeSpeed;

		private float timer;

		private float alpha;

		private Color[] defaultColor;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		private void Awake()
		{
		}

		private void Update()
		{
		}

		public void Setup()
		{
		}
	}
}
