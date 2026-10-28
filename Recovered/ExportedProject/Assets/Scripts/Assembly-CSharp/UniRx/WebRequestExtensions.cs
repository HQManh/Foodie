using System;
using System.IO;
using System.Net;

namespace UniRx
{
	public static class WebRequestExtensions
	{
		private static IObservable<TResult> AbortableDeferredAsyncRequest<TResult>(Func<AsyncCallback, object, IAsyncResult> begin, Func<IAsyncResult, TResult> end, WebRequest request)
		{
			return null;
		}

		public static IObservable<WebResponse> GetResponseAsObservable(this WebRequest request)
		{
			return null;
		}

		public static IObservable<HttpWebResponse> GetResponseAsObservable(this HttpWebRequest request)
		{
			return null;
		}

		public static IObservable<Stream> GetRequestStreamAsObservable(this WebRequest request)
		{
			return null;
		}
	}
}
