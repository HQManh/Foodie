using System;
using System.Collections.Generic;

namespace CakeOrder.InGame;

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

	public bool IsDoneFirstTutUI => false;

	public CakeLevelRuntimeData(CakeLevelInitData initData)
	{
	}

	public void Update(float deltaTime)
	{
	}

	public void SetDoneFirstTutUI()
	{
	}
}
