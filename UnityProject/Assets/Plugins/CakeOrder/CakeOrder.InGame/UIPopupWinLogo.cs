using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using Spine.Unity;
using UnityEngine;
using Utilities;

namespace CakeOrder.InGame
{

public class UIPopupWinLogo : UICakePopup
{
	[CompilerGenerated]
	private sealed class _003CIEFirework_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public UIPopupWinLogo _003C_003E4__this;

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
		public _003CIEFirework_003Ed__21(int _003C_003E1__state)
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
	private sealed class _003CIEIntro_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public UIPopupWinLogo _003C_003E4__this;

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
		public _003CIEIntro_003Ed__20(int _003C_003E1__state)
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

	[Header("Logo")]
	[SerializeField]
	private UIAnimShowHideControl _objLogo;

	[SerializeField]
	private SkeletonGraphic _skeletonWin;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false, dataField = "_skeletonWin")]
	private string _animLogoAppear;

	[SerializeField]
	[SpineAnimation(null, null, true, false, false, dataField = "_skeletonWin")]
	private string _animLogoIdle;

	[SerializeField]
	private AudioClip _sfxAppearLogo;

	[Tooltip("Fallback appear length when no spine animation is assigned.")]
	[SerializeField]
	private float _durationLogoAppear;

	[Tooltip("How long the logo idles before scaling out.")]
	[SerializeField]
	private float _durationLogoIdle;

	[Tooltip("Wait after the logo starts hiding before this popup closes and the Win popup comes in.")]
	[SerializeField]
	private float _delayCloseAfterLogoHide;

	[Header("Firework")]
	[Tooltip("Wait after the logo starts appearing before onFirework is raised.")]
	[SerializeField]
	private float _delayFirework;

	private Coroutine _corIntro;

	private Coroutine _corFirework;

	private bool _isLogoHiding;

	protected override bool PlayOpenCloseSfx => false;

	public event Action onFirework;

	public override void HideByBackButton()
	{
	}

	protected override void ShowElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void ShowElementImmediate()
	{
	}

	[IteratorStateMachine(typeof(_003CIEIntro_003Ed__20))]
	private IEnumerator IEIntro(Action onDoneAnim, float delay)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEFirework_003Ed__21))]
	private IEnumerator IEFirework(float delay)
	{
		return null;
	}

	private void OnLogoHidden()
	{
	}

	protected override void HideElement(Action onDoneAnim = null, float delay = 0f)
	{
	}

	protected override void HideElementImmediate()
	{
	}

	private void StopAll()
	{
	}
}
}
