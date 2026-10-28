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
			if (onJointBreak != null)
			{
				onJointBreak.OnNext(breakForce);
			}
		}

		public IObservable<float> OnJointBreakAsObservable()
		{
			if (onJointBreak == null)
			{
				onJointBreak = new Subject<float>();
			}
			return onJointBreak;
		}

		private void OnJointBreak2D(Joint2D brokenJoint)
		{
			if (onJointBreak2D != null)
			{
				onJointBreak2D.OnNext(brokenJoint);
			}
		}

		public IObservable<Joint2D> OnJointBreak2DAsObservable()
		{
			if (onJointBreak2D == null)
			{
				onJointBreak2D = new Subject<Joint2D>();
			}
			return onJointBreak2D;
		}

		protected override void RaiseOnCompletedOnDestroy()
		{
			if (onJointBreak != null)
			{
				onJointBreak.OnCompleted();
			}
			if (onJointBreak2D != null)
			{
				onJointBreak2D.OnCompleted();
			}
		}
	}
}
