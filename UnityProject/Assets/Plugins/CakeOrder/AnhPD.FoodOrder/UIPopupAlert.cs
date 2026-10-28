using System;
using CakeOrder;
using CakeOrder.BaseUI;
using UnityEngine;

namespace AnhPD.FoodOrder
{

public class UIPopupAlert : UICakePopup
{
	[SerializeField]
	private UIAlertBoard[] boards;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAlertHardLevel;

	[SerializeField]
	private SfxAndHapticTrigger _sfxAlertSuperHardLevel;

	private AlertType _alertType;

	private bool _autoHide;

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen => null;

	protected override void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetData(AlertType type, bool autoHide = true)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	public void HideAlert(AlertType type, Action onHidden = null)
	{
	}

	private void OnBoardExpired(UIAlertBoard board)
	{
	}

	private bool HasBoardShowing()
	{
		return false;
	}

	protected override void OnBeforeHide()
	{
	}

	public override void HideByBackButton()
	{
	}

	protected override void OnClickClose()
	{
	}
}
}
