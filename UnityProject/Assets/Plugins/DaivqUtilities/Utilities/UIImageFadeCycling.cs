using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities
{

public class UIImageFadeCycling : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CCycleImages_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIImageFadeCycling _003C_003E4__this;

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
		public _003CCycleImages_003Ed__11(int _003C_003E1__state)
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
	private sealed class _003CFadeIn_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Image image;

		public UIImageFadeCycling _003C_003E4__this;

		private float _003CelapsedTime_003E5__2;

		private Color _003Ccolor_003E5__3;

		private float _003CstartAlpha_003E5__4;

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
		public _003CFadeIn_003Ed__13(int _003C_003E1__state)
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
	private sealed class _003CFadeOut_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Image image;

		public UIImageFadeCycling _003C_003E4__this;

		private float _003CelapsedTime_003E5__2;

		private Color _003Ccolor_003E5__3;

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
		public _003CFadeOut_003Ed__12(int _003C_003E1__state)
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
	private float fadeInDuration;

	[SerializeField]
	private float fadeOutDuration;

	[SerializeField]
	private float interval;

	[SerializeField]
	private Sprite[] sprites;

	[SerializeField]
	private Image imgBack;

	[SerializeField]
	private Image imgFront;

	[SerializeField]
	private bool isUseTimeScale;

	[SerializeField]
	private bool fadeConcurrently;

	[SerializeField]
	private int startIndex;

	private int _currentIndex;

	private Coroutine _corCycling;

	[IteratorStateMachine(typeof(_003CCycleImages_003Ed__11))]
	private IEnumerator CycleImages()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CFadeOut_003Ed__12))]
	private IEnumerator FadeOut(Image image)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CFadeIn_003Ed__13))]
	private IEnumerator FadeIn(Image image)
	{
		return null;
	}

	private void OnDestroy()
	{
	}

	private void OnDisable()
	{
	}

	private void OnEnable()
	{
	}
}
}
