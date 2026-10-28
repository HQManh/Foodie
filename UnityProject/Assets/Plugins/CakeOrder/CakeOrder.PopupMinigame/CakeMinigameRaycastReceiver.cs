using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrder.PopupMinigame
{

[DisallowMultipleComponent]
public class CakeMinigameRaycastReceiver : MonoBehaviour
{
	public bool IsMouseOver { get; private set; }

	public event Action EvtOnMouseDown;

	public event Action EvtOnMouseDrag;

	public event Action EvtOnMouseUp;

	public void MouseDown()
	{
	}

	private void Update()
	{
	}

	public void MouseUp()
	{
	}
}
}
