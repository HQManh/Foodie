using System;
using UnityEngine;
using UnityEngine.Events;
using Utilities;

namespace TrungKienPack.Particle
{
	public class LoopParticleElement : BaseParticleElement
	{
		[SerializeField]
		private UnityEvent eventStart;

		[SerializeField]
		private UnityEvent eventStop;

		[SerializeField]
		private AudioClip sfx;

		private Action actionEnd;

		[SerializeField]
		private float delayEnd = 1f;

		public void Play()
		{
			Play(null, 1f);
		}

		public override void Play(Action actionDone, float volume = 1f)
		{
			CancelInvoke(nameof(End));
			if (volume > 0f)
			{
				if (sfx != null && MonoSingleton<TKAudioManager>.HasInstance)
				{
					MonoSingleton<TKAudioManager>.Instance.Play(sfx, volume);
				}
			}
			if (eventStart != null)
			{
				eventStart.Invoke();
			}
			actionEnd = actionDone;
		}

		public override void Stop()
		{
			if (eventStop != null)
			{
				eventStop.Invoke();
			}
			Invoke(nameof(End), delayEnd);
		}

		private void End()
		{
			if (actionEnd != null)
			{
				actionEnd();
			}
		}
	}
}
