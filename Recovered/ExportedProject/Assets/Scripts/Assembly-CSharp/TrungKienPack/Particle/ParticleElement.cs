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
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CIEPlay_003Ed__5(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
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
			}
		}

		[SerializeField]
		private ParticleSystem ps;

		[SerializeField]
		private AudioClip sfx;

		public void Play()
		{
		}

		public override void Play(Action actionDone, float volume = 1f)
		{
		}

		public override void Stop()
		{
		}

		[IteratorStateMachine(typeof(_003CIEPlay_003Ed__5))]
		private IEnumerator IEPlay(Action actionDone, float volume)
		{
			return null;
		}
	}
}
