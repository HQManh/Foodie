using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public class ForwardTriggerEvent : MonoBehaviour
{
	public event Action<Collider2D> onTriggerEnter
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

	public event Action<Collider2D> onTriggerStay
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

	public event Action<Collider2D> onTriggerExit
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

	private void OnTriggerEnter2D(Collider2D collision)
	{
	}

	private void OnTriggerStay2D(Collider2D collision)
	{
	}

	private void OnTriggerExit2D(Collider2D collision)
	{
	}
}
