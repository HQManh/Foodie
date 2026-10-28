using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using DG.Tweening;
using UnityEngine;
using _GAME.GameItem;
using _GAME.Utils;

namespace _GAME.GameUI;

public class DropItemController : SingletonX<DropItemController>
{
	private sealed class DropCompletion
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CInvokeDeferredAsync_003Ed__6 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

			public DropCompletion _003C_003E4__this;

			public DropResult result;

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

		private readonly Action _callback;

		private readonly string _requestName;

		private int _completed;

		public DropCompletion(Action callback, string requestName)
		{
		}

		public void Complete(DropResult result)
		{
		}

		public void CompleteDeferred(DropResult result)
		{
		}

		[AsyncStateMachine(typeof(_003CInvokeDeferredAsync_003Ed__6))]
		private UniTaskVoid InvokeDeferredAsync(DropResult result)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(UniTaskVoid);
		}

		private void InvokeCallback(DropResult result)
		{
		}
	}

	private sealed class DropRequest
	{
		[StructLayout(LayoutKind.Auto)]
		[CompilerGenerated]
		private struct _003CExecuteAsync_003Ed__7 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

			public CancellationToken cancellationToken;

			public DropRequest _003C_003E4__this;

			private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

			private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__2;

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

		private readonly Func<DropCompletion, CancellationToken, UniTask<DropResult>> _operation;

		private readonly Action _cleanupPending;

		public readonly string Name;

		public readonly DropCompletion Completion;

		public readonly bool IsCritical;

		public readonly float EarliestStartTime;

		public DropRequest(string name, Func<DropCompletion, CancellationToken, UniTask<DropResult>> operation, Action onComplete, Action cleanupPending, float earliestStartTime)
		{
		}

		[AsyncStateMachine(typeof(_003CExecuteAsync_003Ed__7))]
		public UniTask<DropResult> ExecuteAsync(CancellationToken cancellationToken)
		{
			//IL_0002: Unknown result type (might be due to invalid IL or missing references)
			//IL_0008: Unknown result type (might be due to invalid IL or missing references)
			return default(UniTask<DropResult>);
		}

		public void Cleanup()
		{
		}

		public void Complete(DropResult result)
		{
		}

		public void Reject(DropResult result)
		{
		}

		private void CleanupPending()
		{
		}
	}

	private sealed class ClonePayload
	{
		private GameObject _clone;

		public ClonePayload(GameObject clone)
		{
		}

		public GameObject Take()
		{
			return null;
		}

		public void Cleanup()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass68_0
	{
		public bool arrived;

		public int bagActionIndex;

		public DropItemController _003C_003E4__this;

		internal void _003CDropItemToBagAsync_003Eb__0()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass75_0
	{
		public bool arrived;

		public int bagActionIndex;

		public DropItemController _003C_003E4__this;

		internal void _003CDropCloneToBagAsync_003Eb__0()
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CDropCloneAsync_003Ed__77 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public ClonePayload payload;

		public Vector3 dstPos;

		public Action onArrived;

		public CancellationToken cancellationToken;

		public DropItemController _003C_003E4__this;

		private GameObject _003Cclone_003E5__2;

		private CloneItemDropCtrl _003CitemDrop_003E5__3;

		private int _003CleaseVersion_003E5__4;

		private bool _003CownershipTransferred_003E5__5;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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
	private struct _003CDropCloneToBagAsync_003Ed__75 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public DropItemController _003C_003E4__this;

		public bool useBag;

		public ClonePayload payload;

		public Vector3 dstPos;

		public CancellationToken cancellationToken;

		private _003C_003Ec__DisplayClass75_0 _003C_003E8__1;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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
	private struct _003CDropGoldBurstAsync_003Ed__73 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public long amount;

		public Sprite icon;

		public DropItemController _003C_003E4__this;

		public Vector3 srcPos;

		public Vector3 dstPos;

		public Action onArrived;

		public CancellationToken cancellationToken;

		private int _003Ccount_003E5__2;

		private List<UniTask<DropResult>> _003Ctasks_003E5__3;

		private bool _003CspawnFailed_003E5__4;

		private bool _003CspawnCancelled_003E5__5;

		private int _003Ci_003E5__6;

		private UnityEngine.Awaitable.Awaiter _003C_003Eu__1;

		private UnityEngine.Awaitable<DropResult[]>.Awaiter _003C_003Eu__2;

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
	private struct _003CDropItemToBagAsync_003Ed__68 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public DropItemController _003C_003E4__this;

		public bool useBag;

		public RwItemModel rwItem;

		public Vector3 srcPos;

		public Vector3 dstPos;

		public CancellationToken cancellationToken;

		private _003C_003Ec__DisplayClass68_0 _003C_003E8__1;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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
	private struct _003CDropItemToTargetAsync_003Ed__69 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public DropCompletion completion;

		public RwItemModel rwItem;

		public DropItemController _003C_003E4__this;

		public Vector3 srcPos;

		public Vector3 dstPos;

		public CancellationToken cancellationToken;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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
	private struct _003CDropSingleItemAsync_003Ed__70 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public RwItemModel rwItem;

		public DropItemController _003C_003E4__this;

		public Vector3 srcPos;

		public Vector3 dstPos;

		public Action onArrived;

		public CancellationToken cancellationToken;

		private RwItemDropCtrl _003CitemDrop_003E5__2;

		private int _003CleaseVersion_003E5__3;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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
	private struct _003CHideBagAsync_003Ed__119 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public CancellationToken cancellationToken;

		public int actionIndex;

		public DropItemController _003C_003E4__this;

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
	private struct _003CPlayGoldParticleAsync_003Ed__74 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder<DropResult> _003C_003Et__builder;

		public bool showVfx;

		public Vector3 dstPos;

		public Action onArrived;

		public GoldItemDropCtrl itemDrop;

		public Vector3 srcPos;

		public CancellationToken cancellationToken;

		private int _003CleaseVersion_003E5__2;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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
	private struct _003CPlayVfxAsync_003Ed__130 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public DropItemController _003C_003E4__this;

		public bool isShowVfx;

		public Vector3 pos;

		private Stack<GameObject> _003Cpool_003E5__2;

		private GameObject _003Cvfx_003E5__3;

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
	private struct _003CPromoteDelayedRequestAsync_003Ed__56 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public DropItemController _003C_003E4__this;

		public float delaySeconds;

		public DropRequest request;

		private DropResult _003Cresult_003E5__2;

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
	private struct _003CRunRequestAsync_003Ed__59 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskVoidMethodBuilder _003C_003Et__builder;

		public DropItemController _003C_003E4__this;

		public DropRequest request;

		private DropResult _003Cresult_003E5__2;

		private UnityEngine.Awaitable<DropResult>.Awaiter _003C_003Eu__1;

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

	private const float ItemListInterval = 0.1f;

	private const float GoldSpawnInterval = 0.03f;

	private const float VfxLifetime = 2f;

	private const float BagHideDelay = 2f;

	public RectTransform dropArea;

	public RectTransform poolArea;

	public RectTransform rectDropRandom;

	[Header("SCHEDULER")]
	[SerializeField]
	[Min(1f)]
	private int maxConcurrentRequests;

	[SerializeField]
	[Min(0f)]
	private int maxQueuedRequests;

	[SerializeField]
	[Min(1f)]
	private int maxActiveDropItems;

	[SerializeField]
	[Min(0f)]
	private int maxPooledItemsPerType;

	[SerializeField]
	[Min(0f)]
	private int maxActiveVfx;

	[SerializeField]
	[Min(0f)]
	private int maxPooledVfxPerType;

	private readonly Queue<DropRequest> _pendingRequests;

	private readonly Queue<DropRequest> _pendingCriticalRequests;

	private int _activeRequestCount;

	private int _delayedRequestCount;

	private int _activeDropItemCount;

	private int _skippedCapacityCount;

	private bool _destroying;

	private CancellationTokenSource _lifetimeCts;

	private Canvas _rootCanvas;

	private const float CloneStagger = 0.1f;

	private float _nextCloneStartTime;

	public RwItemDropCtrl prefabRwItemDrop;

	private Stack<RwItemDropCtrl> _poolRwItemDrop;

	public GoldItemDropCtrl prefabGoldItemDrop;

	private Stack<GoldItemDropCtrl> _poolGoldItemDrop;

	public CloneItemDropCtrl prefabCloneItemDrop;

	private Stack<CloneItemDropCtrl> _poolCloneItemDrop;

	[Header("BAG")]
	public Animator iconBagAnim;

	public Transform iconBagPosDrop;

	public Transform iconBagPosShow;

	public Transform iconBagPosHide;

	private Tweener _tweenShowBag;

	private Tweener _tweenHideBag;

	private int _showBackActionIndex;

	private CancellationTokenSource _hideBagCts;

	[Header("VFX")]
	public Transform vfxArea;

	public GameObject vfxShowPrefab;

	private Stack<GameObject> _vfxShowPool;

	public GameObject vfxDropPrefab;

	private Stack<GameObject> _vfxDropPool;

	private int _activeVfxCount;

	private int QueuedRequestCount => 0;

	private int PendingRequestCount => 0;

	protected override void Awake()
	{
	}

	protected override void OnDestroy()
	{
	}

	public static Vector3 ConvertUIWorldPos(Transform uiTarget)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static Vector3 ConvertUIWorldPos(Transform srcUI, Transform dstUI)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private static Vector3 ConvertUIWorldPosInternal(Transform srcUI, Canvas srcCanvas, Canvas dstCanvas, Vector3 fallback)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void DropRwItemToBag(List<RwItemModel> rwItems)
	{
	}

	public static void DropRwItemToBag(List<RwItemModel> rwItems, Vector3 srcPos)
	{
	}

	public static void DropRwItemToBag(RwItemModel rwItem)
	{
	}

	public static void DropRwItemToBag(Dictionary<RwItemType, int> dictRwItem)
	{
	}

	public static void DropRwItemToBag(RwItemType type, int value)
	{
	}

	public static void DropRwItemToBag(RwItemType type, int value, Vector3 srcPos)
	{
	}

	public static void DropRwItemToBag(RwItemModel rwItem, Vector3 srcPos)
	{
	}

	public static void DropRwItemToBag(RwItemModel rwItem, Transform srcUI)
	{
	}

	public static void DropRwItemToBag(List<RwItemModel> rwItems, Transform srcUI)
	{
	}

	public static void DropItemToTarget(RwItemModel rwItem, Transform srcUI, Transform dstUI, Action onComplete = null)
	{
	}

	public static void DropItemToTarget(RwItemModel rwItem, Vector3 srcPos, Vector3 dstPos, Action onComplete = null)
	{
	}

	public static void DropCloneItemToBag(List<RwItemUICtrl> rwItems, float delayTime = 0.1f)
	{
	}

	public static void DropCloneItemToBag(RwItemUICtrl rwItem)
	{
	}

	public static void DropCloneItemToBag(List<GameObject> rwItems, float delayTime = 0.1f)
	{
	}

	public static void DropCloneItemToBag(GameObject srcObj)
	{
	}

	public static void DropCloneItemToTarget(List<GameObject> srcObjs, Vector3 dstPos, float delayTime = 0.1f)
	{
	}

	public static void DropCloneItemToTarget(RwItemUICtrl rwItem, Vector3 dstPos, Action onComplete = null)
	{
	}

	public static void DropCloneItemToTarget(GameObject srcObj, Transform dstTarget, Action onComplete = null)
	{
	}

	public static void DropCloneItemToTarget(GameObject srcObj, Vector3 dstPos, Action onComplete = null)
	{
	}

	private void ScheduleItemToBag(RwItemModel rwItem, Vector3 srcPos, float earliestStartTime = 0f)
	{
	}

	private void ScheduleCloneToBag(GameObject srcObj, float earliestStartTime = 0f)
	{
	}

	private void ScheduleCloneToTarget(GameObject srcObj, Vector3 dstPos, Action onComplete, float earliestStartTime = 0f)
	{
	}

	private void ScheduleRequest(string requestName, Func<DropCompletion, CancellationToken, UniTask<DropResult>> operation, Action onComplete = null, Action cleanupPending = null, float earliestStartTime = 0f)
	{
	}

	private void StartOrQueueReservedRequest(DropRequest request)
	{
	}

	[AsyncStateMachine(typeof(_003CPromoteDelayedRequestAsync_003Ed__56))]
	private UniTaskVoid PromoteDelayedRequestAsync(DropRequest request, float delaySeconds)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private bool CanAcceptRequest()
	{
		return false;
	}

	private void StartRequest(DropRequest request)
	{
	}

	[AsyncStateMachine(typeof(_003CRunRequestAsync_003Ed__59))]
	private UniTaskVoid RunRequestAsync(DropRequest request)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private void PumpScheduler()
	{
	}

	private void CancelPendingRequests()
	{
	}

	private void RegisterCapacitySkip()
	{
	}

	private static void CompleteWithoutFx(Action onComplete, string requestName)
	{
	}

	[AsyncStateMachine(typeof(_003CDropItemToBagAsync_003Ed__68))]
	private UniTask<DropResult> DropItemToBagAsync(RwItemModel rwItem, Vector3 srcPos, Vector3 dstPos, bool useBag, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	[AsyncStateMachine(typeof(_003CDropItemToTargetAsync_003Ed__69))]
	private UniTask<DropResult> DropItemToTargetAsync(RwItemModel rwItem, Vector3 srcPos, Vector3 dstPos, DropCompletion completion, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	[AsyncStateMachine(typeof(_003CDropSingleItemAsync_003Ed__70))]
	private UniTask<DropResult> DropSingleItemAsync(Vector3 srcPos, Vector3 dstPos, RwItemModel rwItem, Action onArrived, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	private static bool IsBurstItem(RwItemType type)
	{
		return false;
	}

	private static Sprite BurstIcon(RwItemType type)
	{
		return null;
	}

	[AsyncStateMachine(typeof(_003CDropGoldBurstAsync_003Ed__73))]
	private UniTask<DropResult> DropGoldBurstAsync(Vector3 srcPos, Vector3 dstPos, long amount, Action onArrived, CancellationToken cancellationToken, Sprite icon = null)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	[AsyncStateMachine(typeof(_003CPlayGoldParticleAsync_003Ed__74))]
	private UniTask<DropResult> PlayGoldParticleAsync(GoldItemDropCtrl itemDrop, Vector3 srcPos, Vector3 dstPos, bool showVfx, Action onArrived, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	[AsyncStateMachine(typeof(_003CDropCloneToBagAsync_003Ed__75))]
	private UniTask<DropResult> DropCloneToBagAsync(ClonePayload payload, Vector3 dstPos, bool useBag, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	private UniTask<DropResult> DropCloneToTargetAsync(ClonePayload payload, Vector3 dstPos, DropCompletion completion, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	[AsyncStateMachine(typeof(_003CDropCloneAsync_003Ed__77))]
	private UniTask<DropResult> DropCloneAsync(ClonePayload payload, Vector3 dstPos, Action onArrived, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTask<DropResult>);
	}

	private static bool ContainsResult(DropResult[] results, DropResult expected)
	{
		return false;
	}

	private static List<RwItemModel> SnapshotModels(List<RwItemModel> models)
	{
		return null;
	}

	private static RwItemModel CopyModel(RwItemModel model)
	{
		return null;
	}

	private Vector3 GetRandomSourcePosition()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private Vector3 GetRandomPosition(Vector3 center)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	private bool TryResolveBagDestination(RwItemType itemType, out Vector3 destination, out bool useBag)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		destination = default(Vector3);
		useBag = default(bool);
		return false;
	}

	private static Transform FindGoldTarget()
	{
		return null;
	}

	private static Transform FindCurrencyTarget(string currencyId)
	{
		return null;
	}

	private static Transform FindHomeNavTarget()
	{
		return null;
	}

	private static Transform FindHeartTarget()
	{
		return null;
	}

	private GameObject CloneItem(GameObject srcObj)
	{
		return null;
	}

	private static bool IsFinite(Vector3 value)
	{
		return false;
	}

	private static bool IsFinite(float value)
	{
		return false;
	}

	private static void SafeInvoke(Action callback, string context)
	{
	}

	internal static void ConfigureVisualForUnscaledTime(GameObject visual)
	{
	}

	private static RwItemDropCtrl RespawnRwItemDrop()
	{
		return null;
	}

	public static void DespawnRwItemDrop(RwItemDropCtrl itemDrop)
	{
	}

	private static GoldItemDropCtrl RespawnGoldItemDrop()
	{
		return null;
	}

	public static void DespawnGoldItemDrop(GoldItemDropCtrl itemDrop)
	{
	}

	private static CloneItemDropCtrl RespawnCloneItemDrop()
	{
		return null;
	}

	public static void DespawnCloneItemDrop(CloneItemDropCtrl itemDrop)
	{
	}

	private T RentItem<T>(Stack<T> pool, T prefab, Action<T> beforeActivate = null) where T : RwItemDropCtrl
	{
		return null;
	}

	private static T PopValid<T>(Stack<T> pool) where T : Object
	{
		return default(T);
	}

	private static void ReturnToPool<T>(T itemDrop, Stack<T> pool, DropItemController controller) where T : RwItemDropCtrl
	{
	}

	private void ReleaseActiveDropItemSlot()
	{
	}

	private int ShowBag()
	{
		return 0;
	}

	private void HideBag(int actionIndex, bool playCollectAnimation)
	{
	}

	[AsyncStateMachine(typeof(_003CHideBagAsync_003Ed__119))]
	private UniTaskVoid HideBagAsync(int actionIndex, CancellationToken cancellationToken)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private void CancelHideBagDelay()
	{
	}

	private void CancelBagAnimation()
	{
	}

	public static void RespawnVfxShowItem(Vector3 pos)
	{
	}

	public static void RespawnVfxDropItem(Vector3 pos)
	{
	}

	[AsyncStateMachine(typeof(_003CPlayVfxAsync_003Ed__130))]
	private UniTaskVoid PlayVfxAsync(bool isShowVfx, Vector3 pos)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(UniTaskVoid);
	}

	private void ReturnVfx(GameObject vfx, Stack<GameObject> pool)
	{
	}
}
