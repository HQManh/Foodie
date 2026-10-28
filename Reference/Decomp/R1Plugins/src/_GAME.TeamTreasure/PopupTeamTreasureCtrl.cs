using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using _GAME.GameUI;
using _GAME.Team;

namespace _GAME.TeamTreasure;

public class PopupTeamTreasureCtrl : PopupSingleton<PopupTeamTreasureCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchNewTreasureRank_003Ed__28 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CancellationToken cancellationToken;

		public PopupTeamTreasureCtrl _003C_003E4__this;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<bool>.Awaiter _003C_003Eu__2;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CRunOpenFlow_003Ed__27 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public PopupTeamTreasureCtrl _003C_003E4__this;

		private CancellationTokenSource _003CflowCancellation_003E5__2;

		private CancellationToken _003CcancellationToken_003E5__3;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowEffectChangePoint_003Ed__30 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public PopupTeamTreasureCtrl _003C_003E4__this;

		public CancellationToken cancellationToken;

		private List<TeamTreasureRewardStepUICtrl>.Enumerator _003C_003E7__wrap1;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CUpdateListMember_003Ed__29 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<bool> _003C_003Et__builder;

		public PopupTeamTreasureCtrl _003C_003E4__this;

		public CancellationToken cancellationToken;

		private string _003CselfServerId_003E5__2;

		private List<TeamMemberModel> _003ClistMemberSorted_003E5__3;

		private int _003CtagNoContributionIndex_003E5__4;

		private int _003Ci_003E5__5;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

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

	public PopupTeamTreasureCheat menuCheat;

	public TextMeshProUGUI txtTime;

	public Button btnInfo;

	public Slider sliderPoint;

	public TextMeshProUGUI txtPoint;

	public List<TeamTreasureRewardStepUICtrl> listRwStep;

	public List<TeamTreasureMemberUICtrl> listMemberUI;

	public TeamTreasureMemberUICtrl memberYou;

	private TeamTreasureMemberUICtrl _memberYouRef;

	public RectTransform listMemberUILayout;

	public RectTransform posMemberRefTop;

	public RectTransform posMemberRefBottom;

	public RectTransform posMemberHideTop;

	public RectTransform posMemberHideBottom;

	public RectTransform tagNoContribution;

	public GameObject objMember;

	public GameObject objLoading;

	public GameObject objNwError;

	public GameObject objFinish;

	private bool _openFlowRunning;

	private bool _expiryTransitionAttempted;

	private CancellationTokenSource _openFlowCancellation;

	private int _callbackTickId;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	private void UpdateUITime()
	{
	}

	private void OnOpenedCallback()
	{
	}

	[AsyncStateMachine(typeof(_003CRunOpenFlow_003Ed__27))]
	private UniTask RunOpenFlow()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CFetchNewTreasureRank_003Ed__28))]
	private UniTask FetchNewTreasureRank(CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CUpdateListMember_003Ed__29))]
	private UniTask<bool> UpdateListMember(CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<bool>);
	}

	[AsyncStateMachine(typeof(_003CShowEffectChangePoint_003Ed__30))]
	private UniTask ShowEffectChangePoint(CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void ShowNotReadyState()
	{
	}

	private void CancelOpenFlow()
	{
	}

	private void UnregisterTimerCallback()
	{
	}

	private void OpenPopupInfo()
	{
	}

	private void Update()
	{
	}

	public override void Close()
	{
	}

	public new void ForceCloseReset()
	{
	}

	protected override void OnDestroy()
	{
	}
}
