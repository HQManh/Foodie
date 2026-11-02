using System.Collections;
using UnityEngine;

namespace Utilities
{

public class CrossFadeLoopAudio : MonoBehaviour
{
	public AudioSource audioSource1;

	public AudioSource audioSource2;

	[SerializeField]
	private float fadeDuration;

	[SerializeField]
	private float fadeOutDuration;

	private bool isFading;

	private AudioClip _nextClip;

	private float _nextTargetVolume;

	private MusicTransitionType _nextTransition;

	private Coroutine _corCrossFade;

	// The source that currently carries the music; the other one is the incoming side of a cross-fade.
	private AudioSource _active;

	private float _activeTarget = 1f;

	public float FadeDuration => Mathf.Max(0f, fadeDuration);

	public float FadeOutDuration => Mathf.Max(0f, fadeOutDuration);

	private void Start()
	{
		Prepare(audioSource1);
		Prepare(audioSource2);
	}

	private static void Prepare(AudioSource source)
	{
		if (source != null)
		{
			source.loop = true;
			source.playOnAwake = false;
		}
	}

	public float GetTransitionDuration(MusicTransitionType transition)
	{
		switch (transition)
		{
		case MusicTransitionType.CrossFade:
			return FadeDuration;
		case MusicTransitionType.FadeOutFadeIn:
			return FadeOutDuration + FadeDuration;
		default:
			return 0f;
		}
	}

	public void ChangeMusic(AudioClip newClip, float volume = 1f, MusicTransitionType transition = MusicTransitionType.FadeOutFadeIn)
	{
		if (newClip == null)
		{
			FadeOut();
			return;
		}
		if (audioSource1 == null && audioSource2 == null)
		{
			return;
		}
		_nextClip = newClip;
		_nextTargetVolume = volume;
		_nextTransition = transition;
		if (_corCrossFade != null)
		{
			StopCoroutine(_corCrossFade);
		}
		_corCrossFade = StartCoroutine(TransitionToNewMusic(newClip, volume, transition));
	}

	private AudioSource Other(AudioSource source)
	{
		AudioSource other = source == audioSource1 ? audioSource2 : audioSource1;
		return other != null ? other : source;
	}

	private IEnumerator TransitionToNewMusic(AudioClip newClip, float volume, MusicTransitionType transition)
	{
		isFading = true;
		AudioSource current = _active != null ? _active : audioSource1;
		if (current == null)
		{
			current = audioSource2;
		}
		// Same clip already playing: only retarget the volume.
		if (current.isPlaying && current.clip == newClip)
		{
			_active = current;
			_activeTarget = volume;
			yield return FadeSource(current, current.volume, volume, FadeDuration);
			isFading = false;
			yield break;
		}
		AudioSource incoming = Other(current);
		switch (transition)
		{
		case MusicTransitionType.Instant:
			StopSource(audioSource1);
			StopSource(audioSource2);
			incoming = current;
			incoming.clip = newClip;
			incoming.volume = volume;
			incoming.Play();
			break;
		case MusicTransitionType.CrossFade:
			if (incoming == current)
			{
				goto default;
			}
			incoming.clip = newClip;
			incoming.volume = 0f;
			incoming.Play();
			StartCoroutine(FadeSource(current, current.volume, 0f, FadeDuration, stopAtEnd: true));
			yield return FadeSource(incoming, 0f, volume, FadeDuration);
			break;
		default:
			if (current.isPlaying)
			{
				yield return FadeSource(current, current.volume, 0f, FadeOutDuration, stopAtEnd: true);
			}
			incoming = current;
			incoming.clip = newClip;
			incoming.volume = 0f;
			incoming.Play();
			yield return FadeSource(incoming, 0f, volume, FadeDuration);
			break;
		}
		_active = incoming;
		_activeTarget = volume;
		isFading = false;
		_corCrossFade = null;
	}

	private static void StopSource(AudioSource source)
	{
		if (source != null)
		{
			source.Stop();
			source.volume = 0f;
		}
	}

	private IEnumerator FadeSource(AudioSource source, float from, float to, float duration, bool stopAtEnd = false)
	{
		if (source == null)
		{
			yield break;
		}
		float timer = 0f;
		while (timer < duration)
		{
			timer += Time.unscaledDeltaTime;
			source.volume = Mathf.Lerp(from, to, Mathf.Clamp01(timer / duration));
			yield return null;
		}
		source.volume = to;
		if (stopAtEnd)
		{
			source.Stop();
		}
	}

	public void FadeOut()
	{
		if (_corCrossFade != null)
		{
			StopCoroutine(_corCrossFade);
		}
		_corCrossFade = StartCoroutine(FadeOutCoroutine());
	}

	private IEnumerator FadeOutCoroutine()
	{
		isFading = true;
		float duration = FadeOutDuration;
		float start1 = audioSource1 != null ? audioSource1.volume : 0f;
		float start2 = audioSource2 != null ? audioSource2.volume : 0f;
		float timer = 0f;
		while (timer < duration)
		{
			timer += Time.unscaledDeltaTime;
			float k = 1f - Mathf.Clamp01(timer / duration);
			if (audioSource1 != null)
			{
				audioSource1.volume = start1 * k;
			}
			if (audioSource2 != null)
			{
				audioSource2.volume = start2 * k;
			}
			yield return null;
		}
		StopSource(audioSource1);
		StopSource(audioSource2);
		_active = null;
		isFading = false;
		_corCrossFade = null;
	}
}
}
