using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.CakeOrderSubsystem;

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

	public static int RankUnlockLevel => 0;

	public static int TeamUnlockLevel => 0;

	public static int WeeklyContestUnlockLevel => 0;

	public MechanicFeaturesConfig MechanicFeaturesConfig => null;

	public ProgressScenarioConfig ProgressScenarioConfig => null;

	public RewardConfig RewardConfig => null;

	public SpeedUpConfig SpeedUpConfig => null;

	public LiveOpsButtonUnlockConfig LiveOpsButtonUnlockConfig => null;

	public ExtraLevelConfig ExtraLevelConfig => null;

	public ComboMechanicParams ComboMechanicParams => null;

	private CakeOrderDatabaseSO Database => null;

	private static int GetRemoteUnlockLevel(string key, int defaultValue)
	{
		return 0;
	}

	private static UnlockConditionType GetUnlockConditionType(CookOrderMechanicType mechanicType)
	{
		return UnlockConditionType.Unknown;
	}

	private int GetMapLevelPassRequiredToUnlock(CookOrderMechanicType mechanicType)
	{
		return 0;
	}

	public bool IsMechanicAvailable(CookOrderMechanicType mechanicType)
	{
		return false;
	}

	public int GetLevelToUnlockLiveOpsButton(LiveOpsButtonType buttonType)
	{
		return 0;
	}

	public bool IsLiveOpsButtonUnlocked(LiveOpsButtonType buttonType)
	{
		return false;
	}

	private bool IsReachedLevelInFirstMap(int levelRequired)
	{
		return false;
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
		return false;
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
		return default((float, float));
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
		return null;
	}

	private ProgressScenarioConfig ImportDataProgressScenario(string data)
	{
		return null;
	}

	private RewardConfig ImportDataRewardConfig(string data)
	{
		return null;
	}

	private SpeedUpConfig ImportDataSpeedUpConfig(string data)
	{
		return null;
	}

	private ExtraLevelConfig ImportDataExtraLevelConfig(string data)
	{
		return null;
	}
}
