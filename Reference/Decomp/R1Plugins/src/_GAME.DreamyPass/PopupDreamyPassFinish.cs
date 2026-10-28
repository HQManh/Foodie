using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

namespace _GAME.DreamyPass;

[Serializable]
public class PopupDreamyPassFinish
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CHandleFinish_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupDreamyPassFinish _003C_003E4__this;

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

	public GameObject objFinish;

	public Button btnFinish;

	private PopupDreamyPassCtrl _parent;

	private int _cbTick;

	public void Init(PopupDreamyPassCtrl parent)
	{
	}

	public void Dispose()
	{
	}

	private void UpdateUIData()
	{
	}

	[AsyncStateMachine(typeof(_003CHandleFinish_003Ed__7))]
	private void HandleFinish()
	{
	}
}
