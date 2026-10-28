using System;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame;

public class CookOrderModuleTimeCountdown : MonoBehaviour
{
	private const int ID_STOP_TIME_MODIFIER_END_GAME = -9999;

	private LevelPlayLoadAndSetupControl _levelPlayControl;

	private float _unscaledTimeStartPlayLevel;

	public bool IsUsedInLevel { get; private set; }

	public BoolModifierWithRegisteredSource CountdownBlocker { get; private set; }

	public bool IsTimeCountdownRunning => false;

	public bool IsBeginRunCountdown { get; private set; }

	public bool IsHaveLimitTime => false;

	public float TotalTimeLimit { get; private set; }

	public float TimeRemained { get; private set; }

	public float TimeRemainedRatio => 0f;

	public float TimePlaying { get; private set; }

	public float RealTimePlayLevel => 0f;

	public event Action onBeginRunCountdown
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

	public event Action onTimeOut
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

	public event Action<float> onTimeRemainChanged
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

	public event Action onCountdownBlockerChanged
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

	public void SetUp(LevelPlayLoadAndSetupControl levelPlayControl, bool isUsedInLevel)
	{
	}

	private void OnDestroy()
	{
	}

	private void OnPlayStateChanged(LevelPlayState oldState, LevelPlayState newState)
	{
	}

	public void SetTimeRemained(float value)
	{
	}

	public void ChangeTimeRemained(float amountChange)
	{
	}

	private void Update()
	{
	}
}
