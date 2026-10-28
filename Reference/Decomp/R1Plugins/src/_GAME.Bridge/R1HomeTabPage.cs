using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using CakeOrder.Home;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using TMPro;
using UnityEngine;
using _GAME.Leaderboard;
using _GAME.Team;

namespace _GAME.Bridge;

public class R1HomeTabPage : UIHomeTabPage
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnSetUp_003Ed__8 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public R1HomeTabPage _003C_003E4__this;

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
	private struct _003CRefreshPanelWhenCurrent_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public R1HomeTabPage _003C_003E4__this;

		private CancellationToken _003Ctoken_003E5__2;

		private CookOrderBridge.R1HomeTab _003Ctab_003E5__3;

		private int _003Cframe_003E5__4;

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

	private const string LocTurnedOff = "feature_coming_soon";

	[Header("R1 panel (one of the two)")]
	[SerializeField]
	private UILeaderboardCtrl _leaderboard;

	[SerializeField]
	private UITabTeamCtrl _team;

	[Header("Shown instead of the panel when R1 is turned off (Remote Config r1plugin_enable)")]
	[SerializeField]
	private GameObject _turnedOffNotice;

	[SerializeField]
	private TMP_Text _turnedOffText;

	private bool _isPanelReady;

	private GameObject PanelObject => null;

	[AsyncStateMachine(typeof(_003COnSetUp_003Ed__8))]
	protected override UniTask OnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	private void TryInitPanel()
	{
	}

	private void FitPanelAboveTabBar()
	{
	}

	private void RefreshPanel()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	[AsyncStateMachine(typeof(_003CRefreshPanelWhenCurrent_003Ed__14))]
	private UniTaskVoid RefreshPanelWhenCurrent()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}
}
