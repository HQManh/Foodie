using System;

namespace Datpt
{
	public class DebugCustom
	{
		private static bool _isLogBug = true;

		private static DateTime cachedTime;

		private static long cachedGCBytes;

		private static bool IsLogBug => _isLogBug;

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
			string result = string.Empty;
			for (int i = 0; i < content.Length; i++)
			{
				// TODO(unrecovered): Exception elements are passed to Debug.LogException and the pseudocode then returns through an unnamed virtual slot (0x188); that branch is not ported.
				string text = content[i].ToString();
				result = i == content.Length - 1 ? result + text : result + text + " " /* literal recovered by guess */;
			}
			return result;
		}

		public static string PrepareStringJson(object[] content)
		{
			// TODO(unrecovered): serializes each element with Newtonsoft JsonConvert.SerializeObject; the project has no Newtonsoft usage in stubs, so this path is not ported.
			return null;
		}

		public static void StartProfilerFunction()
		{
			cachedTime = DateTime.Now;
			cachedGCBytes = GC.GetTotalMemory(true);
		}

		public static void LogProfilerFunction(string funcName)
		{
			// TODO(unrecovered): formats elapsed time and GC delta and stores the line through unnamed helper FUN_03f5c394 and the static dictionary at DAT_09180318; the storage target is not in stubs.
		}
	}
}
