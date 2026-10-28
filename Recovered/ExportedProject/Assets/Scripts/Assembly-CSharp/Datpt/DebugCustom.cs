using System;

namespace Datpt
{
	public class DebugCustom
	{
		private static bool _isLogBug;

		private static DateTime cachedTime;

		private static long cachedGCBytes;

		private static bool IsLogBug => false;

		public static void LogWarning(params object[] content)
		{
		}

		public static void Log(params object[] content)
		{
		}

		public static void LogError(params object[] content)
		{
		}

		public static void LogColor(params object[] content)
		{
		}

		public static void LogColorJson(params object[] content)
		{
		}

		public static void LogJson(params object[] content)
		{
		}

		public static void LogErrorJson(params object[] content)
		{
		}

		public static string PrepareString(object[] content)
		{
			return null;
		}

		public static string PrepareStringJson(object[] content)
		{
			return null;
		}

		public static void StartProfilerFunction()
		{
		}

		public static void LogProfilerFunction(string funcName)
		{
		}
	}
}
