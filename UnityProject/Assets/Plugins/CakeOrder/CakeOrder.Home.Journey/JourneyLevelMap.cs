using System.Collections.Generic;

namespace CakeOrder.Home.Journey
{

public class JourneyLevelMap
{
	public struct MapRange
	{
		public string mapId;

		public int mapIndex;

		public int numLevels;

		public int firstGlobalLevel;

		public int lastGlobalLevel;

		public int unlockAtGlobalLevel;

		public bool hasAssets;

		public bool HasLevels => false;

		public bool Contains(int globalLevel)
		{
			return false;
		}
	}

	private readonly struct DeclaredMap
	{
		public readonly string mapId;

		public readonly int numLevels;

		public DeclaredMap(string mapId, int numLevels)
		{
			this.mapId = null;
			this.numLevels = 0;
		}
	}

	public const string RemoteConfigKeyMapMetadata = "map_metadata_config";

	private static JourneyLevelMap _instance;

	private readonly MapRange[] _ranges;

	private readonly bool _builtWithoutRemoteConfig;

	private readonly int _fingerprint;

	private const int MaxLevelsPerMap = 999;

	public static JourneyLevelMap Instance => null;

	public int NumMaps => 0;

	public int TotalLevels { get; }

	public static void Invalidate()
	{
	}

	private JourneyLevelMap()
	{
	}

	private static List<DeclaredMap> ReadDeclaredMaps()
	{
		return null;
	}

	private static MapRange[] BuildFrom(List<DeclaredMap> declared)
	{
		return null;
	}

	private static void WarnIfLevelDesignsDisagree(string mapId, int declaredLevels)
	{
	}

	private static MapRange[] BuildFromDatabase()
	{
		return null;
	}

	private static int FallbackLevelCount(string mapId)
	{
		return 0;
	}

	private static MapRange[] BuildFromPlayableLevels()
	{
		return null;
	}

	private static void WarnIfDesignsDisagreeWithPlayable(string mapId, int playableLevels)
	{
	}

	private static int ComputeFingerprint()
	{
		return 0;
	}

	private static int CountLevelDesigns(string mapId)
	{
		return 0;
	}

	public MapRange GetRange(int mapIndex)
	{
		return default(MapRange);
	}

	public bool TryGetRange(string mapId, out MapRange range)
	{
		range = default(MapRange);
		return false;
	}

	public int ToGlobalLevel(string mapId, int levelIndex)
	{
		return 0;
	}

	public bool TryToLocal(int globalLevel, out string mapId, out int levelIndex)
	{
		mapId = null;
		levelIndex = default(int);
		return false;
	}
}
}
