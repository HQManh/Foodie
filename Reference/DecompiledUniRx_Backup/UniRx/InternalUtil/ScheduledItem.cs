using System;

namespace UniRx.InternalUtil
{
	internal class ScheduledItem : IComparable<ScheduledItem>
	{
		private readonly BooleanDisposable _disposable;

		private readonly TimeSpan _dueTime;

		private readonly Action _action;

		public TimeSpan DueTime => _dueTime;

		public IDisposable Cancellation => _disposable;

		public bool IsCanceled => _disposable.IsDisposed;

		public ScheduledItem(Action action, TimeSpan dueTime)
		{
			_disposable = new BooleanDisposable();
			_action = action;
			_dueTime = dueTime;
		}

		public void Invoke()
		{
			if (_disposable == null)
			{
				throw new NullReferenceException();
			}
			if (_disposable.IsDisposed)
			{
				return;
			}
			if (_action == null)
			{
				throw new NullReferenceException();
			}
			_action();
		}

		public int CompareTo(ScheduledItem other)
		{
			if (other == null)
			{
				return 1;
			}
			return _dueTime.CompareTo(other._dueTime);
		}

		public static bool operator <(ScheduledItem left, ScheduledItem right)
		{
			if (left == null)
			{
				throw new NullReferenceException();
			}
			return left.CompareTo(right) < 0;
		}

		public static bool operator <=(ScheduledItem left, ScheduledItem right)
		{
			if (left == null)
			{
				throw new NullReferenceException();
			}
			return left.CompareTo(right) < 1;
		}

		public static bool operator >(ScheduledItem left, ScheduledItem right)
		{
			if (left == null)
			{
				throw new NullReferenceException();
			}
			return 0 < left.CompareTo(right);
		}

		public static bool operator >=(ScheduledItem left, ScheduledItem right)
		{
			if (left == null)
			{
				throw new NullReferenceException();
			}
			return left.CompareTo(right) >= 0;
		}

		public static bool operator ==(ScheduledItem left, ScheduledItem right)
		{
			return object.ReferenceEquals(left, right);
		}

		public static bool operator !=(ScheduledItem left, ScheduledItem right)
		{
			return !object.ReferenceEquals(left, right);
		}

		public override bool Equals(object obj)
		{
			return object.ReferenceEquals(this, obj);
		}

		public override int GetHashCode()
		{
			return base.GetHashCode();
		}
	}
}
