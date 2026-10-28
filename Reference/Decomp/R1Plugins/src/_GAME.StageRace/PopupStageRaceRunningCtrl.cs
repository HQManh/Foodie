using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine.UI;
using _GAME.GameUI;

namespace _GAME.StageRace;

public class PopupStageRaceRunningCtrl : PopupSingleton<PopupStageRaceRunningCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowEffectChangePoint_003Ed__16 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceRunningCtrl _003C_003E4__this;

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

	public TextMeshProUGUI txtStage;

	public TextMeshProUGUI txtTime;

	public TextMeshProUGUI txtInfo;

	public TextMeshProUGUI txtWin;

	public TextMeshProUGUI txtLose;

	public Button btnInfo;

	public Button btnContinue;

	public Button btnClaimRw;

	public List<StageRacePlayerUICtrl> listPlayer;

	public PopupStageRaceRunningCheat menuCheat;

	private bool _onShowChangePointEffect;

	private int _callbackTickId;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	public void UpdatePlayerPointUIAndWinReward()
	{
	}

	private void OnUpdateData()
	{
	}

	[AsyncStateMachine(typeof(_003CShowEffectChangePoint_003Ed__16))]
	public void ShowEffectChangePoint()
	{
	}

	private void CheckFinishRaceWin()
	{
	}

	private void OpenPopupInfo()
	{
	}

	private void FinishRace()
	{
	}

	private void ContinueRace()
	{
	}

	public override void Close()
	{
	}

	protected override void OnDestroy()
	{
	}
}
