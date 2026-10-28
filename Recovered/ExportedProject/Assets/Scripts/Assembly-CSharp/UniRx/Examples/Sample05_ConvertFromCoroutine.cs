using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using UnityEngine;

namespace UniRx.Examples
{
	public class Sample05_ConvertFromCoroutine
	{
		[CompilerGenerated]
		private sealed class _003CGetWWWCore_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public string url;

			public CancellationToken cancellationToken;

			public IObserver<string> observer;

			private WWW _003Cwww_003E5__2;

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
			public _003CGetWWWCore_003Ed__1(int _003C_003E1__state)
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

		public static IObservable<string> GetWWW(string url)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetWWWCore_003Ed__1))]
		private static IEnumerator GetWWWCore(string url, IObserver<string> observer, CancellationToken cancellationToken)
		{
			return null;
		}
	}
}
