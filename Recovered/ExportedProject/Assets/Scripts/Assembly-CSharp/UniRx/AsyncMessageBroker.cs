using System;
using System.Collections.Generic;

namespace UniRx
{
	public class AsyncMessageBroker : IAsyncMessageBroker, IAsyncMessagePublisher, IAsyncMessageReceiver, IDisposable
	{
		private class Subscription<T> : IDisposable
		{
			private readonly AsyncMessageBroker parent;

			private readonly Func<T, IObservable<Unit>> asyncMessageReceiver;

			public Subscription(AsyncMessageBroker parent, Func<T, IObservable<Unit>> asyncMessageReceiver)
			{
			}

			public void Dispose()
			{
			}
		}

		public static readonly IAsyncMessageBroker Default;

		private bool isDisposed;

		private readonly Dictionary<Type, object> notifiers;

		public IObservable<Unit> PublishAsync<T>(T message)
		{
			return null;
		}

		public IDisposable Subscribe<T>(Func<T, IObservable<Unit>> asyncMessageReceiver)
		{
			return null;
		}

		public void Dispose()
		{
		}
	}
}
