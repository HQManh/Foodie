using System;
using System.Collections.Generic;

namespace UniRx
{
	public class MessageBroker : IMessageBroker, IMessagePublisher, IMessageReceiver, IDisposable
	{
		public static readonly IMessageBroker Default = new MessageBroker();

		private bool isDisposed;

		private readonly Dictionary<Type, object> notifiers = new Dictionary<Type, object>();

		public void Publish<T>(T message)
		{
		}

		public IObservable<T> Receive<T>()
		{
			return null;
		}

		public void Dispose()
		{
			lock (notifiers)
			{
				if (!isDisposed)
				{
					isDisposed = true;
					notifiers.Clear();
				}
			}
		}
	}
}
