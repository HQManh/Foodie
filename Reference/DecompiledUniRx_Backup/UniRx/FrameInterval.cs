using System;

namespace UniRx
{
	[Serializable]
	public struct FrameInterval<T> : IEquatable<FrameInterval<T>>
	{
		private readonly int _interval;

		private readonly T _value;

		public T Value => default;

		public int Interval => 0;

		public FrameInterval(T value, int interval)
		{
			_interval = 0;
			_value = default;
		}

		public bool Equals(FrameInterval<T> other)
		{
			return false;
		}

		public static bool operator ==(FrameInterval<T> first, FrameInterval<T> second)
		{
			return false;
		}

		public static bool operator !=(FrameInterval<T> first, FrameInterval<T> second)
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
}
