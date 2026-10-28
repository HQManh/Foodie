using System;
using EssentialSystemR1;
using UnityEngine;

namespace CakeOrder.Home.Journey
{

public class JourneyMilestoneRemoteConfig : MonoSingleton<JourneyMilestoneRemoteConfig>
{
	[Serializable]
	public class RewardEntry
	{
		[Tooltip("Id of a CakeCurrencySO - soft, hard, heart, booster...")]
		public string currencyId;

		public int amount;
	}

	[Serializable]
	public class Milestone
	{
		[Tooltip("1-based global level number the player must complete to earn this milestone.")]
		public int globalLevel;

		public RewardEntry[] rewards;
	}

	public const string RemoteConfigKey = "journey_milestone_config";

	private const char SeparatorMilestone = '|';

	private const char SeparatorField = ';';

	private const char SeparatorReward = ',';

	private const char SeparatorRewardValue = ':';

	[SerializeField]
	private Milestone[] _milestones;

	public int Count => 0;

	public Milestone Get(int index)
	{
		return null;
	}

	public bool TryGetAtLevel(int globalLevel, out Milestone milestone)
	{
		milestone = null;
		return false;
	}

	protected override void Awake()
	{
	}

	public void UpdateRemoteConfigValue(string remoteConfigStr)
	{
	}

	private Milestone[] ImportData(string data)
	{
		return null;
	}
}
}
