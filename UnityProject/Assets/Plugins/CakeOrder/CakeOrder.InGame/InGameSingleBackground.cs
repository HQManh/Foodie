using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering;

namespace CakeOrder.InGame
{

public class InGameSingleBackground : MonoBehaviour
{
	[Serializable]
	public class SharedData
	{
		public Transform backgroundContainer;

		public Transform foregoundContainer;

		public int maxSortingOrderBackground;

		public int maxSortingOrderForeground;

		public float maxZIndexBackground;

		public float maxZIndexForeground;

		private const int sortingOrderStep = 1;

		private const float zIndexStep = -0.001f;

		public void IncStepBackground()
		{
		}

		public void IncStepForeground()
		{
		}
	}

	[SerializeField]
	private SpriteRenderer[] _spriteRenderers;

	[SerializeField]
	private SortingGroup _backgroundObjs;

	[SerializeField]
	private SortingGroup _foregroundObjs;

	[SerializeField]
	private float _windStrength;

	[SerializeField]
	private float _standardBgrWidth;

	[SerializeField]
	private bool isScaleBG;

	private SharedData _sharedData;

	private Color _currentTint;

	private bool _isShowing;

	private Color[] _originColorBackgroundSpriteRenderers;

	private Tween _tintColorTween;

	public float defaultDurationTweenTint;

	public UnityEvent eventShow;

	public UnityEvent eventHide;

	// Rebuilt: tint multiplies the original sprite colours; show/hide fade the sprites and toggle the object.
	private const float FadeDuration = 0.5f;

	private SpriteRenderer[] Renderers()
	{
		if (_spriteRenderers == null || _spriteRenderers.Length == 0)
		{
			_spriteRenderers = GetComponentsInChildren<SpriteRenderer>(true);
		}
		return _spriteRenderers;
	}

	private void CaptureOrigins()
	{
		SpriteRenderer[] renderers = Renderers();
		if (_originColorBackgroundSpriteRenderers != null && _originColorBackgroundSpriteRenderers.Length == renderers.Length) return;
		_originColorBackgroundSpriteRenderers = new Color[renderers.Length];
		for (int i = 0; i < renderers.Length; i++)
		{
			_originColorBackgroundSpriteRenderers[i] = renderers[i] != null ? renderers[i].color : Color.white;
		}
	}

	private static readonly int ColorId = Shader.PropertyToID("_Color");

	private static MaterialPropertyBlock _block;

	// The background shaders (Sprite-Background-ColorGrading etc.) read _Color rather than the vertex colour, so the tint is also written there.
	private static void SetRendererColor(SpriteRenderer renderer, Color color)
	{
		renderer.color = color;
		Material material = renderer.sharedMaterial;
		if (material == null || !material.HasProperty(ColorId)) return;
		if (_block == null) _block = new MaterialPropertyBlock();
		renderer.GetPropertyBlock(_block);
		_block.SetColor(ColorId, color);
		renderer.SetPropertyBlock(_block);
	}

	private void ApplyColors(Color tint, float alpha)
	{
		CaptureOrigins();
		SpriteRenderer[] renderers = Renderers();
		for (int i = 0; i < renderers.Length; i++)
		{
			if (renderers[i] == null) continue;
			Color origin = _originColorBackgroundSpriteRenderers[i];
			SetRendererColor(renderers[i], new Color(origin.r * tint.r, origin.g * tint.g, origin.b * tint.b, origin.a * alpha));
		}
	}

	public void Initialize(SharedData sharedData, Color initTintColor)
	{
		_sharedData = sharedData;
		_currentTint = initTintColor;
		CaptureOrigins();
		InternalSetTintImmediate();
	}

	public void SetIntensity(float value)
	{
		foreach (ParticleSystem particles in GetComponentsInChildren<ParticleSystem>(true))
		{
			ParticleSystem.EmissionModule emission = particles.emission;
			emission.rateOverTimeMultiplier = value;
		}
	}

	public void Show(TweenCallback onDoneAnim = null)
	{
		_isShowing = true;
		gameObject.SetActive(true);
		_tintColorTween?.Kill();
		float alpha = 0f;
		_tintColorTween = DOTween.To(() => alpha, v => { alpha = v; ApplyColors(_currentTint, alpha); }, 1f, FadeDuration).SetTarget(this).OnComplete(() => onDoneAnim?.Invoke());
		eventShow?.Invoke();
	}

	public void Hide(TweenCallback onDoneAnim = null)
	{
		_isShowing = false;
		_tintColorTween?.Kill();
		float alpha = 1f;
		_tintColorTween = DOTween.To(() => alpha, v => { alpha = v; ApplyColors(_currentTint, alpha); }, 0f, FadeDuration).SetTarget(this).OnComplete(() =>
		{
			if (!_isShowing) gameObject.SetActive(false);
			onDoneAnim?.Invoke();
		});
		eventHide?.Invoke();
	}

	public void HideImmediate()
	{
		_isShowing = false;
		_tintColorTween?.Kill();
		gameObject.SetActive(false);
		eventHide?.Invoke();
	}

	public void ShowImmediate()
	{
		_isShowing = true;
		_tintColorTween?.Kill();
		gameObject.SetActive(true);
		InternalSetTintImmediate();
		OnShow();
		eventShow?.Invoke();
	}

	private void OnShow()
	{
		ApplyColors(_currentTint, 1f);
	}

	public void ChangeTintColor(Color tint, float delay = 0f, float duration = -1f, TweenCallback onDoneAnim = null)
	{
		_currentTint = tint;
		InternalChangeTintColor(delay, duration, onDoneAnim);
	}

	public void SetTintColorImmediate(Color tint)
	{
		_currentTint = tint;
		InternalSetTintImmediate();
	}

	private void InternalChangeTintColor(float delay, float duration, TweenCallback onDoneAnim)
	{
		CaptureOrigins();
		if (!gameObject.activeInHierarchy)
		{
			InternalSetTintImmediate();
			onDoneAnim?.Invoke();
			return;
		}
		_tintColorTween?.Kill();
		SpriteRenderer[] renderers = Renderers();
		Color[] from = new Color[renderers.Length];
		for (int i = 0; i < renderers.Length; i++) from[i] = renderers[i] != null ? renderers[i].color : Color.white;
		float t = 0f;
		float length = duration < 0f ? (defaultDurationTweenTint > 0f ? defaultDurationTweenTint : 0.3f) : duration;
		Color target = _currentTint;
		_tintColorTween = DOTween.To(() => t, v =>
		{
			t = v;
			for (int i = 0; i < renderers.Length; i++)
			{
				if (renderers[i] == null) continue;
				Color origin = _originColorBackgroundSpriteRenderers[i];
				Color to = new Color(origin.r * target.r, origin.g * target.g, origin.b * target.b, origin.a);
				SetRendererColor(renderers[i], Color.Lerp(from[i], to, t));
			}
		}, 1f, length).SetDelay(delay).SetTarget(this).OnComplete(() => onDoneAnim?.Invoke());
	}

	private void InternalSetTintImmediate()
	{
		_tintColorTween?.Kill();
		ApplyColors(_currentTint, 1f);
	}

	private void OnDestroy()
	{
		_tintColorTween?.Kill();
		DOTween.Kill(this);
	}
}
}
