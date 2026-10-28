using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.Utils;

namespace _GAME.WeeklyContest;

public class WeeklyContestHomeTabUICtrl : SingletonX<WeeklyContestHomeTabUICtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CUpdateUIActive_003Ed__20 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public WeeklyContestHomeTabUICtrl _003C_003E4__this;

		public bool force;

		private bool _003CfinalFetch_003E5__2;

		private bool _003Cshown_003E5__3;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__1;

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

	public CanvasGroup objTab;

	public CanvasGroup objLock;

	public TextMeshProUGUI txtLevelUnlock;

	public CanvasGroup objLoading;

	public CanvasGroup objNetworkErr;

	public Button btnRefresh;

	[Header("CONTENT")]
	public CanvasGroup objContent;

	public TextMeshProUGUI txtTimeLeft;

	public Button btnShowInfo;

	public List<PlayerWCRankItemUICtrl> listRankItem;

	[Header("CHEAT")]
	public WeeklyContestHomeTabCheat menuCheat;

	private int _cbProfileData;

	private int _cbTimerTick;

	public bool IsSelfActive => false;

	public static bool IsActive => false;

	public void Init()
	{
	}

	protected override void OnDestroy()
	{
	}

	private void OnProfileDataChanged()
	{
	}

	[AsyncStateMachine(typeof(_003CUpdateUIActive_003Ed__20))]
	public void UpdateUIActive(bool force = false)
	{
	}

	private void ShowContent()
	{
	}

	private void OnTimerTick()
	{
	}

	private void UpdateUITimeLeft()
	{
	}

	private void CheckFinishWeek()
	{
	}

	private void OpenPopupInfo()
	{
	}
}
