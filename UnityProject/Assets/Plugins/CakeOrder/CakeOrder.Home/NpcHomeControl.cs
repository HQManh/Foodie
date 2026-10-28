using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home
{

public class NpcHomeControl : MonoBehaviour
{
	[SerializeField]
	private ForwardMouseEvent[] _forwardMouseEvent;

	[SerializeField]
	private GameObject _noti;

	private Tween _tweenNoti;

	private bool _isClickable;

	public int Index { get; private set; }

	public event Action<NpcHomeControl> onClick;

	private void Awake()
	{
	}

	private void HandleMouseDown(ForwardMouseEvent @event)
	{
	}

	public void SetUpOnSpawn(int index)
	{
	}

	public void ShowNoti()
	{
	}

	public void HideNoti()
	{
	}
}
}
