using System;

namespace UniRx
{
	public sealed class MultipleAssignmentDisposable : IDisposable, ICancelable
	{
		private static readonly BooleanDisposable True;

		private object gate;

		private IDisposable current;

		public bool IsDisposed => false;

		public IDisposable Disposable
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public void Dispose()
		{
		}
	}
}
