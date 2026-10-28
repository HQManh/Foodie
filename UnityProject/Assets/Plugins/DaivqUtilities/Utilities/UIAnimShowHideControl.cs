using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities
{

public abstract class UIAnimShowHideControl : MonoBehaviour
{
	public enum State
	{
		None,
		Showing,
		Shown,
		Hiding,
		Hidden
	}

	[Serializable]
	public class LinkedAnimPlayData
	{
		public UIAnimShowHideControl uiAnim;

		public float delay;

		public bool isCountInShowTime;
	}

	[CompilerGenerated]
	private sealed class _003CIEHideWithLinkedUI_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public UIAnimShowHideControl _003C_003E4__this;

		public Action onDoneAnim;

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
		public _003CIEHideWithLinkedUI_003Ed__21(int _003C_003E1__state)
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
	private sealed class _003CIEShowWithLinkedUI_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public UIAnimShowHideControl _003C_003E4__this;

		public Action onDoneAnim;

		private bool _003CisAllDone_003E5__2;

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
		public _003CIEShowWithLinkedUI_003Ed__17(int _003C_003E1__state)
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

	private Coroutine _corTransition;

	[Header("State")]
	[SerializeField]
	private MonoBehaviour[] _componentEnableOnDoneShow;

	[SerializeField]
	private bool _setActiveObject;

	[Header("Link Anim")]
	[SerializeField]
	private LinkedAnimPlayData[] _animPlayOnShowAnimStart;

	[SerializeField]
	private LinkedAnimPlayData[] _animPlayOnShowAnimDone;

	private List<UIAnimShowHideControl> _listAnimsNeedWait = new List<UIAnimShowHideControl>();

	private bool _needShowImmediateOnEnable;

	public State CurrentState { get; private set; }

	public bool IsShownOrShowing => false;

	public virtual void ShowImmediate()
	{
	}

	public virtual void Show(Action onDoneAnim = null, float delay = 0f)
	{
	}

	[IteratorStateMachine(typeof(_003CIEShowWithLinkedUI_003Ed__17))]
	private IEnumerator IEShowWithLinkedUI(Action onDoneAnim, float delay)
	{
		return null;
	}

	protected abstract IEnumerator IEShow();

	public virtual void HideImmediate()
	{
	}

	public virtual void Hide(Action onDoneAnim = null, float delay = 0f)
	{
	}

	[IteratorStateMachine(typeof(_003CIEHideWithLinkedUI_003Ed__21))]
	private IEnumerator IEHideWithLinkedUI(Action onDoneAnim, float delay)
	{
		return null;
	}

	protected abstract IEnumerator IEHide();

	protected virtual void OnEnable()
	{
	}

	protected virtual void OnDisable()
	{
	}
}
}
