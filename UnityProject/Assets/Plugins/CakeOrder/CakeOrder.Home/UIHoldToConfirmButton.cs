using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MoreMountains.NiceVibrations;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace CakeOrder.Home
{

[DisallowMultipleComponent]
[RequireComponent(typeof(Button))]
public sealed class UIHoldToConfirmButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IPointerExitHandler, ICancelHandler
{
	[CompilerGenerated]
	private sealed class _003CRestoreVisualAfterConfirmation_003Ed__24 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIHoldToConfirmButton _003C_003E4__this;

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
		public _003CRestoreVisualAfterConfirmation_003Ed__24(int _003C_003E1__state)
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
	[Min(0.1f)]
	private float _holdDuration;

	[SerializeField]
	[Min(0.1f)]
	private float _vibrationInterval;

	[SerializeField]
	private Color _confirmedColor;

	[SerializeField]
	private HapticTypes _holdHaptic;

	[SerializeField]
	[Min(0f)]
	private float _confirmedColorHoldDuration;

	[SerializeField]
	private UnityEvent _onConfirmed;

	private Button _button;

	private Graphic _targetGraphic;

	private Color _normalColor;

	private bool _isHolding;

	private float _holdStartTime;

	private float _nextVibrationTime;

	private Coroutine _restoreVisualCoroutine;

	public UnityEvent OnConfirmed => null;

	private void Awake()
	{
	}

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}

	public void OnPointerExit(PointerEventData eventData)
	{
	}

	public void OnCancel(BaseEventData eventData)
	{
	}

	private void Update()
	{
	}

	private void OnDisable()
	{
	}

	private void CancelHold()
	{
	}

	private void ApplyHoldVisual(float progress)
	{
	}

	[IteratorStateMachine(typeof(_003CRestoreVisualAfterConfirmation_003Ed__24))]
	private IEnumerator RestoreVisualAfterConfirmation()
	{
		return null;
	}

	private void StopRestoreVisualCoroutine()
	{
	}

	private void RestoreVisual()
	{
	}
}
}
