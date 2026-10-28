using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CakeOrder.SaveProfile;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using PlatformServiceR1;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

namespace CakeOrder;

public class CakeOrderCloudSaveController : CloudSaveControllerAbstract
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass20_0
	{
		public CakeOrderCloudSaveController _003C_003E4__this;

		public bool flagDone;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadCloudDataIntoLocal_003Ed__20 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CakeOrderCloudSaveController _003C_003E4__this;

		public bool isNeedReloadSceneOnApplyCloudData;

		private _003C_003Ec__DisplayClass20_0 _003C_003E8__1;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CLoadLocalDataOnSetUp_003Ed__21 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CakeOrderCloudSaveController _003C_003E4__this;

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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CShowPromptResolveConflictData_003Ed__23 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncVoidMethodBuilder _003C_003Et__builder;

		public CakeOrderCloudSaveController _003C_003E4__this;

		public ShowData showData;

		private TaskAwaiter<GameObject> _003C_003Eu__1;

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
	private struct _003CWaitLocalDataLoaded_003Ed__19 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public CakeOrderCloudSaveController _003C_003E4__this;

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

	[Header("Save Load Handler")]
	[SerializeField]
	private PlayerProfileDataManager _profile;

	[SerializeField]
	private PlayerMapLevelProgressDataManager _level;

	[SerializeField]
	private CookOrderSystemInfoDataAccess _systemDataAccess;

	[Header("Popup")]
	[SerializeField]
	private AssetReference _assetPopupDataConflict;

	private AsyncOperationHandle<GameObject> _opLoadPopupDataConflict;

	private UIPopupConfirmUseCloudData _popup;

	protected override string SaveFileName => null;

	protected override bool HasExistingLocalProgress => false;

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public override void SetUp()
	{
	}

	public void EnableDebugLogger()
	{
	}

	public void DisableDebugLogger()
	{
	}

	public override void SetUpOffline()
	{
	}

	private void OnLocalDataSaved()
	{
	}

	protected override UnifiedSaveDataAbstract CreateUnifiedSaveData()
	{
		return null;
	}

	protected override UnifiedSaveDataAbstract ByteToUnifiedSaveData(byte[] bytes)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CWaitLocalDataLoaded_003Ed__19))]
	protected override UniTask WaitLocalDataLoaded()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadCloudDataIntoLocal_003Ed__20))]
	protected override UniTask LoadCloudDataIntoLocal(bool isNeedReloadSceneOnApplyCloudData)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CLoadLocalDataOnSetUp_003Ed__21))]
	protected UniTask LoadLocalDataOnSetUp()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	protected override UniTask LoadLocalData()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask);
	}

	[AsyncStateMachine(typeof(_003CShowPromptResolveConflictData_003Ed__23))]
	protected override void ShowPromptResolveConflictData(ShowData showData)
	{
	}
}
