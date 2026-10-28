using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities;

public class DraggableObjectFeedback : MonoBehaviour
{
	public DraggableRigidbody2D box;

	public AudioSource audioSource;

	public AudioClip sfxStartDrag;

	public float sfxStartDragVolumeScale;

	public AudioClip sfxEndDrag;

	[ValueCurve(true, true)]
	public AnimationCurve sfxEndDragVolumeBySpeed;

	public HapticTypes hapticStartDrag;

	public HapticTypes hapticEndDrag;

	public AudioClip sfxCollide;

	public float[] collideSpeedStartTriggerHaptics;

	public HapticTypes[] hapticCollides;

	[ValueCurve(true, true)]
	public AnimationCurve collideSpeedToVolumeMul;

	public Vector2 sfxCollideRandomPitch;

	private float _lastCollideSpeedAtHitPoint;

	private void Start()
	{
	}

	private void OnStartDrag()
	{
	}

	private void OnEndDrag()
	{
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
	}
}
