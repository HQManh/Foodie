using System;
using _GAME.Bridge;

namespace _GAME.Levels;

public static class LevelPlayController
{
	public static LevelMode LevelMode;

	public static int LevelStt;

	public static void Init()
	{
	}

	private static LevelMode ModeOf(R1LevelInfo level)
	{
		return LevelMode.Campaign;
	}

	private static void OnLevelStart(R1LevelInfo level)
	{
	}

	private static void OnLevelWin(R1LevelInfo level)
	{
	}

	private static void OnLevelLose(R1LevelInfo level, R1LevelLose reason)
	{
	}

	private static void Call(R1Event liveOpsEvent, Action action)
	{
	}
}
