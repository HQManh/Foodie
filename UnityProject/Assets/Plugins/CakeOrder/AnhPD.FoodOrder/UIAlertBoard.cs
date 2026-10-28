using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{

public class UIAlertBoard : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CBlinkRoutine_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAlertBoard _003C_003E4__this;

		private WaitForSecondsRealtime _003Cwait_003E5__2;

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
		public _003CBlinkRoutine_003Ed__23(int _003C_003E1__state)
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
	private sealed class _003CLifetimeRoutine_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAlertBoard _003C_003E4__this;

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
		public _003CLifetimeRoutine_003Ed__24(int _003C_003E1__state)
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
	private UIAnimShowHideControl _animShowHide;

	[SerializeField]
	private AlertType type;

	[SerializeField]
	private GameObject text;

	[Tooltip("Giây trước khi board tự tắt. <= 0 = ở lại cho tới khi có lệnh tắt.")]
	[SerializeField]
	private float lifetime;

	[Tooltip("Nhịp bật/tắt text. <= 0 = không nhấp nháy.")]
	[SerializeField]
	private float blinkInterval;

	[Tooltip("Phát khi board bật lên. Trống = không phát.")]
	[SerializeField]
	private AudioClip sfxShow;

	private Coroutine _blink;

	private Coroutine _lifetime;

	private bool _running;

	private bool _autoHide;

	public AlertType Type => AlertType.Hard;

	public bool IsShowing => false;

	public event Action<UIAlertBoard> onExpired;

	public void Show(bool autoHide = true)
	{
	}

	public void Hide()
	{
	}

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	private void StartRoutines()
	{
	}

	private void StopRoutines()
	{
	}

	[IteratorStateMachine(typeof(_003CBlinkRoutine_003Ed__23))]
	private IEnumerator BlinkRoutine()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CLifetimeRoutine_003Ed__24))]
	private IEnumerator LifetimeRoutine()
	{
		return null;
	}
}
}
