using UnityEngine;

namespace Utilities;

public class AdjustVolumeByTouchSpeed : MonoBehaviour
{
	public AudioSource audioSource;

	public bool useViewportSpace;

	public Rect affectArea;

	public float speedMultiplier;

	private Vector2 previousMousePosition;

	public float totalSpeed;

	public AnimationCurve volumeMapCurve;

	[Range(0f, 1f)]
	public float lerpVolume;

	private void OnDisable()
	{
	}

	private void OnEnable()
	{
	}

	private void Update()
	{
	}

	private void OnDrawGizmosSelected()
	{
	}
}
