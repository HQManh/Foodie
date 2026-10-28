using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace Utilities
{

public class AddressableHandlerControl<Key, HandleType> where HandleType : Object
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoad_003Ed__1 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<HandleType> _003C_003Et__builder;

		public AddressableHandlerControl<Key, HandleType> _003C_003E4__this;

		public Key key;

		public string assetKey;

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
	private struct _003CLoad_003Ed__2 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder<HandleType> _003C_003Et__builder;

		public AddressableHandlerControl<Key, HandleType> _003C_003E4__this;

		public Key key;

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

	private Dictionary<Key, AsyncOperationHandle<HandleType>> _dictCustomHandler = new Dictionary<Key, AsyncOperationHandle<HandleType>>();

	[AsyncStateMachine(typeof(AddressableHandlerControl<, >._003CLoad_003Ed__1))]
	public Task<HandleType> Load(Key key, string assetKey)
	{
		return null;
	}

	[AsyncStateMachine(typeof(AddressableHandlerControl<, >._003CLoad_003Ed__2))]
	public Task<HandleType> Load(Key key, AssetReference asset)
	{
		return null;
	}

	public void ReleaseAll()
	{
	}
}
}
