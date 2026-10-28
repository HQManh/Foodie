using System;
using DG.Tweening;
using UnityEngine;

namespace Utilities;

public class FadePanelUIWithTransition : MonoBehaviour, IPanelUIWithTransition
{
	[SerializeField]
	protected CanvasGroup _canvasGroup;

	[SerializeField]
	protected float _fadeDuration;

	private IPanelUIWithTransition.ShowState _state;

	private Tween _tweenFade;

	public IPanelUIWithTransition.ShowState State => IPanelUIWithTransition.ShowState.Hide;

	public void HideImmediately()
	{
	}

	public void HideWithTransition(Action onComplete)
	{
	}

	public void ShowImmediately()
	{
	}

	public void ShowWithTransition(Action onComplete)
	{
	}
}
