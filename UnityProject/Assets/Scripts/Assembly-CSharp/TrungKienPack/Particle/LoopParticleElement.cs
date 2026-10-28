using System;
using UnityEngine;
using UnityEngine.Events;

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
				// TODO(unrecovered): the sfx is played through TKAudioManager.Play(sfx, volume), reached via an unnamed static chain (DAT_091b4d28 + 0x20 -> +0xc0 -> +0x10 -> +0xb8) that is not in the stubs.
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
