using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
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
			public _003CFetch_003Ed__20(int _003C_003E1__state)
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

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
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
			public _003CFetchBytes_003Ed__22(int _003C_003E1__state)
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

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
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
			public _003CFetchText_003Ed__21(int _003C_003E1__state)
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

			private void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		public static IObservable<string> Get(string url, Dictionary<string, string> headers = null, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<byte[]> GetAndGetBytes(string url, Dictionary<string, string> headers = null, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<WWW> GetWWW(string url, Dictionary<string, string> headers = null, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<string> Post(string url, byte[] postData, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<string> Post(string url, byte[] postData, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<string> Post(string url, WWWForm content, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<string> Post(string url, WWWForm content, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, byte[] postData, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, byte[] postData, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, WWWForm content, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<byte[]> PostAndGetBytes(string url, WWWForm content, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, byte[] postData, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, byte[] postData, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, WWWForm content, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<WWW> PostWWW(string url, WWWForm content, Dictionary<string, string> headers, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, int version, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, int version, uint crc, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, Hash128 hash128, IProgress<float> progress = null)
		{
			return null;
		}

		public static IObservable<AssetBundle> LoadFromCacheOrDownload(string url, Hash128 hash128, uint crc, IProgress<float> progress = null)
		{
			return null;
		}

		private static Dictionary<string, string> MergeHash(Dictionary<string, string> wwwFormHeaders, Dictionary<string, string> externalHeaders)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CFetch_003Ed__20))]
		private static IEnumerator Fetch(WWW www, IObserver<WWW> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CFetchText_003Ed__21))]
		private static IEnumerator FetchText(WWW www, IObserver<string> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CFetchBytes_003Ed__22))]
		private static IEnumerator FetchBytes(WWW www, IObserver<byte[]> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CFetchAssetBundle_003Ed__23))]
		private static IEnumerator FetchAssetBundle(WWW www, IObserver<AssetBundle> observer, IProgress<float> reportProgress, CancellationToken cancel)
		{
			return null;
		}
	}
}
