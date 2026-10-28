using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace KienUtilities
{

public class EventManager
{
	private struct SFilter
	{
		public string value;

		public bool starts;

		public bool ends;

		public bool contains;

		public bool exact;
	}

	public struct DataGroup
	{
		public object data;

		public string id;

		public GameObject ToGameObject()
		{
			return null;
		}

		public int ToInt()
		{
			return 0;
		}

		public float ToFloat()
		{
			return 0f;
		}

		public override string ToString()
		{
			return null;
		}

		public bool ToBool()
		{
			return false;
		}
	}

	public struct IndexedDataGroup
	{
		public DataGroup[] data;

		private object objectData;

		public object GetObject(string id)
		{
			return null;
		}

		public GameObject ToGameObject(string id)
		{
			return null;
		}

		public int ToInt(string id)
		{
			return 0;
		}

		public float ToFloat(string id)
		{
			return 0f;
		}

		public string ToString(string id)
		{
			return null;
		}

		public bool ToBool(string id)
		{
			return false;
		}

		public bool IsEmpty()
		{
			return false;
		}

		private object Find(string id)
		{
			return null;
		}
	}

	private static Dictionary<string, UnityEvent> eventDictionary = new Dictionary<string, UnityEvent>();

	private static Dictionary<string, object> sender;

	private static Dictionary<string, bool> paused = new Dictionary<string, bool>();

	private static Dictionary<string, object> storage = new Dictionary<string, object>();

	private static Dictionary<string, object[]> storage2 = new Dictionary<string, object[]>();

	private static Dictionary<string, DataGroup[]> storage3 = new Dictionary<string, DataGroup[]>();

	private static Dictionary<string, UnityAction> callBacks = new Dictionary<string, UnityAction>();

	public static void StartListening(string eventName, UnityAction callBack, string callBackID = "")
	{
	}

	public static void StartListening(string eventName, GameObject target, UnityAction callBack, string callBackID = "")
	{
	}

	public static void StopListening(string eventName, string callBackID)
	{
	}

	public static void StopListening(string eventName, UnityAction callBack)
	{
	}

	public static void EmitEvent(string eventName)
	{
	}

	public static void EmitEvent(string eventName, object sender)
	{
	}

	public static void EmitEvent(string eventName, float delay)
	{
	}

	public static void EmitEvent(string eventName, float delay, object sender)
	{
	}

	public static void EmitEvent(string eventName, string filter, float delay = 0f, object sender = null)
	{
	}

	private static bool FilterIsValidated(string value, SFilter rules)
	{
		return false;
	}

	public static void EmitEventData(string eventName, object data, float delay = 0f)
	{
	}

	public static void StopAll()
	{
	}

	public static bool IsListening()
	{
		return false;
	}

	public static void PauseListening()
	{
	}

	public static void PauseListening(string eventName)
	{
	}

	public static void RestartListening()
	{
	}

	public static void RestartListening(string eventName)
	{
	}

	public static bool isPaused(string eventName)
	{
		return false;
	}

	private static void SetPaused(bool value)
	{
	}

	private static void SetPaused(string eventName, bool value)
	{
	}

	public static bool EventExists(string eventName)
	{
		return false;
	}

	public static void ClearData()
	{
	}

	public static void Dispose(string eventName)
	{
	}

	public static void DisposeAll()
	{
	}

	public static void SetData(string eventName, object data)
	{
	}

	public static object GetData(string eventName)
	{
		return null;
	}

	public static GameObject GetGameObject(string eventName)
	{
		return null;
	}

	public static int GetInt(string eventName)
	{
		return 0;
	}

	public static bool GetBool(string eventName)
	{
		return false;
	}

	public static float GetFloat(string eventName)
	{
		return 0f;
	}

	public static string GetString(string eventName)
	{
		return null;
	}

	public static object GetSender(string eventName)
	{
		return null;
	}

	public static void SetDataGroup(string eventName, params object[] data)
	{
	}

	public static DataGroup[] GetDataGroup(string eventName)
	{
		return null;
	}

	public static void SetIndexedDataGroup(string eventName, params DataGroup[] data)
	{
	}

	public static IndexedDataGroup GetIndexedDataGroup(string eventName)
	{
		return default(IndexedDataGroup);
	}

	internal static void EmitEvent(object eVENT_ON_NEW_DAY)
	{
	}
}
}
