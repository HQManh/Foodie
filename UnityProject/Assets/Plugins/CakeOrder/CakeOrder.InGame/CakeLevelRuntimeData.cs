using System;
using System.Collections.Generic;

namespace CakeOrder.InGame
{

[Serializable]
public class CakeLevelRuntimeData
{
	public GameResultType resultType;

	public LevelEndReason endReason;

	public CakeLevelRuntimeDataTimeCounter timeCounter;

	public CakeLevelRuntimeDataCustomer customerData;

	public CakeLevelRuntimeDataSoftCurrency softCurrencyData;

	public BoosterCounter boosterCounter;

	public SimpleIngameNumberSource heartData;

	public Dictionary<string, object> customData;

	private const string KEY_DONE_FIRST_TUT_UI = "DoneFirstTutUI";

	public bool IsDoneFirstTutUI => customData != null && customData.TryGetValue(KEY_DONE_FIRST_TUT_UI, out var value) && value is bool done && done;

	public CakeLevelRuntimeData(CakeLevelInitData initData)
	{
		// Rebuilt from the decompiled code. The original only builds the money/booster/heart parts when the init data carries the
		// restaurant params; the other members are always created here so a partial init cannot leave them null.
		resultType = GameResultType.Undetermined;
		timeCounter = new CakeLevelRuntimeDataTimeCounter();
		customerData = new CakeLevelRuntimeDataCustomer();
		customData = new Dictionary<string, object>();
		if (initData == null)
		{
			return;
		}
		if (initData.levelMetadata != null)
		{
			customerData.SetMaxNumCustomers(initData.levelMetadata.numCustomers);
		}
		if (initData.restaurantParams != null)
		{
			softCurrencyData = new CakeLevelRuntimeDataSoftCurrency((float)initData.restaurantParams.profitPercentAdded / 100f + 1f);
			boosterCounter = new BoosterCounter();
			int hearts = initData.heartConfig != null ? initData.heartConfig.initHeart : 1;
			heartData = new SimpleIngameNumberSource(hearts, hearts);
		}
	}

	public void Update(float deltaTime)
	{
		timeCounter.totalTime += deltaTime;
	}

	public void SetDoneFirstTutUI()
	{
		customData[KEY_DONE_FIRST_TUT_UI] = true;
	}
}
}
