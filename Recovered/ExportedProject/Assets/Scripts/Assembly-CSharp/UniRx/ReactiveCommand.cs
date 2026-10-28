using System;

namespace UniRx
{
	public class ReactiveCommand : ReactiveCommand<Unit>
	{
		public ReactiveCommand()
		{
		}

		public ReactiveCommand(IObservable<bool> canExecuteSource, bool initialValue = true)
		{
		}

		public bool Execute()
		{
			return false;
		}

		public void ForceExecute()
		{
		}
	}
	public class ReactiveCommand<T> : IReactiveCommand<T>, IObservable<T>, IDisposable
	{
		private readonly Subject<T> trigger;

		private readonly IDisposable canExecuteSubscription;

		private ReactiveProperty<bool> canExecute;

		public IReadOnlyReactiveProperty<bool> CanExecute => null;

		public bool IsDisposed { get; private set; }

		public ReactiveCommand()
		{
		}

		public ReactiveCommand(IObservable<bool> canExecuteSource, bool initialValue = true)
		{
		}

		public bool Execute(T parameter)
		{
			return false;
		}

		public void ForceExecute(T parameter)
		{
		}

		public IDisposable Subscribe(IObserver<T> observer)
		{
			return null;
		}

		public void Dispose()
		{
		}
	}
}
