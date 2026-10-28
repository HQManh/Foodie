using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Utilities;

public class AddressableAssetHandlerControl<HandleType> where HandleType : Object
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoad_003Ed__2 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<HandleType> _003C_003Et__builder;

		public AddressableAssetHandlerControl<HandleType> _003C_003E4__this;

		public AssetReference asset;

		private AsyncOperationHandle<HandleType> _003Cop_003E5__2;

		private TaskAwaiter<HandleType> _003C_003Eu__1;

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
	private struct _003CLoad_003Ed__3 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<HandleType> _003C_003Et__builder;

		public AddressableAssetHandlerControl<HandleType> _003C_003E4__this;

		public string key;

		private AsyncOperationHandle<HandleType> _003Cop_003E5__2;

		private TaskAwaiter<HandleType> _003C_003Eu__1;

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

	private Dictionary<AssetReference, AsyncOperationHandle<HandleType>> _dictAssetHandler;

	private Dictionary<string, AsyncOperationHandle<HandleType>> _dictKeyStrHandler;

	[AsyncStateMachine(typeof(AddressableAssetHandlerControl<>._003CLoad_003Ed__2))]
	public Task<HandleType> Load(AssetReference asset)
	{
		return null;
	}

	[AsyncStateMachine(typeof(AddressableAssetHandlerControl<>._003CLoad_003Ed__3))]
	public Task<HandleType> Load(string key)
	{
		return null;
	}

	public void ReleaseAll()
	{
	}
}
