using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities;

public class DraggableRigidbody2DJointFeedback : MonoBehaviour
{
	public DraggableRigidbody2DJoint draggableObject;

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

	private float _lastCollideSpeedAtHitPoint;

	private void Start()
	{
	}

	private void OnStartDrag(DraggableRigidbody2DJoint body)
	{
	}

	private void OnEndDrag(DraggableRigidbody2DJoint body)
	{
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
	}
}
