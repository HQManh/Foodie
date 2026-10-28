using System;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.BaseUI;

public class UIPopupCakeConfirmDialog : UICakePopup
{
	[SerializeField]
	private Button[] _btnConfirm;

	[SerializeField]
	private Button[] _btnCancel;

	private Action _onConfirm;

	private Action _onCancelAndClosed;

	public override void HideByBackButton()
	{
	}

	protected override void Awake()
	{
	}

	public void SetCallbacks(Action onConfirm, Action onCancelAndClosed)
	{
	}

	public void Show(Action onConfirm, Action onCancelAndClosed)
	{
	}

	private void OnClickConfirm()
	{
	}

	protected override void OnDoneHide()
	{
	}
}
