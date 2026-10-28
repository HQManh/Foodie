using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Utilities
{

public class ForwardUIPointerEvent : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IPointerClickHandler
{
	public event Action<ForwardUIPointerEvent, PointerEventData> onMouseDown;

	public event Action<ForwardUIPointerEvent, PointerEventData> onMouseUp;

	public event Action<ForwardUIPointerEvent, PointerEventData> onMouseClick;

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}

	public void OnPointerClick(PointerEventData eventData)
	{
	}
}
}
