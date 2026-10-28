namespace CakeOrder.Home.Journey;

public static class JourneyProgress
{
	public enum MilestoneState
	{
		Locked,
		Claimable,
		Claimed
	}

	private const string KeyLastSeenCompletedLevels = "Journey_LastSeenCompleted";

	private static string KeyMilestoneClaimed(int globalLevel)
	{
		return null;
	}

	public static int GetLastSeenCompletedLevels()
	{
		return 0;
	}

	public static void SetLastSeenCompletedLevels(int completedLevels)
	{
	}

	public static int CountCompletedLevels()
	{
		return 0;
	}

	public static int MaxWinLevelsInMap(string mapId)
	{
		return 0;
	}

	public static int GetCurrentGlobalLevel()
	{
		return 0;
	}

	public static bool IsMapUnlocked(string mapId)
	{
		return false;
	}

	public static bool IsChapterOpen(JourneyLevelMap.MapRange range)
	{
		return false;
	}

	public static bool HasUnlockAvailable()
	{
		return false;
	}

	public static bool IsMapCompleted(string mapId)
	{
		return false;
	}

	public static bool IsMilestoneClaimed(int globalLevel)
	{
		return false;
	}

	public static bool MarkMilestoneClaimed(int globalLevel)
	{
		return false;
	}

	public static MilestoneState GetMilestoneState(int globalLevel, int completedLevels)
	{
		return MilestoneState.Locked;
	}

	public static int CountClaimableMilestones(JourneyMilestoneRemoteConfig config)
	{
		return 0;
	}
}
