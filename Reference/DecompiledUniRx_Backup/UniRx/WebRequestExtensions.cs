using System;
using System.IO;
using System.Net;

namespace UniRx
{
	public static class WebRequestExtensions
	{
		private static IObservable<TResult> AbortableDeferredAsyncRequest<TResult>(Func<AsyncCallback, object, IAsyncResult> begin, Func<IAsyncResult, TResult> end, WebRequest request)
		{
			return null; // TODO(unrecovered): helper not in batch031 pseudocode; left as stub.
		}

		public static IObservable<WebResponse> GetResponseAsObservable(this WebRequest request)
		{
			return AbortableDeferredAsyncRequest<WebResponse>(request.BeginGetResponse, request.EndGetResponse, request);
		}

		public static IObservable<HttpWebResponse> GetResponseAsObservable(this HttpWebRequest request)
		{
			return AbortableDeferredAsyncRequest<HttpWebResponse>(request.BeginGetResponse, asyncResult => (HttpWebResponse)request.EndGetResponse(asyncResult), request);
		}

		public static IObservable<Stream> GetRequestStreamAsObservable(this WebRequest request)
		{
			return AbortableDeferredAsyncRequest<Stream>(request.BeginGetRequestStream, request.EndGetRequestStream, request);
		}
	}
}
