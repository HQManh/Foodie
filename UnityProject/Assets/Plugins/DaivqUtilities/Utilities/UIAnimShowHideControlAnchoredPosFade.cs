using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace Utilities
{

public class UIAnimShowHideControlAnchoredPosFade : UIAnimShowHideControl
{
	[Serializable]
	public class StateConfig
	{
		public Vector2 anchoredPos;

		public Vector3 rotateAngle;

		public float alpha;

		public float duration;

		public Ease easeMove;

		public Ease easeRotate;

		public Ease easeAlpha;
	}

	[CompilerGenerated]
	private sealed class _003CIEHide_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAnimShowHideControlAnchoredPosFade _003C_003E4__this;

		private Vector2 _003CanchorePosStart_003E5__2;

		private Vector3 _003CrotateAngleStart_003E5__3;

		private float _003CalphaStart_003E5__4;

		private float _003CtimeStart_003E5__5;

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
		public _003CIEHide_003Ed__8(int _003C_003E1__state)
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
	private sealed class _003CIEShow_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAnimShowHideControlAnchoredPosFade _003C_003E4__this;

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
		public _003CIEShow_003Ed__7(int _003C_003E1__state)
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
	private RectTransform _frame;

	[SerializeField]
	private CanvasGroup _alphaGroup;

	[Header("State")]
	[SerializeField]
	private StateConfig _stateShow;

	[SerializeField]
	private StateConfig _stateHide;

	public override void HideImmediate()
	{
	}

	public override void ShowImmediate()
	{
	}

	[IteratorStateMachine(typeof(_003CIEShow_003Ed__7))]
	protected override IEnumerator IEShow()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEHide_003Ed__8))]
	protected override IEnumerator IEHide()
	{
		return null;
	}

	private void ApplyState(StateConfig state)
	{
	}
}
}
