using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Utilities;

public class UIDraggableFloatingButton : MonoBehaviour
{
	public enum HorizontalSnapDirection
	{
		None,
		Left,
		Right,
		Both
	}

	public enum VerticalSnapDirection
	{
		None,
		Top,
		Bottom,
		Both
	}

	[Serializable]
	public class GeneralConfig
	{
		[Header("Drag")]
		[Range(0f, 1f)]
		public float lerpPositionSpeed;

		[Header("Snap")]
		public float edgeSnapOffsetLeft;

		public float edgeSnapOffsetRight;

		public float edgeSnapOffsetTop;

		public float edgeSnapOffsetBottom;

		public float snapSpeed;

		public float maxSnapDuration;

		[Header("Click")]
		public float thresholdMoveDistanceAllowClick;

		public float thresholdHoldDurationAllowClick;
	}

	[SerializeField]
	private ForwardUIPointerEvent _forwardMouseEvent;

	[SerializeField]
	private RectTransform _controlledTransform;

	[SerializeField]
	private RectTransform _draggableRectArea;

	[SerializeField]
	private GeneralConfig _config;

	[SerializeField]
	private HorizontalSnapDirection _horizontalSnapDirection;

	[SerializeField]
	private VerticalSnapDirection _verticalSnapDirection;

	private bool _isDragging;

	private Vector2 _dragStartMousePos;

	private Vector2 _dragStartAnchoredPos;

	private float _dragStartTime;

	private bool _isDraggedOutsideClickThreshold;

	private Canvas _canvas;

	private Tween _snapTween;

	public RectTransform ControlledTransform => null;

	public BoolModifierWithRegisteredSource BlockDragModifier { get; private set; }

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

	public event Action onDragEnd
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

	private void OnEnable()
	{
	}

	private void OnPlayerPointerDown(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	private void Update()
	{
	}

	public void OnPlayerPointerUp(ForwardUIPointerEvent @event, PointerEventData data)
	{
	}

	private void Snap()
	{
	}

	public void Snap(Vector2 desiredPos)
	{
	}

	private void OnDisable()
	{
	}
}
