using System;

namespace UniRx.InternalUtil
{
	internal class ScheduledItem : IComparable<ScheduledItem>
	{
		private readonly BooleanDisposable _disposable;

		private readonly TimeSpan _dueTime;

		private readonly Action _action;

		public TimeSpan DueTime => default;

		public IDisposable Cancellation => null;

		public bool IsCanceled => false;

		public ScheduledItem(Action action, TimeSpan dueTime)
		{
		}

		public void Invoke()
		{
		}

		public int CompareTo(ScheduledItem other)
		{
			return 0;
		}

		public static bool operator <(ScheduledItem left, ScheduledItem right)
		{
			return false;
		}

		public static bool operator <=(ScheduledItem left, ScheduledItem right)
		{
			return false;
		}

		public static bool operator >(ScheduledItem left, ScheduledItem right)
		{
			return false;
		}

		public static bool operator >=(ScheduledItem left, ScheduledItem right)
		{
			return false;
		}

		public static bool operator ==(ScheduledItem left, ScheduledItem right)
		{
			return false;
		}

		public static bool operator !=(ScheduledItem left, ScheduledItem right)
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
	}
}
