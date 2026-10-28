using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public class CrossFadeLoopAudio : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CFadeOutCoroutine_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CrossFadeLoopAudio _003C_003E4__this;

		private float _003Ctimer_003E5__2;

		private float _003CstartVolume1_003E5__3;

		private float _003CstartVolume2_003E5__4;

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
		public _003CFadeOutCoroutine_003Ed__19(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CFadeSource_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float duration;

		public AudioSource source;

		public float to;

		public float from;

		private float _003Ctimer_003E5__2;

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
		public _003CFadeSource_003Ed__17(int _003C_003E1__state)
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

	[CompilerGenerated]
	private sealed class _003CTransitionToNewMusic_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public CrossFadeLoopAudio _003C_003E4__this;

		public MusicTransitionType transition;

		public AudioClip newClip;

		public float volume;

		private float _003Ctimer_003E5__2;

		private float _003CstartVolume1_003E5__3;

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
		public _003CTransitionToNewMusic_003Ed__16(int _003C_003E1__state)
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

	public AudioSource audioSource1;

	public AudioSource audioSource2;

	[SerializeField]
	private float fadeDuration;

	[SerializeField]
	private float fadeOutDuration;

	private bool isFading;

	private AudioClip _nextClip;

	private float _nextTargetVolume;

	private MusicTransitionType _nextTransition;

	private Coroutine _corCrossFade;

	public float FadeDuration => 0f;

	public float FadeOutDuration => 0f;

	private void Start()
	{
	}

	public float GetTransitionDuration(MusicTransitionType transition)
	{
		return 0f;
	}

	public void ChangeMusic(AudioClip newClip, float volume = 1f, MusicTransitionType transition = MusicTransitionType.FadeOutFadeIn)
	{
	}

	[IteratorStateMachine(typeof(_003CTransitionToNewMusic_003Ed__16))]
	private IEnumerator TransitionToNewMusic(AudioClip newClip, float volume, MusicTransitionType transition)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CFadeSource_003Ed__17))]
	private IEnumerator FadeSource(AudioSource source, float from, float to, float duration)
	{
		return null;
	}

	public void FadeOut()
	{
	}

	[IteratorStateMachine(typeof(_003CFadeOutCoroutine_003Ed__19))]
	private IEnumerator FadeOutCoroutine()
	{
		return null;
	}
}
