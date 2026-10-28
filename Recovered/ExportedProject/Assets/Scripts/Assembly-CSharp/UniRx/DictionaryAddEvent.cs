using System;

namespace UniRx
{
	public struct DictionaryAddEvent<TKey, TValue> : IEquatable<DictionaryAddEvent<TKey, TValue>>
	{
		public TKey Key { get; private set; }

		public TValue Value { get; private set; }

		public DictionaryAddEvent(TKey key, TValue value)
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

		public bool Equals(DictionaryAddEvent<TKey, TValue> other)
		{
			return false;
		}
	}
}
