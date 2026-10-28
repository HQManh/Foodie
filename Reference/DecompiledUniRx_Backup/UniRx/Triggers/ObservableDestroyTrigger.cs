using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableDestroyTrigger : MonoBehaviour
	{
		private bool calledDestroy;

		private Subject<Unit> onDestroy;

		private CompositeDisposable disposablesOnDestroy;

		[Obsolete("Internal Use.")]
		internal bool IsMonitoredActivate { get; set; }

		public bool IsActivated { get; private set; }

		public bool IsCalledOnDestroy => calledDestroy;

		private void Awake()
		{
			IsActivated = true;
		}

		private void OnDestroy()
		{
			if (calledDestroy)
			{
				return;
			}
			calledDestroy = true;
			if (disposablesOnDestroy != null)
			{
				disposablesOnDestroy.Dispose();
			}
			if (onDestroy != null)
			{
				onDestroy.OnNext(Unit.Default);
				onDestroy.OnCompleted();
			}
		}

		public IObservable<Unit> OnDestroyAsObservable()
		{
			if (this != null && !calledDestroy)
			{
				if (onDestroy == null)
				{
					onDestroy = new Subject<Unit>();
				}
				return onDestroy;
			}
			// TODO(unrecovered): the already-destroyed branch returns an unnamed cached observable (static field of the Observable class); recovered as Observable.ReturnUnit() by guess.
			return Observable.ReturnUnit();
		}

		public void ForceRaiseOnDestroy()
		{
			OnDestroy();
		}

		public void AddDisposableOnDestroy(IDisposable disposable)
		{
			if (calledDestroy)
			{
				disposable.Dispose();
				return;
			}
			if (disposablesOnDestroy == null)
			{
				disposablesOnDestroy = new CompositeDisposable(0);
			}
			disposablesOnDestroy.Add(disposable);
		}
	}
}
