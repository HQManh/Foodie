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
	[Obsolete("Use UnityWebRequest, a fully featured replacement which is more efficient and has additional features")]
	public static class ObservableWWW
	{
		[CompilerGenerated]
		private sealed class _003CFetch_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public WWW www;

			public IProgress<float> reportProgress;

			public IObserver<WWW> observer;

			public CancellationToken cancel;

			private WWW _003C_003E7__wrap1;

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
			public _003CFetch_003Ed__20(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
				if (_003C_003E1__state == 1 || _003C_003E1__state == 2)
				{
					_003C_003Em__Finally1();
				}
			}

			private bool MoveNext()
			{
				int state = _003C_003E1__state;
				if (state == 0)
				{
					_003C_003E1__state = -1;
					_003C_003E7__wrap1 = www;
					if (reportProgress == null)
					{
						if (!www.isDone)
						{
							_003C_003E2__current = www;
							_003C_003E1__state = 2;
							return true;
						}
						return Finish();
					}
				}
				else if (state == 1)
				{
					_003C_003E1__state = -1;
				}
				else if (state == 2)
				{
					_003C_003E1__state = -1;
					return Finish();
				}
				else
				{
					return false;
				}
				if (!www.isDone && !cancel.IsCancellationRequested)
				{
					reportProgress.Report(www.progress);
					_003C_003E2__current = null;
					_003C_003E1__state = 1;
					return true;
				}
				return Finish();
			}

			private bool Finish()
			{
				if (!cancel.IsCancellationRequested)
				{
					if (reportProgress != null)
					{
						reportProgress.Report(www.progress);
					}
					if (!string.IsNullOrEmpty(www.error))
					{
						observer.OnError(new WWWErrorException(www, www.text));
					}
					else
					{
						observer.OnNext(www);
						observer.OnCompleted();
					}
					_003C_003Em__Finally1();
					_003C_003E7__wrap1 = null;
					return false;
				}
				_003C_003Em__Finally1();
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
				_003C_003E1__state = -1;
				if (_003C_003E7__wrap1 != null)
				{
					_003C_003E7__wrap1.Dispose();
				}
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}
		}

		[CompilerGenerated]
		private sealed class _003CFetchAssetBundle_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public WWW www;

			public IProgress<float> reportProgress;

			public IObserver<AssetBundle> observer;

			public CancellationToken cancel;

			private WWW _003C_003E7__wrap1;

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
			public _003CFetchAssetBundle_003Ed__23(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				// TODO(unrecovered): FetchAssetBundle MoveNext: the Fetch<WWW> template was applied to FetchText/FetchBytes, but the exception argument used on the error path (a literal, not www.text) and the non-error OnNext value (assetBundle) were not confirmed in this pass.
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[CompilerGenerated]
		private sealed class _003CFetchBytes_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public WWW www;

			public IProgress<float> reportProgress;

			public IObserver<byte[]> observer;

			public CancellationToken cancel;

			private WWW _003C_003E7__wrap1;

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
			public _003CFetchBytes_003Ed__22(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
				if (_003C_003E1__state == 1 || _003C_003E1__state == 2)
				{
					_003C_003Em__Finally1();
				}
			}

			private bool MoveNext()
			{
				int state = _003C_003E1__state;
				if (state == 0)
				{
					_003C_003E1__state = -1;
					_003C_003E7__wrap1 = www;
					if (reportProgress == null)
					{
						if (!www.isDone)
						{
							_003C_003E2__current = www;
							_003C_003E1__state = 2;
							return true;
						}
						return Finish();
					}
				}
				else if (state == 1)
				{
					_003C_003E1__state = -1;
				}
				else if (state == 2)
				{
					_003C_003E1__state = -1;
					return Finish();
				}
				else
				{
					return false;
				}
				if (!www.isDone && !cancel.IsCancellationRequested)
				{
					reportProgress.Report(www.progress);
					_003C_003E2__current = null;
					_003C_003E1__state = 1;
					return true;
				}
				return Finish();
			}

			private bool Finish()
			{
				if (!cancel.IsCancellationRequested)
				{
					if (reportProgress != null)
					{
						reportProgress.Report(www.progress);
					}
					if (!string.IsNullOrEmpty(www.error))
					{
						observer.OnError(new WWWErrorException(www, www.text));
					}
					else
					{
						observer.OnNext(www.bytes);
						observer.OnCompleted();
					}
					_003C_003Em__Finally1();
					_003C_003E7__wrap1 = null;
					return false;
				}
				_003C_003Em__Finally1();
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
				_003C_003E1__state = -1;
				if (_003C_003E7__wrap1 != null)
				{
					_003C_003E7__wrap1.Dispose();
				}
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}
		}

		[CompilerGenerated]
		private sealed class _003CFetchText_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public WWW www;

			public IProgress<float> reportProgress;

			public IObserver<string> observer;

			public CancellationToken cancel;

			private WWW _003C_003E7__wrap1;

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
			public _003CFetchText_003Ed__21(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
				if (_003C_003E1__state == 1 || _003C_003E1__state == 2)
				{
					_003C_003Em__Finally1();
				}
			}

			private bool MoveNext()
			{
				int state = _003C_003E1__state;
				if (state == 0)
				{
					_003C_003E1__state = -1;
					_003C_003E7__wrap1 = www;
					if (reportProgress == null)
					{
						if (!www.isDone)
						{
							_003C_003E2__current = www;
							_003C_003E1__state = 2;
							return true;
						}
						return Finish();
					}
				}
				else if (state == 1)
				{
					_003C_003E1__state = -1;
				}
				else if (state == 2)
				{
					_003C_003E1__state = -1;
					return Finish();
				}
				else
				{
					return false;
				}
				if (!www.isDone && !cancel.IsCancellationRequested)
				{
					reportProgress.Report(www.progress);
					_003C_003E2__current = null;
					_003C_003E1__state = 1;
					return true;
				}
				return Finish();
			}

			private bool Finish()
			{
				if (!cancel.IsCancellationRequested)
				{
					if (reportProgress != null)
					{
						reportProgress.Report(www.progress);
					}
					if (!string.IsNullOrEmpty(www.error))
					{
						observer.OnError(new WWWErrorException(www, www.text));
					}
					else
					{
						observer.OnNext(www.text);
						observer.OnCompleted();
					}
					_003C_003Em__Finally1();
					_003C_003E7__wrap1 = null;
					return false;
				}
				_003C_003Em__Finally1();
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			private void _003C_003Em__Finally1()
			{
				_003C_003E1__state = -1;
				if (_003C_003E7__wrap1 != null)
				{
					_003C_003E7__wrap1.Dispose();
				}
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}
		}

		public static IObservable<string> Get(string url, Dictionary<string, string> headers = null, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<byte[]> GetAndGetBytes(string url, Dictionary<string, string> headers = null, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<WWW> GetWWW(string url, Dictionary<string, string> headers = null, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<string> Post(string url, byte[] postData, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<string> Post(string url, byte[] postData, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<string> Post(string url, WWWForm content, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<string> Post(string url, WWWForm content, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, byte[] postData, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, byte[] postData, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, WWWForm content, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, WWWForm content, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, byte[] postData, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, byte[] postData, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, WWWForm content, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, WWWForm content, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers (FUN_04c3e284) not identified.
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, int version, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers not identified.
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, int version, uint crc, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers not identified.
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, Hash128 hash128, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers not identified.
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, Hash128 hash128, uint crc, IProgress<float> progress = null)
		{
			// TODO(unrecovered): body builds a closure (display class not in stubs) and wraps it via Observable.Create helpers not identified.
			return null;
		}

		private static Dictionary<string, string> MergeHash(Dictionary<string, string> wwwFormHeaders, Dictionary<string, string> externalHeaders)
		{
			// The write into the target dictionary is an unnamed helper (FUN_06fd8440); indexer assignment is used here.
			foreach (KeyValuePair<string, string> item in externalHeaders)
			{
				wwwFormHeaders[item.Key] = item.Value;
			}
			return wwwFormHeaders;
		}

		[IteratorStateMachine(typeof(_003CFetch_003Ed__20))]
		private static IEnumerator Fetch(WWW www, IObserver<WWW> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return new _003CFetch_003Ed__20(0)
			{
				www = www,
				observer = observer,
				reportProgress = reportProgress,
				cancel = cancel
			};
		}

		[IteratorStateMachine(typeof(_003CFetchText_003Ed__21))]
		private static IEnumerator FetchText(WWW www, IObserver<string> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return new _003CFetchText_003Ed__21(0)
			{
				www = www,
				observer = observer,
				reportProgress = reportProgress,
				cancel = cancel
			};
		}

		[IteratorStateMachine(typeof(_003CFetchBytes_003Ed__22))]
		private static IEnumerator FetchBytes(WWW www, IObserver<byte[]> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return new _003CFetchBytes_003Ed__22(0)
			{
				www = www,
				observer = observer,
				reportProgress = reportProgress,
				cancel = cancel
			};
		}

		[IteratorStateMachine(typeof(_003CFetchAssetBundle_003Ed__23))]
		private static IEnumerator FetchAssetBundle(WWW www, IObserver<AssetBundle> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			// TODO(unrecovered): iterator state machine (_003CFetchAssetBundle_003Ed__23) MoveNext body not reproduced; see the TODO in that class.
			return null;
		}
	}
}
