using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace Utilities;

public class UIAnimShowHideControlFadeSpriteRenderer : UIAnimShowHideControl
{
	[CompilerGenerated]
	private sealed class _003CIEHide_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAnimShowHideControlFadeSpriteRenderer _003C_003E4__this;

		private float _003CtimeStart_003E5__2;

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
		public _003CIEHide_003Ed__10(int _003C_003E1__state)
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
	private sealed class _003CIEShow_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAnimShowHideControlFadeSpriteRenderer _003C_003E4__this;

		private float _003CtimeStart_003E5__2;

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
		public _003CIEShow_003Ed__9(int _003C_003E1__state)
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

	[Header("Ref")]
	[SerializeField]
	private SpriteRenderer[] _spriteRenderers;

	[SerializeField]
	private float _alphaHide;

	[SerializeField]
	private float _alphaNormal;

	private const Ease _easeShow = 6;

	private const Ease _easeHide = 6;

	[SerializeField]
	private float _durationShow;

	[SerializeField]
	private float _durationHide;

	public override void HideImmediate()
	{
	}

	public override void ShowImmediate()
	{
	}

	[IteratorStateMachine(typeof(_003CIEShow_003Ed__9))]
	protected override IEnumerator IEShow()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEHide_003Ed__10))]
	protected override IEnumerator IEHide()
	{
		return null;
	}

	private void SetAlpha(float alpha)
	{
	}
}
