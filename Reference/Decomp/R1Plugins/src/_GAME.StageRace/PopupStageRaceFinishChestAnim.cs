using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Spine.Unity;
using UnityEngine;

namespace _GAME.StageRace;

[Serializable]
public class PopupStageRaceFinishChestAnim
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COpenChest_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceFinishChestAnim _003C_003E4__this;

		public Action callback1;

		public Action callback2;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowChest_003Ed__3 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupStageRaceFinishChestAnim _003C_003E4__this;

		public Action callback;

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

	public Animator chestAnim;

	public SkeletonGraphic chestAnimSpine;

	public void Init()
	{
	}

	[AsyncStateMachine(typeof(_003CShowChest_003Ed__3))]
	public void ShowChest(Action callback = null)
	{
	}

	[AsyncStateMachine(typeof(_003COpenChest_003Ed__4))]
	public void OpenChest(Action callback1 = null, Action callback2 = null)
	{
	}
}
