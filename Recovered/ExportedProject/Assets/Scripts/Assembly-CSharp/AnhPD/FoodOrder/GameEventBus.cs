using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class GameEventBus
	{
		private static readonly Dictionary<Type, Delegate> _events;

		public static void Subscribe<T>(Action<T> callback)
		{
		}

		public static void Publish<T>(T evt)
		{
		}

		public static void Unsubscribe<T>(Action<T> callback)
		{
		}
	}
}
