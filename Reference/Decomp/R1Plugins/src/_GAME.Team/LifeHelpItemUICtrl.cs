using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.Team;

public class LifeHelpItemUICtrl : MonoBehaviour
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CClaimLifeHelp_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public LifeHelpItemUICtrl _003C_003E4__this;

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

	public Transform iconHeartPos;

	public TextMeshProUGUI txtName;

	public Button btnUse;

	public GameObject tickCheck;

	private TeamLifeHelpModel _model;

	private Action _actionCallback;

	public void SetLifeHelp(TeamLifeHelpModel model, Action callback = null)
	{
	}

	[AsyncStateMachine(typeof(_003CClaimLifeHelp_003Ed__7))]
	public void ClaimLifeHelp()
	{
	}
}
