using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UniRx.InternalUtil;
using UnityEngine;

namespace UniRx
{
	public sealed class MainThreadDispatcher : MonoBehaviour
	{
		public enum CullingMode
		{
			Disabled = 0,
			Self = 1,
			All = 2
		}

		[CompilerGenerated]
		private sealed class _003CRunEndOfFrameMicroCoroutine_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public MainThreadDispatcher _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CRunEndOfFrameMicroCoroutine_003Ed__33(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CRunFixedUpdateMicroCoroutine_003Ed__32 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public MainThreadDispatcher _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CRunFixedUpdateMicroCoroutine_003Ed__32(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CRunUpdateMicroCoroutine_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public MainThreadDispatcher _003C_003E4__this;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CRunUpdateMicroCoroutine_003Ed__31(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		public static CullingMode cullingMode;

		private ThreadSafeQueueWorker queueWorker;

		private Action<Exception> unhandledExceptionCallback;

		private MicroCoroutine updateMicroCoroutine;

		private MicroCoroutine fixedUpdateMicroCoroutine;

		private MicroCoroutine endOfFrameMicroCoroutine;

		private static MainThreadDispatcher instance;

		private static bool initialized;

		private static bool isQuitting;

		[ThreadStatic]
		private static object mainThreadToken;

		private Subject<Unit> update;

		private Subject<Unit> lateUpdate;

		private Subject<bool> onApplicationFocus;

		private Subject<bool> onApplicationPause;

		private Subject<Unit> onApplicationQuit;

		public static string InstanceName => null;

		public static bool IsInitialized => false;

		private static MainThreadDispatcher Instance => null;

		public static bool IsInMainThread => false;

		public static void Post(Action<object> action, object state)
		{
		}

		public static void Send(Action<object> action, object state)
		{
		}

		public static void UnsafeSend(Action action)
		{
		}

		public static void UnsafeSend<T>(Action<T> action, T state)
		{
		}

		public static void SendStartCoroutine(IEnumerator routine)
		{
		}

		public static void StartUpdateMicroCoroutine(IEnumerator routine)
		{
		}

		public static void StartFixedUpdateMicroCoroutine(IEnumerator routine)
		{
		}

		public static void StartEndOfFrameMicroCoroutine(IEnumerator routine)
		{
		}

		public new static Coroutine StartCoroutine(IEnumerator routine)
		{
			return null;
		}

		public static void RegisterUnhandledExceptionCallback(Action<Exception> exceptionCallback)
		{
		}

		public static void Initialize()
		{
		}

		private void Awake()
		{
		}

		[IteratorStateMachine(typeof(_003CRunUpdateMicroCoroutine_003Ed__31))]
		private IEnumerator RunUpdateMicroCoroutine()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CRunFixedUpdateMicroCoroutine_003Ed__32))]
		private IEnumerator RunFixedUpdateMicroCoroutine()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CRunEndOfFrameMicroCoroutine_003Ed__33))]
		private IEnumerator RunEndOfFrameMicroCoroutine()
		{
			return null;
		}

		private static void DestroyDispatcher(MainThreadDispatcher aDispatcher)
		{
		}

		public static void CullAllExcessDispatchers()
		{
		}

		private void OnDestroy()
		{
		}

		private void Update()
		{
		}

		public static IObservable<Unit> UpdateAsObservable()
		{
			return null;
		}

		private void LateUpdate()
		{
		}

		public static IObservable<Unit> LateUpdateAsObservable()
		{
			return null;
		}

		private void OnApplicationFocus(bool focus)
		{
		}

		public static IObservable<bool> OnApplicationFocusAsObservable()
		{
			return null;
		}

		private void OnApplicationPause(bool pause)
		{
		}

		public static IObservable<bool> OnApplicationPauseAsObservable()
		{
			return null;
		}

		private void OnApplicationQuit()
		{
		}

		public static IObservable<Unit> OnApplicationQuitAsObservable()
		{
			return null;
		}
	}
}
