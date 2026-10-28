using System;
using UnityEngine;
using Utilities;

namespace CakeOrder.BaseUI;

public class UIElementWithAnim : UIElementAbstract
{
	[SerializeField]
	private UIAnimShowHideControl _animShowHide;

	private Action<UIElementWithAnim> _onDoneAnimClosed;

	public UIAnimShowHideControl AnimShowHide => null;

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElementImmediate()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	public void ShowThenHide(float duration, float delay = 0f, Action<UIElementWithAnim> onDoneAnimClosed = null)
	{
	}

	protected override void OnDoneHide()
	{
	}
}
