using EssentialSystemR1;
using UnityEngine;
using Utilities;

namespace CakeOrder;

public class TimeControlCakeOrder : MonoSingleton<TimeControlCakeOrder>
{
	private FloatMulModifierWithRegisteredSource _timeScaleModifier;

	public FloatMulModifierWithRegisteredSource TimeScaleMultiplier => null;

	protected override void Awake()
	{
	}

	protected override void OnDestroy()
	{
	}

	public static void StopTime(Object source)
	{
	}

	public static void StopTime(int sourceId)
	{
	}

	public static void SetTimeScale(int sourceId, float multiplier)
	{
	}

	public static void ResumeTime(Object source)
	{
	}

	public static void ResumeTime(int sourceId)
	{
	}

	private static void PauseAllTweensExceptUnscaled()
	{
	}

	private static void ResumeAllTweens()
	{
	}
}
