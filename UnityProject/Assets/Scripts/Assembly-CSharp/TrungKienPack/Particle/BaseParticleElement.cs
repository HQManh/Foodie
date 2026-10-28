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

		public Transform TF
		{
			get
			{
				if (tf == null)
				{
					tf = transform;
				}
				return tf;
			}
		}

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
			if (listPsCanSetColor == null)
			{
				return;
			}
			CacheAuthoredColors();
			for (int i = 0; i < listPsCanSetColor.Count; i++)
			{
				ParticleSystem ps = listPsCanSetColor[i];
				if (ps != null)
				{
					ParticleSystem.MainModule main = ps.main;
					main.startColor = colors;
				}
			}
		}

		public virtual void ResetColor()
		{
			if (_authoredColors == null || listPsCanSetColor == null)
			{
				return;
			}
			int count = Mathf.Min(listPsCanSetColor.Count, _authoredColors.Length);
			for (int i = 0; i < count; i++)
			{
				ParticleSystem ps = listPsCanSetColor[i];
				if (ps != null)
				{
					ParticleSystem.MainModule main = ps.main;
					main.startColor = _authoredColors[i];
				}
			}
		}

		private void CacheAuthoredColors()
		{
			if (_authoredColors != null)
			{
				return;
			}
			if (listPsCanSetColor == null)
			{
				return;
			}
			_authoredColors = new ParticleSystem.MinMaxGradient[listPsCanSetColor.Count];
			for (int i = 0; i < listPsCanSetColor.Count; i++)
			{
				ParticleSystem ps = listPsCanSetColor[i];
				if (ps == null)
				{
					_authoredColors[i] = new ParticleSystem.MinMaxGradient(Color.white);
				}
				else
				{
					ParticleSystem.MainModule main = ps.main;
					_authoredColors[i] = main.startColor;
				}
			}
		}
	}
}
