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
		}

		public IObservable<GameObject> OnParticleCollisionAsObservable()
		{
			return null;
		}

		private void OnParticleTrigger()
		{
		}

		public IObservable<Unit> OnParticleTriggerAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
