using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame;

public class UICakeTimeCounterInGame : UIElementWithAnim
{
	public enum TimeCounterMode
	{
		TimeRemained,
		TimePlay
	}

	[CompilerGenerated]
	private sealed class _003CIEUpdateTimeCounterUI_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UICakeTimeCounterInGame _003C_003E4__this;

		private float _003ClastTimeStartPunchScale_003E5__2;

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
		public _003CIEUpdateTimeCounterUI_003Ed__25(int _003C_003E1__state)
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
	private TMP_Text _txtTimeCounter;

	[SerializeField]
	private bool _isUseMinuteSecondDisplay;

	[SerializeField]
	private TimeCounterMode _counterMode;

	[Header("Anim")]
	[SerializeField]
	private float _delayShow;

	[Header("Punch Scale")]
	[SerializeField]
	private Transform _punchScaleTransform;

	[SerializeField]
	private float _timeRemainedStartPunchScale;

	[SerializeField]
	private float _durationPunchScale;

	[SerializeField]
	private float _punchScaleStrength;

	[Header("Bar")]
	[SerializeField]
	private RectTransform _sliderTransform;

	[SerializeField]
	private Slider _slider;

	[SerializeField]
	private float _sliderLerp;

	[SerializeField]
	private AnimationCurve _timeLimitToSliderWidth;

	private CookOrderModuleTimeCountdown _moduleControl;

	private Coroutine _corUpdateTimeCounterUI;

	private Tweener _tweenPunchScale;

	public void SetUp(CookOrderModuleTimeCountdown moduleControl)
	{
	}

	private void OnDestroy()
	{
	}

	private void OnBeginRunCountdown()
	{
	}

	private void OnTimeRemainChanged(float changeAmount)
	{
	}

	protected override void OnDoneShow()
	{
	}

	protected override void OnBeforeHide()
	{
	}

	private void OnDisable()
	{
	}

	private void OnEnable()
	{
	}

	private void Awake()
	{
	}

	[IteratorStateMachine(typeof(_003CIEUpdateTimeCounterUI_003Ed__25))]
	private IEnumerator IEUpdateTimeCounterUI()
	{
		return null;
	}
}
