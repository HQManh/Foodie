using System;
using System.Collections.Generic;
using CakeOrder.BaseUI;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace _GAME.GameUI;

public class PopupBaseCtrl : UICakePopup
{
	public Animator anim;

	public bool playSound;

	public bool closeDestroy;

	public List<Button> btnClose;

	protected bool _onAction;

	private bool _showDone;

	private UnityAction _pendingOpenCallback;

	protected override void Awake()
	{
	}

	public override void HideByBackButton()
	{
	}

	protected override void OnClickClose()
	{
	}

	public virtual void Open()
	{
	}

	public virtual void Open(PopupAction action)
	{
	}

	public virtual void Open(UnityAction callback)
	{
	}

	public virtual void Open(PopupAction action, UnityAction callback)
	{
	}

	public virtual void Close()
	{
	}

	public virtual void Close(PopupAction action)
	{
	}

	public virtual void Close(UnityAction callback)
	{
	}

	public void ForceCloseReset()
	{
	}

	public virtual void Close(PopupAction action, UnityAction callback)
	{
	}

	public virtual bool OnAction()
	{
		return false;
	}

	public virtual void SetOnAction(bool value)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	protected override void OnDoneHide()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	protected override void HideElementImmediate()
	{
	}
}
