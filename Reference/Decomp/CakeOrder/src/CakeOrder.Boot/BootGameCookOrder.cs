using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Cysharp.Threading.Tasks;
using IapAdsSystem;
using SceneTransitionR1;
using UnityEngine;

namespace CakeOrder.Boot;

public class BootGameCookOrder : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass9_0
	{
		public SceneTransitionBehaviorBase transitionBehavior;

		public bool isDoneShowLoadingTransition;
	}

	[CompilerGenerated]
	private sealed class _003CIEBootSequence_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public BootGameCookOrder _003C_003E4__this;

		private _003C_003Ec__DisplayClass9_0 _003C_003E8__1;

		private bool _003CisNewAppVersion_003E5__2;

		private UniTask _003ClocalizationInit_003E5__3;

		private RemoteConfigOverrideAuthorSelector _003CauthorSelector_003E5__4;

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
		public _003CIEBootSequence_003Ed__9(int _003C_003E1__state)
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
	private sealed class _003CIERecordRemoteConfigAppVersion_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

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
		public _003CIERecordRemoteConfigAppVersion_003Ed__11(int _003C_003E1__state)
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
	private string _sceneSetUpManagers;

	[SerializeField]
	private bool _isSkipHomeOnFirstDay;

	[SerializeField]
	private bool _isShowDatasetSelection;

	[SerializeField]
	private float _firebaseRemoteConfigFetchIntervalOnFinal;

	[SerializeField]
	private AppsFlyerBootstrap _appsFlyerBootstrap;

	[SerializeField]
	private CheatManagerCakeOrder _cheatManagerCakeOrder;

	private static bool _isSkipHomeOnFirstDayStatic;

	private const string KeyPrefsRemoteConfigAppVersion = "RemoteConfigAppVersion";

	private void Awake()
	{
	}

	private void Start()
	{
	}

	[IteratorStateMachine(typeof(_003CIEBootSequence_003Ed__9))]
	private IEnumerator IEBootSequence()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIERecordRemoteConfigAppVersion_003Ed__11))]
	private static IEnumerator IERecordRemoteConfigAppVersion()
	{
		return null;
	}

	public static void LastSetupBeforePlay()
	{
	}
}
