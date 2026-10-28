using System;
using System.Collections.Generic;
using CakeOrder.UI;

namespace CakeOrder.Home;

public class NewVersionPopupData
{
	public string versionLabel;

	public List<string> infoLines;

	public RewardListData rewards;

	private Action _claim;

	public bool HasRewards => false;

	internal void SetClaim(Action claim)
	{
	}

	public void Claim()
	{
	}
}
