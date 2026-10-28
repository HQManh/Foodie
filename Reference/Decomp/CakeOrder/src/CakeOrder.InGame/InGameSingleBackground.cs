using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering;

namespace CakeOrder.InGame;

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

	public void Initialize(SharedData sharedData, Color initTintColor)
	{
	}

	public void SetIntensity(float value)
	{
	}

	public void Show(TweenCallback onDoneAnim = null)
	{
	}

	public void Hide(TweenCallback onDoneAnim = null)
	{
	}

	public void HideImmediate()
	{
	}

	public void ShowImmediate()
	{
	}

	private void OnShow()
	{
	}

	public void ChangeTintColor(Color tint, float delay = 0f, float duration = -1f, TweenCallback onDoneAnim = null)
	{
	}

	public void SetTintColorImmediate(Color tint)
	{
	}

	private void InternalChangeTintColor(float delay, float duration, TweenCallback onDoneAnim)
	{
	}

	private void InternalSetTintImmediate()
	{
	}

	private void OnDestroy()
	{
	}
}
