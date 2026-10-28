using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.DataSO;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace CakeOrder.Home;

public static class LevelCoinProbe
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass0_0
	{
		public string sceneName;

		public Scene loaded;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CComputeOrderCoinAsync_003Ed__0 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<int> _003C_003Et__builder;

		public CakeMapSO mapSO;

		public int levelIndex;

		private _003C_003Ec__DisplayClass0_0 _003C_003E8__1;

		public string mapId;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private object _003C_003E7__wrap1;

		private int _003C_003E7__wrap2;

		private int _003C_003E7__wrap3;

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

	[AsyncStateMachine(typeof(_003CComputeOrderCoinAsync_003Ed__0))]
	public static UniTask<int> ComputeOrderCoinAsync(CakeMapSO mapSO, string mapId, int levelIndex)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<int>);
	}
}
