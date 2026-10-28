using System;
using System.Collections.Generic;

namespace UniRx
{
	public class MessageBroker : IMessageBroker, IMessagePublisher, IMessageReceiver, IDisposable
	{
		public static readonly IMessageBroker Default;

		private bool isDisposed;

		private readonly Dictionary<Type, object> notifiers;

		public void Publish<T>(T message)
		{
		}

		public IObservable<T> Receive<T>()
		{
			return null;
		}

		public void Dispose()
		{
		}
	}
}
