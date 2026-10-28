using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using _GAME.GameUI;

namespace _GAME.DreamyPass;

public class PopupDreamyPassCtrl : PopupSingleton<PopupDreamyPassCtrl>
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003COnOpened_003Ed__7 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public PopupDreamyPassCtrl _003C_003E4__this;

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

	public PopupDreamyPassCheat menuCheat;

	public PopupDreamyPassBaseInfo baseInfo;

	public PopupDreamyPassListLevel listLevel;

	public PopupDreamyPassBonusBank bonusBank;

	public PopupDreamyPassFinish objFinish;

	protected override void Awake()
	{
	}

	public override void Open()
	{
	}

	[AsyncStateMachine(typeof(_003COnOpened_003Ed__7))]
	private void OnOpened()
	{
	}

	private void Update()
	{
	}

	protected override void OnDestroy()
	{
	}

	public new void ForceCloseReset()
	{
	}

	public override void Close()
	{
	}
}
