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
				return null;
			}
		}

		private void Awake()
		{
		}
	}
}
