using System;
using System.Collections.Generic;
using UnityEngine;

namespace Utilities;

public static class JsonDictionaryUtility
{
	[Serializable]
	private class JsonDictionary<K, V>
	{
		[SerializeField]
		private List<K> keys;

		[SerializeField]
		private List<V> values;

		public void Add(K key, V value)
		{
		}

		public Dictionary<K, V> ToDictionary()
		{
			return null;
		}

		public static JsonDictionary<K, V> FromDictionary(Dictionary<K, V> dict)
		{
			return null;
		}
	}

	public static Dictionary<K, V> FromJson<K, V>(string json)
	{
		return null;
	}

	public static string ToJson<K, V>(Dictionary<K, V> dict, bool prettyPrint = false)
	{
		return null;
	}
}
