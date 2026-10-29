using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities
{

public abstract class FloatModifierWithRegisteredSource
{
	[CompilerGenerated]
	private sealed class _003CIETween_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UnityEngine.Object @object;

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

		public UnityEngine.Object @object;

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

	protected Dictionary<int, float> _source = new Dictionary<int, float>();

	protected float _value;

	private Action _onChanged;

	public float Value => _value;

	protected abstract float InitValue { get; }

	protected FloatModifierWithRegisteredSource()
	{
		_value = InitValue;
	}

	public FloatModifierWithRegisteredSource(Action onChanged)
	{
		_onChanged = onChanged;
	}

	public void AddModifier(UnityEngine.Object @object, float value)
	{
		AddModifier(@object.GetInstanceID(), value);
	}

	public void AddModifier(int id, float value)
	{
		_source[id] = value;
		UpdateModifier();
		_onChanged?.Invoke();
	}

	public void RemoveModifier(UnityEngine.Object @object)
	{
		RemoveModifier(@object.GetInstanceID());
	}

	public void RemoveModifier(int id)
	{
		if (_source.Remove(id))
		{
			UpdateModifier();
			_onChanged?.Invoke();
		}
	}

	public IEnumerator IETween(UnityEngine.Object @object, float to, AnimationCurve valueCurve, float duration, Action onFinished = null, Action<float> onUpdate = null)
	{
		return IETween(@object, InitValue, to, valueCurve, duration, onFinished, onUpdate);
	}

	public IEnumerator IETween(UnityEngine.Object @object, float from, float to, AnimationCurve valueCurve, float duration, Action onFinished = null, Action<float> onUpdate = null)
	{
		int id = @object.GetInstanceID();
		float timeStart = Time.time;
		float progress = 0f;
		while (progress < 1f)
		{
			progress = duration <= 0f ? 1f : Mathf.Clamp01((Time.time - timeStart) / duration);
			float t = valueCurve != null ? valueCurve.Evaluate(progress) : progress;
			float value = Mathf.LerpUnclamped(from, to, t);
			AddModifier(id, value);
			onUpdate?.Invoke(value);
			yield return null;
		}
		onFinished?.Invoke();
	}

	public IEnumerator IETween(UnityEngine.Object @object, AnimationCurve valueCurve, float duration, Action onFinished = null, Action<float> onUpdate = null)
	{
		return IETween(@object, 0f, 1f, valueCurve, duration, onFinished, onUpdate);
	}

	protected abstract void UpdateModifier();
}
}
