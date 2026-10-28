using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

[Serializable]
public class ModifierFloatCountdown
{
	[CompilerGenerated]
	private sealed class _003CIECountdown_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float duration;

		public ModifierFloatCountdown _003C_003E4__this;

		public int source;

		private float _003CtimeEnd_003E5__2;

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
		public _003CIECountdown_003Ed__5(int _003C_003E1__state)
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

	private MonoBehaviour _context;

	private FloatModifierWithRegisteredSource _modifier;

	private Dictionary<int, Coroutine> _corCountdowns;

	public ModifierFloatCountdown(MonoBehaviour context, FloatModifierWithRegisteredSource modifier)
	{
	}

	public void Add(int source, float value, float duration)
	{
	}

	[IteratorStateMachine(typeof(_003CIECountdown_003Ed__5))]
	private IEnumerator IECountdown(int source, float duration)
	{
		return null;
	}
}
