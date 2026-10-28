using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.Home;
using UnityEngine;

namespace CakeOrder.UI
{

public class HomeUITutorialProcessUpgradeRestaurant : UITutorialProcessBase
{
	[CompilerGenerated]
	private sealed class _003CIEShowStep1_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public HomeUITutorialProcessUpgradeRestaurant _003C_003E4__this;

		private TutorialReferenceGroupUI _003CtutRefBtnGoToDetailsMode_003E5__2;

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
		public _003CIEShowStep1_003Ed__5(int _003C_003E1__state)
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
	private sealed class _003CIEShowStep2_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public HomeUITutorialProcessUpgradeRestaurant _003C_003E4__this;

		private UIHomeTabPageMainDetailsMode _003CdetailMode_003E5__2;

		private List<TutorialReferenceGroupUI> _003CtutRefs_003E5__3;

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
		public _003CIEShowStep2_003Ed__10(int _003C_003E1__state)
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
	private sealed class _003CIEShowStep3_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public HomeUITutorialProcessUpgradeRestaurant _003C_003E4__this;

		private TutorialReferenceGroupUI _003CtutRef_003E5__2;

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
		public _003CIEShowStep3_003Ed__14(int _003C_003E1__state)
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
	private sealed class _003CProcess_003Ed__19 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public HomeUITutorialProcessUpgradeRestaurant _003C_003E4__this;

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
		public _003CProcess_003Ed__19(int _003C_003E1__state)
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

	protected HomeUITutorialControl.References _references;

	[Header("Step 1: Click button to go to details mode")]
	public float delayStep1;

	private const string LocTextClickBtnGoToDetailsMode = "tut_home_upgrade_restaurant";

	private bool _isClickedButtonGoToDetailsMode;

	[Header("Step 2: Click upgrade building section button")]
	public float delayStep2;

	private const string LocTextClickUpgradeBuildingSectionButton = "tut_home_items_to_buy";

	private bool _isClickedButtonUpgradeBuildingSection;

	private string _upgradedMapId;

	[Header("Step 3: Click Play")]
	public float delayStep3;

	private const string LocTextClickPlayButton = "tut_home_start_day";

	private bool _isClickedButtonPlay;

	[Header("Step 3: Return")]
	[SerializeField]
	private float _overlayAlphaOnFocusPlay;

	[SerializeField]
	private float _overlayAlphaOnEnd;

	[SerializeField]
	private float _delayShowMainMode;

	[SerializeField]
	private float _delayEndTut;

	public void SetReferences(HomeUITutorialControl.References references)
	{
	}

	[IteratorStateMachine(typeof(_003CIEShowStep1_003Ed__5))]
	private IEnumerator IEShowStep1()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEShowStep2_003Ed__10))]
	private IEnumerator IEShowStep2()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEShowStep3_003Ed__14))]
	private IEnumerator IEShowStep3()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CProcess_003Ed__19))]
	public override IEnumerator Process(Action onComplete)
	{
		return null;
	}

	private void OnHomeBuildingItemBought(string mapId, string sectionId)
	{
	}

	private void OnDestroy()
	{
	}
}
}
