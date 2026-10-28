using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableJointTrigger : ObservableTriggerBase
	{
		private Subject<float> onJointBreak;

		private Subject<Joint2D> onJointBreak2D;

		private void OnJointBreak(float breakForce)
		{
		}

		public IObservable<float> OnJointBreakAsObservable()
		{
			return null;
		}

		private void OnJointBreak2D(Joint2D brokenJoint)
		{
		}

		public IObservable<Joint2D> OnJointBreak2DAsObservable()
		{
			return null;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
		}
	}
}
