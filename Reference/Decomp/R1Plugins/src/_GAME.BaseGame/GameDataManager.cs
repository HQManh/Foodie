using System;
using System.Collections.Generic;
using UnityEngine;

namespace _GAME.BaseGame;

public static class GameDataManager
{
	private static Dictionary<string, Action> _dictSaveAction;

	private static bool _started;

	public static void AddSaveAction(string key, Action saveAction)
	{
	}

	public static void StartSaveAction()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}

	private static void OnPause(bool pause)
	{
	}

	private static void HandleSaveAction()
	{
	}
}
