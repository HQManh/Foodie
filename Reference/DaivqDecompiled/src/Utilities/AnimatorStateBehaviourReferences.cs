using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public class AnimatorStateBehaviourReferences : MonoBehaviour
{
	public delegate void StateEventDelegate(StateMachineBehaviour stateMachineBehaviour, AnimatorStateInfo stateInfo);

	public AudioSource audioSource;

	public AudioClip[] sfxs;

	public ParticleSystem[] vfxs;

	public event StateEventDelegate onEnterState
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public event StateEventDelegate onExitState
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	public void TriggerEventEnterState(StateMachineBehaviour stateMachineBehaviour, AnimatorStateInfo stateInfo)
	{
	}

	public void TriggerEventExitState(StateMachineBehaviour stateMachineBehaviour, AnimatorStateInfo stateInfo)
	{
	}
}
