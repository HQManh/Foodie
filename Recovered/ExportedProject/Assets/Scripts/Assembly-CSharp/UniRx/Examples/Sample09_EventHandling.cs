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

		private CompositeDisposable disposables;

		private Subject<int> onBarBar;

		public IObservable<int> OnBarBar => null;

		public event EventHandler<MyEventArgs> FooBar
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

		public event Action<int> FooFoo
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

		private void Start()
		{
		}

		private void OnDestroy()
		{
		}
	}
}
