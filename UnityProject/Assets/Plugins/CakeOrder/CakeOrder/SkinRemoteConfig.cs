using System;
using System.Runtime.CompilerServices;
using Utilities;

namespace CakeOrder
{

public class SkinRemoteConfig : MonoSingleton<SkinRemoteConfig>
{
	[Serializable]
	public class Data
	{
		public string skin;

		public int startFromLv;

		public int intervalMin;

		public int intervalMax;
	}

	public const string RemoteKey = "skin_config";

	public const string DefaultValue = "{\"skin\":\"normal\",\"startFromLv\":26,\"intervalMin\":1,\"intervalMax\":3}";

	public const string SkinNormal = "normal";

	public const string SkinHalloween = "hlw";

	private const string PrefKeyGradingVisitsToSkip = "skin_grading_visits_to_skip_";

	private string _cachedJson;

	private Data _cachedData;

	private string _gradingSkin;

	public Data Config => null;

	public string CurrentSkin => null;

	public bool IsHalloween => false;

	public string GradingSkin
	{
		get
		{
			return null;
		}
		private set
		{
		}
	}

	private int LevelsWon => 0;

	public event Action<string> OnGradingSkinChanged;

	public bool IsSkinUnlocked(string skinId)
	{
		return false;
	}

	public string RollGradingSkinOnHomeEnter()
	{
		return null;
	}

	public static Data Parse(string json)
	{
		return null;
	}

	private string ReadRawJson()
	{
		return null;
	}
}
}
