using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.SaveProfile;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;

namespace CakeOrder.Home;

public static class NewVersionNoticeService
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass4_0
	{
		public PlayerMapLevelProgressDataAccess progress;

		public int lastOrder;

		public List<string> itemOrder;

		public Dictionary<string, int> amountByItem;

		internal void _003CRunAsync_003Eb__1()
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CRunAsync_003Ed__4 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<NewVersionPopupData> _003C_003Et__builder;

		public HomeSelectionControl mapControl;

		private _003C_003Ec__DisplayClass4_0 _003C_003E8__1;

		private bool _003CisPreview_003E5__2;

		private List<NewVersionNotice> _003Cpending_003E5__3;

		private NewVersionContext _003Ccontext_003E5__4;

		private NewVersionPopupData _003Cdata_003E5__5;

		private List<NewVersionNotice>.Enumerator _003C_003E7__wrap5;

		private UnityEngine.Awaitable<NewVersionNoticeContent>.Awaiter _003C_003Eu__1;

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

	private const string RewardSource = "new_version_reward";

	private static bool _isPreviewShownThisSession;

	private static NewVersionCheatConfig GetCheat()
	{
		return null;
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetSession()
	{
	}

	[AsyncStateMachine(typeof(_003CRunAsync_003Ed__4))]
	public static UniTask<NewVersionPopupData> RunAsync(HomeSelectionControl mapControl)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<NewVersionPopupData>);
	}
}
