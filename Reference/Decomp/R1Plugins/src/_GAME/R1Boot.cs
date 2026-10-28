using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using UnityEngine;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;
using _GAME.BaseGame;
using _GAME.GameItem;
using _GAME.GameUI;

namespace _GAME;

public class R1Boot : MonoBehaviour
{
	[Serializable]
	private class EventManagerPrefab
	{
		public R1Event liveOpsEvent;

		public GameObject prefab;
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CStartAsync_003Ed__14 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		private float _003CwaitStart_003E5__2;

		private AsyncOperationHandle<IList<IResourceLocation>> _003Clocations_003E5__3;

		private AsyncOperationHandle<GameObject> _003Cload_003E5__4;

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

	public const string ManagersAddress = "R1Plugin/Managers";

	private const float RemoteConfigWaitSeconds = 10f;

	public static bool Enabled;

	[Header("Main features, in boot order")]
	[SerializeField]
	private GameObject[] _mainManagers;

	[Header("Live-ops events")]
	[SerializeField]
	private EventManagerPrefab[] _eventManagers;

	[Header("Shared R1 assets (loaded with this prefab, no Resources)")]
	[Tooltip("R1_DropItemCanvas: overlay canvas of the reward fly-to-bag effect.")]
	[SerializeField]
	private GameObject _dropItemCanvas;

	[SerializeField]
	private PopupLoadingCtrl _popupLoading;

	[Tooltip("TidyRoom's unlock sound (sfx-GiftboxOpen), played when a feature lock breaks open.")]
	[SerializeField]
	private AudioClip _sfxUnlockFeature;

	[Tooltip("R1's own reward icons (white outline), used by reward cells that turn on useOutlineIcon.")]
	[SerializeField]
	private SORwItemIconConfig _rwItemIconConfig;

	[Tooltip("Optional: overrides the server endpoints written in R1ServerConfig.")]
	[SerializeField]
	private R1ServerConfig _serverConfig;

	private static bool _started;

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void ResetStatics()
	{
	}

	[RuntimeInitializeOnLoadMethod(/*Could not decode attribute arguments.*/)]
	private static void StartOnLoad()
	{
	}

	[AsyncStateMachine(typeof(_003CStartAsync_003Ed__14))]
	private static UniTaskVoid StartAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private void Boot()
	{
	}

	private static void StartNetwork()
	{
	}

	private static void ReloadData()
	{
	}

	private static void OnDataCleared()
	{
	}

	private static void Call(R1Event liveOpsEvent, Action action)
	{
	}

	private static void Call(Action action)
	{
	}
}
