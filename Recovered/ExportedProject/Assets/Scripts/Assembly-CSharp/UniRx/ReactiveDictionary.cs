using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using UnityEngine;

namespace UniRx
{
	[Serializable]
	public class ReactiveDictionary<TKey, TValue> : IReactiveDictionary<TKey, TValue>, IReadOnlyReactiveDictionary<TKey, TValue>, IEnumerable<KeyValuePair<TKey, TValue>>, IEnumerable, IDictionary<TKey, TValue>, ICollection<KeyValuePair<TKey, TValue>>, IDictionary, ICollection, IDisposable, ISerializable, IDeserializationCallback
	{
		[NonSerialized]
		private bool isDisposed;

		[SerializeField]
		private readonly Dictionary<TKey, TValue> inner;

		private bool disposedValue;

		[NonSerialized]
		private Subject<int> countChanged;

		[NonSerialized]
		private Subject<Unit> collectionReset;

		[NonSerialized]
		private Subject<DictionaryAddEvent<TKey, TValue>> dictionaryAdd;

		[NonSerialized]
		private Subject<DictionaryRemoveEvent<TKey, TValue>> dictionaryRemove;

		[NonSerialized]
		private Subject<DictionaryReplaceEvent<TKey, TValue>> dictionaryReplace;

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

		object IDictionary.this[object key]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		bool IDictionary.IsFixedSize => false;

		bool IDictionary.IsReadOnly => false;

		bool ICollection.IsSynchronized => false;

		ICollection IDictionary.Keys => null;

		object ICollection.SyncRoot => null;

		ICollection IDictionary.Values => null;

		bool ICollection<KeyValuePair<TKey, TValue>>.IsReadOnly => false;

		ICollection<TKey> IDictionary<TKey, TValue>.Keys => null;

		ICollection<TValue> IDictionary<TKey, TValue>.Values => null;

		public ReactiveDictionary()
		{
		}

		public ReactiveDictionary(IEqualityComparer<TKey> comparer)
		{
		}

		public ReactiveDictionary(Dictionary<TKey, TValue> innerDictionary)
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

		private void DisposeSubject<TSubject>(ref Subject<TSubject> subject)
		{
		}

		protected virtual void Dispose(bool disposing)
		{
		}

		public void Dispose()
		{
		}

		public IObservable<int> ObserveCountChanged(bool notifyCurrentCount = false)
		{
			return null;
		}

		public IObservable<Unit> ObserveReset()
		{
			return null;
		}

		public IObservable<DictionaryAddEvent<TKey, TValue>> ObserveAdd()
		{
			return null;
		}

		public IObservable<DictionaryRemoveEvent<TKey, TValue>> ObserveRemove()
		{
			return null;
		}

		public IObservable<DictionaryReplaceEvent<TKey, TValue>> ObserveReplace()
		{
			return null;
		}

		void IDictionary.Add(object key, object value)
		{
		}

		bool IDictionary.Contains(object key)
		{
			return false;
		}

		void ICollection.CopyTo(Array array, int index)
		{
		}

		public void GetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		public void OnDeserialization(object sender)
		{
		}

		void IDictionary.Remove(object key)
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

		IDictionaryEnumerator IDictionary.GetEnumerator()
		{
			return null;
		}
	}
}
