using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Utilities
{

public class SwipeDetectUI : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	public float timeWindowSwipe;

	public float minSwipeDistanceCm;

	public float maxDistanceClickCm;

	public bool isOnlySwipeHorizontal;

	public float swipeHorizontalAngleThreshold;

	private float _unscaledTimeStartSwipe;

	private Vector2 _screenPosMouseStartFlip;

	public event Action<Vector2> onSwipe;

	public event Action onClicked;

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}
}
}
