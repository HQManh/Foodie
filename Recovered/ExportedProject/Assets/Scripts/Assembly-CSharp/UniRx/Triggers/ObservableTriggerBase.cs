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
		}

		public IObservable<Unit> AwakeAsObservable()
		{
			return null;
		}

		private void Start()
		{
		}

		public IObservable<Unit> StartAsObservable()
		{
			return null;
		}

		private void OnDestroy()
		{
		}

		public IObservable<Unit> OnDestroyAsObservable()
		{
			return null;
		}

		protected abstract void RaiseOnCompletedOnDestroy();
	}
}
