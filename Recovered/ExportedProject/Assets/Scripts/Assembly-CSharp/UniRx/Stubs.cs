using System;

namespace UniRx
{
	internal static class Stubs
	{
		public static readonly Action Nop;

		public static readonly Action<Exception> Throw;

		public static IObservable<TSource> CatchIgnore<TSource>(Exception ex)
		{
			return null;
		}
	}
	internal static class Stubs<T>
	{
		public static readonly Action<T> Ignore;

		public static readonly Func<T, T> Identity;

		public static readonly Action<Exception, T> Throw;
	}
	internal static class Stubs<T1, T2>
	{
		public static readonly Action<T1, T2> Ignore;

		public static readonly Action<Exception, T1, T2> Throw;
	}
	internal static class Stubs<T1, T2, T3>
	{
		public static readonly Action<T1, T2, T3> Ignore;

		public static readonly Action<Exception, T1, T2, T3> Throw;
	}
}
