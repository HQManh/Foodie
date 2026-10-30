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

	protected override SfxAndHapticTrigger SfxAndHapticOnOpen
	{
		get
		{
			switch (_alertType)
			{
			case AlertType.Hard:
				return _sfxAlertHardLevel;
			case AlertType.SuperHard:
				return _sfxAlertSuperHardLevel;
			default:
				return null;
			}
		}
	}

	protected override void Awake()
	{
		base.Awake();
		if (boards == null)
		{
			return;
		}
		foreach (UIAlertBoard board in boards)
		{
			if (board != null)
			{
				board.onExpired += OnBoardExpired;
			}
		}
	}

	private void OnDestroy()
	{
		if (boards == null)
		{
			return;
		}
		foreach (UIAlertBoard board in boards)
		{
			if (board != null)
			{
				board.onExpired -= OnBoardExpired;
			}
		}
	}

	public void SetData(AlertType type, bool autoHide = true)
	{
		_alertType = type;
		_autoHide = autoHide;
		if (IsShowing)
		{
			ShowBoard(type);
		}
	}

	protected override void OnBeforeShow()
	{
		base.OnBeforeShow();
		ShowBoard(_alertType);
	}

	private void ShowBoard(AlertType type)
	{
		if (boards == null)
		{
			return;
		}
		foreach (UIAlertBoard board in boards)
		{
			if (board != null && board.Type == type)
			{
				board.Show(_autoHide);
			}
		}
	}

	public void HideAlert(AlertType type, Action onHidden = null)
	{
		if (boards != null)
		{
			foreach (UIAlertBoard board in boards)
			{
				if (board != null && board.Type == type && board.IsShowing)
				{
					board.Hide();
				}
			}
		}
		if (IsShowing && !HasBoardShowing())
		{
			Hide(delegate
			{
				onHidden?.Invoke();
			});
		}
		else
		{
			onHidden?.Invoke();
		}
	}

	private void OnBoardExpired(UIAlertBoard board)
	{
		if (IsShowing && !HasBoardShowing())
		{
			Hide();
		}
	}

	private bool HasBoardShowing()
	{
		if (boards == null)
		{
			return false;
		}
		foreach (UIAlertBoard board in boards)
		{
			if (board != null && board.IsShowing)
			{
				return true;
			}
		}
		return false;
	}

	protected override void OnBeforeHide()
	{
		base.OnBeforeHide();
		if (boards == null)
		{
			return;
		}
		foreach (UIAlertBoard board in boards)
		{
			if (board != null && board.IsShowing)
			{
				board.Hide();
			}
		}
	}

	public override void HideByBackButton()
	{
	}

	protected override void OnClickClose()
	{
	}
}
}
