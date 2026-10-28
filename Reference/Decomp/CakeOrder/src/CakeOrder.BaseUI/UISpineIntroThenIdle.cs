using Spine.Unity;
using UnityEngine;

namespace CakeOrder.BaseUI;

public class UISpineIntroThenIdle : MonoBehaviour
{
	[Tooltip("Left empty the one on this object is used.")]
	[SerializeField]
	private SkeletonGraphic _skeletonGraphic;

	[Tooltip("Played once when this object is switched on.")]
	[SerializeField]
	private string _animIntro;

	[Tooltip("Looped after the intro. Leave empty to stop on the intro's last frame.")]
	[SerializeField]
	private string _animIdle;

	[Tooltip("Cross-fade from the intro into the idle. 0 cuts straight over, which is what an intro that already ends on the idle pose wants.")]
	[SerializeField]
	private float _mixIntroToIdle;

	[Tooltip("Off, the intro plays only the first time this object is switched on and later openings start straight on the idle.")]
	[SerializeField]
	private bool _playIntroEveryTime;

	private bool _hasPlayedIntro;

	private void Reset()
	{
	}

	private void OnEnable()
	{
	}

	public void Play()
	{
	}

	private bool HasAnimation(string animName)
	{
		return false;
	}
}
