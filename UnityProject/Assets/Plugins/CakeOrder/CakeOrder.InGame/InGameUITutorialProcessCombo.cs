using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.Home;
using CakeOrder.UI;
using DG.Tweening;
using UnityEngine;

namespace CakeOrder.InGame
{

public class InGameUITutorialProcessCombo : UITutorialProcessBase
{
	[CompilerGenerated]
	private sealed class _003CIETutCombo_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InGameUITutorialProcessCombo _003C_003E4__this;

		private TutorialReferenceGroupUI _003CrefTutBar_003E5__2;

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
		public _003CIETutCombo_003Ed__11(int _003C_003E1__state)
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
	private sealed class _003CProcess_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InGameUITutorialProcessCombo _003C_003E4__this;

		public Action onComplete;

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
		public _003CProcess_003Ed__14(int _003C_003E1__state)
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

	protected InGameUITutorialControl.References _references;

	[Header("Tut Combo")]
	public float delayBeforeStart;

	private const string LocTextComboInfo1 = "tut_combo_intro";

	private const string LocTextComboInfo2 = "tut_combo_serve_customers";

	private const string LocTextComboInfo2UseIncStepByNumDish = "tut_combo_serve_dishes";

	public float delayAfterComboActivated;

	private const string LocTextComboActivated = "tut_combo_activated";

	private bool _isComboActivated;

	public int initStepOffsetToActivate;

	private Tween _tweenOverlayFade;

	public void SetReferences(InGameUITutorialControl.References references)
	{
	}

	[IteratorStateMachine(typeof(_003CIETutCombo_003Ed__11))]
	private IEnumerator IETutCombo()
	{
		return null;
	}

	private void OnComboActivated()
	{
	}

	private void OnDestroy()
	{
	}

	[IteratorStateMachine(typeof(_003CProcess_003Ed__14))]
	public override IEnumerator Process(Action onComplete)
	{
		return null;
	}
}
}
