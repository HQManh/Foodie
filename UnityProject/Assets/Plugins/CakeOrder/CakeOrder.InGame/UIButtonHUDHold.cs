using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using Utilities;

namespace CakeOrder.InGame
{

public class UIButtonHUDHold : UIButtonHUD
{
	public enum InteractMode
	{
		Hold,
		Click
	}

	[SerializeField]
	private ForwardUIPointerEvent _forwardPointer;

	[SerializeField]
	private InteractMode _mode;

	public bool IsHolding { get; private set; }

	public InteractMode Mode => InteractMode.Hold;

	public event Action<UIButtonHUDHold> onHoldStart;

	public event Action<UIButtonHUDHold> onHoldEnd;

	protected override void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetMode(InteractMode mode)
	{
	}

	private void ApplyMode()
	{
	}

	private void OnForwardedPointerDown(ForwardUIPointerEvent forward, PointerEventData eventData)
	{
	}

	private void OnForwardedPointerUp(ForwardUIPointerEvent forward, PointerEventData eventData)
	{
	}

	protected override void OnUnlocked()
	{
	}

	private void EndHold()
	{
	}
}
}
