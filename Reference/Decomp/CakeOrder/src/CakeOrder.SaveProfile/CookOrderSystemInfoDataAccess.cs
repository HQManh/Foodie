using System;
using System.Runtime.CompilerServices;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.SaveProfile;

public class CookOrderSystemInfoDataAccess : MonoSingleton<CookOrderSystemInfoDataAccess>
{
	[SerializeField]
	private PlayerProfileDataManager _baseDataManager;

	private PlayerProfileDataManager.SaveDataPack _dataPack;

	private const string KeyDataPack = "system";

	private bool _isOpenTracked;

	private const string KEY_FIRST_TIME_OPEN = "firstTime";

	private const string KEY_COUNT_OPEN_DAY = "countOpenDay";

	private const string KEY_COUNT_OPEN = "countOpen";

	private const string KEY_LAST_OPEN_TIME = "lastOpenTime";

	private const string KEY_VERSION_FIRST_OPEN = "verFO";

	private static readonly Version VersionApplyNewIAPLogic;

	private const string KEY_COUNT_OPEN_HOME = "openHome";

	public const int RewardCoinsJoinFacebookGroup = 20;

	private const string PrefKeyJoinFb = "join_fb";

	public DateTime FirstOpenTime => default(DateTime);

	private DateTime LastOpenTime => default(DateTime);

	public TimeSpan TimeSinceFirstOpen => default(TimeSpan);

	public int CountOpenDay => 0;

	public int CountOpenApp => 0;

	public double CountTimePlay => 0.0;

	public string VersionFirstOpen => null;

	public bool HasLegacyLocalProgress => false;

	public bool IsApplyNewIAPLogic => false;

	public int CountOpenHome => 0;

	public bool IsClickedJoinFb => false;

	public event Action onJoinFbClicked
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	protected override void Awake()
	{
	}

	private void OnDataLoaded()
	{
	}

	public void SaveData()
	{
	}

	public void ResetData()
	{
	}

	public bool HaveKey(string key)
	{
		return false;
	}

	public int GetInt(string key, int defaultValue = 0)
	{
		return 0;
	}

	public float GetFloat(string key, float defaultValue = 0f)
	{
		return 0f;
	}

	public string GetString(string key, string defaultValue = "")
	{
		return null;
	}

	public bool GetBool(string key, bool defaultValue = false)
	{
		return false;
	}

	public DateTime GetDateTime(string key, DateTime defaultValue = default(DateTime))
	{
		return default(DateTime);
	}

	public void SetInt(string key, int value)
	{
	}

	public void SetFloat(string key, float value)
	{
	}

	public void SetString(string key, string value)
	{
	}

	public void SetBool(string key, bool value)
	{
	}

	public void SetDateTime(string key, DateTime value)
	{
	}

	public void ChangeInt(string key, int amountChange)
	{
	}

	public void ChangeFloat(string key, float amountChange)
	{
	}

	public void OnDoneLoadData()
	{
	}

	public void TrackOpenHome()
	{
	}

	public void SetClickedJoinFb()
	{
	}
}
