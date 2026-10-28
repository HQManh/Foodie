using System;
using UnityEngine;

namespace UniRx.Triggers
{
	[DisallowMultipleComponent]
	public class ObservableStateMachineTrigger : StateMachineBehaviour
	{
		public class OnStateInfo
		{
			public Animator Animator { get; private set; }

			public AnimatorStateInfo StateInfo { get; private set; }

			public int LayerIndex { get; private set; }

			public OnStateInfo(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
			{
				Animator = animator;
				StateInfo = stateInfo;
				LayerIndex = layerIndex;
			}
		}

		public class OnStateMachineInfo
		{
			public Animator Animator { get; private set; }

			public int StateMachinePathHash { get; private set; }

			public OnStateMachineInfo(Animator animator, int stateMachinePathHash)
			{
				Animator = animator;
				StateMachinePathHash = stateMachinePathHash;
			}
		}

		private Subject<OnStateInfo> onStateExit;

		private Subject<OnStateInfo> onStateEnter;

		private Subject<OnStateInfo> onStateIK;

		private Subject<OnStateInfo> onStateUpdate;

		private Subject<OnStateMachineInfo> onStateMachineEnter;

		private Subject<OnStateMachineInfo> onStateMachineExit;

		public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
		{
			if (onStateExit != null)
			{
				onStateExit.OnNext(new OnStateInfo(animator, stateInfo, layerIndex));
			}
		}

		public IObservable<OnStateInfo> OnStateExitAsObservable()
		{
			if (onStateExit == null)
			{
				onStateExit = new Subject<OnStateInfo>();
			}
			return onStateExit;
		}

		public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
		{
			if (onStateEnter != null)
			{
				onStateEnter.OnNext(new OnStateInfo(animator, stateInfo, layerIndex));
			}
		}

		public IObservable<OnStateInfo> OnStateEnterAsObservable()
		{
			if (onStateEnter == null)
			{
				onStateEnter = new Subject<OnStateInfo>();
			}
			return onStateEnter;
		}

		public override void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
		{
			if (onStateIK != null)
			{
				onStateIK.OnNext(new OnStateInfo(animator, stateInfo, layerIndex));
			}
		}

		public IObservable<OnStateInfo> OnStateIKAsObservable()
		{
			if (onStateIK == null)
			{
				onStateIK = new Subject<OnStateInfo>();
			}
			return onStateIK;
		}

		public override void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
		{
			if (onStateUpdate != null)
			{
				onStateUpdate.OnNext(new OnStateInfo(animator, stateInfo, layerIndex));
			}
		}

		public IObservable<OnStateInfo> OnStateUpdateAsObservable()
		{
			if (onStateUpdate == null)
			{
				onStateUpdate = new Subject<OnStateInfo>();
			}
			return onStateUpdate;
		}

		public override void OnStateMachineEnter(Animator animator, int stateMachinePathHash)
		{
			if (onStateMachineEnter != null)
			{
				onStateMachineEnter.OnNext(new OnStateMachineInfo(animator, stateMachinePathHash));
			}
		}

		public IObservable<OnStateMachineInfo> OnStateMachineEnterAsObservable()
		{
			if (onStateMachineEnter == null)
			{
				onStateMachineEnter = new Subject<OnStateMachineInfo>();
			}
			return onStateMachineEnter;
		}

		public override void OnStateMachineExit(Animator animator, int stateMachinePathHash)
		{
			if (onStateMachineExit != null)
			{
				onStateMachineExit.OnNext(new OnStateMachineInfo(animator, stateMachinePathHash));
			}
		}

		public IObservable<OnStateMachineInfo> OnStateMachineExitAsObservable()
		{
			if (onStateMachineExit == null)
			{
				onStateMachineExit = new Subject<OnStateMachineInfo>();
			}
			return onStateMachineExit;
		}
	}
}
