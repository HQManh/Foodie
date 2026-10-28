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
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -1;
				}
				else
				{
					if (_003C_003E1__state != 0)
					{
						return false;
					}
					_003C_003E1__state = -1;
					_003Cwww_003E5__2 = new WWW(url);
				}
				if (_003Cwww_003E5__2 != null)
				{
					if (!_003Cwww_003E5__2.isDone && !cancellationToken.IsCancellationRequested)
					{
						_003C_003E2__current = null;
						_003C_003E1__state = 1;
						return true;
					}
					if (cancellationToken.IsCancellationRequested)
					{
						return false;
					}
					if (_003Cwww_003E5__2 != null)
					{
						string error = _003Cwww_003E5__2.error;
						if (error == null)
						{
							if (_003Cwww_003E5__2.text != null && observer != null)
							{
								observer.OnNext(_003Cwww_003E5__2.text);
								observer.OnCompleted();
								return false;
							}
						}
						else if (observer != null)
						{
							observer.OnError(new Exception(error));
							return false;
						}
					}
				}
				throw new NullReferenceException();
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

		public static IObservable<string> GetWWW(string url)
		{
			// TODO(unrecovered): wraps GetWWWCore in an Observable.Create-style helper (FUN_0532fb0c, FUN_04c3e284) whose declarations are not in the stubs.
			return null;
		}

		[IteratorStateMachine(typeof(_003CGetWWWCore_003Ed__1))]
		private static IEnumerator GetWWWCore(string url, IObserver<string> observer, CancellationToken cancellationToken)
		{
			return new _003CGetWWWCore_003Ed__1(0)
			{
				url = url,
				cancellationToken = cancellationToken,
				observer = observer
			};
		}
	}
}
