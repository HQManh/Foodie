using CakeOrder.BaseUI;
using UnityEngine;

namespace CookOrder
{

public static class BlurBackdropSafety
{
	public const string RemoteKeyMode = "popup_blur_mode";

	public const string DefaultRemoteMode = "on";

	public const string RemoteKeyGpuBlocklist = "popup_blur_gpu_blocklist";

	public const string RemoteKeyOpenGlMode = "popup_blur_opengl_mode";

	public const string DefaultOpenGlMode = "dim";

	public const string ShaderName = "Hidden/CookOrder/BlurBackdrop";

	private const string PrefKeyInFlight = "blur_backdrop_in_flight";

	private const string PrefKeyStrikes = "blur_backdrop_strikes";

	private const int MaxStrikes = 2;

	private const string CrashlyticsKey = "blur_state";

	private static bool _isStartupEvaluated;

	private static bool _isDisabledByCrash;

	private static bool _isMarkerArmed;

	private static bool _isMarkerCleared;

	private static string _sessionDisableReason;

	private static Shader _shader;

	private static string _lastCrashlyticsState;

	public static Shader BlurShader => null;

	public static bool IsOpenGl => false;

	public static bool AutoUsesDim => false;

	public static BlurBackdropMode Resolve(BlurBackdropMode requested)
	{
		return BlurBackdropMode.Auto;
	}

	public static bool IsEnabled()
	{
		return false;
	}

	private static string ReadOpenGlMode()
	{
		return null;
	}

	public static void DisableForSession(string reason)
	{
	}

	public static void OnBeforeCapture()
	{
	}

	public static void OnCaptureShown()
	{
	}

	public static void OnReleased()
	{
	}

	private static void EvaluateStartup()
	{
	}

	private static string ReadRemoteMode()
	{
		return null;
	}

	private static bool IsGpuBlocked()
	{
		return false;
	}

	private static string ReadRemoteString(string key)
	{
		return null;
	}

	private static void SetCrashlyticsState(string state)
	{
	}
}
}
