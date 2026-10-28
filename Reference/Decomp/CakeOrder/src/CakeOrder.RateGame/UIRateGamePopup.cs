using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.RateGame;

public class UIRateGamePopup : UICakePopup
{
	[CompilerGenerated]
	private sealed class _003COpenStoreThenClose_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIRateGamePopup _003C_003E4__this;

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
		public _003COpenStoreThenClose_003Ed__17(int _003C_003E1__state)
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
	private Button _btnRate;

	[SerializeField]
	private Image[] _starImages;

	[SerializeField]
	private Sprite _starOn;

	private RatePopupAttempt _attempt;

	private bool _didRate;

	public bool DidRate => false;

	public override PopupSize Size => PopupSize.Small;

	public override PopupOpenStyle OpenStyle => PopupOpenStyle.Additive;

	protected override void Awake()
	{
	}

	public void SetAttempt(RatePopupAttempt attempt)
	{
	}

	public override void HideByBackButton()
	{
	}

	protected override void OnClickClose()
	{
	}

	private void OnClickRate()
	{
	}

	private void SetStarsOn()
	{
	}

	[IteratorStateMachine(typeof(_003COpenStoreThenClose_003Ed__17))]
	private IEnumerator OpenStoreThenClose()
	{
		return null;
	}
}
