using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using UniRx.Operators;
using UnityEngine;

namespace UniRx
{
	public static class Observable
	{
		private class ConnectableObservable<T> : IConnectableObservable<T>, IObservable<T>
		{
			private class Connection : IDisposable
			{
				private readonly ConnectableObservable<T> parent;

				private IDisposable subscription;

				public Connection(ConnectableObservable<T> parent, IDisposable subscription)
				{
				}

				public void Dispose()
				{
				}
			}

			private readonly IObservable<T> source;

			private readonly ISubject<T> subject;

			private readonly object gate;

			private Connection connection;

			public ConnectableObservable(IObservable<T> source, ISubject<T> subject)
			{
			}

			public IDisposable Connect()
			{
				return null;
			}

			public IDisposable Subscribe(IObserver<T> observer)
			{
				return null;
			}
		}

		private class EveryAfterUpdateInvoker : IEnumerator
		{
			private long count;

			private readonly IObserver<long> observer;

			private readonly CancellationToken cancellationToken;

			public object Current => null;

			public EveryAfterUpdateInvoker(IObserver<long> observer, CancellationToken cancellationToken)
			{
			}

			public bool MoveNext()
			{
				return false;
			}

			public void Reset()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CCombineSources_003Ed__29<T> : IEnumerable<IObservable<T>>, IEnumerable, IEnumerator<IObservable<T>>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private IObservable<T> _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			private IObservable<T> first;

			public IObservable<T> _003C_003E3__first;

			private IObservable<T>[] seconds;

			public IObservable<T>[] _003C_003E3__seconds;

			private int _003Ci_003E5__2;

			IObservable<T> IEnumerator<IObservable<T>>.Current
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
			public _003CCombineSources_003Ed__29(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<IObservable<T>> IEnumerable<IObservable<T>>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003CEveryCycleCore_003Ed__311 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CancellationToken cancellationToken;

			public IObserver<long> observer;

			private long _003Ccount_003E5__2;

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
			public _003CEveryCycleCore_003Ed__311(int _003C_003E1__state)
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
		private sealed class _003CNextFrameCore_003Ed__316 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CancellationToken cancellation;

			public IObserver<Unit> observer;

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
			public _003CNextFrameCore_003Ed__316(int _003C_003E1__state)
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
		private sealed class _003CRepeatInfinite_003Ed__130<T> : IEnumerable<IObservable<T>>, IEnumerable, IEnumerator<IObservable<T>>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private IObservable<T> _003C_003E2__current;

			private int _003C_003El__initialThreadId;

			private IObservable<T> source;

			public IObservable<T> _003C_003E3__source;

			IObservable<T> IEnumerator<IObservable<T>>.Current
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
			public _003CRepeatInfinite_003Ed__130(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<IObservable<T>> IEnumerable<IObservable<T>>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		[CompilerGenerated]
		private sealed class _003CTimerFrameCore_003Ed__320 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public int dueTimeFrameCount;

			public IObserver<long> observer;

			public CancellationToken cancel;

			private int _003CcurrentFrame_003E5__2;

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
			public _003CTimerFrameCore_003Ed__320(int _003C_003E1__state)
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
		private sealed class _003CTimerFrameCore_003Ed__321 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public int dueTimeFrameCount;

			public int periodFrameCount;

			public IObserver<long> observer;

			public CancellationToken cancel;

			private long _003CsendCount_003E5__2;

			private int _003CcurrentFrame_003E5__3;

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
			public _003CTimerFrameCore_003Ed__321(int _003C_003E1__state)
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
		private sealed class _003CToAwaitableEnumerator_003Ed__336<T> : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public IObservable<T> source;

			public CancellationToken cancel;

			public Action<T> onResult;

			public Action<Exception> onError;

			private ObservableYieldInstruction<T> _003Cenumerator_003E5__2;

			private IEnumerator<T> _003Ce_003E5__3;

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
			public _003CToAwaitableEnumerator_003Ed__336(int _003C_003E1__state)
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
		private sealed class _003CWrapEnumerator_003Ed__291 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public IEnumerator enumerator;

			public IObserver<Unit> observer;

			public bool publishEveryYield;

			public CancellationToken cancellationToken;

			private bool _003ChasNext_003E5__2;

			private bool _003CraisedError_003E5__3;

			private ICustomYieldInstructionErrorHandler _003CcustomHandler_003E5__4;

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
			public _003CWrapEnumerator_003Ed__291(int _003C_003E1__state)
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
		private sealed class _003CWrapEnumeratorYieldValue_003Ed__294<T> : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public IEnumerator enumerator;

			public IObserver<T> observer;

			public bool nullAsNextUpdate;

			public CancellationToken cancellationToken;

			private bool _003ChasNext_003E5__2;

			private object _003Ccurrent_003E5__3;

			private bool _003CraisedError_003E5__4;

			private ICustomYieldInstructionErrorHandler _003CcustomHandler_003E5__5;

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
			public _003CWrapEnumeratorYieldValue_003Ed__294(int _003C_003E1__state)
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
		private sealed class _003CWrapToCancellableEnumerator_003Ed__297<T> : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public IEnumerator enumerator;

			public IObserver<T> observer;

			public CancellationToken cancellationToken;

			private bool _003ChasNext_003E5__2;

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
			public _003CWrapToCancellableEnumerator_003Ed__297(int _003C_003E1__state)
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

		private static readonly TimeSpan InfiniteTimeSpan;

		private static readonly HashSet<Type> YieldInstructionTypes;

		private static IObservable<T> AddRef<T>(IObservable<T> xs, RefCountDisposable r)
		{
			return null;
		}

		public static IObservable<TSource> Scan<TSource>(this IObservable<TSource> source, Func<TSource, TSource, TSource> accumulator)
		{
			return null;
		}

		public static IObservable<TAccumulate> Scan<TSource, TAccumulate>(this IObservable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> accumulator)
		{
			return null;
		}

		public static IObservable<TSource> Aggregate<TSource>(this IObservable<TSource> source, Func<TSource, TSource, TSource> accumulator)
		{
			return null;
		}

		public static IObservable<TAccumulate> Aggregate<TSource, TAccumulate>(this IObservable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> accumulator)
		{
			return null;
		}

		public static IObservable<TResult> Aggregate<TSource, TAccumulate, TResult>(this IObservable<TSource> source, TAccumulate seed, Func<TAccumulate, TSource, TAccumulate> accumulator, Func<TAccumulate, TResult> resultSelector)
		{
			return null;
		}

		public static AsyncSubject<TSource> GetAwaiter<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static AsyncSubject<TSource> GetAwaiter<TSource>(this IConnectableObservable<TSource> source)
		{
			return null;
		}

		public static AsyncSubject<TSource> GetAwaiter<TSource>(this IObservable<TSource> source, CancellationToken cancellationToken)
		{
			return null;
		}

		public static AsyncSubject<TSource> GetAwaiter<TSource>(this IConnectableObservable<TSource> source, CancellationToken cancellationToken)
		{
			return null;
		}

		private static AsyncSubject<TSource> RunAsync<TSource>(IObservable<TSource> source, CancellationToken cancellationToken)
		{
			return null;
		}

		private static AsyncSubject<TSource> RunAsync<TSource>(IConnectableObservable<TSource> source, CancellationToken cancellationToken)
		{
			return null;
		}

		private static AsyncSubject<T> Cancel<T>(AsyncSubject<T> subject, CancellationToken cancellationToken)
		{
			return null;
		}

		private static void RegisterCancelation<T>(AsyncSubject<T> subject, IDisposable subscription, CancellationToken token)
		{
		}

		public static IConnectableObservable<T> Multicast<T>(this IObservable<T> source, ISubject<T> subject)
		{
			return null;
		}

		public static IConnectableObservable<T> Publish<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IConnectableObservable<T> Publish<T>(this IObservable<T> source, T initialValue)
		{
			return null;
		}

		public static IConnectableObservable<T> PublishLast<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source, IScheduler scheduler)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source, int bufferSize)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source, int bufferSize, IScheduler scheduler)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source, TimeSpan window)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source, TimeSpan window, IScheduler scheduler)
		{
			return null;
		}

		public static IConnectableObservable<T> Replay<T>(this IObservable<T> source, int bufferSize, TimeSpan window, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> RefCount<T>(this IConnectableObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Share<T>(this IObservable<T> source)
		{
			return null;
		}

		public static T Wait<T>(this IObservable<T> source)
		{
			return default;
		}

		public static T Wait<T>(this IObservable<T> source, TimeSpan timeout)
		{
			return default;
		}

		[IteratorStateMachine(typeof(_003CCombineSources_003Ed__29<>))]
		private static IEnumerable<IObservable<T>> CombineSources<T>(IObservable<T> first, IObservable<T>[] seconds)
		{
			return null;
		}

		public static IObservable<TSource> Concat<TSource>(params IObservable<TSource>[] sources)
		{
			return null;
		}

		public static IObservable<TSource> Concat<TSource>(this IEnumerable<IObservable<TSource>> sources)
		{
			return null;
		}

		public static IObservable<TSource> Concat<TSource>(this IObservable<IObservable<TSource>> sources)
		{
			return null;
		}

		public static IObservable<TSource> Concat<TSource>(this IObservable<TSource> first, params IObservable<TSource>[] seconds)
		{
			return null;
		}

		public static IObservable<TSource> Merge<TSource>(this IEnumerable<IObservable<TSource>> sources)
		{
			return null;
		}

		public static IObservable<TSource> Merge<TSource>(this IEnumerable<IObservable<TSource>> sources, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TSource> Merge<TSource>(this IEnumerable<IObservable<TSource>> sources, int maxConcurrent)
		{
			return null;
		}

		public static IObservable<TSource> Merge<TSource>(this IEnumerable<IObservable<TSource>> sources, int maxConcurrent, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TSource> Merge<TSource>(params IObservable<TSource>[] sources)
		{
			return null;
		}

		public static IObservable<TSource> Merge<TSource>(IScheduler scheduler, params IObservable<TSource>[] sources)
		{
			return null;
		}

		public static IObservable<T> Merge<T>(this IObservable<T> first, params IObservable<T>[] seconds)
		{
			return null;
		}

		public static IObservable<T> Merge<T>(this IObservable<T> first, IObservable<T> second, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Merge<T>(this IObservable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<T> Merge<T>(this IObservable<IObservable<T>> sources, int maxConcurrent)
		{
			return null;
		}

		public static IObservable<TResult> Zip<TLeft, TRight, TResult>(this IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
		{
			return null;
		}

		public static IObservable<IList<T>> Zip<T>(this IEnumerable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<IList<T>> Zip<T>(params IObservable<T>[] sources)
		{
			return null;
		}

		public static IObservable<TR> Zip<T1, T2, T3, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, ZipFunc<T1, T2, T3, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> Zip<T1, T2, T3, T4, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, ZipFunc<T1, T2, T3, T4, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> Zip<T1, T2, T3, T4, T5, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, ZipFunc<T1, T2, T3, T4, T5, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> Zip<T1, T2, T3, T4, T5, T6, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, ZipFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> Zip<T1, T2, T3, T4, T5, T6, T7, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, IObservable<T7> source7, ZipFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TResult> CombineLatest<TLeft, TRight, TResult>(this IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
		{
			return null;
		}

		public static IObservable<IList<T>> CombineLatest<T>(this IEnumerable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<IList<TSource>> CombineLatest<TSource>(params IObservable<TSource>[] sources)
		{
			return null;
		}

		public static IObservable<TR> CombineLatest<T1, T2, T3, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, CombineLatestFunc<T1, T2, T3, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> CombineLatest<T1, T2, T3, T4, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, CombineLatestFunc<T1, T2, T3, T4, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> CombineLatest<T1, T2, T3, T4, T5, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, CombineLatestFunc<T1, T2, T3, T4, T5, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> CombineLatest<T1, T2, T3, T4, T5, T6, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, CombineLatestFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> CombineLatest<T1, T2, T3, T4, T5, T6, T7, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, IObservable<T7> source7, CombineLatestFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TResult> ZipLatest<TLeft, TRight, TResult>(this IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
		{
			return null;
		}

		public static IObservable<IList<T>> ZipLatest<T>(this IEnumerable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<IList<TSource>> ZipLatest<TSource>(params IObservable<TSource>[] sources)
		{
			return null;
		}

		public static IObservable<TR> ZipLatest<T1, T2, T3, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, ZipLatestFunc<T1, T2, T3, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> ZipLatest<T1, T2, T3, T4, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, ZipLatestFunc<T1, T2, T3, T4, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> ZipLatest<T1, T2, T3, T4, T5, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, ZipLatestFunc<T1, T2, T3, T4, T5, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> ZipLatest<T1, T2, T3, T4, T5, T6, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, ZipLatestFunc<T1, T2, T3, T4, T5, T6, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TR> ZipLatest<T1, T2, T3, T4, T5, T6, T7, TR>(this IObservable<T1> source1, IObservable<T2> source2, IObservable<T3> source3, IObservable<T4> source4, IObservable<T5> source5, IObservable<T6> source6, IObservable<T7> source7, ZipLatestFunc<T1, T2, T3, T4, T5, T6, T7, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<T> Switch<T>(this IObservable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<TResult> WithLatestFrom<TLeft, TRight, TResult>(this IObservable<TLeft> left, IObservable<TRight> right, Func<TLeft, TRight, TResult> selector)
		{
			return null;
		}

		public static IObservable<T[]> WhenAll<T>(params IObservable<T>[] sources)
		{
			return null;
		}

		public static IObservable<Unit> WhenAll(params IObservable<Unit>[] sources)
		{
			return null;
		}

		public static IObservable<T[]> WhenAll<T>(this IEnumerable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<Unit> WhenAll(this IEnumerable<IObservable<Unit>> sources)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, T value)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, Func<T> valueFactory)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, params T[] values)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, IEnumerable<T> values)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, IScheduler scheduler, T value)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, IScheduler scheduler, IEnumerable<T> values)
		{
			return null;
		}

		public static IObservable<T> StartWith<T>(this IObservable<T> source, IScheduler scheduler, params T[] values)
		{
			return null;
		}

		public static IObservable<T> Synchronize<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Synchronize<T>(this IObservable<T> source, object gate)
		{
			return null;
		}

		public static IObservable<T> ObserveOn<T>(this IObservable<T> source, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> SubscribeOn<T>(this IObservable<T> source, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> DelaySubscription<T>(this IObservable<T> source, TimeSpan dueTime)
		{
			return null;
		}

		public static IObservable<T> DelaySubscription<T>(this IObservable<T> source, TimeSpan dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> DelaySubscription<T>(this IObservable<T> source, DateTimeOffset dueTime)
		{
			return null;
		}

		public static IObservable<T> DelaySubscription<T>(this IObservable<T> source, DateTimeOffset dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Amb<T>(params IObservable<T>[] sources)
		{
			return null;
		}

		public static IObservable<T> Amb<T>(IEnumerable<IObservable<T>> sources)
		{
			return null;
		}

		public static IObservable<T> Amb<T>(this IObservable<T> source, IObservable<T> second)
		{
			return null;
		}

		public static IObservable<T> AsObservable<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> ToObservable<T>(this IEnumerable<T> source)
		{
			return null;
		}

		public static IObservable<T> ToObservable<T>(this IEnumerable<T> source, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TResult> Cast<TSource, TResult>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TResult> Cast<TSource, TResult>(this IObservable<TSource> source, TResult witness)
		{
			return null;
		}

		public static IObservable<TResult> OfType<TSource, TResult>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TResult> OfType<TSource, TResult>(this IObservable<TSource> source, TResult witness)
		{
			return null;
		}

		public static IObservable<Unit> AsUnitObservable<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<Unit> AsSingleUnitObservable<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Create<T>(Func<IObserver<T>, IDisposable> subscribe)
		{
			return null;
		}

		public static IObservable<T> Create<T>(Func<IObserver<T>, IDisposable> subscribe, bool isRequiredSubscribeOnCurrentThread)
		{
			return null;
		}

		public static IObservable<T> CreateWithState<T, TState>(TState state, Func<TState, IObserver<T>, IDisposable> subscribe)
		{
			return null;
		}

		public static IObservable<T> CreateWithState<T, TState>(TState state, Func<TState, IObserver<T>, IDisposable> subscribe, bool isRequiredSubscribeOnCurrentThread)
		{
			return null;
		}

		public static IObservable<T> CreateSafe<T>(Func<IObserver<T>, IDisposable> subscribe)
		{
			return null;
		}

		public static IObservable<T> CreateSafe<T>(Func<IObserver<T>, IDisposable> subscribe, bool isRequiredSubscribeOnCurrentThread)
		{
			return null;
		}

		public static IObservable<T> Empty<T>()
		{
			return null;
		}

		public static IObservable<T> Empty<T>(IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Empty<T>(T witness)
		{
			return null;
		}

		public static IObservable<T> Empty<T>(IScheduler scheduler, T witness)
		{
			return null;
		}

		public static IObservable<T> Never<T>()
		{
			return null;
		}

		public static IObservable<T> Never<T>(T witness)
		{
			return null;
		}

		public static IObservable<T> Return<T>(T value)
		{
			return null;
		}

		public static IObservable<T> Return<T>(T value, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<Unit> Return(Unit value)
		{
			return null;
		}

		public static IObservable<bool> Return(bool value)
		{
			return null;
		}

		public static IObservable<int> Return(int value)
		{
			return null;
		}

		public static IObservable<Unit> ReturnUnit()
		{
			return null;
		}

		public static IObservable<T> Throw<T>(Exception error)
		{
			return null;
		}

		public static IObservable<T> Throw<T>(Exception error, T witness)
		{
			return null;
		}

		public static IObservable<T> Throw<T>(Exception error, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Throw<T>(Exception error, IScheduler scheduler, T witness)
		{
			return null;
		}

		public static IObservable<int> Range(int start, int count)
		{
			return null;
		}

		public static IObservable<int> Range(int start, int count, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Repeat<T>(T value)
		{
			return null;
		}

		public static IObservable<T> Repeat<T>(T value, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Repeat<T>(T value, int repeatCount)
		{
			return null;
		}

		public static IObservable<T> Repeat<T>(T value, int repeatCount, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Repeat<T>(this IObservable<T> source)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CRepeatInfinite_003Ed__130<>))]
		private static IEnumerable<IObservable<T>> RepeatInfinite<T>(IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> RepeatSafe<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Defer<T>(Func<IObservable<T>> observableFactory)
		{
			return null;
		}

		public static IObservable<T> Start<T>(Func<T> function)
		{
			return null;
		}

		public static IObservable<T> Start<T>(Func<T> function, TimeSpan timeSpan)
		{
			return null;
		}

		public static IObservable<T> Start<T>(Func<T> function, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Start<T>(Func<T> function, TimeSpan timeSpan, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<Unit> Start(Action action)
		{
			return null;
		}

		public static IObservable<Unit> Start(Action action, TimeSpan timeSpan)
		{
			return null;
		}

		public static IObservable<Unit> Start(Action action, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<Unit> Start(Action action, TimeSpan timeSpan, IScheduler scheduler)
		{
			return null;
		}

		public static Func<IObservable<T>> ToAsync<T>(Func<T> function)
		{
			return null;
		}

		public static Func<IObservable<T>> ToAsync<T>(Func<T> function, IScheduler scheduler)
		{
			return null;
		}

		public static Func<IObservable<Unit>> ToAsync(Action action)
		{
			return null;
		}

		public static Func<IObservable<Unit>> ToAsync(Action action, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Finally<T>(this IObservable<T> source, Action finallyAction)
		{
			return null;
		}

		public static IObservable<T> Catch<T, TException>(this IObservable<T> source, Func<TException, IObservable<T>> errorHandler) where TException : Exception
		{
			return null;
		}

		public static IObservable<TSource> Catch<TSource>(this IEnumerable<IObservable<TSource>> sources)
		{
			return null;
		}

		public static IObservable<TSource> CatchIgnore<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TSource> CatchIgnore<TSource, TException>(this IObservable<TSource> source, Action<TException> errorAction) where TException : Exception
		{
			return null;
		}

		public static IObservable<TSource> Retry<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TSource> Retry<TSource>(this IObservable<TSource> source, int retryCount)
		{
			return null;
		}

		public static IObservable<TSource> OnErrorRetry<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TSource> OnErrorRetry<TSource, TException>(this IObservable<TSource> source, Action<TException> onError) where TException : Exception
		{
			return null;
		}

		public static IObservable<TSource> OnErrorRetry<TSource, TException>(this IObservable<TSource> source, Action<TException> onError, TimeSpan delay) where TException : Exception
		{
			return null;
		}

		public static IObservable<TSource> OnErrorRetry<TSource, TException>(this IObservable<TSource> source, Action<TException> onError, int retryCount) where TException : Exception
		{
			return null;
		}

		public static IObservable<TSource> OnErrorRetry<TSource, TException>(this IObservable<TSource> source, Action<TException> onError, int retryCount, TimeSpan delay) where TException : Exception
		{
			return null;
		}

		public static IObservable<TSource> OnErrorRetry<TSource, TException>(this IObservable<TSource> source, Action<TException> onError, int retryCount, TimeSpan delay, IScheduler delayScheduler) where TException : Exception
		{
			return null;
		}

		public static IObservable<EventPattern<TEventArgs>> FromEventPattern<TDelegate, TEventArgs>(Func<EventHandler<TEventArgs>, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler) where TEventArgs : EventArgs
		{
			return null;
		}

		public static IObservable<Unit> FromEvent<TDelegate>(Func<Action, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
		{
			return null;
		}

		public static IObservable<TEventArgs> FromEvent<TDelegate, TEventArgs>(Func<Action<TEventArgs>, TDelegate> conversion, Action<TDelegate> addHandler, Action<TDelegate> removeHandler)
		{
			return null;
		}

		public static IObservable<Unit> FromEvent(Action<Action> addHandler, Action<Action> removeHandler)
		{
			return null;
		}

		public static IObservable<T> FromEvent<T>(Action<Action<T>> addHandler, Action<Action<T>> removeHandler)
		{
			return null;
		}

		public static Func<IObservable<TResult>> FromAsyncPattern<TResult>(Func<AsyncCallback, object, IAsyncResult> begin, Func<IAsyncResult, TResult> end)
		{
			return null;
		}

		public static Func<T1, IObservable<TResult>> FromAsyncPattern<T1, TResult>(Func<T1, AsyncCallback, object, IAsyncResult> begin, Func<IAsyncResult, TResult> end)
		{
			return null;
		}

		public static Func<T1, T2, IObservable<TResult>> FromAsyncPattern<T1, T2, TResult>(Func<T1, T2, AsyncCallback, object, IAsyncResult> begin, Func<IAsyncResult, TResult> end)
		{
			return null;
		}

		public static Func<IObservable<Unit>> FromAsyncPattern(Func<AsyncCallback, object, IAsyncResult> begin, Action<IAsyncResult> end)
		{
			return null;
		}

		public static Func<T1, IObservable<Unit>> FromAsyncPattern<T1>(Func<T1, AsyncCallback, object, IAsyncResult> begin, Action<IAsyncResult> end)
		{
			return null;
		}

		public static Func<T1, T2, IObservable<Unit>> FromAsyncPattern<T1, T2>(Func<T1, T2, AsyncCallback, object, IAsyncResult> begin, Action<IAsyncResult> end)
		{
			return null;
		}

		public static IObservable<T> Take<T>(this IObservable<T> source, int count)
		{
			return null;
		}

		public static IObservable<T> Take<T>(this IObservable<T> source, TimeSpan duration)
		{
			return null;
		}

		public static IObservable<T> Take<T>(this IObservable<T> source, TimeSpan duration, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> TakeWhile<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> TakeWhile<T>(this IObservable<T> source, Func<T, int, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> TakeUntil<T, TOther>(this IObservable<T> source, IObservable<TOther> other)
		{
			return null;
		}

		public static IObservable<T> TakeLast<T>(this IObservable<T> source, int count)
		{
			return null;
		}

		public static IObservable<T> TakeLast<T>(this IObservable<T> source, TimeSpan duration)
		{
			return null;
		}

		public static IObservable<T> TakeLast<T>(this IObservable<T> source, TimeSpan duration, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Skip<T>(this IObservable<T> source, int count)
		{
			return null;
		}

		public static IObservable<T> Skip<T>(this IObservable<T> source, TimeSpan duration)
		{
			return null;
		}

		public static IObservable<T> Skip<T>(this IObservable<T> source, TimeSpan duration, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> SkipWhile<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> SkipWhile<T>(this IObservable<T> source, Func<T, int, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> SkipUntil<T, TOther>(this IObservable<T> source, IObservable<TOther> other)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, int count)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, int count, int skip)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, TimeSpan timeSpan)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, TimeSpan timeSpan, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, TimeSpan timeSpan, int count)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, TimeSpan timeSpan, int count, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, TimeSpan timeSpan, TimeSpan timeShift)
		{
			return null;
		}

		public static IObservable<IList<T>> Buffer<T>(this IObservable<T> source, TimeSpan timeSpan, TimeSpan timeShift, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<IList<TSource>> Buffer<TSource, TWindowBoundary>(this IObservable<TSource> source, IObservable<TWindowBoundary> windowBoundaries)
		{
			return null;
		}

		public static IObservable<Pair<T>> Pairwise<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<TR> Pairwise<T, TR>(this IObservable<T> source, Func<T, T, TR> selector)
		{
			return null;
		}

		public static IObservable<T> Last<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Last<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> LastOrDefault<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> LastOrDefault<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> First<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> First<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> FirstOrDefault<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> FirstOrDefault<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> Single<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Single<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> SingleOrDefault<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> SingleOrDefault<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TSource>> GroupBy<TSource, TKey>(this IObservable<TSource> source, Func<TSource, TKey> keySelector)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TSource>> GroupBy<TSource, TKey>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, IEqualityComparer<TKey> comparer)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TElement>> GroupBy<TSource, TKey, TElement>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TElement>> GroupBy<TSource, TKey, TElement>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, IEqualityComparer<TKey> comparer)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TSource>> GroupBy<TSource, TKey>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, int capacity)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TSource>> GroupBy<TSource, TKey>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, int capacity, IEqualityComparer<TKey> comparer)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TElement>> GroupBy<TSource, TKey, TElement>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, int capacity)
		{
			return null;
		}

		public static IObservable<IGroupedObservable<TKey, TElement>> GroupBy<TSource, TKey, TElement>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, Func<TSource, TElement> elementSelector, int capacity, IEqualityComparer<TKey> comparer)
		{
			return null;
		}

		public static IObservable<long> Interval(TimeSpan period)
		{
			return null;
		}

		public static IObservable<long> Interval(TimeSpan period, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<long> Timer(TimeSpan dueTime)
		{
			return null;
		}

		public static IObservable<long> Timer(DateTimeOffset dueTime)
		{
			return null;
		}

		public static IObservable<long> Timer(TimeSpan dueTime, TimeSpan period)
		{
			return null;
		}

		public static IObservable<long> Timer(DateTimeOffset dueTime, TimeSpan period)
		{
			return null;
		}

		public static IObservable<long> Timer(TimeSpan dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<long> Timer(DateTimeOffset dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<long> Timer(TimeSpan dueTime, TimeSpan period, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<long> Timer(DateTimeOffset dueTime, TimeSpan period, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<Timestamped<TSource>> Timestamp<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<Timestamped<TSource>> Timestamp<TSource>(this IObservable<TSource> source, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TimeInterval<TSource>> TimeInterval<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TimeInterval<TSource>> TimeInterval<TSource>(this IObservable<TSource> source, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Delay<T>(this IObservable<T> source, TimeSpan dueTime)
		{
			return null;
		}

		public static IObservable<TSource> Delay<TSource>(this IObservable<TSource> source, TimeSpan dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Sample<T>(this IObservable<T> source, TimeSpan interval)
		{
			return null;
		}

		public static IObservable<T> Sample<T>(this IObservable<T> source, TimeSpan interval, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TSource> Throttle<TSource>(this IObservable<TSource> source, TimeSpan dueTime)
		{
			return null;
		}

		public static IObservable<TSource> Throttle<TSource>(this IObservable<TSource> source, TimeSpan dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TSource> ThrottleFirst<TSource>(this IObservable<TSource> source, TimeSpan dueTime)
		{
			return null;
		}

		public static IObservable<TSource> ThrottleFirst<TSource>(this IObservable<TSource> source, TimeSpan dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Timeout<T>(this IObservable<T> source, TimeSpan dueTime)
		{
			return null;
		}

		public static IObservable<T> Timeout<T>(this IObservable<T> source, TimeSpan dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<T> Timeout<T>(this IObservable<T> source, DateTimeOffset dueTime)
		{
			return null;
		}

		public static IObservable<T> Timeout<T>(this IObservable<T> source, DateTimeOffset dueTime, IScheduler scheduler)
		{
			return null;
		}

		public static IObservable<TR> Select<T, TR>(this IObservable<T> source, Func<T, TR> selector)
		{
			return null;
		}

		public static IObservable<TR> Select<T, TR>(this IObservable<T> source, Func<T, int, TR> selector)
		{
			return null;
		}

		public static IObservable<T> Where<T>(this IObservable<T> source, Func<T, bool> predicate)
		{
			return null;
		}

		public static IObservable<T> Where<T>(this IObservable<T> source, Func<T, int, bool> predicate)
		{
			return null;
		}

		public static IObservable<TR> ContinueWith<T, TR>(this IObservable<T> source, IObservable<TR> other)
		{
			return null;
		}

		public static IObservable<TR> ContinueWith<T, TR>(this IObservable<T> source, Func<T, IObservable<TR>> selector)
		{
			return null;
		}

		public static IObservable<TR> SelectMany<T, TR>(this IObservable<T> source, IObservable<TR> other)
		{
			return null;
		}

		public static IObservable<TR> SelectMany<T, TR>(this IObservable<T> source, Func<T, IObservable<TR>> selector)
		{
			return null;
		}

		public static IObservable<TResult> SelectMany<TSource, TResult>(this IObservable<TSource> source, Func<TSource, int, IObservable<TResult>> selector)
		{
			return null;
		}

		public static IObservable<TR> SelectMany<T, TC, TR>(this IObservable<T> source, Func<T, IObservable<TC>> collectionSelector, Func<T, TC, TR> resultSelector)
		{
			return null;
		}

		public static IObservable<TResult> SelectMany<TSource, TCollection, TResult>(this IObservable<TSource> source, Func<TSource, int, IObservable<TCollection>> collectionSelector, Func<TSource, int, TCollection, int, TResult> resultSelector)
		{
			return null;
		}

		public static IObservable<TResult> SelectMany<TSource, TResult>(this IObservable<TSource> source, Func<TSource, IEnumerable<TResult>> selector)
		{
			return null;
		}

		public static IObservable<TResult> SelectMany<TSource, TResult>(this IObservable<TSource> source, Func<TSource, int, IEnumerable<TResult>> selector)
		{
			return null;
		}

		public static IObservable<TResult> SelectMany<TSource, TCollection, TResult>(this IObservable<TSource> source, Func<TSource, IEnumerable<TCollection>> collectionSelector, Func<TSource, TCollection, TResult> resultSelector)
		{
			return null;
		}

		public static IObservable<TResult> SelectMany<TSource, TCollection, TResult>(this IObservable<TSource> source, Func<TSource, int, IEnumerable<TCollection>> collectionSelector, Func<TSource, int, TCollection, int, TResult> resultSelector)
		{
			return null;
		}

		public static IObservable<T[]> ToArray<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<IList<T>> ToList<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Do<T>(this IObservable<T> source, IObserver<T> observer)
		{
			return null;
		}

		public static IObservable<T> Do<T>(this IObservable<T> source, Action<T> onNext)
		{
			return null;
		}

		public static IObservable<T> Do<T>(this IObservable<T> source, Action<T> onNext, Action<Exception> onError)
		{
			return null;
		}

		public static IObservable<T> Do<T>(this IObservable<T> source, Action<T> onNext, Action onCompleted)
		{
			return null;
		}

		public static IObservable<T> Do<T>(this IObservable<T> source, Action<T> onNext, Action<Exception> onError, Action onCompleted)
		{
			return null;
		}

		public static IObservable<T> DoOnError<T>(this IObservable<T> source, Action<Exception> onError)
		{
			return null;
		}

		public static IObservable<T> DoOnCompleted<T>(this IObservable<T> source, Action onCompleted)
		{
			return null;
		}

		public static IObservable<T> DoOnTerminate<T>(this IObservable<T> source, Action onTerminate)
		{
			return null;
		}

		public static IObservable<T> DoOnSubscribe<T>(this IObservable<T> source, Action onSubscribe)
		{
			return null;
		}

		public static IObservable<T> DoOnCancel<T>(this IObservable<T> source, Action onCancel)
		{
			return null;
		}

		public static IObservable<Notification<T>> Materialize<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> Dematerialize<T>(this IObservable<Notification<T>> source)
		{
			return null;
		}

		public static IObservable<T> DefaultIfEmpty<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> DefaultIfEmpty<T>(this IObservable<T> source, T defaultValue)
		{
			return null;
		}

		public static IObservable<TSource> Distinct<TSource>(this IObservable<TSource> source)
		{
			return null;
		}

		public static IObservable<TSource> Distinct<TSource>(this IObservable<TSource> source, IEqualityComparer<TSource> comparer)
		{
			return null;
		}

		public static IObservable<TSource> Distinct<TSource, TKey>(this IObservable<TSource> source, Func<TSource, TKey> keySelector)
		{
			return null;
		}

		public static IObservable<TSource> Distinct<TSource, TKey>(this IObservable<TSource> source, Func<TSource, TKey> keySelector, IEqualityComparer<TKey> comparer)
		{
			return null;
		}

		public static IObservable<T> DistinctUntilChanged<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> DistinctUntilChanged<T>(this IObservable<T> source, IEqualityComparer<T> comparer)
		{
			return null;
		}

		public static IObservable<T> DistinctUntilChanged<T, TKey>(this IObservable<T> source, Func<T, TKey> keySelector)
		{
			return null;
		}

		public static IObservable<T> DistinctUntilChanged<T, TKey>(this IObservable<T> source, Func<T, TKey> keySelector, IEqualityComparer<TKey> comparer)
		{
			return null;
		}

		public static IObservable<T> IgnoreElements<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<Unit> ForEachAsync<T>(this IObservable<T> source, Action<T> onNext)
		{
			return null;
		}

		public static IObservable<Unit> ForEachAsync<T>(this IObservable<T> source, Action<T, int> onNext)
		{
			return null;
		}

		public static IObservable<Unit> FromCoroutine(Func<IEnumerator> coroutine, bool publishEveryYield = false)
		{
			return null;
		}

		public static IObservable<Unit> FromCoroutine(Func<CancellationToken, IEnumerator> coroutine, bool publishEveryYield = false)
		{
			return null;
		}

		public static IObservable<Unit> FromMicroCoroutine(Func<IEnumerator> coroutine, bool publishEveryYield = false, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<Unit> FromMicroCoroutine(Func<CancellationToken, IEnumerator> coroutine, bool publishEveryYield = false, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CWrapEnumerator_003Ed__291))]
		private static IEnumerator WrapEnumerator(IEnumerator enumerator, IObserver<Unit> observer, CancellationToken cancellationToken, bool publishEveryYield)
		{
			return null;
		}

		public static IObservable<T> FromCoroutineValue<T>(Func<IEnumerator> coroutine, bool nullAsNextUpdate = true)
		{
			return null;
		}

		public static IObservable<T> FromCoroutineValue<T>(Func<CancellationToken, IEnumerator> coroutine, bool nullAsNextUpdate = true)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CWrapEnumeratorYieldValue_003Ed__294<>))]
		private static IEnumerator WrapEnumeratorYieldValue<T>(IEnumerator enumerator, IObserver<T> observer, CancellationToken cancellationToken, bool nullAsNextUpdate)
		{
			return null;
		}

		public static IObservable<T> FromCoroutine<T>(Func<IObserver<T>, IEnumerator> coroutine)
		{
			return null;
		}

		public static IObservable<T> FromMicroCoroutine<T>(Func<IObserver<T>, IEnumerator> coroutine, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CWrapToCancellableEnumerator_003Ed__297<>))]
		private static IEnumerator WrapToCancellableEnumerator<T>(IEnumerator enumerator, IObserver<T> observer, CancellationToken cancellationToken)
		{
			return null;
		}

		public static IObservable<T> FromCoroutine<T>(Func<IObserver<T>, CancellationToken, IEnumerator> coroutine)
		{
			return null;
		}

		public static IObservable<T> FromMicroCoroutine<T>(Func<IObserver<T>, CancellationToken, IEnumerator> coroutine, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<Unit> SelectMany<T>(this IObservable<T> source, IEnumerator coroutine, bool publishEveryYield = false)
		{
			return null;
		}

		public static IObservable<Unit> SelectMany<T>(this IObservable<T> source, Func<IEnumerator> selector, bool publishEveryYield = false)
		{
			return null;
		}

		public static IObservable<Unit> SelectMany<T>(this IObservable<T> source, Func<T, IEnumerator> selector)
		{
			return null;
		}

		public static IObservable<Unit> ToObservable(this IEnumerator coroutine, bool publishEveryYield = false)
		{
			return null;
		}

		public static ObservableYieldInstruction<Unit> ToYieldInstruction(this IEnumerator coroutine)
		{
			return null;
		}

		public static ObservableYieldInstruction<Unit> ToYieldInstruction(this IEnumerator coroutine, bool throwOnError)
		{
			return null;
		}

		public static ObservableYieldInstruction<Unit> ToYieldInstruction(this IEnumerator coroutine, CancellationToken cancellationToken)
		{
			return null;
		}

		public static ObservableYieldInstruction<Unit> ToYieldInstruction(this IEnumerator coroutine, bool throwOnError, CancellationToken cancellationToken)
		{
			return null;
		}

		public static IObservable<long> EveryUpdate()
		{
			return null;
		}

		public static IObservable<long> EveryFixedUpdate()
		{
			return null;
		}

		public static IObservable<long> EveryEndOfFrame()
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CEveryCycleCore_003Ed__311))]
		private static IEnumerator EveryCycleCore(IObserver<long> observer, CancellationToken cancellationToken)
		{
			return null;
		}

		public static IObservable<long> EveryGameObjectUpdate()
		{
			return null;
		}

		public static IObservable<long> EveryLateUpdate()
		{
			return null;
		}

		[Obsolete]
		public static IObservable<long> EveryAfterUpdate()
		{
			return null;
		}

		public static IObservable<Unit> NextFrame(FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CNextFrameCore_003Ed__316))]
		private static IEnumerator NextFrameCore(IObserver<Unit> observer, CancellationToken cancellation)
		{
			return null;
		}

		public static IObservable<long> IntervalFrame(int intervalFrameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<long> TimerFrame(int dueTimeFrameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<long> TimerFrame(int dueTimeFrameCount, int periodFrameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CTimerFrameCore_003Ed__320))]
		private static IEnumerator TimerFrameCore(IObserver<long> observer, int dueTimeFrameCount, CancellationToken cancel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CTimerFrameCore_003Ed__321))]
		private static IEnumerator TimerFrameCore(IObserver<long> observer, int dueTimeFrameCount, int periodFrameCount, CancellationToken cancel)
		{
			return null;
		}

		public static IObservable<T> DelayFrame<T>(this IObservable<T> source, int frameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<T> Sample<T, T2>(this IObservable<T> source, IObservable<T2> sampler)
		{
			return null;
		}

		public static IObservable<T> SampleFrame<T>(this IObservable<T> source, int frameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<TSource> ThrottleFrame<TSource>(this IObservable<TSource> source, int frameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<TSource> ThrottleFirstFrame<TSource>(this IObservable<TSource> source, int frameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<T> TimeoutFrame<T>(this IObservable<T> source, int frameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static IObservable<T> DelayFrameSubscription<T>(this IObservable<T> source, int frameCount, FrameCountType frameCountType = FrameCountType.Update)
		{
			return null;
		}

		public static ObservableYieldInstruction<T> ToYieldInstruction<T>(this IObservable<T> source)
		{
			return null;
		}

		public static ObservableYieldInstruction<T> ToYieldInstruction<T>(this IObservable<T> source, CancellationToken cancel)
		{
			return null;
		}

		public static ObservableYieldInstruction<T> ToYieldInstruction<T>(this IObservable<T> source, bool throwOnError)
		{
			return null;
		}

		public static ObservableYieldInstruction<T> ToYieldInstruction<T>(this IObservable<T> source, bool throwOnError, CancellationToken cancel)
		{
			return null;
		}

		public static IEnumerator ToAwaitableEnumerator<T>(this IObservable<T> source, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static IEnumerator ToAwaitableEnumerator<T>(this IObservable<T> source, Action<T> onResult, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static IEnumerator ToAwaitableEnumerator<T>(this IObservable<T> source, Action<Exception> onError, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CToAwaitableEnumerator_003Ed__336<>))]
		public static IEnumerator ToAwaitableEnumerator<T>(this IObservable<T> source, Action<T> onResult, Action<Exception> onError, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static Coroutine StartAsCoroutine<T>(this IObservable<T> source, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static Coroutine StartAsCoroutine<T>(this IObservable<T> source, Action<T> onResult, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static Coroutine StartAsCoroutine<T>(this IObservable<T> source, Action<Exception> onError, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static Coroutine StartAsCoroutine<T>(this IObservable<T> source, Action<T> onResult, Action<Exception> onError, CancellationToken cancel = default(CancellationToken))
		{
			return null;
		}

		public static IObservable<T> ObserveOnMainThread<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<T> ObserveOnMainThread<T>(this IObservable<T> source, MainThreadDispatchType dispatchType)
		{
			return null;
		}

		public static IObservable<T> SubscribeOnMainThread<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<bool> EveryApplicationPause()
		{
			return null;
		}

		public static IObservable<bool> EveryApplicationFocus()
		{
			return null;
		}

		public static IObservable<Unit> OnceApplicationQuit()
		{
			return null;
		}

		public static IObservable<T> TakeUntilDestroy<T>(this IObservable<T> source, Component target)
		{
			return null;
		}

		public static IObservable<T> TakeUntilDestroy<T>(this IObservable<T> source, GameObject target)
		{
			return null;
		}

		public static IObservable<T> TakeUntilDisable<T>(this IObservable<T> source, Component target)
		{
			return null;
		}

		public static IObservable<T> TakeUntilDisable<T>(this IObservable<T> source, GameObject target)
		{
			return null;
		}

		public static IObservable<T> RepeatUntilDestroy<T>(this IObservable<T> source, GameObject target)
		{
			return null;
		}

		public static IObservable<T> RepeatUntilDestroy<T>(this IObservable<T> source, Component target)
		{
			return null;
		}

		public static IObservable<T> RepeatUntilDisable<T>(this IObservable<T> source, GameObject target)
		{
			return null;
		}

		public static IObservable<T> RepeatUntilDisable<T>(this IObservable<T> source, Component target)
		{
			return null;
		}

		private static IObservable<T> RepeatUntilCore<T>(this IEnumerable<IObservable<T>> sources, IObservable<Unit> trigger, GameObject lifeTimeChecker)
		{
			return null;
		}

		public static IObservable<FrameInterval<T>> FrameInterval<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<TimeInterval<T>> FrameTimeInterval<T>(this IObservable<T> source, bool ignoreTimeScale = false)
		{
			return null;
		}

		public static IObservable<IList<T>> BatchFrame<T>(this IObservable<T> source)
		{
			return null;
		}

		public static IObservable<IList<T>> BatchFrame<T>(this IObservable<T> source, int frameCount, FrameCountType frameCountType)
		{
			return null;
		}

		public static IObservable<Unit> BatchFrame(this IObservable<Unit> source)
		{
			return null;
		}

		public static IObservable<Unit> BatchFrame(this IObservable<Unit> source, int frameCount, FrameCountType frameCountType)
		{
			return null;
		}
	}
}
