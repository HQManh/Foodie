using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities;

public class PlayFxRepeatly : MonoBehaviour
{
	public AudioSource audioSource;

	public Vector2 delayRange;

	public Vector2 intervalRange;

	public ParticleSystem vfx;

	public ParticleSystem vfxLoop;

	public AudioClip clip;

	public float volume;

	public HapticTypes haptic;

	public bool isUseScaledTime;

	public int numLoop;

	private float _nextTimePlay;

	private int _countLoop;

	private float CurrentTime => 0f;

	public void Play()
	{
	}

	public void Stop()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	public void Trigger()
	{
	}

	private void Update()
	{
	}
}
