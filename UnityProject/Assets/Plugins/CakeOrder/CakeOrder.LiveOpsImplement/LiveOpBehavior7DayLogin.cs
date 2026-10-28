using System;
using System.Runtime.CompilerServices;
using CakeOrder.UI;
using Cysharp.Threading.Tasks;
using LiveOpsR1;
using UnityEngine;

namespace CakeOrder.LiveOpsImplement
{

public class LiveOpBehavior7DayLogin : LiveOpsBehaviorLoginXDaysAbstract
{
	[Serializable]
	public class RewardEntry
	{
		public string rewardId;

		public int amount;
	}

	[Serializable]
	public class RewardMilestone
	{
		[Tooltip("1-based day. The popup still reads days by their position in the list; this is what the sheet's day column arrives as, and what the table is read by.")]
		public int day;

		[Tooltip("First reward of the day. Mirrors rewards[0] when the list below is filled, and is the whole reward for configs written before a day could hold more than one.")]
		public string rewardId;

		public int amount;

		[Tooltip("Every reward of the day. Left empty, the day is the single rewardId / amount above.")]
		public RewardEntry[] rewards;

		public RewardEntry[] GetRewards()
		{
			return null;
		}
	}

	[Serializable]
	public class RewardConfig
	{
		public RewardMilestone[] rewardMilestones;
	}

	public const string RemoteConfigKey = "login7day";

	public const string KeyTrackingReward = "login7day";

	public const string KeyDataDayActive = "dayStart";

	private const string KeyDataFinished = "login7Finished";

	[Header("Rewards Config")]
	[SerializeField]
	private RewardConfig _rewardConfig;

	public RewardConfig RewardConfigData => null;

	public override int NumDays => 0;

	public bool IsFinished => false;

	public event Action<int, RewardListData> onReceiveReward;

	public override UniTask Initialize(LiveOpsDataAccessWrapper dataAccess, LiveOpSO eventSO)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void LoadRemoteConfig()
	{
	}

	protected override int GetLoginDay()
	{
		return 0;
	}

	protected override void ReceiveRewards(int rewardIndex)
	{
	}

	private RewardConfig ParseAnyConfig(string configStr)
	{
		return null;
	}

	private static RewardConfig ParseConfigWithDays(string configStr)
	{
		return null;
	}

	private RewardConfig ParseConfig(string configStr)
	{
		return null;
	}

	private void OnDestroy()
	{
	}
}
}
