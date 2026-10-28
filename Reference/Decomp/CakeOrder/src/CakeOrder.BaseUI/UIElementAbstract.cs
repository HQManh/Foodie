using System;
using UnityEngine;

namespace CakeOrder.BaseUI;

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

	public string ElementNameId => null;

	public bool IsShowing => false;

	public void Show(float delay)
	{
	}

	public void Show(Action<UIElementAbstract> onClosed = null, Action<UIElementAbstract> onDoneAnim = null, float delay = 0f)
	{
	}

	public void ShowImmediate(Action<UIElementAbstract> onClosed = null)
	{
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
	}

	public void Hide(Action<UIElementAbstract> onDoneAnim = null, float delay = 0f)
	{
	}

	protected abstract void HideElement(Action onDoneAnim = null, float delay = 0f);

	protected abstract void ShowElementImmediate();

	public void HideImmediate()
	{
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
	}
}
