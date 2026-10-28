using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.Home.Journey;

public class UIJourneyProgressBar : MonoBehaviour
{
	[Tooltip("The visible bar art. It is stretched PAST this component's own rect at both ends - see _overshoot below - so it is not the thing level positions are measured against.")]
	[SerializeField]
	private RectTransform _rectTrack;

	[Tooltip("Image Type = Sliced. Anchored to the bottom of the track with pivot Y 0 - the fill grows by height, not by fillAmount.")]
	[SerializeField]
	private Image _imgFill;

	[Header("Overshoot")]
	[Tooltip("Extra track length below the chapter's first level. Tucks the sprite's rounded bottom cap behind this chapter's own card. Must clear the cap: the 9-slice border is 48px.")]
	[SerializeField]
	private float _overshootBottom;

	[Tooltip("Extra track length above the chapter's last level. Tucks the rounded top cap behind the NEXT chapter's card, which is drawn over it.")]
	[SerializeField]
	private float _overshootTop;

	private static readonly Vector3[] TrackCorners;

	public float FillAmount { get; private set; }

	public float WorldCenterX => 0f;

	public void ApplyTrackOvershoot()
	{
	}

	public void SetFillAtWorldY(float worldY)
	{
	}

	public void SetFillNormalized(float normalized)
	{
	}
}
