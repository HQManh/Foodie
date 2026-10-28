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
					while (queue.Count > 0)
					{
						ScheduledItem item = queue.Dequeue();
						if (item == null)
						{
							break;
						}
						if (!item.IsCanceled)
						{
							TimeSpan wait = item.DueTime - Time;
							if (wait > TimeSpan.Zero)
							{
								Thread.Sleep(wait);
							}
							if (!item.IsCanceled)
							{
								item.Invoke();
							}
						}
					}
				}
			}

			[ThreadStatic]
			private static SchedulerQueue s_threadLocalQueue;

			[ThreadStatic]
			private static Stopwatch s_clock;

			private static TimeSpan Time
			{
				get
				{
					if (s_clock == null)
					{
						s_clock = Stopwatch.StartNew();
					}
					return s_clock.Elapsed;
				}
			}

			[EditorBrowsable(EditorBrowsableState.Advanced)]
			public static bool IsScheduleRequired => s_threadLocalQueue == null;

			public DateTimeOffset Now => Scheduler.Now;

			private static SchedulerQueue GetQueue()
			{
				return s_threadLocalQueue;
			}

			private static void SetQueue(SchedulerQueue newQueue)
			{
				s_threadLocalQueue = newQueue;
			}

			public IDisposable Schedule(Action action)
			{
				return Schedule(TimeSpan.Zero, action);
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				if (action == null)
				{
					throw new ArgumentNullException(nameof(action));
				}
				TimeSpan dueTimeSpan = Time + Scheduler.Normalize(dueTime);
				ScheduledItem item = new ScheduledItem(action, dueTimeSpan);
				if (s_threadLocalQueue == null)
				{
					SchedulerQueue queue = new SchedulerQueue(4);
					queue.Enqueue(item);
					SetQueue(queue);
					Trampoline.Run(queue);
					SetQueue(null);
				}
				else
				{
					s_threadLocalQueue.Enqueue(item);
				}
				return item.Cancellation;
			}
		}

		private class ImmediateScheduler : IScheduler
		{
			public DateTimeOffset Now => Scheduler.Now;

			public IDisposable Schedule(Action action)
			{
				action();
				return Disposable.Empty;
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				TimeSpan wait = Scheduler.Normalize(dueTime);
				if (wait > TimeSpan.Zero)
				{
					Thread.Sleep(wait);
				}
				action();
				return Disposable.Empty;
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
					if (constantTime == null)
					{
						constantTime = Scheduler.Immediate;
					}
					return constantTime;
				}
				set
				{
					constantTime = value;
				}
			}

			public static IScheduler TailRecursion
			{
				get
				{
					if (tailRecursion == null)
					{
						tailRecursion = Scheduler.Immediate;
					}
					return tailRecursion;
				}
				set
				{
					tailRecursion = value;
				}
			}

			public static IScheduler Iteration
			{
				get
				{
					if (iteration == null)
					{
						iteration = Scheduler.CurrentThread;
					}
					return iteration;
				}
				set
				{
					iteration = value;
				}
			}

			public static IScheduler TimeBasedOperations
			{
				get
				{
					if (timeBasedOperations == null)
					{
						timeBasedOperations = Scheduler.MainThread;
					}
					return timeBasedOperations;
				}
				set
				{
					timeBasedOperations = value;
				}
			}

			public static IScheduler AsyncConversions
			{
				get
				{
					if (asyncConversions == null)
					{
						asyncConversions = Scheduler.ThreadPool;
					}
					return asyncConversions;
				}
				set
				{
					asyncConversions = value;
				}
			}

			public static void SetDotNetCompatible()
			{
				constantTime = Scheduler.Immediate;
				tailRecursion = Scheduler.Immediate;
				iteration = Scheduler.CurrentThread;
				timeBasedOperations = Scheduler.ThreadPool;
				asyncConversions = Scheduler.ThreadPool;
			}
		}

		private class ThreadPoolScheduler : IScheduler, ISchedulerPeriodic
		{
			private sealed class Timer : IDisposable
			{
				private static readonly HashSet<System.Threading.Timer> s_timers = new HashSet<System.Threading.Timer>();

				private readonly SingleAssignmentDisposable _disposable;

				private Action _action;

				private System.Threading.Timer _timer;

				private bool _hasAdded;

				private bool _hasRemoved;

				public Timer(TimeSpan dueTime, Action action)
				{
					_disposable = new SingleAssignmentDisposable();
					_disposable.Disposable = Disposable.Create(Unroot);
					_action = action;
					_timer = new System.Threading.Timer(Tick, null, dueTime, TimeSpan.FromMilliseconds(-1.0));
					lock (s_timers)
					{
						if (!_hasRemoved)
						{
							s_timers.Add(_timer);
							_hasAdded = true;
						}
					}
				}

				private void Tick(object state)
				{
					if (!_disposable.IsDisposed)
					{
						_action();
					}
					Unroot();
				}

				private void Unroot()
				{
					_action = Stubs.Nop;
					System.Threading.Timer timer = null;
					lock (s_timers)
					{
						if (!_hasRemoved)
						{
							timer = _timer;
							_timer = null;
							if (_hasAdded && timer != null)
							{
								s_timers.Remove(timer);
							}
							_hasRemoved = true;
						}
					}
					if (timer != null)
					{
						timer.Dispose();
					}
				}

				public void Dispose()
				{
					_disposable.Dispose();
				}
			}

			private sealed class PeriodicTimer : IDisposable
			{
				private static readonly HashSet<System.Threading.Timer> s_timers = new HashSet<System.Threading.Timer>();

				private Action _action;

				private System.Threading.Timer _timer;

				private readonly AsyncLock _gate;

				public PeriodicTimer(TimeSpan period, Action action)
				{
					_action = action;
					_timer = new System.Threading.Timer(Tick, null, period, period);
					_gate = new AsyncLock();
					lock (s_timers)
					{
						s_timers.Add(_timer);
					}
				}

				private void Tick(object state)
				{
					_gate.Wait(() => _action());
				}

				public void Dispose()
				{
					System.Threading.Timer timer;
					lock (s_timers)
					{
						timer = _timer;
						_timer = null;
						if (timer != null)
						{
							s_timers.Remove(timer);
						}
					}
					if (timer != null)
					{
						timer.Dispose();
						_action = Stubs.Nop;
					}
				}
			}

			public DateTimeOffset Now => Scheduler.Now;

			public IDisposable Schedule(Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				System.Threading.ThreadPool.QueueUserWorkItem(_ =>
				{
					if (cancellation.IsDisposed)
					{
						return;
					}
					action();
				});
				return cancellation;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return Schedule(dueTime - Scheduler.Now, action);
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				return new Timer(dueTime, action);
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				return new PeriodicTimer(period, action);
			}

			// TODO(unrecovered): ScheduleQueueing<T> (ISchedulerQueueing) has no pseudocode in batch030 and the generic
			// instantiation is not in the stubs, so the body cannot be recovered.
			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
				throw new NotSupportedException("TODO(unrecovered): ThreadPoolScheduler.ScheduleQueueing<T> not recovered");
			}
		}

		private class MainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			// The pseudocode also stores Action<object>(Schedule(object)) here; the closure-based Schedule overloads below do not use it.
			private readonly Action<object> scheduleAction;

			private MainThreadScheduler()
			{
				MainThreadDispatcher.Initialize();
			}

			private static class QueuedAction<T>
			{
				public static readonly Action<object> Instance;

				// TODO(unrecovered): QueuedAction<T>.Invoke has no pseudocode in batch030; the state layout is unknown.
				public static void Invoke(object state)
				{
					throw new NotSupportedException("TODO(unrecovered): QueuedAction<T>.Invoke not recovered");
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (dueTime == TimeSpan.Zero)
							{
								_003C_003E2__current = null;
								_003C_003E1__state = 1;
								return true;
							}
							_003C_003E2__current = new WaitForSeconds((float)dueTime.TotalSeconds);
							_003C_003E1__state = 2;
							return true;
						case 1:
						case 2:
							_003C_003E1__state = -1;
							if (!cancellation.IsDisposed)
							{
								MainThreadDispatcher.UnsafeSend(action);
							}
							return false;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (period != TimeSpan.Zero)
							{
								_003CyieldInstruction_003E5__2 = new WaitForSeconds((float)(period.TotalMilliseconds / 1000.0));
								_003C_003E2__current = _003CyieldInstruction_003E5__2;
								_003C_003E1__state = 2;
								return true;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							_003C_003E2__current = _003CyieldInstruction_003E5__2;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
				}
			}

			public DateTimeOffset Now => Scheduler.Now;

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return new _003CDelayAction_003Ed__2(0)
				{
					dueTime = dueTime,
					cancellation = cancellation,
					action = action
				};
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return new _003CPeriodicAction_003Ed__3(0)
				{
					period = period,
					cancellation = cancellation,
					action = action
				};
			}

			// TODO(unrecovered): the pseudocode casts the posted state to an unnamed (cancel, action) pair class that is not in
			// the stubs. Schedule(Action) below posts an equivalent closure instead, so this method is unused.
			private void Schedule(object state)
			{
				throw new NotSupportedException("TODO(unrecovered): pair state class not recovered");
			}

			public IDisposable Schedule(Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				MainThreadDispatcher.Post(_ =>
				{
					if (!cancellation.IsDisposed)
					{
						action();
					}
				}, null);
				return cancellation;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return Schedule(dueTime - Scheduler.Now, action);
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = DelayAction(Scheduler.Normalize(dueTime), action, cancellation);
				MainThreadDispatcher.SendStartCoroutine(routine);
				return cancellation;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = PeriodicAction(Scheduler.Normalize(period), action, cancellation);
				MainThreadDispatcher.SendStartCoroutine(routine);
				return cancellation;
			}

			// TODO(unrecovered): ScheduleQueueing<T> (ISchedulerQueueing) has no pseudocode in batch030.
			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
				throw new NotSupportedException("TODO(unrecovered): MainThreadScheduler.ScheduleQueueing<T> not recovered");
			}
		}

		private class IgnoreTimeScaleMainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			// The pseudocode also stores Action<object>(Schedule(object)) here; the closure-based Schedule overloads below do not use it.
			private readonly Action<object> scheduleAction;

			private IgnoreTimeScaleMainThreadScheduler()
			{
				MainThreadDispatcher.Initialize();
			}

			private static class QueuedAction<T>
			{
				public static readonly Action<object> Instance;

				// TODO(unrecovered): QueuedAction<T>.Invoke has no pseudocode in batch030; the state layout is unknown.
				public static void Invoke(object state)
				{
					throw new NotSupportedException("TODO(unrecovered): QueuedAction<T>.Invoke not recovered");
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (dueTime == TimeSpan.Zero)
							{
								_003C_003E2__current = null;
								_003C_003E1__state = 1;
								return true;
							}
							_003Celapsed_003E5__2 = 0f;
							// the pseudocode stores the delay (TotalSeconds) in this slot
							_003Cdt_003E5__3 = (float)dueTime.TotalSeconds;
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							return false;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							_003Celapsed_003E5__2 += Time.unscaledDeltaTime;
							if (_003Cdt_003E5__3 <= _003Celapsed_003E5__2)
							{
								MainThreadDispatcher.UnsafeSend(action);
								return false;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (period != TimeSpan.Zero)
							{
								_003Celapsed_003E5__2 = 0f;
								_003Cdt_003E5__3 = (float)period.TotalSeconds;
								_003C_003E2__current = null;
								_003C_003E1__state = 2;
								return true;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							_003Celapsed_003E5__2 += Time.unscaledDeltaTime;
							if (_003Cdt_003E5__3 <= _003Celapsed_003E5__2)
							{
								MainThreadDispatcher.UnsafeSend(action);
								_003Celapsed_003E5__2 = 0f;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
				}
			}

			public DateTimeOffset Now => Scheduler.Now;

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return new _003CDelayAction_003Ed__2(0)
				{
					dueTime = dueTime,
					cancellation = cancellation,
					action = action
				};
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return new _003CPeriodicAction_003Ed__3(0)
				{
					period = period,
					cancellation = cancellation,
					action = action
				};
			}

			// TODO(unrecovered): pair state class not recovered (see MainThreadScheduler.Schedule(object)); unused.
			private void Schedule(object state)
			{
				throw new NotSupportedException("TODO(unrecovered): pair state class not recovered");
			}

			public IDisposable Schedule(Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				MainThreadDispatcher.Post(_ =>
				{
					if (!cancellation.IsDisposed)
					{
						action();
					}
				}, null);
				return cancellation;
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return Schedule(dueTime - Scheduler.Now, action);
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = DelayAction(Scheduler.Normalize(dueTime), action, cancellation);
				MainThreadDispatcher.SendStartCoroutine(routine);
				return cancellation;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = PeriodicAction(Scheduler.Normalize(period), action, cancellation);
				MainThreadDispatcher.SendStartCoroutine(routine);
				return cancellation;
			}

			// TODO(unrecovered): ScheduleQueueing<T> (ISchedulerQueueing) has no pseudocode in batch030.
			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
				throw new NotSupportedException("TODO(unrecovered): IgnoreTimeScaleMainThreadScheduler.ScheduleQueueing<T> not recovered");
			}
		}

		private class FixedUpdateMainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			private FixedUpdateMainThreadScheduler()
			{
				MainThreadDispatcher.Initialize();
			}

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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (dueTime == TimeSpan.Zero)
							{
								_003C_003E2__current = null;
								_003C_003E1__state = 1;
								return true;
							}
							_003CstartTime_003E5__2 = Time.fixedTime;
							_003Cdt_003E5__3 = (float)dueTime.TotalSeconds;
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							return false;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							if (_003Cdt_003E5__3 <= Time.fixedTime - _003CstartTime_003E5__2)
							{
								MainThreadDispatcher.UnsafeSend(action);
								return false;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CImmediateAction_003Ed__1(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				// TODO(unrecovered): ImmediateAction<T> state machine has no pseudocode in batch030.
				private bool MoveNext()
				{
					throw new NotSupportedException("TODO(unrecovered): ImmediateAction<T> state machine not recovered");
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (period != TimeSpan.Zero)
							{
								_003CstartTime_003E5__2 = Time.fixedTime;
								_003Cdt_003E5__3 = (float)period.TotalSeconds;
								_003C_003E2__current = null;
								_003C_003E1__state = 2;
								return true;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							if (_003Cdt_003E5__3 <= Time.fixedTime - _003CstartTime_003E5__2)
							{
								MainThreadDispatcher.UnsafeSend(action);
								_003CstartTime_003E5__2 = Time.fixedTime;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
				}
			}

			public DateTimeOffset Now => Scheduler.Now;

			[IteratorStateMachine(typeof(_003CImmediateAction_003Ed__1<>))]
			private IEnumerator ImmediateAction<T>(T state, Action<T> action, ICancelable cancellation)
			{
				// TODO(unrecovered): ImmediateAction<T> has no pseudocode in batch030.
				throw new NotSupportedException("TODO(unrecovered): ImmediateAction<T> not recovered");
			}

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return new _003CDelayAction_003Ed__2(0)
				{
					dueTime = dueTime,
					cancellation = cancellation,
					action = action
				};
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return new _003CPeriodicAction_003Ed__3(0)
				{
					period = period,
					cancellation = cancellation,
					action = action
				};
			}

			public IDisposable Schedule(Action action)
			{
				return Schedule(TimeSpan.Zero, action);
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return Schedule(dueTime - Scheduler.Now, action);
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = DelayAction(Scheduler.Normalize(dueTime), action, cancellation);
				MainThreadDispatcher.StartFixedUpdateMicroCoroutine(routine);
				return cancellation;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = PeriodicAction(Scheduler.Normalize(period), action, cancellation);
				MainThreadDispatcher.StartFixedUpdateMicroCoroutine(routine);
				return cancellation;
			}

			// TODO(unrecovered): ScheduleQueueing<T> (ISchedulerQueueing) has no pseudocode in batch030.
			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
				throw new NotSupportedException("TODO(unrecovered): FixedUpdateMainThreadScheduler.ScheduleQueueing<T> not recovered");
			}
		}

		private class EndOfFrameMainThreadScheduler : IScheduler, ISchedulerPeriodic, ISchedulerQueueing
		{
			private EndOfFrameMainThreadScheduler()
			{
				MainThreadDispatcher.Initialize();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CDelayAction_003Ed__2(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (dueTime == TimeSpan.Zero)
							{
								_003C_003E2__current = null;
								_003C_003E1__state = 1;
								return true;
							}
							_003Celapsed_003E5__2 = 0f;
							// the pseudocode stores the delay (TotalSeconds) in this slot
							_003Cdt_003E5__3 = (float)dueTime.TotalSeconds;
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							return false;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							_003Celapsed_003E5__2 += Time.deltaTime;
							if (_003Cdt_003E5__3 <= _003Celapsed_003E5__2)
							{
								MainThreadDispatcher.UnsafeSend(action);
								return false;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CImmediateAction_003Ed__1(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				// TODO(unrecovered): ImmediateAction<T> state machine has no pseudocode in batch030.
				private bool MoveNext()
				{
					throw new NotSupportedException("TODO(unrecovered): ImmediateAction<T> state machine not recovered");
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
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
						return _003C_003E2__current;
					}
				}

				object IEnumerator.Current
				{
					[DebuggerHidden]
					get
					{
						return _003C_003E2__current;
					}
				}

				[DebuggerHidden]
				public _003CPeriodicAction_003Ed__3(int _003C_003E1__state)
				{
					this._003C_003E1__state = _003C_003E1__state;
				}

				[DebuggerHidden]
				void IDisposable.Dispose()
				{
				}

				private bool MoveNext()
				{
					switch (_003C_003E1__state)
					{
						case 0:
							_003C_003E1__state = -1;
							if (period != TimeSpan.Zero)
							{
								_003Celapsed_003E5__2 = 0f;
								_003Cdt_003E5__3 = (float)period.TotalSeconds;
								_003C_003E2__current = null;
								_003C_003E1__state = 2;
								return true;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 1:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							MainThreadDispatcher.UnsafeSend(action);
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						case 2:
							_003C_003E1__state = -1;
							if (cancellation.IsDisposed)
							{
								return false;
							}
							_003Celapsed_003E5__2 += Time.deltaTime;
							if (_003Cdt_003E5__3 <= _003Celapsed_003E5__2)
							{
								MainThreadDispatcher.UnsafeSend(action);
								_003Celapsed_003E5__2 = 0f;
							}
							_003C_003E2__current = null;
							_003C_003E1__state = 2;
							return true;
						default:
							return false;
					}
				}

				bool IEnumerator.MoveNext()
				{
					//ILSpy generated this explicit interface implementation from .override directive in MoveNext
					return this.MoveNext();
				}

				[DebuggerHidden]
				void IEnumerator.Reset()
				{
					throw new NotSupportedException();
				}
			}

			public DateTimeOffset Now => Scheduler.Now;

			[IteratorStateMachine(typeof(_003CImmediateAction_003Ed__1<>))]
			private IEnumerator ImmediateAction<T>(T state, Action<T> action, ICancelable cancellation)
			{
				// TODO(unrecovered): ImmediateAction<T> has no pseudocode in batch030.
				throw new NotSupportedException("TODO(unrecovered): ImmediateAction<T> not recovered");
			}

			[IteratorStateMachine(typeof(_003CDelayAction_003Ed__2))]
			private IEnumerator DelayAction(TimeSpan dueTime, Action action, ICancelable cancellation)
			{
				return new _003CDelayAction_003Ed__2(0)
				{
					dueTime = dueTime,
					cancellation = cancellation,
					action = action
				};
			}

			[IteratorStateMachine(typeof(_003CPeriodicAction_003Ed__3))]
			private IEnumerator PeriodicAction(TimeSpan period, Action action, ICancelable cancellation)
			{
				return new _003CPeriodicAction_003Ed__3(0)
				{
					period = period,
					cancellation = cancellation,
					action = action
				};
			}

			public IDisposable Schedule(Action action)
			{
				return Schedule(TimeSpan.Zero, action);
			}

			public IDisposable Schedule(DateTimeOffset dueTime, Action action)
			{
				return Schedule(dueTime - Scheduler.Now, action);
			}

			public IDisposable Schedule(TimeSpan dueTime, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = DelayAction(Scheduler.Normalize(dueTime), action, cancellation);
				MainThreadDispatcher.StartEndOfFrameMicroCoroutine(routine);
				return cancellation;
			}

			public IDisposable SchedulePeriodic(TimeSpan period, Action action)
			{
				BooleanDisposable cancellation = new BooleanDisposable();
				IEnumerator routine = PeriodicAction(Scheduler.Normalize(period), action, cancellation);
				MainThreadDispatcher.StartEndOfFrameMicroCoroutine(routine);
				return cancellation;
			}

			// TODO(unrecovered): ScheduleQueueing<T> (ISchedulerQueueing) has no pseudocode in batch030.
			public void ScheduleQueueing<T>(ICancelable cancel, T state, Action<T> action)
			{
				throw new NotSupportedException("TODO(unrecovered): EndOfFrameMainThreadScheduler.ScheduleQueueing<T> not recovered");
			}
		}

		public static readonly IScheduler CurrentThread = new CurrentThreadScheduler();

		public static readonly IScheduler Immediate = new ImmediateScheduler();

		public static readonly IScheduler ThreadPool = new ThreadPoolScheduler();

		private static IScheduler mainThread;

		private static IScheduler mainThreadIgnoreTimeScale;

		private static IScheduler mainThreadFixedUpdate;

		private static IScheduler mainThreadEndOfFrame;

		public static bool IsCurrentThreadSchedulerScheduleRequired => CurrentThreadScheduler.IsScheduleRequired;

		public static DateTimeOffset Now => DateTimeOffset.UtcNow;

		public static IScheduler MainThread
		{
			get
			{
				if (mainThread == null)
				{
					mainThread = new MainThreadScheduler();
				}
				return mainThread;
			}
		}

		public static IScheduler MainThreadIgnoreTimeScale
		{
			get
			{
				if (mainThreadIgnoreTimeScale == null)
				{
					mainThreadIgnoreTimeScale = new IgnoreTimeScaleMainThreadScheduler();
				}
				return mainThreadIgnoreTimeScale;
			}
		}

		public static IScheduler MainThreadFixedUpdate
		{
			get
			{
				if (mainThreadFixedUpdate == null)
				{
					mainThreadFixedUpdate = new FixedUpdateMainThreadScheduler();
				}
				return mainThreadFixedUpdate;
			}
		}

		public static IScheduler MainThreadEndOfFrame
		{
			get
			{
				if (mainThreadEndOfFrame == null)
				{
					mainThreadEndOfFrame = new EndOfFrameMainThreadScheduler();
				}
				return mainThreadEndOfFrame;
			}
		}

		public static TimeSpan Normalize(TimeSpan timeSpan)
		{
			if (timeSpan >= TimeSpan.Zero)
			{
				return timeSpan;
			}
			return TimeSpan.Zero;
		}

		public static IDisposable Schedule(this IScheduler scheduler, DateTimeOffset dueTime, Action action)
		{
			return scheduler.Schedule(dueTime - scheduler.Now, action);
		}

		// TODO(unrecovered): closure display classes (<>c__DisplayClass11_0/1 etc.) are not in the stub; the Action<Action> overload's state machine cannot be placed.
		public static IDisposable Schedule(this IScheduler scheduler, Action<Action> action)
		{
			return null;
		}

		// TODO(unrecovered): closure display classes (<>c__DisplayClass12_0/1 etc.) are not in the stub; the Action<Action<TimeSpan>> overload cannot be placed.
		public static IDisposable Schedule(this IScheduler scheduler, TimeSpan dueTime, Action<Action<TimeSpan>> action)
		{
			return null;
		}

		// TODO(unrecovered): closure display classes (<>c__DisplayClass13_0/1 etc.) are not in the stub; the Action<Action<DateTimeOffset>> overload cannot be placed.
		public static IDisposable Schedule(this IScheduler scheduler, DateTimeOffset dueTime, Action<Action<DateTimeOffset>> action)
		{
			return null;
		}

		public static void SetDefaultForUnity()
		{
			DefaultSchedulers.ConstantTimeOperations = Immediate;
			DefaultSchedulers.TailRecursion = Immediate;
			DefaultSchedulers.Iteration = CurrentThread;
			DefaultSchedulers.TimeBasedOperations = MainThread;
			DefaultSchedulers.AsyncConversions = ThreadPool;
		}
	}
}
