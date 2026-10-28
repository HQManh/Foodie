using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableParticleTrigger : ObservableTriggerBase
	{
		private Subject<GameObject> onParticleCollision;

		private Subject<Unit> onParticleTrigger;

		private void OnParticleCollision(GameObject other)
		{
			if (onParticleCollision != null)
			{
				onParticleCollision.OnNext(other);
			}
		}

		public IObservable<GameObject> OnParticleCollisionAsObservable()
		{
			if (onParticleCollision == null)
			{
				onParticleCollision = new Subject<GameObject>();
			}
			return onParticleCollision;
		}

		private void OnParticleTrigger()
		{
			if (onParticleTrigger != null)
			{
				onParticleTrigger.OnNext(Unit.Default);
			}
		}

		public IObservable<Unit> OnParticleTriggerAsObservable()
		{
			if (onParticleTrigger == null)
			{
				onParticleTrigger = new Subject<Unit>();
			}
			return onParticleTrigger;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onParticleCollision != null)
			{
				onParticleCollision.OnCompleted();
			}
			if (onParticleTrigger != null)
			{
				onParticleTrigger.OnCompleted();
			}
		}
	}
}
