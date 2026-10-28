using System;

namespace UniRx
{
	[Serializable]
	public struct Pair<T> : IEquatable<Pair<T>>
	{
		private readonly T previous;

		private readonly T current;

		public T Previous => default;

		public T Current => default;

		public Pair(T previous, T current)
		{
			this.previous = default;
			this.current = default;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public bool Equals(Pair<T> other)
		{
			return false;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
