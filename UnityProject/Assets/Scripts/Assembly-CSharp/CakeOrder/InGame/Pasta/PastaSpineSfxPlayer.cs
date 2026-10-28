using CakeOrder;
using DG.Tweening;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame.Pasta
{
	[DisallowMultipleComponent]
	[RequireComponent(typeof(AudioSource))]
	public sealed class PastaSpineSfxPlayer : MonoBehaviour
	{
		private const float MinPlaybackRate = 0.01f;

		private AudioSource source;

		private Tween pending;

		private AudioClip activeClip;

		private float playbackRate;

		private bool paused;

		private bool resumeSource;

		private void Awake()
		{
			source = GetComponent<AudioSource>();
			if (source != null)
			{
				source.playOnAwake = false;
				source.loop = false;
				source.spatialBlend = 0f;
			}
		}

		private void LateUpdate()
		{
			if (source == null || source.clip == null)
			{
				return;
			}
			source.pitch = GetAudioRate();
		}

		public void Play(AudioClip clip, float animationStartTime, float sfxStartTime, float animationRate = 1f)
		{
			Stop();
			if (clip == null)
			{
				return;
			}
			float rate = Mathf.Max(MinPlaybackRate, animationRate);
			float sfxAt = Mathf.Max(0f, sfxStartTime);
			float animAt = Mathf.Max(0f, animationStartTime);
			playbackRate = rate;
			float delay = sfxAt - animAt;
			if (delay <= 0f)
			{
				StartAudio(clip, -delay);
				return;
			}
			pending = DOVirtual.DelayedCall(delay / rate, () => StartAudio(clip, 0f)).SetTarget(this);
			if (paused)
			{
				pending.Pause();
			}
		}

		public void SetPaused(bool value)
		{
			if (paused == value)
			{
				return;
			}
			paused = value;
			if (pending != null && pending.IsActive())
			{
				if (paused)
				{
					pending.Pause();
				}
				else
				{
					pending.Play();
				}
			}
			if (paused)
			{
				if (source != null)
				{
					resumeSource = source.isPlaying;
					if (resumeSource)
					{
						source.Pause();
					}
				}
			}
			else if (resumeSource)
			{
				if (source != null && source.clip == activeClip)
				{
					resumeSource = false;
					source.UnPause();
				}
			}
		}

		public void Stop()
		{
			if (pending != null)
			{
				pending.Kill();
			}
			pending = null;
			activeClip = null;
			resumeSource = false;
			if (source != null)
			{
				source.Stop();
				source.clip = null;
			}
		}

		public void ResetState()
		{
			Stop();
			paused = false;
			playbackRate = 1f;
		}

		private void StartAudio(AudioClip clip, float offset)
		{
			pending = null;
			if (clip == null || clip.length <= offset)
			{
				return;
			}
			if (source == null)
			{
				source = GetComponent<AudioSource>();
			}
			if (source == null)
			{
				return;
			}
			if (MonoSingleton<AudioManagerCakeOrder>.HasInstance)
			{
				MonoSingleton<AudioManagerCakeOrder>.Instance.RegisterAudioSource(source, (AudioManagerCakeOrder.AudioTrack)5);
			}
			activeClip = clip;
			source.Stop();
			source.clip = clip;
			source.pitch = GetAudioRate();
			float maxTime = Mathf.Max(0f, clip.length - 0.001f);
			source.time = offset >= 0f ? Mathf.Min(offset, maxTime) : 0f;
			source.Play();
			if (!paused)
			{
				return;
			}
			resumeSource = true;
			source.Pause();
		}

		private float GetAudioRate()
		{
			float rate = 1f;
			if (MonoSingleton<AudioManagerCakeOrder>.HasInstance)
			{
				rate = MonoSingleton<AudioManagerCakeOrder>.Instance.SpeedFor((AudioManagerCakeOrder.AudioTrack)5);
			}
			rate *= playbackRate;
			return Mathf.Max(0f, rate);
		}

		private void OnDisable()
		{
			Stop();
		}

		private void OnDestroy()
		{
			Stop();
		}
	}
}
