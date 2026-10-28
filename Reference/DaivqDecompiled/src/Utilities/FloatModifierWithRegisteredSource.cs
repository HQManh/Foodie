using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public abstract class FloatModifierWithRegisteredSource
{
	[CompilerGenerated]
	private sealed class _003CIETween_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Object @object;

		public FloatModifierWithRegisteredSource _003C_003E4__this;

		public float from;

		public float to;

		public AnimationCurve valueCurve;

		public float duration;

		public Action<float> onUpdate;

		public Action onFinished;

		private int _003Cid_003E5__2;

		private float _003CtimeStart_003E5__3;

		private float _003Cprogress_003E5__4;

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
		public _003CIETween_003Ed__12(int _003C_003E1__state)
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
	private sealed class _003CIETween_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Object @object;

		public FloatModifierWithRegisteredSource _003C_003E4__this;

		public AnimationCurve valueCurve;

		public float duration;

		public Action<float> onUpdate;

		public Action onFinished;

		private int _003Cid_003E5__2;

		private float _003CtimeStart_003E5__3;

		private float _003Cprogress_003E5__4;

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
		public _003CIETween_003Ed__13(int _003C_003E1__state)
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

	protected Dictionary<int, float> _source;

	protected float _value;

	private Action _onChanged;

	public float Value => 0f;

	protected abstract float InitValue { get; }

	protected FloatModifierWithRegisteredSource()
	{
	}

	public FloatModifierWithRegisteredSource(Action onChanged)
	{
	}

	public void AddModifier(Object @object, float value)
	{
	}

	public void AddModifier(int id, float value)
	{
	}

	public void RemoveModifier(Object @object)
	{
	}

	public void RemoveModifier(int id)
	{
	}

	public IEnumerator IETween(Object @object, float to, AnimationCurve valueCurve, float duration, Action onFinished = null, Action<float> onUpdate = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIETween_003Ed__12))]
	public IEnumerator IETween(Object @object, float from, float to, AnimationCurve valueCurve, float duration, Action onFinished = null, Action<float> onUpdate = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIETween_003Ed__13))]
	public IEnumerator IETween(Object @object, AnimationCurve valueCurve, float duration, Action onFinished = null, Action<float> onUpdate = null)
	{
		return null;
	}

	protected abstract void UpdateModifier();
}
