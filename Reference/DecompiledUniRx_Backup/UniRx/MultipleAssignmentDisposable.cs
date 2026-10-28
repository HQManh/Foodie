using System;

namespace UniRx
{
	public sealed class MultipleAssignmentDisposable : IDisposable, ICancelable
	{
		private static readonly BooleanDisposable True;

		private object gate = new object();

		private IDisposable current;

		static MultipleAssignmentDisposable()
		{
			True = new BooleanDisposable();
			True.Dispose();
		}

		public bool IsDisposed
		{
			get
			{
				lock (gate)
				{
					return current == True;
				}
			}
		}

		public IDisposable Disposable
		{
			get
			{
				lock (gate)
				{
					if (current == True)
					{
						return UniRx.Disposable.Empty;
					}
					return current;
				}
			}
			set
			{
				bool wasDisposed;
				lock (gate)
				{
					wasDisposed = current == True;
					if (!wasDisposed)
					{
						current = value;
					}
				}
				if (value != null && wasDisposed)
				{
					value.Dispose();
				}
			}
		}

		public void Dispose()
		{
			IDisposable previous = null;
			lock (gate)
			{
				if (current != True)
				{
					previous = current;
					current = True;
				}
			}
			if (previous != null)
			{
				previous.Dispose();
			}
		}
	}
}
