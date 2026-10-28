using UnityEngine;

namespace Utilities
{

public class AnimatorBehaviourPlayFxOnEnterState : StateMachineBehaviour
{
	public enum TriggerPosition
	{
		OnEnter,
		OnExit
	}

	private AnimatorStateBehaviourReferences _references;

	public TriggerPosition triggerPosition;

	public AudioClip sfxEnter;

	public float sfxVolume;

	public int sfxIndex;

	public int vfxIndex;

	public override void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	public override void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
	{
	}

	private void TriggerFx(Animator animator)
	{
	}
}
}
