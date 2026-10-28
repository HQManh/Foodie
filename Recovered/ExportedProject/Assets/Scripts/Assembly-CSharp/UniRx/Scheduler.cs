using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using UniRx.InternalUtil;
using UnityEngine;

namespace UniRx
{
	public static class Scheduler
	{
		private class CurrentThreadScheduler : IScheduler
		{
			private static class Trampoline
			{
				public static void Run(SchedulerQueue queue)
				{
				}
			}

			[ThreadStatic]
			private static SchedulerQueue s_threadLocalQueue;

			[ThreadStatic]
			private static Stopwatch s_clock;

			private static TimeSpan Time => default;

			[EditorBrowsable(EditorBrowsableState.Advanced)]
			public static bool IsScheduleRequired => false;

			public DateTimeOffset Now => default;

			private static SchedulerQueue GetQueue()
			{
				return null;
			}

			private static void SetQueue(SchedulerQueue newQueue)
			{
			}

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}
		}

		private class ImmediateScheduler : IScheduler
		{
			public DateTimeOffset Now => default;

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}
		}

		public static class DefaultSchedulers
		{
			private static IScheduler constantTime;

			private static IScheduler tailRecursion;

			private static IScheduler iteration;

			private static IScheduler timeBasedOperations;

			private static IScheduler asyncConversions;

			public static IScheduler ConstantTimeOperations
			{
				get
				{
					return null;
				}
				set
				{
				}
			}

			public static IScheduler TailRecursion
			{
				get
				{
					return null;
				}
				set
				{
				}
			}

			public static IScheduler Iteration
			{
				get
				{
					return null;
				}
				set
				{
				}
			}

			public static IScheduler TimeBasedOperations
			{
				get
				{
					return null;
				}
				set
				{
				}
			}

			public static IScheduler AsyncConversions
			{
				get
				{
					return null;
				}
				set
				{
				}
			}

			public static void SetDotNetCompatible()
			{
			}
		}

		private class ThreadPoolScheduler : IScheduler, ISchedulerPeriodic
		{
			private sealed class Timer : IDisposable
			{
				private static readonly HashSet<System.Threading.Timer> s_timers;

				private readonly SingleAssignmentDisposable _disposable;

				private Action _action;

				private System.Threading.Timer _timer;

				private bool _hasAdded;

				private bool _hasRemoved;

				public Timer(TimeSpan dueTime, Action action)
				{
				}

				private void Tick(object state)
				{
				}

				private void Unroot()
				{
				}

				public void Dispose()
				{
				}
			}

			private sealed class PeriodicTimer : IDisposable
			{
				private static readonly HashSet<System.Threading.Timer> s_timers;

				private Action _action;

				private System.Threading.Timer _timer;

				private readonly AsyncLock _gate;

				public PeriodicTimer(TimeSpan period, Action action)
				{
				}

				private void Tick(object state)
				{
				}

				public void Dispose()
				{
				}
			}

			public DateTimeOffset Now => default;

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				return null;
			}

			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
			}
		}

		private class MainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			private static class QueuedAction<T>
			{
				public static readonly Action<object> Instance;

				public static void Invoke(object state)
				{
				}
			}

			[CompilerGenerated]
			private sealed class _003CDelayAction_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan dueTime;

				public ICancelable cancellation;

				public Action action;

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
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
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
			private sealed class _003CPeriodicAction_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan period;

				public ICancelable cancellation;

				public Action action;

				private WaitForSeconds _003CyieldInstruction_003E5__2;

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
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
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

			private readonly Action<object> scheduleAction;

			public DateTimeOffset Now => default;

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return null;
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return null;
			}

			private void Schedule(object state)
			{
			}

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				return null;
			}

			private void ScheduleQueueing<T>(object state)
			{
			}

			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
			}
		}

		private class IgnoreTimeScaleMainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			private static class QueuedAction<T>
			{
				public static readonly Action<object> Instance;

				public static void Invoke(object state)
				{
				}
			}

			[CompilerGenerated]
			private sealed class _003CDelayAction_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan dueTime;

				public ICancelable cancellation;

				public Action action;

				private float _003Celapsed_003E5__2;

				private float _003Cdt_003E5__3;

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
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
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
			private sealed class _003CPeriodicAction_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan period;

				public ICancelable cancellation;

				public Action action;

				private float _003Celapsed_003E5__2;

				private float _003Cdt_003E5__3;

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
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
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

			private readonly Action<object> scheduleAction;

			public DateTimeOffset Now => default;

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return null;
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return null;
			}

			private void Schedule(object state)
			{
			}

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				return null;
			}

			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
			}
		}

		private class FixedUpdateMainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			[CompilerGenerated]
			private sealed class _003CDelayAction_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan dueTime;

				public ICancelable cancellation;

				public Action action;

				private float _003CstartTime_003E5__2;

				private float _003Cdt_003E5__3;

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
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
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
			private sealed class _003CImmediateAction_003Ed__1<T> : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public ICancelable cancellation;

				public Action<T> action;

				public T state;

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
				public _003CImmediateAction_003Ed__1(int _003C_003E1__state)
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
			private sealed class _003CPeriodicAction_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan period;

				public ICancelable cancellation;

				public Action action;

				private float _003CstartTime_003E5__2;

				private float _003Cdt_003E5__3;

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
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
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

			public DateTimeOffset Now => default;

			[IteratorStateMachine(typeof(_003CImmediateAction_003Ed__1<>))]
			private IEnumerator ImmediateAction<T>(T state, Action<T> action, ICancelable cancellation)
			{
				return null;
			}

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return null;
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return null;
			}

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				return null;
			}

			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
			}
		}

		private class EndOfFrameMainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			[CompilerGenerated]
			private sealed class _003CDelayAction_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan dueTime;

				public ICancelable cancellation;

				public Action action;

				private float _003Celapsed_003E5__2;

				private float _003Cdt_003E5__3;

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
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
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
			private sealed class _003CImmediateAction_003Ed__1<T> : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public ICancelable cancellation;

				public Action<T> action;

				public T state;

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
				public _003CImmediateAction_003Ed__1(int _003C_003E1__state)
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
			private sealed class _003CPeriodicAction_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
			{
				private int _003C_003E1__state;

				private object _003C_003E2__current;

				public TimeSpan period;

				public ICancelable cancellation;

				public Action action;

				private float _003Celapsed_003E5__2;

				private float _003Cdt_003E5__3;

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
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
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

			public DateTimeOffset Now => default;

			[IteratorStateMachine(typeof(_003CImmediateAction_003Ed__1<>))]
			private IEnumerator ImmediateAction<T>(T state, Action<T> action, ICancelable cancellation)
			{
				return null;
			}

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return null;
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return null;
			}

			public IDisposable Schedule(Action action)
			{
				return null;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return null;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return null;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				return null;
			}

			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
			}
		}

		public static readonly IScheduler CurrentThread;

		public static readonly IScheduler Immediate;

		public static readonly IScheduler ThreadPool;

		private static IScheduler mainThread;

		private static IScheduler mainThreadIgnoreTimeScale;

		private static IScheduler mainThreadFixedUpdate;

		private static IScheduler mainThreadEndOfFrame;

		public static bool IsCurrentThreadSchedulerScheduleRequired => false;

		public static DateTimeOffset Now => default;

		public static IScheduler MainThread => null;

		public static IScheduler MainThreadIgnoreTimeScale => null;

		public static IScheduler MainThreadFixedUpdate => null;

		public static IScheduler MainThreadEndOfFrame => null;

		public static TimeSpan Normalize(TimeSpan timeSpan)
		{
			return default;
		}

		public static IDisposable Schedule(this IScheduler scheduler, DateTimeOffset dueTime, Action action)
		{
			return null;
		}

		public static IDisposable Schedule(this IScheduler scheduler, Action<Action> action)
		{
			return null;
		}

		public static IDisposable Schedule(this IScheduler scheduler, TimeSpan dueTime, Action<Action<TimeSpan>> action)
		{
			return null;
		}

		public static IDisposable Schedule(this IScheduler scheduler, DateTimeOffset dueTime, Action<Action<DateTimeOffset>> action)
		{
			return null;
		}

		public static void SetDefaultForUnity()
		{
		}
	}
}
