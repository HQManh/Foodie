using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.UI;
using Cysharp.Threading.Tasks;
using LiveOpsR1;
using UnityEngine;

namespace CakeOrder.LiveOpsImplement
{

public class LiveOpBehaviorDailyReward : LiveOpBehaviorDailyRewardAbstract
{
	[Serializable]
	public class RewardMilestone
	{
		public string rewardId;

		public int amount;
	}

	[Serializable]
	public class RewardConfig
	{
		public RewardMilestone[] rewardMilestones;
	}

	[CompilerGenerated]
	private sealed class _003CIERefreshMilestoneStatus_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public LiveOpBehaviorDailyReward _003C_003E4__this;

		private WaitForSecondsRealtime _003Cwait_003E5__2;

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
		public _003CIERefreshMilestoneStatus_003Ed__36(int _003C_003E1__state)
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

	private const string RemoteConfigKey = "daily_reward";

	[SerializeField]
	private RewardConfig _rewardConfig;

	[Header("Free Milestone")]
	[Tooltip("Which row is the free one. It sits beside the ads ladder rather than at the top of it: claiming it neither opens nor blocks the rows below, and it comes back on its own cooldown instead of being spent for the day.")]
	[SerializeField]
	private int _freeMilestoneIndex;

	[Tooltip("On, the free reward is taken once a day and the row then counts down to midnight, rolling over with the ads ladder. Off, it comes back every Free Cooldown Minutes and repeats all day.")]
	[SerializeField]
	private bool _freeOncePerDay;

	[Tooltip("On, a free reward already taken shows how long until it comes back instead of reading \"Claimed\". That wait ends at midnight, not 24h after the claim - the row rolls over with the ads ladder, so a flat 24h clock would promise the wrong moment. Ignored while Free Once Per Day is off, where the row already has a cooldown of its own to show.")]
	[SerializeField]
	private bool _freeShowResetCountdown;

	[Tooltip("Minutes before the free reward can be taken again. Ignored while Free Once Per Day is on.")]
	[SerializeField]
	private int _freeCooldownMinutes;

	[Tooltip("Legacy. The ads ladder is sequential now and has no clock at all, so nothing reads these. Kept so the tuned playtime figures survive if the design goes back to them.")]
	[SerializeField]
	private int[] _thresholdMinutes;

	[SerializeField]
	private float _refreshIntervalSeconds;

	private const string KeyBaselineSeconds = "DailyRwOnlineBaseSec";

	private const string KeyBaselineDate = "DailyRwOnlineBaseDate";

	private const string BaselineDateFormat = "yyyy-MM-dd";

	private int _reachedCountLastRefresh;

	private bool _isLoggedMissingTracker;

	private Coroutine _corRefreshStatus;

	public override int NumMilestones => 0;

	public RewardConfig RewardConfigData => null;

	public int OnlineMinutesToday => 0;

	public double OnlineSecondsToday => 0.0;

	public event Action<int, RewardListData> onReceiveReward;

	protected override bool IsMilestoneRepeatable(int index)
	{
		return false;
	}

	protected override bool IsMilestoneTimeReached(int index)
	{
		return false;
	}

	public bool IsFreeClaimedToday()
	{
		return false;
	}

	public int GetMilestoneThresholdMinutes(int index)
	{
		return 0;
	}

	public float GetProgressNormalized()
	{
		return 0f;
	}

	public TimeSpan GetTimespanToNextMilestone()
	{
		return default(TimeSpan);
	}

	public TimeSpan GetTimespanToMilestone(int index)
	{
		return default(TimeSpan);
	}

	protected override void ReceiveRewards(int rewardIndex)
	{
	}

	public override UniTask Initialize(LiveOpsDataAccessWrapper dataAccess, LiveOpSO eventSO)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[IteratorStateMachine(typeof(_003CIERefreshMilestoneStatus_003Ed__36))]
	private IEnumerator IERefreshMilestoneStatus()
	{
		return null;
	}

	private int CountMilestonesTimeReached()
	{
		return 0;
	}

	private void LoadRemoteConfig()
	{
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
