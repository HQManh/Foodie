namespace CakeOrder.BaseUI
{

public static class UIFlowPolicy
{
	public static bool SkipHomeAtBoot(bool skipEnabled, int highestMapIndex, int highestLevelIndex, int firstHomeLevel)
	{
		return false;
	}

	public static bool GoHomeAfterNext(bool firstMap, int levelNumber, int firstHomeLevel, int homeInterval, bool nextMapAfterRequired, bool nextIsExtra)
	{
		return false;
	}

	public static bool RequiresInternet(int mapIndex, bool adsManagerExists, bool campaignRequiresInternet, bool canPlayOffline)
	{
		return false;
	}
}
}
