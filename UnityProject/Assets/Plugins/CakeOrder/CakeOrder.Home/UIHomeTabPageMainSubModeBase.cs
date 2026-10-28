using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.BaseUI;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home
{

public abstract class UIHomeTabPageMainSubModeBase : UIElementWithAnim
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CSetUp_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPageMainSubModeBase _003C_003E4__this;

		public HomeControllerCookOrder mainUI;

		public UIHomeTabPage.SharedData sharedData;

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

	protected UIHomeTabPage.SharedData _sharedData;

	protected HomeControllerCookOrder _mainUI;

	public float cameraSize;

	public Vector2 cameraOffsetToBuilding;

	[AsyncStateMachine(typeof(_003CSetUp_003Ed__4))]
	public UniTask SetUp(HomeControllerCookOrder mainUI, UIHomeTabPage.SharedData sharedData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected abstract UniTask OnSetUp();
}
}
