using System;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class RenderersColorTransitionControl : MonoBehaviour
{
	public abstract class ColorTransitionConfig<T> where T : Component
	{
		[SerializeField]
		protected T[] renderers;

		[SerializeField]
		private Gradient gradient;

		public void UpdateColor(float progress)
		{
		}

		protected abstract void SetColor(Color color);
	}

	[Serializable]
	public class ColorTransitionConfigSpriteRenderer : ColorTransitionConfig<SpriteRenderer>
	{
		protected override void SetColor(Color color)
		{
		}
	}

	[Serializable]
	public class ColorTransitionConfigImageUI : ColorTransitionConfig<Image>
	{
		protected override void SetColor(Color color)
		{
		}
	}

	[Serializable]
	public class ColorTransitionConfigCamera : ColorTransitionConfig<Camera>
	{
		protected override void SetColor(Color color)
		{
		}
	}

	[SerializeField]
	[Range(0f, 1f)]
	private float _progress;

	[SerializeField]
	private ColorTransitionConfigSpriteRenderer[] _spriteRendererConfig;

	[SerializeField]
	private ColorTransitionConfigImageUI[] _imageUIConfig;

	[SerializeField]
	private ColorTransitionConfigCamera _cameraConfig;

	public float Progress
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	private void UpdateAllColors()
	{
	}

	private void OnEnable()
	{
	}
}
