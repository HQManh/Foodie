using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using CakeOrder.UI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.LiveOpsImplement;

public class UIPopupDailyRewards : UICakePopup
{
	[CompilerGenerated]
	private sealed class _003CIECountdownToNextMilestone_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIPopupDailyRewards _003C_003E4__this;

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
		public _003CIECountdownToNextMilestone_003Ed__33(int _003C_003E1__state)
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

	private LiveOpBehaviorDailyReward _liveOpBehavior;

	[SerializeField]
	private UIItemSlotDailyRewards[] _slotsRw;

	[SerializeField]
	private TMP_Text _txtCountdown;

	[Tooltip("Green overlay on the progress rail, drawn Filled/Vertical from the top.")]
	[SerializeField]
	private Image _imgProgressFill;

	[Tooltip("Tick sitting on the rail for each ads milestone, in order - index 0 is the first row below the free one. They are children of the fill so the tick and the fill it belongs to can never drift apart.")]
	[SerializeField]
	private GameObject[] _railTicks;

	[Tooltip("How full the rail is once each ads milestone is claimed, in order. Measured to the bottom edge of that milestone's square in the rail art - the squares are not evenly spaced, so a computed fraction stopped short of them.")]
	[SerializeField]
	private float[] _railFillPerMilestone;

	private bool _isShownFirstTime;

	private Coroutine _corCountdown;

	private bool _isRefreshingCountdown;

	private const string LocComeBackIn = "toast_come_back_in";

	private const string LocClaimFreeFirst = "toast_claim_free_first";

	private const string LocClaimPreviousFirst = "toast_claim_previous_first";

	private bool _isCheckingInternet;

	public override void HideByBackButton()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	public override void SetUpOnCreate(SceneMainUI mainUI)
	{
	}

	public void UpdateSlots(bool isUseTransition)
	{
	}

	protected override void OnBeforeShow()
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void HideAllSlots()
	{
	}

	private void OnClickLocked(UIItemSlotDailyRewards rewards)
	{
	}

	private void OnClickClaimed(UIItemSlotDailyRewards rewards)
	{
	}

	private void ClaimOnline(UIItemSlotDailyRewards rewards)
	{
	}

	private void OnClaimReward(int rewardIndex, RewardListData listReward)
	{
	}

	private void OnMilestonesStatusChanged()
	{
	}

	private static string FormatCountdown(TimeSpan time)
	{
		return null;
	}

	private void RefreshCountdownViews()
	{
	}

	private void RefreshCountdownViewsInternal()
	{
	}

	private void UpdateProgressFill()
	{
	}

	private int CountClaimedLadderMilestones()
	{
		return 0;
	}

	private float GetRailFill(int claimedCount)
	{
		return 0f;
	}

	private void UpdateRailTicks(int claimedCount)
	{
	}

	[IteratorStateMachine(typeof(_003CIECountdownToNextMilestone_003Ed__33))]
	private IEnumerator IECountdownToNextMilestone()
	{
		return null;
	}

	private void OnDestroy()
	{
	}
}
