using System;
using UnityEngine.Events;

namespace UniRx
{
	public static class UnityEventExtensions
	{
		public static IObservable<Unit> AsObservable(this UnityEvent unityEvent)
		{
			return null;
		}

		public static IObservable<T> AsObservable<T>(this UnityEvent<T> unityEvent)
		{
			return null;
		}

		public static IObservable<Tuple<T0, T1>> AsObservable<T0, T1>(this UnityEvent<T0, T1> unityEvent)
		{
			return null;
		}

		public static IObservable<Tuple<T0, T1, T2>> AsObservable<T0, T1, T2>(this UnityEvent<T0, T1, T2> unityEvent)
		{
			return null;
		}

		public static IObservable<Tuple<T0, T1, T2, T3>> AsObservable<T0, T1, T2, T3>(this UnityEvent<T0, T1, T2, T3> unityEvent)
		{
			return null;
		}
	}
}
