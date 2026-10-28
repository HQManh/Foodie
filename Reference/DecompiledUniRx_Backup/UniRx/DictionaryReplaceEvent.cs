using System;

namespace UniRx
{
	public struct DictionaryReplaceEvent<TKey, TValue> : IEquatable<DictionaryReplaceEvent<TKey, TValue>>
	{
		public TKey Key { get; private set; }

		public TValue OldValue { get; private set; }

		public TValue NewValue { get; private set; }

		public DictionaryReplaceEvent(TKey key, TValue oldValue, TValue newValue)
		{
			Key = default;
			OldValue = default;
			NewValue = default;
		}

		public override string ToString()
		{
			return null;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public bool Equals(DictionaryReplaceEvent<TKey, TValue> other)
		{
			return false;
		}
	}
}
