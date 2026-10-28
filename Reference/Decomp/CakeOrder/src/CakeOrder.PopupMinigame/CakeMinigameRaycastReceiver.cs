using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrder.PopupMinigame;

[DisallowMultipleComponent]
public class CakeMinigameRaycastReceiver : MonoBehaviour
{
	public bool IsMouseOver { get; private set; }

	public event Action EvtOnMouseDown
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

	public event Action EvtOnMouseDrag
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

	public event Action EvtOnMouseUp
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
