using Spine;
using Spine.Unity;
using UnityEngine;

namespace CakeOrder.BaseUI;

public class UITabIconSpineState : MonoBehaviour
{
	[Tooltip("Tab whose selection drives this icon. Left empty the nearest one above is used.")]
	[SerializeField]
	private UIElementWithAnimHighlight _tab;

	[Tooltip("Left empty the one on this object is used.")]
	[SerializeField]
	private SkeletonGraphic _skeletonGraphic;

	[Tooltip("Held while another tab is selected.")]
	[SerializeField]
	private string _animNormal;

	[Tooltip("Played once the moment this tab is selected. Leave empty to go straight to the loop.")]
	[SerializeField]
	private string _animSelectedIntro;

	[Tooltip("Looped while this tab stays selected.")]
	[SerializeField]
	private string _animSelected;

	[Tooltip("Cross-fade between the three clips. They do not start and end on the same pose - the shop icon steps about 9px and the map star jumps scale - so a straight cut snaps. 0.2 is what the skeleton assets themselves carry as their default mix.")]
	[SerializeField]
	[Range(0f, 0.5f)]
	private float _mixDuration;

	private UIElementWithAnimHighlight.HighlightState? _applied;

	private void Reset()
	{
	}

	private void OnEnable()
	{
	}

	private void Update()
	{
	}

	private void PlaySelected(AnimationState animState)
	{
	}

	private void PlayNormal(AnimationState animState)
	{
	}

	private bool HasAnimation(string animName)
	{
		return false;
	}
}
