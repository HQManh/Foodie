using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder;
using UnityEngine;
using Utilities;

namespace TrungKienPack
{
	public class TKAudioManager : MonoSingleton<TKAudioManager>
	{
		[CompilerGenerated]
		private sealed class _003CIEDespawn_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public AudioSource element;

			public TKAudioManager _003C_003E4__this;

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
			public _003CIEDespawn_003Ed__7(int _003C_003E1__state)
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

		private Transform tf;

		[SerializeField]
		private AudioManagerCakeOrder.AudioTrack audioTrack;

		private Queue<AudioSource> queueInActive;

		private HashSet<AudioSource> hstActive;

		public Transform TF => null;

		public AudioSource Play(AudioClip sfx, float volume = 1f, bool loop = false)
		{
			return null;
		}

		[IteratorStateMachine(typeof(_003CIEDespawn_003Ed__7))]
		private IEnumerator IEDespawn(AudioSource element)
		{
			return null;
		}

		public void DeSpawn(AudioSource element)
		{
		}
	}
}
