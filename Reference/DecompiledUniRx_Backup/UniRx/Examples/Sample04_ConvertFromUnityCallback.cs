using System;
using UnityEngine;

namespace UniRx.Examples
{
	public class Sample04_ConvertFromUnityCallback : MonoBehaviour
	{
		private class LogCallback
		{
			public string Condition;

			public string StackTrace;

			public LogType LogType;
		}

		private static class LogHelper
		{
			public static IObservable<LogCallback> LogCallbackAsObservable()
			{
				// TODO(unrecovered): builds an Observable.FromEvent over Application.logMessageReceived with a generic Observable.Create wrapper (FUN_04c3e948 and the UnityEngine.Application.LogCallback delegate helpers) whose declarations are not in the stubs.
				return null;
			}
		}

		private void Awake()
		{
			// TODO(unrecovered): chains LogHelper.LogCallbackAsObservable with Where/Subscribe combinators (FUN_04c49080, FUN_04c4b694, FUN_04c4bca8 and related) that are not in the stubs.
		}
	}
}
