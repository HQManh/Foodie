using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace Utilities;

public abstract class UINumberCounterAbstract : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIETweenCurrentCount_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UINumberCounterAbstract _003C_003E4__this;

		public int amount;

		public Action onDoneAnim;

		private float _003CdurationTween_003E5__2;

		private float _003CtimeStart_003E5__3;

		private float _003CstartGold_003E5__4;

		private float _003CendGold_003E5__5;

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
		public _003CIETweenCurrentCount_003Ed__19(int _003C_003E1__state)
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

	[Header("Show Hide")]
	[SerializeField]
	private UIAnimShowHideControl _animShowHideControl;

	[Header("Count")]
	[SerializeField]
	protected bool _autoSyncWithDataChange;

	[Header("Visual")]
	[SerializeField]
	private RectTransform _visualEffectAnchor;

	[SerializeField]
	private float _amountTweenPerSecond;

	[SerializeField]
	private float _maxDurationTweenText;

	private Coroutine _coroutineTweenText;

	private Tween _tweenPunchScale;

	public UIAnimShowHideControl AnimShowHideControl => null;

	public bool IsShownOrShowing => false;

	public float CurrentViewedAmount { get; private set; }

	public void SetSpeed(float amountTweenPerSecond, float maxDurationTweenText)
	{
	}

	public float GetDurationTweenTo(int toAmount)
	{
		return 0f;
	}

	public virtual void UpdateAmountImmediate(int value)
	{
	}

	public virtual void UpdateAmount(int value, Action onDoneAnim = null)
	{
	}

	[IteratorStateMachine(typeof(_003CIETweenCurrentCount_003Ed__19))]
	private IEnumerator IETweenCurrentCount(int amount, Action onDoneAnim)
	{
		return null;
	}

	public void DisableSyncData()
	{
	}

	public void EnableSyncData()
	{
	}

	public void SyncData()
	{
	}

	protected abstract int GetAmountData();

	protected abstract void UpdateVisualAmount(float amount);

	private void OnEnable()
	{
	}

	public void Show(float delay = 0f)
	{
	}

	public virtual void Show(Action onDoneAnim, float delay)
	{
	}

	public virtual void ShowImmediate()
	{
	}

	public void Hide(float delay = 0f)
	{
	}

	public virtual void Hide(Action onDoneAnim, float delay)
	{
	}

	public virtual void HideImmediate()
	{
	}
}
