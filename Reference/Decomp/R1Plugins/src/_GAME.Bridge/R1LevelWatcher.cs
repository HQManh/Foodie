using System;
using System.Runtime.CompilerServices;
using CakeOrder;
using CakeOrder.InGame;
using UnityEngine;

namespace _GAME.Bridge;

public static class R1LevelWatcher
{
	private const float BackHomeIdleSeconds = 1.5f;

	private static bool _wasAtHome;

	private static bool _backHomePending;

	private static float _homeIdleTime;

	public static R1LevelInfo Current { get; private set; }

	public static bool IsRunning { get; private set; }

	private static CakeLevelInitData CurrentInitData => null;

	public static event Action<R1LevelInfo> OnLevelStart
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

	public static event Action<R1LevelInfo> OnLevelWin
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

	public static event Action<R1LevelInfo, R1LevelLose> OnLevelLose
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

	public static event Action OnBackHome
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

	public static event Action OnArriveHome
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

	public static void Start()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}

	private static void Poll()
	{
	}

	private static void CheckLevelStart()
	{
	}

	private static void HandleLevelEnded(CakeLevelEndResultData result)
	{
	}

	private static void EndWithLose(R1LevelInfo level, R1LevelLose reason)
	{
	}

	private static void Raise(Action handler)
	{
	}

	private static void Raise<T>(Action<T> handler, T arg)
	{
	}

	private static void Raise<T1, T2>(Action<T1, T2> handler, T1 arg1, T2 arg2)
	{
	}
}
