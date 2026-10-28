using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities;

public class UIDragAreaFloatingButton : MonoBehaviour
{
	[Header("Mode")]
	[Tooltip("Off = the button never moves: no drag, no snap, no idle floating, and clicks come from _btnClick. On = the player can drag it around and it snaps to the nearest edge on release.")]
	[SerializeField]
	private bool _isDraggable;

	[Header("Draggable mode")]
	[SerializeField]
	private UIDraggableFloatingButton _draggableFloatingButton;

	[SerializeField]
	private Vector2 _initPos;

	public bool autoUpdateInitPosOnEndDrag;

	[Header("Fixed mode")]
	[SerializeField]
	private Button _btnClick;

	[Header("Visuals")]
	[SerializeField]
	private GameObject _noti;

	[SerializeField]
	private GameObject _sectionLocked;

	[SerializeField]
	private Text _txtLock;

	[SerializeField]
	private LoopAnimUIFloating _animFloating;

	public UIDraggableFloatingButton DraggableButton => null;

	public bool IsLocked { get; private set; }

	public event Action onClick
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	public void ResetToInitPos()
	{
	}

	public void SetNoti(bool isShow)
	{
	}

	public void SetLocked(bool isLocked, string lockText = null)
	{
	}

	private void OnClickButton()
	{
	}

	private void OnDragEnd()
	{
	}

	private void UpdateInitPosFromCurrent()
	{
	}
}
