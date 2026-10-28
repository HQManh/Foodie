using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities
{

public class DraggableObjectAdvanced : MonoBehaviour
{
	private Vector3 mOffset;

	private float mZCoord;

	[Header("Clamp Position")]
	public DraggableModuleClamp clampModule;

	[Header("Detach")]
	public bool isNeedDetach;

	public float distanceDragCauseDetach;

	public AnimationCurve distanceReduceRateByDragDistanceRatio;

	public BoolModifierWithRegisteredSource BlockDragModifiers { get; private set; }

	public bool IsAllowDrag => false;

	public bool IsDragging { get; private set; }

	public event Action<DraggableObjectAdvanced> onStartDrag;

	public event Action<DraggableObjectAdvanced> onDrag;

	public event Action<DraggableObjectAdvanced> onEndDrag;

	private void Awake()
	{
	}

	private void OnMouseDown()
	{
	}

	private Vector3 GetMouseWorldPos()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private void OnMouseDrag()
	{
	}

	private void OnMouseUp()
	{
	}

	public void CancelDragging()
	{
	}
}
}
