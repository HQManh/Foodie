using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace UniRx.Examples
{
	public class Sample09_EventHandling : MonoBehaviour
	{
		public class MyEventArgs : EventArgs
		{
			public int MyProperty { get; set; }
		}

		[CompilerGenerated]
		private EventHandler<MyEventArgs> m_FooBar;

		[CompilerGenerated]
		private Action<int> m_FooFoo;

		private CompositeDisposable disposables = new CompositeDisposable();

		private Subject<int> onBarBar = new Subject<int>();

		public IObservable<int> OnBarBar => onBarBar;

		public event EventHandler<MyEventArgs> FooBar
		{
			[CompilerGenerated]
			add
			{
				EventHandler<MyEventArgs> handler = m_FooBar;
				EventHandler<MyEventArgs> assumed;
				do
				{
					assumed = handler;
					EventHandler<MyEventArgs> combined = (EventHandler<MyEventArgs>)Delegate.Combine(assumed, value);
					handler = System.Threading.Interlocked.CompareExchange(ref m_FooBar, combined, assumed);
				}
				while (handler != assumed);
			}
			[CompilerGenerated]
			remove
			{
				EventHandler<MyEventArgs> handler = m_FooBar;
				EventHandler<MyEventArgs> assumed;
				do
				{
					assumed = handler;
					EventHandler<MyEventArgs> removed = (EventHandler<MyEventArgs>)Delegate.Remove(assumed, value);
					handler = System.Threading.Interlocked.CompareExchange(ref m_FooBar, removed, assumed);
				}
				while (handler != assumed);
			}
		}

		public event Action<int> FooFoo
		{
			[CompilerGenerated]
			add
			{
				Action<int> handler = m_FooFoo;
				Action<int> assumed;
				do
				{
					assumed = handler;
					Action<int> combined = (Action<int>)Delegate.Combine(assumed, value);
					handler = System.Threading.Interlocked.CompareExchange(ref m_FooFoo, combined, assumed);
				}
				while (handler != assumed);
			}
			[CompilerGenerated]
			remove
			{
				Action<int> handler = m_FooFoo;
				Action<int> assumed;
				do
				{
					assumed = handler;
					Action<int> removed = (Action<int>)Delegate.Remove(assumed, value);
					handler = System.Threading.Interlocked.CompareExchange(ref m_FooFoo, removed, assumed);
				}
				while (handler != assumed);
			}
		}

		private void Start()
		{
			// TODO(unrecovered): wires the FooBar/FooFoo events and the onBarBar subject through Observable.FromEvent and Rx combinators (FUN_04c3eb2c, FUN_04c4ace4, FUN_04c3e690 and related) and an unnamed event-to-observable helper (FUN_051f2bdc) that are not in the stubs.
		}

		private void OnDestroy()
		{
			if (disposables == null)
			{
				throw new NullReferenceException();
			}
			disposables.Dispose();
		}
	}
}
