using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.CakeOrderSubsystem
{

public class GameProgressScenario : MonoSingleton<GameProgressScenario>
{
	private enum UnlockConditionType
	{
		Unknown,
		Coming_Soon,
		Always_Unlocked,
		Passed_Map_Level
	}

	[CompilerGenerated]
	private sealed class _003CIEApplyInitCurrency_003Ed__65 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameProgressScenario _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CIEApplyInitCurrency_003Ed__65(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	private const string KeyClaimedInitHardCurrency = "claimed_init_hard_currency";

	public const string RemoteConfigKey_MechanicFeatures = "mechanic_features";

	public const string RemoteConfigKey_ProgressScenario = "progress_scenario";

	public const string RemoteConfigKey_RewardConfig = "reward_config";

	public const string RemoteConfigKey_SpeedUpConfig = "speed_up_config";

	public const string RemoteConfigKey_MapMetadata = "map_metadata_config";

	public const string RemoteConfigKey_ExtraLevel = "extra_level_config";

	public const string RemoteConfigKey_RankUnlockLevel = "r1plugin_lvunlock_rank";

	public const string RemoteConfigKey_TeamUnlockLevel = "r1plugin_lvunlock_team";

	public const string RemoteConfigKey_WeeklyContestUnlockLevel = "r1plugin_lvunlock_weeklycontest";

	public const int DefaultRankUnlockLevel = 10;

	public const int DefaultTeamUnlockLevel = 25;

	public const int DefaultWeeklyContestUnlockLevel = 10;

	[SerializeField]
	private MapMetadata[] _mapMetadatas;

	[SerializeField]
	private MechanicFeaturesConfig _mechanicFeaturesConfig;

	[SerializeField]
	private ProgressScenarioConfig _progressScenarioConfig;

	[SerializeField]
	private RewardConfig _rewardConfig;

	[SerializeField]
	private SpeedUpConfig _speedUpConfig;

	[SerializeField]
	private LiveOpsButtonUnlockConfig _liveOpsButtonUnlockConfig;

	[SerializeField]
	private ExtraLevelConfig _extraLevelConfig;

	private const string LocDayN = "day_n";

	private const string LocUnlocksOnDay = "unlocks_on_day_n";

	private const string LocComingSoon = "coming_soon";

	private const string LocFeatureComingSoon = "feature_coming_soon";

	[SerializeField]
	private CakeOrderDatabaseSO _database;

	[SerializeField]
	private PlayerMapLevelProgressDataAccess _progressDataAccess;

	[Header("Temp")]
	[SerializeField]
	private ComboMechanicParams _comboMechanicParams;

	private const string LocLevelLockedPassMapDay = "level_locked_pass_map_day";

	public static int RankUnlockLevel => DefaultRankUnlockLevel;

	public static int TeamUnlockLevel => DefaultTeamUnlockLevel;

	public static int WeeklyContestUnlockLevel => DefaultWeeklyContestUnlockLevel;

	public MechanicFeaturesConfig MechanicFeaturesConfig => _mechanicFeaturesConfig;

	public ProgressScenarioConfig ProgressScenarioConfig => _progressScenarioConfig;

	public RewardConfig RewardConfig => _rewardConfig;

	public SpeedUpConfig SpeedUpConfig => _speedUpConfig;

	public LiveOpsButtonUnlockConfig LiveOpsButtonUnlockConfig => _liveOpsButtonUnlockConfig;

	public ExtraLevelConfig ExtraLevelConfig => _extraLevelConfig;

	public ComboMechanicParams ComboMechanicParams => _comboMechanicParams;

	// The original falls back to a generic static holder that is not decoded; any loaded database asset is used instead.
private CakeOrderDatabaseSO Database
{
	get
	{
		if (_database != null)
		{
			return _database;
		}
		CakeOrderDatabaseSO[] loaded = Resources.FindObjectsOfTypeAll<CakeOrderDatabaseSO>();
		return loaded.Length > 0 ? loaded[0] : null;
	}
}

	private static int GetRemoteUnlockLevel(string key, int defaultValue)
	{
		// The original reads the level from remote config; remote config is deliberately ignored, so the default applies.
		return defaultValue;
	}

	private static UnlockConditionType GetUnlockConditionType(CookOrderMechanicType mechanicType)
	{
		// Table read from the game binary (indexed by CookOrderMechanicType): Base, Combo, BoosterShow, CosmeticShop, LevelPath, PvP,
		// Achievement, IAPShop, Leaderboard, Team.
		switch (mechanicType)
		{
		case CookOrderMechanicType.Base:
			return UnlockConditionType.Always_Unlocked;
		case CookOrderMechanicType.Combo:
			return UnlockConditionType.Unknown;
		case CookOrderMechanicType.CosmeticShop:
		case CookOrderMechanicType.PvP:
		case CookOrderMechanicType.Achievement:
			return UnlockConditionType.Coming_Soon;
		case CookOrderMechanicType.BoosterShow:
		case CookOrderMechanicType.LevelPath:
		case CookOrderMechanicType.IAPShop:
		case CookOrderMechanicType.Leaderboard:
		case CookOrderMechanicType.Team:
			return UnlockConditionType.Passed_Map_Level;
		default:
			throw new ArgumentException(string.Format("Unknown mechanic type: {0}", mechanicType), "mechanicType");
		}
	}

	private int GetMapLevelPassRequiredToUnlock(CookOrderMechanicType mechanicType)
	{
		// Field offsets in ProgressScenarioConfig: 0x1c lvUnlockShop, 0x20 lvUnlockLvPath, 0x24 lvShowBooster.
		switch (mechanicType)
		{
		case CookOrderMechanicType.BoosterShow:
			return _progressScenarioConfig != null ? _progressScenarioConfig.lvShowBooster : 0;
		case CookOrderMechanicType.LevelPath:
			return _progressScenarioConfig != null ? _progressScenarioConfig.lvUnlockLvPath : 0;
		case CookOrderMechanicType.IAPShop:
			return _progressScenarioConfig != null ? _progressScenarioConfig.lvUnlockShop : 0;
		case CookOrderMechanicType.Leaderboard:
			return RankUnlockLevel;
		case CookOrderMechanicType.Team:
			return TeamUnlockLevel;
		default:
			throw new ArgumentException(string.Format("No level requirement for mechanic type: {0}", mechanicType), "mechanicType");
		}
	}

	public bool IsMechanicAvailable(CookOrderMechanicType mechanicType)
	{
		UnlockConditionType condition = GetUnlockConditionType(mechanicType);
		if (condition == UnlockConditionType.Always_Unlocked)
		{
			return true;
		}
		if (condition != UnlockConditionType.Passed_Map_Level)
		{
			return false;
		}
		if (_progressDataAccess == null)
		{
			return false;
		}
		(int map, int level) highest = _progressDataAccess.GetHighestMapAndLevelIndexPlayable();
		int required = GetMapLevelPassRequiredToUnlock(mechanicType);
		// Past the first map everything counts as passed.
		return highest.map >= 1 || required <= highest.level + 1;
	}

	public int GetLevelToUnlockLiveOpsButton(LiveOpsButtonType buttonType)
	{
		if (_liveOpsButtonUnlockConfig == null)
		{
			return 0;
		}
		switch (buttonType)
		{
		case LiveOpsButtonType.Login7Days:
			return _liveOpsButtonUnlockConfig.login7Days;
		case LiveOpsButtonType.DailyReward:
			return _liveOpsButtonUnlockConfig.dailyReward;
		case LiveOpsButtonType.RemoveAds:
			return _liveOpsButtonUnlockConfig.removeAds;
		case LiveOpsButtonType.StarterPack:
			return _liveOpsButtonUnlockConfig.starterPack;
		default:
			return 0;
		}
	}

	public bool IsLiveOpsButtonUnlocked(LiveOpsButtonType buttonType)
	{
		return IsReachedLevelInFirstMap(GetLevelToUnlockLiveOpsButton(buttonType));
	}

	private bool IsReachedLevelInFirstMap(int levelRequired)
	{
		if (levelRequired <= 1)
		{
			return true;
		}
		if (_progressDataAccess == null)
		{
			return false;
		}
		(int map, int level) highest = _progressDataAccess.GetHighestMapAndLevelIndexPlayable();
		return highest.map >= 1 || levelRequired <= highest.level + 1;
	}

	public string GetTextMechanicUnlockCondition(CookOrderMechanicType mechanicType)
	{
		return null;
	}

	public string GetTextMechanicLockedToast(CookOrderMechanicType mechanicType)
	{
		return null;
	}

	public bool IsExtraLevel(string mapId, int levelIndex)
	{
		CakeMapSO mapSO = Database != null ? CakeOrder.InGame.DatabaseApi.GetMapSO(Database, mapId) : null;
		return mapSO != null && mapSO.numRequiredLevels > 0 && mapSO.numRequiredLevels <= levelIndex;
	}

	public bool TryGetExtraLevelLock(string mapId, int levelIndex, out int lockMapIndex, out int lockLevelIndex)
	{
		lockMapIndex = default(int);
		lockLevelIndex = default(int);
		return false;
	}

	public string GetTextExtraLevelLock(int lockMapIndex, int lockLevelIndex)
	{
		return null;
	}

	public (float, float) GetWinRewardMultipliers(string mapId, int levelIndex)
	{
		// Not an extra level (or no config): both multipliers are 1. Otherwise the config's two multipliers, floored at 0.
		if (_extraLevelConfig == null || !IsExtraLevel(mapId, levelIndex))
		{
			return (1f, 1f);
		}
		return (Mathf.Max(0f, _extraLevelConfig.gemMul), Mathf.Max(0f, _extraLevelConfig.goldMul));
	}

	protected override void Awake()
	{
	}

	[IteratorStateMachine(typeof(_003CIEApplyInitCurrency_003Ed__65))]
	private IEnumerator IEApplyInitCurrency()
	{
		return null;
	}

	private MapMetadata[] ImportMapMetadata(string str)
	{
		return null;
	}

	private MechanicFeaturesConfig ImportDataMechanicFeatures(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<MechanicFeaturesConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}

	private ProgressScenarioConfig ImportDataProgressScenario(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<ProgressScenarioConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}

	private RewardConfig ImportDataRewardConfig(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<RewardConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}

	private SpeedUpConfig ImportDataSpeedUpConfig(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<SpeedUpConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}

	private ExtraLevelConfig ImportDataExtraLevelConfig(string data)
	{
		try
		{
			return Newtonsoft.Json.JsonConvert.DeserializeObject<ExtraLevelConfig>(data);
		}
		catch (System.Exception)
		{
			return null;
		}
	}
}
}
