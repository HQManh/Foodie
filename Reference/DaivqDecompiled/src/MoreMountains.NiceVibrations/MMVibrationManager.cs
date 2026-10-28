using UnityEngine;

namespace MoreMountains.NiceVibrations;

public class MMVibrationManager
{
	private const float HapticOutputLevel = 0.25f;

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ApplyOutputLevel()
	{
	}

	public static void Haptic(HapticTypes hapticType)
	{
	}
}
