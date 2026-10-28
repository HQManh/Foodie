using System;
using System.Collections.Generic;

namespace UniRx
{
	public abstract class StableCompositeDisposable : ICancelable, IDisposable
	{
		private class Binary : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable _disposable1;

			private IDisposable _disposable2;

			public override bool IsDisposed => false;

			public Binary(IDisposable disposable1, IDisposable disposable2)
			{
			}

			public override void Dispose()
			{
			}
		}

		private class Trinary : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable _disposable1;

			private IDisposable _disposable2;

			private IDisposable _disposable3;

			public override bool IsDisposed => false;

			public Trinary(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3)
			{
			}

			public override void Dispose()
			{
			}
		}

		private class Quaternary : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable _disposable1;

			private IDisposable _disposable2;

			private IDisposable _disposable3;

			private IDisposable _disposable4;

			public override bool IsDisposed => false;

			public Quaternary(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3, IDisposable disposable4)
			{
			}

			public override void Dispose()
			{
			}
		}

		private class NAry : StableCompositeDisposable
		{
			private int disposedCallCount;

			private List<IDisposable> _disposables;

			public override bool IsDisposed => false;

			public NAry(IDisposable[] disposables)
			{
			}

			public NAry(IEnumerable<IDisposable> disposables)
			{
			}

			public override void Dispose()
			{
			}
		}

		private class NAryUnsafe : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable[] _disposables;

			public override bool IsDisposed => false;

			public NAryUnsafe(IDisposable[] disposables)
			{
			}

			public override void Dispose()
			{
			}
		}

		public abstract bool IsDisposed { get; }

		public static ICancelable Create(IDisposable disposable1, IDisposable disposable2)
		{
			return null;
		}

		public static ICancelable Create(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3)
		{
			return null;
		}

		public static ICancelable Create(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3, IDisposable disposable4)
		{
			return null;
		}

		public static ICancelable Create(params IDisposable[] disposables)
		{
			return null;
		}

		public static ICancelable CreateUnsafe(IDisposable[] disposables)
		{
			return null;
		}

		public static ICancelable Create(IEnumerable<IDisposable> disposables)
		{
			return null;
		}

		public abstract void Dispose();
	}
}
