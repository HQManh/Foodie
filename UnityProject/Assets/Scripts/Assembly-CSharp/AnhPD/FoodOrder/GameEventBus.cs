using System;
using System.Collections.Generic;

namespace AnhPD.FoodOrder
{
	public static class GameEventBus
	{
		private static readonly Dictionary<Type, Delegate> _events = new Dictionary<Type, Delegate>();

		public static void Subscribe<T>(Action<T> callback)
		{
			// TODO(unrecovered): generic method body is not present in the pseudocode batch
		}

		public static void Publish<T>(T evt)
		{
			// TODO(unrecovered): generic method body is not present in the pseudocode batch
		}

		public static void Unsubscribe<T>(Action<T> callback)
		{
			// TODO(unrecovered): generic method body is not present in the pseudocode batch
		}
	}
}
