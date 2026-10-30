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

	public bool IsShownOrShowing => CurrentState == State.Showing || CurrentState == State.Shown;

	public virtual void ShowImmediate()
	{
		StopTransition();
		if (_setActiveObject)
		{
			base.gameObject.SetActive(true);
		}
		_needShowImmediateOnEnable = !base.gameObject.activeInHierarchy;
		CurrentState = State.Shown;
		SetComponentsEnabled(true);
		PlayLinkedImmediate(_animPlayOnShowAnimStart);
		PlayLinkedImmediate(_animPlayOnShowAnimDone);
	}

	public virtual void Show(Action onDoneAnim = null, float delay = 0f)
	{
		StopTransition();
		if (_setActiveObject)
		{
			base.gameObject.SetActive(true);
		}
		if (!isActiveAndEnabled)
		{
			ShowImmediate();
			onDoneAnim?.Invoke();
			return;
		}
		CurrentState = State.Showing;
		_corTransition = StartCoroutine(IEShowWithLinkedUI(onDoneAnim, delay));
	}

	private IEnumerator IEShowWithLinkedUI(Action onDoneAnim, float delay)
	{
		if (delay > 0f)
		{
			yield return new WaitForSecondsRealtime(delay);
		}
		_listAnimsNeedWait.Clear();
		PlayLinked(_animPlayOnShowAnimStart);
		IEnumerator show = IEShow();
		if (show != null)
		{
			yield return show;
		}
		bool isAllDone;
		do
		{
			isAllDone = true;
			foreach (UIAnimShowHideControl anim in _listAnimsNeedWait)
			{
				if (anim != null && anim.CurrentState == State.Showing)
				{
					isAllDone = false;
					break;
				}
			}
			if (!isAllDone)
			{
				yield return null;
			}
		}
		while (!isAllDone);
		PlayLinked(_animPlayOnShowAnimDone);
		_corTransition = null;
		CurrentState = State.Shown;
		SetComponentsEnabled(true);
		onDoneAnim?.Invoke();
	}

	protected abstract IEnumerator IEShow();

	public virtual void HideImmediate()
	{
		StopTransition();
		_needShowImmediateOnEnable = false;
		CurrentState = State.Hidden;
		SetComponentsEnabled(false);
		HideLinkedImmediate(_animPlayOnShowAnimStart);
		HideLinkedImmediate(_animPlayOnShowAnimDone);
		if (_setActiveObject)
		{
			base.gameObject.SetActive(false);
		}
	}

	public virtual void Hide(Action onDoneAnim = null, float delay = 0f)
	{
		StopTransition();
		_needShowImmediateOnEnable = false;
		if (!isActiveAndEnabled)
		{
			HideImmediate();
			onDoneAnim?.Invoke();
			return;
		}
		CurrentState = State.Hiding;
		_corTransition = StartCoroutine(IEHideWithLinkedUI(onDoneAnim, delay));
	}

	private IEnumerator IEHideWithLinkedUI(Action onDoneAnim, float delay)
	{
		if (delay > 0f)
		{
			yield return new WaitForSecondsRealtime(delay);
		}
		SetComponentsEnabled(false);
		IEnumerator hide = IEHide();
		if (hide != null)
		{
			yield return hide;
		}
		HideLinkedImmediate(_animPlayOnShowAnimStart);
		HideLinkedImmediate(_animPlayOnShowAnimDone);
		_corTransition = null;
		CurrentState = State.Hidden;
		if (_setActiveObject)
		{
			base.gameObject.SetActive(false);
		}
		onDoneAnim?.Invoke();
	}

	protected abstract IEnumerator IEHide();

	protected virtual void OnEnable()
	{
		if (_needShowImmediateOnEnable)
		{
			_needShowImmediateOnEnable = false;
			ShowImmediate();
		}
	}

	protected virtual void OnDisable()
	{
		StopTransition();
	}

	private void StopTransition()
	{
		if (_corTransition != null)
		{
			StopCoroutine(_corTransition);
			_corTransition = null;
		}
	}

	private void SetComponentsEnabled(bool isEnabled)
	{
		if (_componentEnableOnDoneShow == null)
		{
			return;
		}
		foreach (MonoBehaviour component in _componentEnableOnDoneShow)
		{
			if (component != null)
			{
				component.enabled = isEnabled;
			}
		}
	}

	private void PlayLinked(LinkedAnimPlayData[] linked)
	{
		if (linked == null)
		{
			return;
		}
		foreach (LinkedAnimPlayData data in linked)
		{
			if (data == null || data.uiAnim == null)
			{
				continue;
			}
			data.uiAnim.Show(null, data.delay);
			if (data.isCountInShowTime)
			{
				_listAnimsNeedWait.Add(data.uiAnim);
			}
		}
	}

	private static void PlayLinkedImmediate(LinkedAnimPlayData[] linked)
	{
		if (linked == null)
		{
			return;
		}
		foreach (LinkedAnimPlayData data in linked)
		{
			if (data != null && data.uiAnim != null)
			{
				data.uiAnim.ShowImmediate();
			}
		}
	}

	private static void HideLinkedImmediate(LinkedAnimPlayData[] linked)
	{
		if (linked == null)
		{
			return;
		}
		foreach (LinkedAnimPlayData data in linked)
		{
			if (data != null && data.uiAnim != null)
			{
				data.uiAnim.HideImmediate();
			}
		}
	}
}
}
