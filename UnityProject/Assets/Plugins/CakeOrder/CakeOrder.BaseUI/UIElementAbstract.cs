using System;
using UnityEngine;

namespace CakeOrder.BaseUI
{

public abstract class UIElementAbstract : MonoBehaviour
{
	public enum State
	{
		None,
		Showing,
		Hiding
	}

	[SerializeField]
	private string _elementNameId;

	protected State _state;

	private Action<UIElementAbstract> _onClosed;

	public string ElementNameId => _elementNameId;

	public bool IsShowing => _state == State.Showing;

	public void Show(float delay)
	{
		Show(null, null, delay);
	}

	public void Show(Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null, float delay = 0f)
	{
		_onClosed = onClosed;
		OnBeforeShow();
		_state = State.Showing;
		ShowElement(delegate
		{
			OnDoneShow();
			onDoneAnim?.Invoke(this);
		}, delay);
	}

	public void ShowImmediate(Action<UIElementAbstract> onClosed = null)
	{
		_onClosed = onClosed;
		OnBeforeShow();
		_state = State.Showing;
		ShowElementImmediate();
		OnDoneShow();
	}

	protected virtual void OnBeforeShow()
	{
	}

	protected virtual void OnDoneShow()
	{
	}

	protected abstract void ShowElement(Action onDoneAnim = null, float delay = 0f);

	public void Hide(float delay)
	{
		Hide(null, delay);
	}

	public void Hide(Action<UIElementAbstract> onDoneAnim = null, float delay = 0f)
	{
		OnBeforeHide();
		_state = State.Hiding;
		HideElement(delegate
		{
			FinishHide(onDoneAnim);
		}, delay);
	}

	protected abstract void HideElement(Action onDoneAnim = null, float delay = 0f);

	protected abstract void ShowElementImmediate();

	public void HideImmediate()
	{
		OnBeforeHide();
		_state = State.Hiding;
		HideElementImmediate();
		FinishHide(null);
	}

	private void FinishHide(Action<UIElementAbstract> onDoneAnim)
	{
		_state = State.None;
		OnDoneHide();
		onDoneAnim?.Invoke(this);
		Action<UIElementAbstract> onClosed = _onClosed;
		_onClosed = null;
		onClosed?.Invoke(this);
	}

	protected virtual void OnBeforeHide()
	{
	}

	protected virtual void OnDoneHide()
	{
	}

	protected abstract void HideElementImmediate();

	internal virtual void SetTransformParent(Transform transform)
	{
		base.transform.SetParent(transform, worldPositionStays: false);
	}
}
}
