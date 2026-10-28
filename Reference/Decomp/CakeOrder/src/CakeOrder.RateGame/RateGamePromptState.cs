namespace CakeOrder.RateGame;

public static class RateGamePromptState
{
	public const string RemoteConfigKey = "rate_config";

	public const string PopupAddress = "UIPopup-RateGame";

	public const string DefaultConfigJson = "{\"position\":2,\"level\":8,\"position2\":1,\"level2\":15}";

	private const string KeyPrimarySkipped = "RateGame_PrimarySkipped";

	private const string KeyPromptCompleted = "RateGame_Completed";

	public static bool TryGetAttempt(RatePopupPosition position, int currentGlobalLevel, bool isWonLevel, out RatePopupAttempt attempt)
	{
		attempt = default(RatePopupAttempt);
		return false;
	}

	public static void MarkShown(RatePopupAttempt attempt)
	{
	}

	public static void MarkClosed(RatePopupAttempt attempt)
	{
	}

	public static void MarkRated()
	{
	}

	public static int GetCurrentGlobalLevel()
	{
		return 0;
	}

	public static int GetGlobalLevel(int mapIndex, int levelIndex)
	{
		return 0;
	}

	private static RateGameConfig LoadConfig()
	{
		return null;
	}

	private static bool Matches(int configuredPosition, int configuredLevel, RatePopupPosition position, int currentGlobalLevel)
	{
		return false;
	}
}
