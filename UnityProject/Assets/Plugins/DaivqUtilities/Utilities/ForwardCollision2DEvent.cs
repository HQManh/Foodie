using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities
{

public class ForwardCollision2DEvent : MonoBehaviour
{
	public event Action<Collision2D> onCollisionEnter;

	public event Action<Collision2D> onCollisionStay;

	public event Action<Collision2D> onCollisionExit;

	private void OnCollisionEnter2D(Collision2D collision)
	{
	}

	private void OnCollisionStay2D(Collision2D collision)
	{
	}

	private void OnCollisionExit2D(Collision2D collision)
	{
	}
}
}
