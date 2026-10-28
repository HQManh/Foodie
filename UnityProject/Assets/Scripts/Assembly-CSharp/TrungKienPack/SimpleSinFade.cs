using UnityEngine;

namespace TrungKienPack
{
	public class SimpleSinFade : MonoBehaviour
	{
		[SerializeField]
		public SpriteRenderer[] renderers;

		public float defaultAlpha;

		public float amplitude;

		public float fadeSpeed = 1f;

		private float timer;

		private float alpha;

		private Color[] defaultColor;

		[SerializeField]
		private TimeScaleProperty timeProperty;

		private void Awake()
		{
			if (renderers == null)
			{
				return;
			}
			defaultColor = new Color[renderers.Length];
			for (int i = 0; i < renderers.Length; i++)
			{
				if (renderers[i] == null)
				{
					break;
				}
				defaultColor[i] = renderers[i].color;
			}
		}

		private void Update()
		{
			if (timeProperty == null)
			{
				return;
			}
			timer += timeProperty.GetDeltaTime() * fadeSpeed;
			alpha = Mathf.Clamp01(defaultAlpha + amplitude * Mathf.Sin((timer % 1f) * Mathf.PI));
			if (renderers == null || defaultColor == null)
			{
				return;
			}
			for (int i = 0; i < renderers.Length; i++)
			{
				if (i >= defaultColor.Length)
				{
					return;
				}
				defaultColor[i].a = alpha;
				if (renderers[i] == null)
				{
					break;
				}
				renderers[i].color = defaultColor[i];
			}
		}

		public void Setup()
		{
			// TODO(unrecovered): the original assigns timeProperty through a lookup (FUN_04a6abf4 with an unrecovered type handle); TimeScaleProperty is a plain class, not a Component, so the lookup cannot be reproduced as GetComponent.
		}
	}
}
