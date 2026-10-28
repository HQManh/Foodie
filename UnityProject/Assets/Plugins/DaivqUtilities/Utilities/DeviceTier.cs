namespace Utilities
{

public static class DeviceTier
{
	public const string KEY_TIER_OVERRIDE = "DeviceTierOverride";

	public const int FRAME_RATE_HIGH = 60;

	public const int FRAME_RATE_LOW = 30;

	private const int MIN_SYSTEM_MEMORY_MB = 3000;

	private const int MIN_PROCESSOR_COUNT = 6;

	private const int MIN_GRAPHICS_MEMORY_MB = 1024;

	private const int MIN_SHADER_LEVEL = 35;

	private const int MIN_SIGNALS_FOR_HIGH = 3;

	private static DeviceTierLevel? _current;

	public static DeviceTierLevel Current => DeviceTierLevel.Low;

	public static bool IsHighEnd => false;

	public static int DefaultTargetFrameRate => 0;

	public static int MaxRefreshRate => 0;

	public static void UseTier(DeviceTierLevel deviceTierLevel)
	{
	}

	public static DeviceTierLevel DetectAndCache()
	{
		return DeviceTierLevel.Low;
	}

	public static void SetOverride(int mode)
	{
	}

	public static string DescribeHardware()
	{
		return null;
	}

	private static DeviceTierLevel Detect()
	{
		return DeviceTierLevel.Low;
	}
}
}
