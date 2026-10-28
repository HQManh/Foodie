using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class SoundControl : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CIEPlayFX_003Ed__13<T> : IEnumerator<object>, IEnumerator, IDisposable where T : Enum
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public float delay;

			public SoundControl _003C_003E4__this;

			public T t;

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
			public _003CIEPlayFX_003Ed__13(int _003C_003E1__state)
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

		private static SoundControl ins;

		private Dictionary<AudioClip, AudioSource> sources = new Dictionary<AudioClip, AudioSource>();

		[SerializeField]
		private AudioClip[] audioClips;

		private bool isTurnOn = true;

		private float time;

		public static SoundControl Ins
		{
			get
			{
				// TODO(unrecovered): when the static ins is null, an unnamed lookup helper (FUN_04c34c64) assigns it; the helper has no stub equivalent.
				return ins;
			}
		}

		private void Awake()
		{
			sources.Clear();
			time = Time.time;
		}

		private void OnDestroy()
		{
		}

		public void PlayFX<T>(T t, bool loop = false) where T : Enum
		{
		}

		public void PlayFX<T>(T t, float delay) where T : Enum
		{
		}

		public bool IsPlaying<T>(T t)
		{
			return false;
		}

		public void StopFX<T>(T t) where T : Enum
		{
		}

		[IteratorStateMachine(typeof(_003CIEPlayFX_003Ed__13<>))]
		private IEnumerator IEPlayFX<T>(T t, float delay) where T : Enum
		{
			return null;
		}

		public void PlayFX(AudioClip clip, bool loop = false)
		{
			if (!isTurnOn)
			{
				return;
			}
			if (Time.time <= time + 0.2f)
			{
				return;
			}
			if (!sources.ContainsKey(clip) || sources[clip] == null)
			{
				AudioSource source = gameObject.AddComponent<AudioSource>();
				sources[clip] = source;
				source.loop = loop;
				source.clip = clip;
			}
			if (sources[clip] != null)
			{
				sources[clip].Play();
			}
		}

		private void TurnOnFx(bool turnOn)
		{
			isTurnOn = turnOn;
		}
	}
}
