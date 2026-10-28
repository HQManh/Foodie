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
		private float delayEnd;

		public void Play()
		{
		}

		public override void Play(Action actionDone, float volume = 1f)
		{
		}

		public override void Stop()
		{
		}

		private void End()
		{
		}
	}
}
