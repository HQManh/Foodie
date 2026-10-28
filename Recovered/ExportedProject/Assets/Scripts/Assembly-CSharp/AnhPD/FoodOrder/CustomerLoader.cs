using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using CakeOrder;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.ResourceManagement.ResourceLocations;

namespace AnhPD.FoodOrder
{
	public class CustomerLoader : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass44_0
		{
			public CustomerLoader _003C_003E4__this;

			public Action callback;
		}

		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass46_0
		{
			public CustomerLoader _003C_003E4__this;

			public Action onArrived;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CHasAddress_003Ed__81 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

			public string address;

			public CancellationToken ct;

			private AsyncOperationHandle<IList<IResourceLocation>> _003Cop_003E5__2;

			private UniTask<IList<IResourceLocation>>.Awaiter _003C_003Eu__1;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CLoadCustomer_003Ed__82 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder _003C_003Et__builder;

			public string customerId;

			public CancellationToken ct;

			public CustomerLoader _003C_003E4__this;

			private string _003Caddress_003E5__2;

			private TaskAwaiter<bool> _003C_003Eu__1;

			private UniTask<GameObject>.Awaiter _003C_003Eu__2;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CLoadCustomerById_003Ed__73 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public CustomerLoader _003C_003E4__this;

			public string customerId;

			private TaskAwaiter<string> _003C_003Eu__1;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CLoadOrFallback_003Ed__75 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<string> _003C_003Et__builder;

			public CustomerLoader _003C_003E4__this;

			public string customerId;

			public CustomerType customerType;

			private CancellationToken _003Cct_003E5__2;

			private string _003ClastTried_003E5__3;

			private TaskAwaiter<bool> _003C_003Eu__1;

			private int _003Ci_003E5__4;

			private string _003CfallbackId_003E5__5;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CShowCustomer_003Ed__44 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public CustomerLoader _003C_003E4__this;

			public Action callback;

			public CustomerType customerType;

			public string customerId;

			private _003C_003Ec__DisplayClass44_0 _003C_003E8__1;

			private TaskAwaiter<string> _003C_003Eu__1;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CShowWalkIn_003Ed__46 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncVoidMethodBuilder _003C_003Et__builder;

			public CustomerLoader _003C_003E4__this;

			public Action onArrived;

			public CustomerType customerType;

			public string customerId;

			private _003C_003Ec__DisplayClass46_0 _003C_003E8__1;

			public bool atLeavePace;

			private TaskAwaiter<string> _003C_003Eu__1;

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

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CTryEnsureLoaded_003Ed__76 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

			public string customerId;

			public CustomerLoader _003C_003E4__this;

			public CancellationToken ct;

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

		[Header("Walk-in")]
		private float walkBobAmplitude;

		private float walkStepDistance;

		[SerializeField]
		[Range(0f, 0.9f)]
		private float walkSpeedRandom;

		[SerializeField]
		private float walkInDistance;

		[SerializeField]
		private float walkInDuration;

		[Header("Leave")]
		[SerializeField]
		private float leaveSpeed;

		[SerializeField]
		private int leaveSortingOrder;

		[SerializeField]
		private SortingGroup sortingGroup;

		[SerializeField]
		private float timeoutHideDelay;

		[SerializeField]
		[Range(0.05f, 1f)]
		private float chaseLeaveSpeedScale;

		[Header("Customer pool")]
		[SerializeField]
		private List<string> customerIds;

		[Header("Staff")]
		[SerializeField]
		private List<string> staffIds;

		private const CustomerType FirstStaffType = CustomerType.StaffCleanDish;

		private int _baseSortingOrder;

		private bool _baseSortingCaptured;

		private float _tintDarken;

		private float _visualScale;

		private float _animSpeed;

		private string _currentCustomerId;

		private bool _isTransitioning;

		private float? _exitWorldX;

		private bool _enterFromRight;

		[CompilerGenerated]
		private Action m_onLeaving;

		private Action _pendingLeaveCallback;

		private Action _pendingSpawnCoin;

		[SerializeField]
		private Transform customerRoot;

		private Dictionary<string, Customer> _customerDict;

		private List<AsyncOperationHandle<GameObject>> _usedOps;

		private AsyncOperationHandle<GameObject> _opLoadCustomer;

		private const int MaxFallbackDraws = 3;

		private static readonly List<string> _idBag;

		public bool IsCustomerReady { get; private set; }

		public string CustomerId => null;

		public float? CurrentSlotSize => null;

		public Vector3 CustomerWorldOffset => default;

		public event Action onLeaving
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		private static bool IsStaff(CustomerType customerType)
		{
			return false;
		}

		public string StaffIdFor(CustomerType customerType)
		{
			return null;
		}

		private void SetLeavingSorting(bool leaving)
		{
		}

		public void SetTint(float darken, float duration = 0f)
		{
		}

		public void SetVisualScale(float scale, float duration = 0f)
		{
		}

		public void SetAnimSpeed(float speed)
		{
		}

		public void SetExitWorldX(float worldX)
		{
		}

		public void SetEnterFromRight(bool fromRight)
		{
		}

		public void NextCustomer(CustomerType customerType, string customerId, Action showOrder)
		{
		}

		[AsyncStateMachine(typeof(_003CShowCustomer_003Ed__44))]
		private void ShowCustomer(CustomerType customerType, string customerId, Action callback = null)
		{
		}

		private bool TryResolveCustomerId(CustomerType customerType, string customerId, out string resolvedId)
		{
			resolvedId = null;
			return false;
		}

		[AsyncStateMachine(typeof(_003CShowWalkIn_003Ed__46))]
		public void ShowWalkIn(CustomerType customerType, string customerId, Action onArrived, bool atLeavePace = false)
		{
		}

		private bool TryWalkInFromEdge(Customer customer, Action onArrived)
		{
			return false;
		}

		private int WalkStepsFor(float distance)
		{
			return 0;
		}

		public void WalkInFrom(Vector3 worldOffset, float duration)
		{
		}

		public void HideCurrentCustomer(Action callback = null, bool notifyLeaving = true, bool atWalkPace = false)
		{
		}

		public void ChaseAway(Action callback = null)
		{
		}

		public void OnEat(Func<bool> isOrderComplete, Action onEaten = null)
		{
		}

		public void OnCorrect(bool leave = true)
		{
		}

		public void OnLeave(Action callback, Action onServed = null)
		{
		}

		private void FlushLeaveCallback()
		{
		}

		private void FlushSpawnCoin()
		{
		}

		public void HoldAngry(bool playSfx = true)
		{
		}

		public void ReleaseAngry()
		{
		}

		public void Cheer()
		{
		}

		public void OnIncorrect()
		{
		}

		public void PlayTimeoutAnim(Action onDone = null)
		{
		}

		private void MoveCustomerToExit(Customer customer, Action callback = null, float speedScale = 1f)
		{
		}

		private void WalkCustomerToExit(Customer customer, Action callback = null)
		{
		}

		private bool TryGetExitDelta(Customer customer, out float localDeltaX, out float worldDeltaX)
		{
			localDeltaX = default;
			worldDeltaX = default;
			return false;
		}

		private void ConsumeFromBag(string customerId)
		{
		}

		private bool TryGetCurrentCustomer(out Customer customer)
		{
			customer = null;
			return false;
		}

		[AsyncStateMachine(typeof(_003CLoadCustomerById_003Ed__73))]
		public void LoadCustomerById(string customerId)
		{
		}

		[AsyncStateMachine(typeof(_003CLoadOrFallback_003Ed__75))]
		private Task<string> LoadOrFallback(string customerId, CustomerType customerType)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CTryEnsureLoaded_003Ed__76))]
		private Task<bool> TryEnsureLoaded(string customerId, CancellationToken ct)
		{
			return null;
		}

		private string RandomCustomerId(CustomerType customerType = CustomerType.Customer)
		{
			return null;
		}

		private string RandomIdFromList()
		{
			return null;
		}

		private void RefillBag()
		{
		}

		[AsyncStateMachine(typeof(_003CHasAddress_003Ed__81))]
		private static Task<bool> HasAddress(string address, CancellationToken ct)
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CLoadCustomer_003Ed__82))]
		private Task LoadCustomer(string customerId, CancellationToken ct)
		{
			return null;
		}

		private void OnDestroy()
		{
		}
	}
}
