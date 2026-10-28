using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Datpt.ObserverPattern
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
				return (GameObject)data;
			}

			public int ToInt()
			{
				return (int)data;
			}

			public float ToFloat()
			{
				return (float)data;
			}

			public override string ToString()
			{
				return (string)data;
			}

			public bool ToBool()
			{
				return (bool)data;
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
				objectData = Find(id);
				return (GameObject)objectData;
			}

			public int ToInt(string id)
			{
				objectData = Find(id);
				return (int)objectData;
			}

			public float ToFloat(string id)
			{
				objectData = Find(id);
				return (float)objectData;
			}

			public string ToString(string id)
			{
				objectData = Find(id);
				return (string)objectData;
			}

			public bool ToBool(string id)
			{
				objectData = Find(id);
				return (bool)objectData;
			}

			public bool IsEmpty()
			{
				return data.Length == 0;
			}

			private object Find(string id)
			{
				foreach (DataGroup group in data)
				{
					if (group.id == id)
					{
						return group.data;
					}
				}
				return null;
			}
		}

		private static Dictionary<string, UnityEvent> eventDictionary = new Dictionary<string, UnityEvent>();

		private static Dictionary<string, object> sender = new Dictionary<string, object>();

		private static Dictionary<string, bool> paused = new Dictionary<string, bool>();

		private static Dictionary<string, object> storage = new Dictionary<string, object>();

		private static Dictionary<string, object[]> storage2 = new Dictionary<string, object[]>();

		private static Dictionary<string, DataGroup[]> storage3 = new Dictionary<string, DataGroup[]>();

		private static Dictionary<string, UnityAction> callBacks = new Dictionary<string, UnityAction>();

		public static void StartListening(string eventName, UnityAction callBack, string callBackID = "")
		{
			if (eventDictionary.TryGetValue(eventName, out UnityEvent unityEvent))
			{
				unityEvent.AddListener(callBack);
			}
			else
			{
				unityEvent = new UnityEvent();
				unityEvent.AddListener(callBack);
				eventDictionary.Add(eventName, unityEvent);
				paused[eventName] = false;
			}
			if (callBackID != "")
			{
				callBacks.Add(eventName + "_" /* literal recovered by guess */ + callBackID, callBack);
			}
		}

		public static void StartListening(string eventName, GameObject target, UnityAction callBack, string callBackID = "")
		{
			// TODO(unrecovered): builds additional composite keys from the target's name, tag and layer (the pseudocode's per-key branches with DAT_09214950/DAT_092152a8 separators and unnamed Dictionary helpers) and the null-target LogError message; not ported.
		}

		public static void StopListening(string eventName, string callBackID)
		{
			// TODO(unrecovered): removes callbacks registered under composite keys (name + separator + id, with a second suffix) using unnamed Dictionary helpers FUN_06fd8648/FUN_06fd83d4/FUN_06fd9970; the suffix literals are not recovered.
		}

		public static void StopListening(string eventName, UnityAction callBack)
		{
			if (eventDictionary.TryGetValue(eventName, out UnityEvent unityEvent))
			{
				unityEvent.RemoveListener(callBack);
			}
		}

		public static void EmitEvent(string eventName)
		{
			if (!isPaused(eventName) && eventDictionary.TryGetValue(eventName, out UnityEvent unityEvent))
			{
				unityEvent.Invoke();
			}
		}

		public static void EmitEvent(string eventName, object sender)
		{
			if (isPaused(eventName))
			{
				return;
			}
			EventManager.sender[eventName] = sender;
			EmitEvent(eventName);
		}

		public static void EmitEvent(string eventName, float delay)
		{
			if (!isPaused(eventName) && delay <= 0f && eventDictionary.TryGetValue(eventName, out UnityEvent unityEvent))
			{
				unityEvent.Invoke();
			}
		}

		public static void EmitEvent(string eventName, float delay, object sender)
		{
			if (isPaused(eventName))
			{
				return;
			}
			EventManager.sender[eventName] = sender;
			EmitEvent(eventName, delay);
		}

		public static void EmitEvent(string eventName, string filter, float delay = 0f, object sender = null)
		{
			if (sender != null)
			{
				EventManager.sender[eventName] = sender;
			}
			// TODO(unrecovered): the filter branch splits the filter on ';' and ':' and dispatches per-filter events through FilterIsValidated and unnamed IL2CPP string/dictionary helpers (FUN_07001e7c, FUN_07002080, FUN_07001df8, FUN_07001b30); the separator and operator literals are not recovered.
		}

		private static bool FilterIsValidated(string value, SFilter rules)
		{
			if (rules.exact)
			{
				return value == rules.value;
			}
			if (rules.contains)
			{
				return value.Contains(rules.value);
			}
			if (rules.starts)
			{
				return value.StartsWith(rules.value);
			}
			if (rules.ends)
			{
				return value.EndsWith(rules.value);
			}
			return false;
		}

		public static void EmitEventData(string eventName, object data, float delay = 0f)
		{
			SetData(eventName, data);
			EmitEvent(eventName, delay);
		}

		public static void StopAll()
		{
			foreach (UnityEvent unityEvent in eventDictionary.Values)
			{
				unityEvent.RemoveAllListeners();
			}
			eventDictionary = new Dictionary<string, UnityEvent>();
		}

		public static bool IsListening()
		{
			return eventDictionary.Count > 0;
		}

		public static void PauseListening()
		{
			SetPaused(true);
		}

		public static void PauseListening(string eventName)
		{
			SetPaused(eventName, true);
		}

		public static void RestartListening()
		{
			SetPaused(false);
		}

		public static void RestartListening(string eventName)
		{
			SetPaused(eventName, false);
		}

		public static bool isPaused(string eventName)
		{
			if (!paused.ContainsKey(eventName))
			{
				return true;
			}
			return paused[eventName];
		}

		private static void SetPaused(bool value)
		{
			Dictionary<string, bool> newPaused = new Dictionary<string, bool>();
			foreach (string key in paused.Keys)
			{
				newPaused[key] = value;
			}
			paused = newPaused;
		}

		private static void SetPaused(string eventName, bool value)
		{
			Dictionary<string, bool> newPaused = new Dictionary<string, bool>();
			foreach (KeyValuePair<string, bool> entry in paused)
			{
				newPaused[entry.Key] = entry.Key == eventName ? value : entry.Value;
			}
			paused = newPaused;
		}

		public static bool EventExists(string eventName)
		{
			return eventDictionary.ContainsKey(eventName);
		}

		public static void ClearData()
		{
			storage = new Dictionary<string, object>();
			sender = new Dictionary<string, object>();
		}

		public static void Dispose(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				storage.Remove(eventName);
			}
			if (storage2.ContainsKey(eventName))
			{
				storage2.Remove(eventName);
			}
			if (storage3.ContainsKey(eventName))
			{
				storage3.Remove(eventName);
			}
		}

		public static void DisposeAll()
		{
			storage.Clear();
			storage2.Clear();
			storage3.Clear();
			sender.Clear();
		}

		public static void SetData(string eventName, object data)
		{
			storage[eventName] = data;
		}

		public static object GetData(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				return storage[eventName];
			}
			return null;
		}

		public static GameObject GetGameObject(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				return (GameObject)storage[eventName];
			}
			return null;
		}

		public static int GetInt(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				return (int)storage[eventName];
			}
			return 0;
		}

		public static bool GetBool(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				return (bool)storage[eventName];
			}
			return false;
		}

		public static float GetFloat(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				return (float)storage[eventName];
			}
			return 0f;
		}

		public static string GetString(string eventName)
		{
			if (storage.ContainsKey(eventName))
			{
				return (string)storage[eventName];
			}
			return string.Empty;
		}

		public static object GetSender(string eventName)
		{
			if (sender.ContainsKey(eventName))
			{
				return sender[eventName];
			}
			return null;
		}

		public static void SetDataGroup(string eventName, params object[] data)
		{
			if (storage3.ContainsKey(eventName))
			{
				Debug.LogWarning(eventName + " is already in use" /* message recovered by guess */);
				return;
			}
			storage2[eventName] = data;
		}

		public static DataGroup[] GetDataGroup(string eventName)
		{
			if (!storage2.ContainsKey(eventName))
			{
				return null;
			}
			object[] raw = storage2[eventName];
			DataGroup[] groups = new DataGroup[raw.Length];
			for (int i = 0; i < raw.Length; i++)
			{
				groups[i].data = raw[i];
			}
			return groups;
		}

		public static void SetIndexedDataGroup(string eventName, params DataGroup[] data)
		{
			if (storage2.ContainsKey(eventName))
			{
				Debug.LogWarning(eventName + " is already in use" /* message recovered by guess */);
				return;
			}
			storage3[eventName] = data;
		}

		public static IndexedDataGroup GetIndexedDataGroup(string eventName)
		{
			if (storage3.ContainsKey(eventName))
			{
				return new IndexedDataGroup { data = storage3[eventName] };
			}
			return default;
		}
	}
}
