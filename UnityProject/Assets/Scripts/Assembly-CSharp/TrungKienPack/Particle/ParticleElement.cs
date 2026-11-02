using CakeOrder;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace TrungKienPack.Particle
{
	public class ParticleElement : BaseParticleElement
	{
		[CompilerGenerated]
		private sealed class _003CIEPlay_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public ParticleElement _003C_003E4__this;

			public float volume;

			public Action actionDone;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003CIEPlay_003Ed__5(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				if (_003C_003E1__state == 0)
				{
					_003C_003E1__state = -1;
					ParticleElement owner = _003C_003E4__this;
					owner.ps.Play();
					if (volume > 0f)
					{
						if (owner.sfx != null && AudioManagerCakeOrder.Instance != null)
						{
							AudioManagerCakeOrder.Instance.PlaySfxWithFixedPitch(owner.sfx, (AudioManagerCakeOrder.AudioTrack)4, volume, 1f);
						}
					}
					_003C_003E2__current = new WaitUntil(() => !owner.ps.isPlaying);
					_003C_003E1__state = 1;
					return true;
				}
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -1;
					if (actionDone != null)
					{
						actionDone();
					}
				}
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
				throw new NotSupportedException();
			}
		}

		[SerializeField]
		private ParticleSystem ps;

		[SerializeField]
		private AudioClip sfx;

		public void Play()
		{
			Play(null, 1f);
		}

		public override void Play(Action actionDone, float volume = 1f)
		{
			StartCoroutine(IEPlay(actionDone, volume));
		}

		public override void Stop()
		{
			StopAllCoroutines();
			if (ps != null)
			{
				ps.Stop(true, ParticleSystemStopBehavior.StopEmitting);
			}
		}

		[IteratorStateMachine(typeof(_003CIEPlay_003Ed__5))]
		private IEnumerator IEPlay(Action actionDone, float volume)
		{
			return new _003CIEPlay_003Ed__5(0)
			{
				_003C_003E4__this = this,
				volume = volume,
				actionDone = actionDone
			};
		}
	}
}
