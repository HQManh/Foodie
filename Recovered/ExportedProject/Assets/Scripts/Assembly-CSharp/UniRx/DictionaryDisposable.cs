using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace UniRx
{
	public sealed class DictionaryDisposable<TKey, TValue> : IDisposable, IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable where TValue : IDisposable
	{
		private bool isDisposed;

		private readonly Dictionary<TKey, TValue> inner;

		public TValue this[TKey key]
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public int Count => 0;

		public Dictionary<TKey, TValue>.KeyCollection Keys => null;

		public Dictionary<TKey, TValue>.ValueCollection Values => null;

		bool ICollection<KeyValuePair<TKey, TValue>>.IsReadOnly => false;

		ICollection<TKey> IDictionary<TKey, TValue>.Keys => null;

		ICollection<TValue> IDictionary<TKey, TValue>.Values => null;

		public DictionaryDisposable()
		{
		}

		public DictionaryDisposable(IEqualityComparer<TKey> comparer)
		{
		}

		public void Add(TKey key, TValue value)
		{
		}

		public void Clear()
		{
		}

		public bool Remove(TKey key)
		{
			return false;
		}

		public bool ContainsKey(TKey key)
		{
			return false;
		}

		public bool TryGetValue(TKey key, out TValue value)
		{
			value = default;
			return false;
		}

		public Dictionary<TKey, TValue>.Enumerator GetEnumerator()
		{
			return default;
		}

		public void GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		public void OnDeserialization(object sender)
		{
		}

		void ICollection<KeyValuePair<TKey, TValue>>.Add(KeyValuePair<TKey, TValue> item)
		{
		}

		bool ICollection<KeyValuePair<TKey, TValue>>.Contains(KeyValuePair<TKey, TValue> item)
		{
			return false;
		}

		void ICollection<KeyValuePair<TKey, TValue>>.CopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
		{
		}

		IEnumerator<KeyValuePair<TKey, TValue>> IEnumerable<KeyValuePair<TKey, TValue>>.GetEnumerator()
		{
			return null;
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}

		bool ICollection<KeyValuePair<TKey, TValue>>.Remove(KeyValuePair<TKey, TValue> item)
		{
			return false;
		}

		public void Dispose()
		{
		}
	}
}
