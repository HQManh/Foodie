using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Utilities;

public class DragToChangePageUI : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler
{
	[Tooltip("How far the finger must travel sideways, in physical cm, before the drag is reported.")]
	public float minDragDistanceCm;

	[Tooltip("How much the sideways movement has to beat the vertical movement by before the gesture is claimed as a page drag. Above 1 a diagonal is left to whatever scrolls underneath.")]
	public float dominantAxisRatio;

	[Tooltip("Pixels of travel before the direction is judged. Too small and the first jittery frame decides the axis; too large and a short flick is over before the choice is made.")]
	public float pixelsBeforeAxisLock;

	private Vector2 _startPosition;

	private bool _axisLocked;

	private bool _claimed;

	private bool _spent;

	private ScrollRect _scrollHere;

	public event Action<Vector2> onDragged
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

	public void OnBeginDrag(PointerEventData eventData)
	{
	}

	public void OnDrag(PointerEventData eventData)
	{
	}

	public void OnEndDrag(PointerEventData eventData)
	{
	}

	private void StopScrollingHere(PointerEventData eventData)
	{
	}
}
