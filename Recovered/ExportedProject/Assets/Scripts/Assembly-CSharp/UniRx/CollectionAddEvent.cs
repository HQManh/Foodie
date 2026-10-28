using System;

namespace UniRx
{
	public struct CollectionAddEvent<T> : IEquatable<CollectionAddEvent<T>>
	{
		public int Index { get; private set; }

		public T Value { get; private set; }

		public CollectionAddEvent(int index, T value)
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

		public bool Equals(CollectionAddEvent<T> other)
		{
			return false;
		}
	}
}
