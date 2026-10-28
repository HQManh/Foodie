using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home
{

[Serializable]
public class TutorialReferenceGroupUI
{
	public Transform main;

	public Transform focusPoint;

	public Transform textPoint;

	private Transform parent;

	public event Action<TutorialReferenceGroupUI> onInteract;

	public void SetFocus(RectTransform focusContainer)
	{
	}

	public void SetFocus(RectTransform focusContainer, Transform arrow, Transform textInstruct)
	{
	}

	public void ReturnToParent()
	{
	}

	public void TriggerInteract()
	{
	}
}
}
