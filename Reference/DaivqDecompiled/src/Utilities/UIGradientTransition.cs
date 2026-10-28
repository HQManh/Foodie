using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI.Extensions;

namespace Utilities;

public class UIGradientTransition : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIEChangeBackgroundGradient_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIGradientTransition _003C_003E4__this;

		private CanvasGroup _003CcanvasGroupBack_003E5__2;

		private CanvasGroup _003CcanvasGroupFront_003E5__3;

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
		public _003CIEChangeBackgroundGradient_003Ed__14(int _003C_003E1__state)
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
	private Gradient2 _imgBack;

	[SerializeField]
	private Gradient2 _imgFront;

	public float durationChangeBackground;

	private const int MaxGradientKeys = 8;

	private float _tweenProgress;

	private Coroutine _changeBackgroundCoroutine;

	private Gradient _backGradient;

	private Gradient _frontGradient;

	public void SetGradientImmediate(Gradient gradient)
	{
	}

	private void EnsureOwnGradients()
	{
	}

	private static Gradient CloneGradient(Gradient source)
	{
		return null;
	}

	private static void CopyGradient(Gradient source, Gradient target)
	{
	}

	private static void BakeBlend(Gradient back, Gradient front, float progress, Gradient target)
	{
	}

	public void ChangeBackgroundGradient(Gradient gradient)
	{
	}

	[IteratorStateMachine(typeof(_003CIEChangeBackgroundGradient_003Ed__14))]
	private IEnumerator IEChangeBackgroundGradient()
	{
		return null;
	}

	private void OnDisable()
	{
	}
}
