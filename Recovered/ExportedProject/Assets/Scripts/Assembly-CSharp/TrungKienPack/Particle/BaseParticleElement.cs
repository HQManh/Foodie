using System;
using System.Collections.Generic;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public abstract class BaseParticleElement : MonoBehaviour, IPoolingElement
	{
		[SerializeField]
		protected List<ParticleSystem> listPsCanSetColor;

		private ParticleSystem.MinMaxGradient[] _authoredColors;

		private Transform tf;

		public Transform TF => null;

		public int InstanceID { get; set; }

		public void PoolSetup()
		{
		}

		public abstract void Play(Action actionDone, float volume = 1f);

		public virtual void Stop()
		{
		}

		public virtual void InitColor(ParticleSystem.MinMaxGradient colors)
		{
		}

		public virtual void ResetColor()
		{
		}

		private void CacheAuthoredColors()
		{
		}
	}
}
