using System;

namespace UniRx
{
	public struct CollectionMoveEvent<T> : IEquatable<CollectionMoveEvent<T>>
	{
		public int OldIndex { get; private set; }

		public int NewIndex { get; private set; }

		public T Value { get; private set; }

		public CollectionMoveEvent(int oldIndex, int newIndex, T value)
		{
			OldIndex = 0;
			NewIndex = 0;
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

		public bool Equals(CollectionMoveEvent<T> other)
		{
			return false;
		}
	}
}
