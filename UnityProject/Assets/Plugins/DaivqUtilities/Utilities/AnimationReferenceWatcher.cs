using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Utilities
{

[ExecuteAlways]
public class AnimationReferenceWatcher : MonoBehaviour
{
	[SerializeField]
	private AnimationClip animationClip;

	private AnimationClip previousClip;

	private PlayableGraph graph;

	private AnimationPlayableOutput output;

	private void OnValidate()
	{
	}

	private void BuildGraph()
	{
	}

	private void OnDisable()
	{
	}
}
}
