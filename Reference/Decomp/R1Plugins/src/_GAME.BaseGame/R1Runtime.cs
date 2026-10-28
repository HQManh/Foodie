using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace _GAME.BaseGame;

public class R1Runtime : MonoBehaviour
{
	private static R1Runtime _ins;

	private float _tickTimer;

	public static bool IsQuitting { get; private set; }

	public static Transform Transform => null;

	public static event Action OnSecondTick
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

	public static event Action OnLateTick
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

	public static event Action<bool> OnPause
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

	public static event Action OnQuit
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

	public static void Ensure()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}

	private void Update()
	{
	}

	private void LateUpdate()
	{
	}

	private void OnApplicationPause(bool pause)
	{
	}

	private void OnApplicationQuit()
	{
	}
}
