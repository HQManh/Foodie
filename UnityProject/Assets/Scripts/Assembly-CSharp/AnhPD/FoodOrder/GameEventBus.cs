using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class GameEventBus
	{
		private static readonly Dictionary<Type, Delegate> _events = new Dictionary<Type, Delegate>();

		public static void Subscribe<T>(Action<T> callback)
		{
			_events.TryGetValue(typeof(T), out Delegate existing);
			_events[typeof(T)] = Delegate.Combine(existing, callback);
		}

		public static void Publish<T>(T evt)
		{
			if (_events.TryGetValue(typeof(T), out Delegate existing))
			{
				(existing as Action<T>)?.Invoke(evt);
			}
		}

		public static void Unsubscribe<T>(Action<T> callback)
		{
			if (!_events.TryGetValue(typeof(T), out Delegate existing)) return;
			Delegate left = Delegate.Remove(existing, callback);
			if (left == null) _events.Remove(typeof(T));
			else _events[typeof(T)] = left;
		}
	}
}
