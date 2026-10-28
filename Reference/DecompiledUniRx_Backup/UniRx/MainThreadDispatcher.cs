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

		public static CullingMode cullingMode = CullingMode.Self;

		private ThreadSafeQueueWorker queueWorker = new ThreadSafeQueueWorker();

		private Action<Exception> unhandledExceptionCallback = ex => UnityEngine.Debug.LogException(ex);

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

		public static string InstanceName
		{
			get
			{
				if (instance != null)
				{
					return instance.name;
				}
				throw new NullReferenceException("MainThreadDispatcher is not initialized" /* literal recovered by guess */);
			}
		}

		public static bool IsInitialized => initialized && instance != null;

		private static MainThreadDispatcher Instance
		{
			get
			{
				Initialize();
				return instance;
			}
		}

		public static bool IsInMainThread => mainThreadToken != null;

		public static void Post(Action<object> action, object state)
		{
			if (isQuitting)
			{
				return;
			}
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher != null)
			{
				dispatcher.queueWorker.Enqueue(action, state);
			}
		}

		public static void Send(Action<object> action, object state)
		{
			if (mainThreadToken != null)
			{
				action(state);
				return;
			}
			Post(action, state);
		}

		public static void UnsafeSend(Action action)
		{
			action();
		}

		// TODO(unrecovered): generic UnsafeSend<T> has no pseudocode in this batch; left empty.
		public static void UnsafeSend<T>(Action<T> action, T state)
		{
		}

		public static void SendStartCoroutine(IEnumerator routine)
		{
			if (mainThreadToken != null)
			{
				StartCoroutine(routine);
				return;
			}
			MainThreadDispatcher dispatcher = Instance;
			if (isQuitting || dispatcher == null)
			{
				return;
			}
			dispatcher.queueWorker.Enqueue(_ => { StartCoroutine(routine); }, null);
		}

		public static void StartUpdateMicroCoroutine(IEnumerator routine)
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher != null)
			{
				dispatcher.updateMicroCoroutine.AddCoroutine(routine);
			}
		}

		public static void StartFixedUpdateMicroCoroutine(IEnumerator routine)
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher != null)
			{
				dispatcher.fixedUpdateMicroCoroutine.AddCoroutine(routine);
			}
		}

		public static void StartEndOfFrameMicroCoroutine(IEnumerator routine)
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher != null)
			{
				dispatcher.endOfFrameMicroCoroutine.AddCoroutine(routine);
			}
		}

		public new static Coroutine StartCoroutine(IEnumerator routine)
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher != null)
			{
				return dispatcher.StartCoroutine(routine);
			}
			return null;
		}

		public static void RegisterUnhandledExceptionCallback(Action<Exception> exceptionCallback)
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher == null)
			{
				throw new NullReferenceException();
			}
			if (exceptionCallback == null)
			{
				dispatcher.unhandledExceptionCallback = ex => UnityEngine.Debug.LogException(ex);
			}
			else
			{
				dispatcher.unhandledExceptionCallback = exceptionCallback;
			}
		}

		public static void Initialize()
		{
			if (!initialized && !isQuitting)
			{
				MainThreadDispatcher found = UnityEngine.Object.FindObjectOfType<MainThreadDispatcher>();
				if (found == null)
				{
					GameObject go = new GameObject("MainThreadDispatcher");
					go.AddComponent<MainThreadDispatcher>();
				}
				else
				{
					found.Awake();
				}
			}
		}

		private void Awake()
		{
			if (instance == null)
			{
				instance = this;
				mainThreadToken = new object();
				initialized = true;
				updateMicroCoroutine = new MicroCoroutine(e => unhandledExceptionCallback(e));
				fixedUpdateMicroCoroutine = new MicroCoroutine(e => unhandledExceptionCallback(e));
				endOfFrameMicroCoroutine = new MicroCoroutine(e => unhandledExceptionCallback(e));
				StartCoroutine(RunUpdateMicroCoroutine());
				StartCoroutine(RunFixedUpdateMicroCoroutine());
				StartCoroutine(RunEndOfFrameMicroCoroutine());
				DontDestroyOnLoad(gameObject);
			}
			else if (instance != this)
			{
				int mode = (int)cullingMode;
				if (mode == 1)
				{
					UnityEngine.Debug.LogWarning("MainThreadDispatcher already exists; destroying this duplicate." /* literal recovered by guess */);
					DestroyDispatcher(this);
					return;
				}
				if (mode == 2)
				{
					UnityEngine.Debug.LogWarning("MainThreadDispatcher duplicates found; culling all excess dispatchers." /* literal recovered by guess */);
					CullAllExcessDispatchers();
					return;
				}
				UnityEngine.Debug.LogWarning("MainThreadDispatcher duplicate detected." /* literal recovered by guess */);
			}
		}

		private IEnumerator RunUpdateMicroCoroutine()
		{
			while (true)
			{
				yield return null;
				updateMicroCoroutine.Run();
			}
		}

		private IEnumerator RunFixedUpdateMicroCoroutine()
		{
			while (true)
			{
				yield return new WaitForFixedUpdate();
				fixedUpdateMicroCoroutine.Run();
			}
		}

		private IEnumerator RunEndOfFrameMicroCoroutine()
		{
			while (true)
			{
				yield return new WaitForEndOfFrame();
				endOfFrameMicroCoroutine.Run();
			}
		}

		private static void DestroyDispatcher(MainThreadDispatcher aDispatcher)
		{
			// TODO(unrecovered): the tail of this method inspects an internal helper component (GetComponent of an unnamed type, its
			// scene/root-count fields and a scene list) whose types are not in the stubs; behaviour beyond the instance check is not recovered.
		}

		public static void CullAllExcessDispatchers()
		{
			foreach (MainThreadDispatcher dispatcher in UnityEngine.Object.FindObjectsOfType<MainThreadDispatcher>())
			{
				DestroyDispatcher(dispatcher);
			}
		}

		private void OnDestroy()
		{
			if (instance == this)
			{
				instance = UnityEngine.Object.FindObjectOfType<MainThreadDispatcher>();
				initialized = instance != null;
			}
		}

		private void Update()
		{
			if (update != null)
			{
				update.OnNext(Unit.Default);
			}
			queueWorker.ExecuteAll(unhandledExceptionCallback);
		}

		public static IObservable<Unit> UpdateAsObservable()
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher.update == null)
			{
				dispatcher.update = new Subject<Unit>();
			}
			return dispatcher.update;
		}

		private void LateUpdate()
		{
			if (lateUpdate != null)
			{
				lateUpdate.OnNext(Unit.Default);
			}
		}

		public static IObservable<Unit> LateUpdateAsObservable()
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher.lateUpdate == null)
			{
				dispatcher.lateUpdate = new Subject<Unit>();
			}
			return dispatcher.lateUpdate;
		}

		private void OnApplicationFocus(bool focus)
		{
			if (onApplicationFocus != null)
			{
				onApplicationFocus.OnNext(focus);
			}
		}

		public static IObservable<bool> OnApplicationFocusAsObservable()
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher.onApplicationFocus == null)
			{
				dispatcher.onApplicationFocus = new Subject<bool>();
			}
			return dispatcher.onApplicationFocus;
		}

		private void OnApplicationPause(bool pause)
		{
			if (onApplicationPause != null)
			{
				onApplicationPause.OnNext(pause);
			}
		}

		public static IObservable<bool> OnApplicationPauseAsObservable()
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher.onApplicationPause == null)
			{
				dispatcher.onApplicationPause = new Subject<bool>();
			}
			return dispatcher.onApplicationPause;
		}

		private void OnApplicationQuit()
		{
			isQuitting = true;
			if (onApplicationQuit != null)
			{
				onApplicationQuit.OnNext(Unit.Default);
			}
		}

		public static IObservable<Unit> OnApplicationQuitAsObservable()
		{
			MainThreadDispatcher dispatcher = Instance;
			if (dispatcher.onApplicationQuit == null)
			{
				dispatcher.onApplicationQuit = new Subject<Unit>();
			}
			return dispatcher.onApplicationQuit;
		}
	}
}
