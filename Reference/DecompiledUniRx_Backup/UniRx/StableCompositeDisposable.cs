using System;
using System.Collections.Generic;
using System.Threading;

namespace UniRx
{
	public abstract class StableCompositeDisposable : ICancelable, IDisposable
	{
		private class Binary : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable _disposable1;

			private IDisposable _disposable2;

			public override bool IsDisposed => disposedCallCount != -1;

			public Binary(IDisposable disposable1, IDisposable disposable2)
			{
				disposedCallCount = -1;
				_disposable1 = disposable1;
				_disposable2 = disposable2;
			}

			public override void Dispose()
			{
				if (Interlocked.Increment(ref disposedCallCount) != 0)
				{
					return;
				}
				if (_disposable1 != null)
				{
					_disposable1.Dispose();
				}
				if (_disposable2 != null)
				{
					_disposable2.Dispose();
				}
			}
		}

		private class Trinary : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable _disposable1;

			private IDisposable _disposable2;

			private IDisposable _disposable3;

			public override bool IsDisposed => disposedCallCount != -1;

			public Trinary(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3)
			{
				disposedCallCount = -1;
				_disposable1 = disposable1;
				_disposable2 = disposable2;
				_disposable3 = disposable3;
			}

			public override void Dispose()
			{
				if (Interlocked.Increment(ref disposedCallCount) != 0)
				{
					return;
				}
				if (_disposable1 != null)
				{
					_disposable1.Dispose();
				}
				if (_disposable2 != null)
				{
					_disposable2.Dispose();
				}
				if (_disposable3 != null)
				{
					_disposable3.Dispose();
				}
			}
		}

		private class Quaternary : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable _disposable1;

			private IDisposable _disposable2;

			private IDisposable _disposable3;

			private IDisposable _disposable4;

			public override bool IsDisposed => disposedCallCount != -1;

			public Quaternary(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3, IDisposable disposable4)
			{
				disposedCallCount = -1;
				_disposable1 = disposable1;
				_disposable2 = disposable2;
				_disposable3 = disposable3;
				_disposable4 = disposable4;
			}

			public override void Dispose()
			{
				if (Interlocked.Increment(ref disposedCallCount) != 0)
				{
					return;
				}
				if (_disposable1 != null)
				{
					_disposable1.Dispose();
				}
				if (_disposable2 != null)
				{
					_disposable2.Dispose();
				}
				if (_disposable3 != null)
				{
					_disposable3.Dispose();
				}
				if (_disposable4 != null)
				{
					_disposable4.Dispose();
				}
			}
		}

		private class NAry : StableCompositeDisposable
		{
			private int disposedCallCount;

			private List<IDisposable> _disposables;

			public override bool IsDisposed => disposedCallCount != -1;

			public NAry(IDisposable[] disposables)
			{
				disposedCallCount = -1;
				_disposables = new List<IDisposable>(disposables);
				if (_disposables.Contains(null))
				{
					// literal recovered by guess
					throw new ArgumentException("Cannot contain null", "disposables");
				}
			}

			public NAry(IEnumerable<IDisposable> disposables)
			{
				disposedCallCount = -1;
				_disposables = new List<IDisposable>(disposables);
				if (_disposables.Contains(null))
				{
					// literal recovered by guess
					throw new ArgumentException("Cannot contain null", "disposables");
				}
			}

			public override void Dispose()
			{
				if (Interlocked.Increment(ref disposedCallCount) == 0)
				{
					foreach (IDisposable disposable in _disposables)
					{
						disposable.Dispose();
					}
				}
			}
		}

		private class NAryUnsafe : StableCompositeDisposable
		{
			private int disposedCallCount;

			private IDisposable[] _disposables;

			public override bool IsDisposed => disposedCallCount != -1;

			public NAryUnsafe(IDisposable[] disposables)
			{
				disposedCallCount = -1;
				_disposables = disposables;
			}

			public override void Dispose()
			{
				if (Interlocked.Increment(ref disposedCallCount) == 0)
				{
					for (int i = 0; i < _disposables.Length; i++)
					{
						_disposables[i].Dispose();
					}
				}
			}
		}

		public abstract bool IsDisposed { get; }

		public static ICancelable Create(IDisposable disposable1, IDisposable disposable2)
		{
			if (disposable1 == null)
			{
				throw new ArgumentNullException("disposable1" /* literal recovered by guess */);
			}
			if (disposable2 == null)
			{
				throw new ArgumentNullException("disposable2" /* literal recovered by guess */);
			}
			return new Binary(disposable1, disposable2);
		}

		public static ICancelable Create(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3)
		{
			if (disposable1 == null)
			{
				throw new ArgumentNullException("disposable1" /* literal recovered by guess */);
			}
			if (disposable2 == null)
			{
				throw new ArgumentNullException("disposable2" /* literal recovered by guess */);
			}
			if (disposable3 == null)
			{
				throw new ArgumentNullException("disposable3" /* literal recovered by guess */);
			}
			return new Trinary(disposable1, disposable2, disposable3);
		}

		public static ICancelable Create(IDisposable disposable1, IDisposable disposable2, IDisposable disposable3, IDisposable disposable4)
		{
			if (disposable1 == null)
			{
				throw new ArgumentNullException("disposable1" /* literal recovered by guess */);
			}
			if (disposable2 == null)
			{
				throw new ArgumentNullException("disposable2" /* literal recovered by guess */);
			}
			if (disposable3 == null)
			{
				throw new ArgumentNullException("disposable3" /* literal recovered by guess */);
			}
			if (disposable4 == null)
			{
				throw new ArgumentNullException("disposable4" /* literal recovered by guess */);
			}
			return new Quaternary(disposable1, disposable2, disposable3, disposable4);
		}

		public static ICancelable Create(params IDisposable[] disposables)
		{
			if (disposables == null)
			{
				throw new ArgumentNullException("disposables" /* literal recovered by guess */);
			}
			return new NAry(disposables);
		}

		public static ICancelable CreateUnsafe(IDisposable[] disposables)
		{
			return new NAryUnsafe(disposables);
		}

		public static ICancelable Create(IEnumerable<IDisposable> disposables)
		{
			if (disposables == null)
			{
				throw new ArgumentNullException("disposables" /* literal recovered by guess */);
			}
			return new NAry(disposables);
		}

		public abstract void Dispose();
	}
}
