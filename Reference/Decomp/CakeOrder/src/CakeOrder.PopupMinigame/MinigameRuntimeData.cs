using System;
using System.Collections.Generic;

namespace CakeOrder.PopupMinigame;

[Serializable]
public class MinigameRuntimeData
{
	public Dictionary<string, object> customData;

	public float timeStart { get; private set; }

	public float timeStartUnscaled { get; private set; }

	public float timeEnd { get; private set; }

	public float timeEndUnscaled { get; private set; }

	public float TimePlay => 0f;

	public float TimePlayUnscaled => 0f;

	public bool IsEnded => false;

	public bool IsWin { get; private set; }

	public static MinigameRuntimeData NewData => null;

	public void RecordEnd(bool isWin)
	{
	}
}
