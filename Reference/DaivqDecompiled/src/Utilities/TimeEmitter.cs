using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public class TimeEmitter : MonoBehaviour
{
	public enum UpdateType
	{
		Update,
		FixedUpdate,
		LateUpdate
	}

	[Serializable]
	public class BurstConfig
	{
		public float time;

		public int count;

		public float probability;

		public static int CompareByTime(BurstConfig a, BurstConfig b)
		{
			return 0;
		}
	}

	public float duration;

	public bool isLoop;

	public float emitOverTimeMultiplier;

	[ValueCurve(false, true)]
	public AnimationCurve emitOverTime;

	public BurstConfig[] burstConfigs;

	public bool timeInBurstUseRelativeTime;

	[Header("Update")]
	public UpdateType updateType;

	public bool isUseUnscaledTime;

	public float simulateSpeed;

	private float _timePassed;

	private float _lastTimeEmit;

	private int _currentBurstIndex;

	private float _timeBurst;

	private float TimeNow => 0f;

	public event Action onEmit
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

	public event Action<int> onEmitBurst
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

	private void OnEnable()
	{
	}

	private void Update()
	{
	}

	private void FixedUpdate()
	{
	}

	private void LateUpdate()
	{
	}

	private void UpdateEmit()
	{
	}

	private void UpdateTimeBurst()
	{
	}
}
