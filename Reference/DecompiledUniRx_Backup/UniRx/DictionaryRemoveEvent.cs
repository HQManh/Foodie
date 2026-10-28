using System;

namespace UniRx
{
	public struct DictionaryRemoveEvent<TKey, TValue> : IEquatable<DictionaryRemoveEvent<TKey, TValue>>
	{
		public TKey Key { get; private set; }

		public TValue Value { get; private set; }

		public DictionaryRemoveEvent(TKey key, TValue value)
		{
			Key = default;
			Value = default;
		}

		public override string ToString()
		{
			return null;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public bool Equals(DictionaryRemoveEvent<TKey, TValue> other)
		{
			return false;
		}
	}
}
