using EssentialSystemR1;
using UnityEngine;
using Utilities;

namespace CakeOrder
{

public class TimeControlCakeOrder : EssentialSystemR1.MonoSingleton<TimeControlCakeOrder>
{
	private FloatMulModifierWithRegisteredSource _timeScaleModifier;

	public FloatMulModifierWithRegisteredSource TimeScaleMultiplier => _timeScaleModifier;

	protected override void Awake()
	{
		base.Awake();
		_timeScaleModifier = new FloatMulModifierWithRegisteredSource(OnChanged);
		OnChanged();

		void OnChanged()
		{
			Time.timeScale = _timeScaleModifier.Value;
		}
	}

	protected override void OnDestroy()
	{
		base.OnDestroy();
		Time.timeScale = 1f;
	}

	public static void StopTime(Object source)
	{
		if (!IsExistInstance)
		{
			Time.timeScale = 0f;
			return;
		}
		Instance._timeScaleModifier.AddModifier(source, 0f);
	}

	public static void StopTime(int sourceId)
	{
		if (!IsExistInstance)
		{
			Time.timeScale = 0f;
			return;
		}
		Instance._timeScaleModifier.AddModifier(sourceId, 0f);
	}

	public static void SetTimeScale(int sourceId, float multiplier)
	{
		if (!IsExistInstance)
		{
			Time.timeScale = multiplier;
			return;
		}
		Instance._timeScaleModifier.AddModifier(sourceId, multiplier);
	}

	public static void ResumeTime(Object source)
	{
		if (!IsExistInstance)
		{
			Time.timeScale = 1f;
			return;
		}
		Instance._timeScaleModifier.RemoveModifier(source);
	}

	public static void ResumeTime(int sourceId)
	{
		if (!IsExistInstance)
		{
			Time.timeScale = 1f;
			return;
		}
		Instance._timeScaleModifier.RemoveModifier(sourceId);
	}

	private static void PauseAllTweensExceptUnscaled()
	{
	}

	private static void ResumeAllTweens()
	{
	}
}
}
