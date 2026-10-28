using UnityEngine;

namespace _GAME.StageRace;

public class StageRaceInLevelUICtrl : MonoBehaviour
{
	public StageRaceInLevelObjStart objStart;

	public StageRaceInLevelObjRunning objRunning;

	private int _objStartTickId;

	private int _objRunningTickId;

	public void Start()
	{
	}

	private void OnDestroy()
	{
	}

	private void UnregisterTimerCallbacks()
	{
	}

	private void UpdateUIStatus()
	{
	}
}
