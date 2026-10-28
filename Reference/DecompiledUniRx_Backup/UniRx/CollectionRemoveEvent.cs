using System;

namespace UniRx
{
	public struct CollectionRemoveEvent<T> : IEquatable<CollectionRemoveEvent<T>>
	{
		public int Index { get; private set; }

		public T Value { get; private set; }

		public CollectionRemoveEvent(int index, T value)
		{
			Index = 0;
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

		public bool Equals(CollectionRemoveEvent<T> other)
		{
			return false;
		}
	}
}
