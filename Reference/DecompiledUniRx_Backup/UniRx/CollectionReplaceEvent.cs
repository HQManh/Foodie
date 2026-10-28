using System;

namespace UniRx
{
	public struct CollectionReplaceEvent<T> : IEquatable<CollectionReplaceEvent<T>>
	{
		public int Index { get; private set; }

		public T OldValue { get; private set; }

		public T NewValue { get; private set; }

		public CollectionReplaceEvent(int index, T oldValue, T newValue)
		{
			Index = 0;
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

		public bool Equals(CollectionReplaceEvent<T> other)
		{
			return false;
		}
	}
}
