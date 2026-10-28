using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace CakeOrder.Home
{

public class UIHomeTabPagePetAssistant : UIHomeTabPage
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CWaitLoadContentAndShow_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public UIHomeTabPagePetAssistant _003C_003E4__this;

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

	[SerializeField]
	private AssetReference _assetPopup;

	[SerializeField]
	private RectTransform _popupContainer;

	private UIPopupPetAssistantEachMap _popup;

	protected override void OnBeforeShow()
	{
	}

	[AsyncStateMachine(typeof(_003CWaitLoadContentAndShow_003Ed__4))]
	private UniTask WaitLoadContentAndShow()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}
}
}
