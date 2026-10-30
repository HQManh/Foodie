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

	public AlertType Type => type;

	public bool IsShowing => _running;

	public event Action<UIAlertBoard> onExpired;

	public void Show(bool autoHide = true)
	{
		_autoHide = autoHide;
		_running = true;
		base.gameObject.SetActive(true);
		if (_animShowHide != null)
		{
			_animShowHide.Show();
		}
		if (sfxShow != null)
		{
			Camera cam = Camera.main;
			AudioSource.PlayClipAtPoint(sfxShow, (cam != null) ? cam.transform.position : Vector3.zero);
		}
		if (base.gameObject.activeInHierarchy)
		{
			StartRoutines();
		}
	}

	public void Hide()
	{
		if (!_running)
		{
			return;
		}
		_running = false;
		StopRoutines();
		if (text != null)
		{
			text.SetActive(true);
		}
		if (_animShowHide != null && base.gameObject.activeInHierarchy)
		{
			_animShowHide.Hide(delegate
			{
				if (!_running)
				{
					base.gameObject.SetActive(false);
				}
			});
		}
		else
		{
			base.gameObject.SetActive(false);
		}
	}

	private void OnEnable()
	{
		if (_running)
		{
			StartRoutines();
		}
	}

	private void OnDisable()
	{
		StopRoutines();
	}

	private void StartRoutines()
	{
		StopRoutines();
		if (blinkInterval > 0f && text != null)
		{
			_blink = StartCoroutine(BlinkRoutine());
		}
		if (_autoHide && lifetime > 0f)
		{
			_lifetime = StartCoroutine(LifetimeRoutine());
		}
	}

	private void StopRoutines()
	{
		if (_blink != null)
		{
			StopCoroutine(_blink);
			_blink = null;
		}
		if (_lifetime != null)
		{
			StopCoroutine(_lifetime);
			_lifetime = null;
		}
	}

	private IEnumerator BlinkRoutine()
	{
		WaitForSecondsRealtime wait = new WaitForSecondsRealtime(blinkInterval);
		while (true)
		{
			text.SetActive(!text.activeSelf);
			yield return wait;
		}
	}

	private IEnumerator LifetimeRoutine()
	{
		yield return new WaitForSecondsRealtime(lifetime);
		_lifetime = null;
		Hide();
		this.onExpired?.Invoke(this);
	}
}
}
