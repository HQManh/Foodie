using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

[Serializable]
public class ColorBlendModifierWithRegisteredSource
{
	public delegate Color CustomBlendFunc(Color src, Color dst);

	[CompilerGenerated]
	private sealed class _003CIETween_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Object @object;

		public ColorBlendModifierWithRegisteredSource _003C_003E4__this;

		public bool isUseUnscaledTime;

		public float duration;

		public Color toColor;

		public AnimationCurve ease;

		public Action onFinished;

		private Color _003CfromColor_003E5__2;

		private int _003Cid_003E5__3;

		private float _003CtimeStart_003E5__4;

		private float _003Cprogress_003E5__5;

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
		public _003CIETween_003Ed__26(int _003C_003E1__state)
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
	private sealed class _003CIETween_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Object @object;

		public ColorBlendModifierWithRegisteredSource _003C_003E4__this;

		public bool isUseUnscaledTime;

		public float duration;

		public Color toColor;

		public Action onFinished;

		private Color _003CfromColor_003E5__2;

		private int _003Cid_003E5__3;

		private float _003CtimeStart_003E5__4;

		private float _003Cprogress_003E5__5;

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
		public _003CIETween_003Ed__27(int _003C_003E1__state)
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
	private sealed class _003CIETween_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Object @object;

		public ColorBlendModifierWithRegisteredSource _003C_003E4__this;

		public Color fromColor;

		public bool isUseUnscaledTime;

		public float duration;

		public Color toColor;

		public AnimationCurve ease;

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
		public _003CIETween_003Ed__28(int _003C_003E1__state)
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
	private sealed class _003CIETween_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Object @object;

		public ColorBlendModifierWithRegisteredSource _003C_003E4__this;

		public Color fromColor;

		public bool isUseUnscaledTime;

		public float duration;

		public Color toColor;

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
		public _003CIETween_003Ed__29(int _003C_003E1__state)
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

	private Color _originColor;

	private ColorBlendOperation _blendOp;

	private ColorBlendOperation _alphaBlendOp;

	private ColorBlendFactor _srcBlendFactor;

	private ColorBlendFactor _dstBlendFactor;

	private ColorBlendFactor _srcAlphaBlendFactor;

	private ColorBlendFactor _dstAlphaBlendFactor;

	protected Dictionary<int, Color> _source;

	protected Color _value;

	private Action _onChanged;

	private CustomBlendFunc _customBlendFunc;

	public Color Value => default(Color);

	public ColorBlendModifierWithRegisteredSource(Color originColor, ColorBlendOperation blendOp, ColorBlendFactor srcBlendFactor, ColorBlendFactor dstBlendFactor, Action onChanged = null)
	{
	}

	public ColorBlendModifierWithRegisteredSource(Color originColor, CustomBlendFunc customBlendFunc, Action onChanged = null)
	{
	}

	public ColorBlendModifierWithRegisteredSource(Color originColor, ColorBlendOperation blendOp, ColorBlendOperation alphaBlendOp, ColorBlendFactor srcBlendFactor, ColorBlendFactor dstBlendFactor, ColorBlendFactor srcAlphaBlendFactor, ColorBlendFactor dstAlphaBlendFactor, Action onChanged = null)
	{
	}

	public void AddModifier(Object @object, Color value)
	{
	}

	public void AddModifier(int id, Color value)
	{
	}

	public void RemoveModifier(Object @object)
	{
	}

	public void RemoveModifier(int id)
	{
	}

	public void RemoveAllModifier()
	{
	}

	private void UpdateModifier()
	{
	}

	public static ColorBlendModifierWithRegisteredSource Additive(Action onChanged = null)
	{
		return null;
	}

	public static ColorBlendModifierWithRegisteredSource AlphaBlend(Action onChanged = null)
	{
		return null;
	}

	public static ColorBlendModifierWithRegisteredSource Multiply(Action onChanged = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIETween_003Ed__26))]
	public IEnumerator IETween(Object @object, Color toColor, float duration, AnimationCurve ease, bool isUseUnscaledTime = false, Action onFinished = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIETween_003Ed__27))]
	public IEnumerator IETween(Object @object, Color toColor, float duration, bool isUseUnscaledTime = false, Action onFinished = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIETween_003Ed__28))]
	public IEnumerator IETween(Object @object, Color fromColor, Color toColor, float duration, AnimationCurve ease, bool isUseUnscaledTime = false, Action onFinished = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIETween_003Ed__29))]
	public IEnumerator IETween(Object @object, Color fromColor, Color toColor, float duration, bool isUseUnscaledTime = false, Action onFinished = null)
	{
		return null;
	}
}
