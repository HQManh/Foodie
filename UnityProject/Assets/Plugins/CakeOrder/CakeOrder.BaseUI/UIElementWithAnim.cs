using System;
using System.Collections;
using UnityEngine;
using Utilities;

namespace CakeOrder.BaseUI
{

public class UIElementWithAnim : UIElementAbstract
{
	[SerializeField]
	private UIAnimShowHideControl _animShowHide;

	private Action<UIElementWithAnim> _onDoneAnimClosed;

	public UIAnimShowHideControl AnimShowHide => _animShowHide;

	protected override void ShowElementImmediate()
	{
		if (_animShowHide != null)
		{
			_animShowHide.ShowImmediate();
		}
		else
		{
			base.gameObject.SetActive(true);
		}
	}

	protected override void HideElementImmediate()
	{
		if (_animShowHide != null)
		{
			_animShowHide.HideImmediate();
		}
		else
		{
			base.gameObject.SetActive(false);
		}
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
		if (_animShowHide != null)
		{
			_animShowHide.Show(onDoneAnim, delay);
			return;
		}
		base.gameObject.SetActive(true);
		onDoneAnim?.Invoke();
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
		if (_animShowHide != null)
		{
			_animShowHide.Hide(onDoneAnim, delay);
			return;
		}
		base.gameObject.SetActive(false);
		onDoneAnim?.Invoke();
	}

	public void ShowThenHide(float duration, float delay = 0f, Action<UIElementWithAnim> onDoneAnimClosed = null)
	{
		_onDoneAnimClosed = onDoneAnimClosed;
		Show(null, delegate
		{
			StartCoroutine(HideAfter(duration));
		}, delay);
	}

	private IEnumerator HideAfter(float duration)
	{
		yield return new WaitForSecondsRealtime(duration);
		Hide();
	}

	protected override void OnDoneHide()
	{
		Action<UIElementWithAnim> onDoneAnimClosed = _onDoneAnimClosed;
		_onDoneAnimClosed = null;
		onDoneAnimClosed?.Invoke(this);
	}
}
}
