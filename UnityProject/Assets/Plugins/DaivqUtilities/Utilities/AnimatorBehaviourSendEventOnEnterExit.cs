using UnityEngine;

namespace Utilities
{

public class AnimatorBehaviourSendEventOnEnterExit : StateMachineBehaviour
{
	public enum TriggerPosition
	{
		OnEnter,
		OnExit
	}

	private AnimatorStateBehaviourReferences _references;

	public bool sendEventOnEnter;

	public bool sendEventOnExit;

	public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}
}
}
