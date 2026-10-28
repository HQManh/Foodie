using System;
using UnityEngine;

namespace UniRx.Triggers
{
	public abstract class ObservableTriggerBase : MonoBehaviour
	{
		private bool calledAwake;

		private Subject<Unit> awake;

		private bool calledStart;

		private Subject<Unit> start;

		private bool calledDestroy;

		private Subject<Unit> onDestroy;

		private void Awake()
		{
			calledAwake = true;
			if (awake != null)
			{
				awake.OnNext(Unit.Default);
				awake.OnCompleted();
			}
		}

		public IObservable<Unit> AwakeAsObservable()
		{
			if (!calledAwake)
			{
				if (awake == null)
				{
					awake = new Subject<Unit>();
				}
				return awake;
			}
			// TODO(unrecovered): the already-called branch returns an unnamed cached observable (static field of the Observable class); recovered as Observable.ReturnUnit() by guess.
			return Observable.ReturnUnit();
		}

		private void Start()
		{
			calledStart = true;
			if (start != null)
			{
				start.OnNext(Unit.Default);
				start.OnCompleted();
			}
		}

		public IObservable<Unit> StartAsObservable()
		{
			if (!calledStart)
			{
				if (start == null)
				{
					start = new Subject<Unit>();
				}
				return start;
			}
			// TODO(unrecovered): see AwakeAsObservable; recovered as Observable.ReturnUnit() by guess.
			return Observable.ReturnUnit();
		}

		private void OnDestroy()
		{
			calledDestroy = true;
			if (onDestroy != null)
			{
				onDestroy.OnNext(Unit.Default);
				onDestroy.OnCompleted();
			}
			RaiseOnCompletedOnDestroy();
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
			// TODO(unrecovered): see AwakeAsObservable; recovered as Observable.ReturnUnit() by guess.
			return Observable.ReturnUnit();
		}

		protected abstract void RaiseOnCompletedOnDestroy();
	}
}
