using System;
using UnityEngine;

namespace EssentialSystemR1;

public class PlayTimeTracker : MonoBehaviour
{
	private float _sessionStartTime;

	private const string SAVE_KEY = "TotalPlayTime";

	public static PlayTimeTracker Instance { get; private set; }

	protected double TotalSecondsPlayed { get; private set; }

	public double TotalPlayTimeSecond => 0.0;

	public TimeSpan TotalPlayTimeSpan => default(TimeSpan);

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnApplicationPause(bool pauseStatus)
	{
	}

	private void OnApplicationQuit()
	{
	}

	public void SaveTime()
	{
	}

	private void LoadTime()
	{
	}

	private string FormatTime(double seconds)
	{
		return null;
	}
}
