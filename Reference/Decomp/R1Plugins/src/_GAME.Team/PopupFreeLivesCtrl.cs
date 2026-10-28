using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using _GAME.DreamyPass;
using _GAME.GameUI;

namespace _GAME.Team;

public class PopupFreeLivesCtrl : PopupBaseCtrl
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CFetchLifeHelp_003Ed__11 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupFreeLivesCtrl _003C_003E4__this;

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

	public TextMeshProUGUI txtTotalFreeLives;

	public LifeHelpItemUICtrl lifeHelpItemPrefab;

	public List<LifeHelpItemUICtrl> listLifeHelp;

	public RectTransform listLifeHelpLayout;

	public DreamyPassPackUICtrl dreamyPassPack;

	public Transform popupContentPos;

	public Transform popupPosWhenShowPack;

	public Transform popupPosWhenHidePack;

	private int _cbDreamyPass;

	public override void Open()
	{
	}

	private void CheckShowDreamyPassPack()
	{
	}

	[AsyncStateMachine(typeof(_003CFetchLifeHelp_003Ed__11))]
	private void FetchLifeHelp()
	{
	}

	private void UpdateListLifeHelp(List<TeamLifeHelpModel> listLifeHelpModel)
	{
	}

	private void UpdateTotalLives()
	{
	}
}
