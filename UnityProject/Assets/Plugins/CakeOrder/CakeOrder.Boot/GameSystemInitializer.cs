using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.InGame;
using CakeOrder.SaveProfile;
using LiveOpsR1;
using UnityEngine;

namespace CakeOrder.Boot
{

public class GameSystemInitializer : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIEInitializationSequence_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameSystemInitializer _003C_003E4__this;

		public Action onDone;

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
		public _003CIEInitializationSequence_003Ed__15(int _003C_003E1__state)
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
	private sealed class _003CIEInitializeLiveOps_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public GameSystemInitializer _003C_003E4__this;

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
		public _003CIEInitializeLiveOps_003Ed__16(int _003C_003E1__state)
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
	private PlayerProfileDataManager _profileDataManager;

	[SerializeField]
	private LevelPlayLoadAndSetupControl _playControl;

	[Header("Live Ops")]
	[SerializeField]
	private LiveOpsDataManager _liveOpsDataManager;

	[SerializeField]
	private LiveOpsManager _liveOpsManager;

	public static GameSystemInitializer Instance { get; private set; }

	public bool IsInitialized { get; private set; }

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void StartInitialization(Action onDone = null)
	{
	}

	[IteratorStateMachine(typeof(_003CIEInitializationSequence_003Ed__15))]
	private IEnumerator IEInitializationSequence(Action onDone)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEInitializeLiveOps_003Ed__16))]
	private IEnumerator IEInitializeLiveOps()
	{
		return null;
	}
}
}
