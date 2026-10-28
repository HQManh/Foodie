using System;

namespace UniRx
{
	public class EventPattern<TEventArgs> : EventPattern<object, TEventArgs>
	{
		public EventPattern(object sender, TEventArgs e)
			: base((object)null, default(TEventArgs))
		{
		}
	}
	public class EventPattern<TSender, TEventArgs> : IEquatable<EventPattern<TSender, TEventArgs>>, IEventPattern<TSender, TEventArgs>
	{
		public TSender Sender { get; private set; }

		public TEventArgs EventArgs { get; private set; }

		public EventPattern(TSender sender, TEventArgs e)
		{
		}

		public bool Equals(EventPattern<TSender, TEventArgs> other)
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

		public static bool operator ==(EventPattern<TSender, TEventArgs> first, EventPattern<TSender, TEventArgs> second)
		{
			return false;
		}

		public static bool operator !=(EventPattern<TSender, TEventArgs> first, EventPattern<TSender, TEventArgs> second)
		{
			return false;
		}
	}
}
