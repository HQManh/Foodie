using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class GameEventBus
	{
		private static readonly Dictionary<Type, Delegate> _events = new Dictionary<Type, Delegate>();

		public static void Subscribe<T>(Action<T> callback)
		{
			Type key = typeof(T);
			_events.TryGetValue(key, out Delegate existing);
			_events[key] = Delegate.Combine(existing, callback);
		}

		public static void Publish<T>(T evt)
		{
			if (_events.TryGetValue(typeof(T), out Delegate existing) && existing is Action<T> handlers)
			{
				handlers(evt);
			}
		}

		public static void Unsubscribe<T>(Action<T> callback)
		{
			Type key = typeof(T);
			if (!_events.TryGetValue(key, out Delegate existing))
			{
				return;
			}
			Delegate remaining = Delegate.Remove(existing, callback);
			if (remaining == null)
			{
				_events.Remove(key);
			}
			else
			{
				_events[key] = remaining;
			}
		}
	}
}
