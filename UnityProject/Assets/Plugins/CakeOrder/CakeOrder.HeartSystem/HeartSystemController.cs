using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.SaveProfile;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.HeartSystem
{

public class HeartSystemController : MonoSingleton<HeartSystemController>, IItemCurrencyHoldingSource
{
	public const string RemoteConfigKey = "heart_config";

	[SerializeField]
	private CakeItemCurrencyDataAccess _dataAccess;

	[SerializeField]
	private CakeCurrencySO _heartSO;

	[SerializeField]
	private HeartConfig _heartConfig;

	[SerializeField]
	private Sprite _iconUnlimitedHeart;

	private const string KEY_INT_DURATION_SECONDS_UNLIMITED_HEART = "DurUnlimitHeart";

	private const string KEY_TIME_BEGIN_UNLIMITED_HEART = "TimeUnlimitHeart";

	private const string KEY_LAST_TIME_UPDATE_HEART_AMOUNT = "TimeSetHeart";

	private const string KEY_INT_DURATION_REMAINED_RECOVER_HEART = "DurRcvHeart";

	private bool _isInInternalDataUpdate;

	private readonly List<SystemHeartHolder> _heldHearts = new List<SystemHeartHolder>();

	public HeartConfig HeartConfig => null;

	public string ItemId => null;

	public UnlimitedHeartRewardItemInfo UnlimitedHeartRewardItemInfo { get; private set; }

	public int Amount => 0;

	private int MaxHeartInSaveData => 0;

	private static DateTime DefaultTime => default(DateTime);

	public event Action onUnlimitedHeartActivated;

	public event IItemCurrencyHoldingSource.OnAmountChangedDelegate onAmountChanged;

	public int GetHeldHeartAmount()
	{
		return 0;
	}

	public void ReleaseHeartHolder(SystemHeartHolder heartHolder)
	{
	}

	protected override void Awake()
	{
	}

	private void Start()
	{
	}

	public void SetUp()
	{
	}

	private void UpdateRemoteConfig()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void OnCurrencyChanged(string currencyId, int oldAmount, int newAmount)
	{
	}

	public SystemHeartHolder UseOneHeart(int amount = 1, bool saveData = true)
	{
		return null;
	}

	public void RecoverHeart(SystemHeartHolder heartHolder, string trackingActionName = null, bool saveData = true)
	{
	}

	public void AddHeart(int amount = 1, string trackingActionName = null)
	{
	}

	public void RefillHeart(string trackingActionName = null)
	{
	}

	private DateTime GetSanitizedDateTime(string key)
	{
		return default(DateTime);
	}

	private DateTime GetLastTimeUpdateHeart()
	{
		return default(DateTime);
	}

	private int GetDurationRemainedRecoverHeart()
	{
		return 0;
	}

	public TimeSpan GetTimeRemainedToRecoverHeart()
	{
		return default(TimeSpan);
	}

	public int GetHeartAmount()
	{
		return 0;
	}

	public bool IsMaxHeart()
	{
		return false;
	}

	public void CheckAndSaveHeartStatus()
	{
	}

	public void ActivateUnlimitedHeart(int durationSeconds, bool saveData = true)
	{
	}

	public DateTime GetTimeEndUnlimitedHeart()
	{
		return default(DateTime);
	}

	public TimeSpan GetTimeRemainedUnlimitedHeart()
	{
		return default(TimeSpan);
	}

	public bool IsInUnlimitedHeart()
	{
		return false;
	}

	public bool IsEnoughHeartToPlayLevel()
	{
		return false;
	}

	public bool IsEnoughHeartToReplayLevel()
	{
		return false;
	}

	public bool IsFullHeart()
	{
		return false;
	}
}
}
