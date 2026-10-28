using System;
using CakeOrder.DataSO;
using CakeOrder.UI;
using Utilities;

namespace CakeOrder.InGame;

[Serializable]
public class UIInLevelGeneralReferences
{
	public UIAnimShowHideControl animSectionCurrencyBar;

	public UIHeartCounter heartCounter;

	public UICurrencyCounter softCurrencyCounter;

	public UICurrencyCounter hardCurrencyCounter;

	public UIImageFlyToCounter softCurrencyFly;

	public UIImageFlyToCounter hardCurrencyFly;

	public void HideAllCountersImmediate()
	{
	}

	public void SetUpCounters(IItemCurrencyHoldingSource heartHoldingSource)
	{
	}
}
