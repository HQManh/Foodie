using DG.Tweening;
using UnityEngine;

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
		}

		private void LateUpdate()
		{
		}

		public void Play(AudioClip clip, float animationStartTime, float sfxStartTime, float animationRate = 1f)
		{
		}

		public void SetPaused(bool value)
		{
		}

		public void Stop()
		{
		}

		public void ResetState()
		{
		}

		private void StartAudio(AudioClip clip, float offset)
		{
		}

		private float GetAudioRate()
		{
			return 0f;
		}

		private void OnDisable()
		{
		}

		private void OnDestroy()
		{
		}
	}
}
