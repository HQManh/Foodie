using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using CakeOrder.BaseUI;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using Utilities;

namespace CakeOrder.PopupMinigame;

public class CookOrderPopupMinigameLoader : MonoSingleton<CookOrderPopupMinigameLoader>
{
	private class ShowMinigameRequest
	{
		public AssetReference assetRefData;

		public GameObject prefabData;

		public Action<MinigameRuntimeData> onEnd;

		public MinigameInitData initData;

		public Action<CookOrderPopupMinigameControllerAbstract> onControllerReady;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlay_003Ed__21 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public CookOrderPopupMinigameLoader _003C_003E4__this;

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
	private struct _003CPlayMinigameFromPrefab_003Ed__20 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public CookOrderPopupMinigameLoader _003C_003E4__this;

		public GameObject prefab;

		public Action<CookOrderPopupMinigameControllerAbstract> onControllerReady;

		public MinigameInitData initData;

		public Action<MinigameRuntimeData> onEnd;

		private CookOrderPopupMinigameControllerAbstract _003CcachedController_003E5__2;

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
	private struct _003CShowMinigame_003Ed__17 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public AssetReference assetRef;

		public Action<MinigameRuntimeData> onEnd;

		public CookOrderPopupMinigameLoader _003C_003E4__this;

		public MinigameInitData initData;

		public Action<CookOrderPopupMinigameControllerAbstract> onControllerReady;

		private AsyncOperationHandle<GameObject> _003CcachedHandle_003E5__2;

		private TaskAwaiter<GameObject> _003C_003Eu__1;

		private TaskAwaiter _003C_003Eu__2;

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
	private struct _003CShowMinigame_003Ed__18 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncTaskMethodBuilder _003C_003Et__builder;

		public GameObject prefab;

		public Action<MinigameRuntimeData> onEnd;

		public CookOrderPopupMinigameLoader _003C_003E4__this;

		public MinigameInitData initData;

		public Action<CookOrderPopupMinigameControllerAbstract> onControllerReady;

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

	private Queue<ShowMinigameRequest> _queueShowMinigame;

	private Dictionary<AssetReference, AsyncOperationHandle<GameObject>> _cacheAssetToPrefab;

	private Dictionary<GameObject, CookOrderPopupMinigameControllerAbstract> _cachePrefabToSpawnedController;

	private bool _isAvailableToLoadNewMinigame;

	[Header("Config")]
	[SerializeField]
	private MinisceneCameraSetting _defaultCameraSetting;

	[SerializeField]
	private Vector3 _cameraPositionBase;

	[SerializeField]
	private Vector3 _cameraPositionIncrementalOffset;

	private int _countSpawnedMinigame;

	[Header("Refs")]
	private MinisceneControlCookOrder _miniSceneControl;

	private SceneMainUI _sceneMainUI;

	private UIPopupMinigameCookOrder _popupMinigame;

	private bool _isCanForceExit;

	private CookOrderPopupMinigameControllerAbstract _currentPlayingMinigame;

	private MinigameInitData _initData;

	private Action<MinigameRuntimeData> _onMinigameEnd;

	public void Initialize(SceneMainUI sceneMainUI, MinisceneControlCookOrder miniSceneControl)
	{
	}

	[AsyncStateMachine(typeof(_003CShowMinigame_003Ed__17))]
	public Task ShowMinigame(AssetReference assetRef, MinigameInitData initData, Action<MinigameRuntimeData> onEnd, Action<CookOrderPopupMinigameControllerAbstract> onControllerReady = null)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CShowMinigame_003Ed__18))]
	public Task ShowMinigame(GameObject prefab, MinigameInitData initData, Action<MinigameRuntimeData> onEnd, Action<CookOrderPopupMinigameControllerAbstract> onControllerReady = null)
	{
		return null;
	}

	private void LateUpdate()
	{
	}

	[AsyncStateMachine(typeof(_003CPlayMinigameFromPrefab_003Ed__20))]
	private Task PlayMinigameFromPrefab(GameObject prefab, Action<MinigameRuntimeData> onEnd, MinigameInitData initData, Action<CookOrderPopupMinigameControllerAbstract> onControllerReady = null)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CPlay_003Ed__21))]
	private Task Play()
	{
		return null;
	}

	private void OnForceExitMinigame()
	{
	}

	private void OnDoneAnimHidePopup(UIElementAbstract popup)
	{
	}

	protected override void OnDestroy()
	{
	}
}
