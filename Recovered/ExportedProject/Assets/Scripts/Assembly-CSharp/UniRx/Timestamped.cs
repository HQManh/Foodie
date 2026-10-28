using System;

namespace UniRx
{
	[Serializable]
	public struct Timestamped<T> : IEquatable<Timestamped<T>>
	{
		private readonly DateTimeOffset _timestamp;

		private readonly T _value;

		public T Value => default;

		public DateTimeOffset Timestamp => default;

		public Timestamped(T value, DateTimeOffset timestamp)
		{
			_timestamp = default;
			_value = default;
		}

		public bool Equals(Timestamped<T> other)
		{
			return false;
		}

		public static bool operator ==(Timestamped<T> first, Timestamped<T> second)
		{
			return false;
		}

		public static bool operator !=(Timestamped<T> first, Timestamped<T> second)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}

		public override string ToString()
		{
			return null;
		}
	}
	public static class Timestamped
	{
		public static Timestamped<T> Create<T>(T value, DateTimeOffset timestamp)
		{
			return default;
		}
	}
}
