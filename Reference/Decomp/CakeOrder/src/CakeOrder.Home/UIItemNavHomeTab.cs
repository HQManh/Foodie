using CakeOrder.BaseUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.Home;

public class UIItemNavHomeTab : UIElementWithAnimHighlight
{
	public enum LockState
	{
		Locked,
		Available,
		Locked_To_Available
	}

	[SerializeField]
	private UIAnimShowHideControl _sectionLocked;

	[SerializeField]
	private UIAnimShowHideControl _sectionAvailable;

	[SerializeField]
	private RectTransform _groupBaseFrame;

	[SerializeField]
	private RectTransform _groupIconAndText;

	[SerializeField]
	private RectTransform _shakeAnchorBeforeUnlock;

	[SerializeField]
	private TextMeshProUGUI _textLocked;

	[SerializeField]
	private Image[] _imgIcons;

	[SerializeField]
	private TextMeshProUGUI _textTitle;

	[SerializeField]
	private float _durationShakeBeforeUnlock;

	[SerializeField]
	private RectTransform _highlightPoint;

	[SerializeField]
	private GameObject _objNoti;

	private LockState _lockState;

	private string _lockedText;

	private string _title;

	private UIHomeNavControl _controller;

	private RectTransform _originParentBaseFrame;

	private RectTransform _originParentIconAndText;

	private float _baseFrameInsetLeft;

	private float _baseFrameInsetRight;

	public RectTransform HighlightPoint => null;

	public HomeTabCategory Category { get; private set; }

	public void SetNotiActive(bool active)
	{
	}

	public void SetUp(UIHomeNavControl controller, HomeTabCategory category, LockState lockState, Sprite sprite, string lockedText = "", string title = "")
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void CaptureBaseFrameInsets()
	{
	}

	public void SyncBaseFrameWidth()
	{
	}
}
