using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameItem;
using _GAME.GameUI;

namespace _GAME.WeeklyContest;

public class PopupWeeklyContestFinishCtrl : PopupSingleton<PopupWeeklyContestFinishCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COpenChest_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupWeeklyContestFinishCtrl _003C_003E4__this;

		private TaskAwaiter _003C_003Eu__1;

		private void MoveNext()
		{
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	public TextMeshProUGUI txtRank;

	public GameObject objReward;

	public Animator animChest;

	public SkeletonGraphic animChestSpine;

	public Animator animShowReward;

	public List<RwItemUICtrl> listRwItemUI;

	public Button btnOpenChest;

	public GameObject objNoReward;

	public Button btnNextRank;

	[Header("RUNTIME")]
	private List<RwItemModel> _listRwItem;

	private bool _isClaimed;

	protected override void Awake()
	{
	}

	public void Open(int finishRank)
	{
	}

	private bool SetUpUIOpen(int finishRank)
	{
		return false;
	}

	[AsyncStateMachine(typeof(_003COpenChest_003Ed__14))]
	public void OpenChest()
	{
	}

	private void ClaimRewardAndNextRace()
	{
	}
}
