using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities;

public class PlayFxOnTransformMove : MonoBehaviour
{
	public Transform target;

	public float deltaDistanceTriggerFx;

	private float _deltaDistance;

	private Vector3 _lastPosition;

	public ParticleSystem vfx;

	public AudioSource audioSource;

	public AudioClip sfx;

	public Vector2 sfxRandomPitch;

	public HapticTypes haptic;

	private void OnEnable()
	{
	}

	private void Update()
	{
	}
}
