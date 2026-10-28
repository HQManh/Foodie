using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities
{

public static class MonoBehaviourExtension
{
	public delegate string TextFormatDelegateInt(int value);

	[CompilerGenerated]
	private sealed class _003CDelayFrames_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public int numFrames;

		public Action action;

		private int _003Ci_003E5__2;

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
		public _003CDelayFrames_003Ed__3(int _003C_003E1__state)
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
	private sealed class _003CDelayOneFrame_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Action action;

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
		public _003CDelayOneFrame_003Ed__1(int _003C_003E1__state)
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
	private sealed class _003CDelayToDo_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float waitDuration;

		public Action action;

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
		public _003CDelayToDo_003Ed__6(int _003C_003E1__state)
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
	private sealed class _003CDelayToDoUnscaled_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float waitDuration;

		public Action action;

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
		public _003CDelayToDoUnscaled_003Ed__7(int _003C_003E1__state)
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
	private sealed class _003CDelayToDoUntil_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Func<bool> predicate;

		public Action action;

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
		public _003CDelayToDoUntil_003Ed__9(int _003C_003E1__state)
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
	private sealed class _003CIEPlayTextTransitionUnscaledTime_003Ed__13 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public float duration;

		public int start;

		public int end;

		public Text text;

		public TextFormatDelegateInt textFormat;

		public Action onDone;

		private float _003Ctime_003E5__2;

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
		public _003CIEPlayTextTransitionUnscaledTime_003Ed__13(int _003C_003E1__state)
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
	private sealed class _003CIEPlayTextTransitionUnscaledTime_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public float duration;

		public int start;

		public int end;

		public Text text;

		public string textFormat;

		public Action onDone;

		private float _003Ctime_003E5__2;

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
		public _003CIEPlayTextTransitionUnscaledTime_003Ed__14(int _003C_003E1__state)
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
	private sealed class _003CIEPlayTextTransitionUnscaledTime_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public float duration;

		public int start;

		public int end;

		public TextMeshProUGUI text;

		public TextFormatDelegateInt textFormat;

		public Action onDone;

		private float _003Ctime_003E5__2;

		private int _003CshownValue_003E5__3;

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
		public _003CIEPlayTextTransitionUnscaledTime_003Ed__17(int _003C_003E1__state)
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
	private sealed class _003CIEPlayTextTransitionUnscaledTime_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public float duration;

		public int start;

		public int end;

		public TextMeshProUGUI text;

		public string textFormat;

		public Action onDone;

		private float _003Ctime_003E5__2;

		private int _003CshownValue_003E5__3;

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
		public _003CIEPlayTextTransitionUnscaledTime_003Ed__18(int _003C_003E1__state)
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

	public static Coroutine WaitOneFrame(this MonoBehaviour monoBehaviour, Action action)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayOneFrame_003Ed__1))]
	private static IEnumerator DelayOneFrame(Action action)
	{
		return null;
	}

	public static Coroutine WaitFrames(this MonoBehaviour monoBehaviour, Action action, int numFrames)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayFrames_003Ed__3))]
	private static IEnumerator DelayFrames(Action action, int numFrames)
	{
		return null;
	}

	public static Coroutine WaitToDo(this MonoBehaviour monoBehaviour, Action action, float waitDuration)
	{
		return null;
	}

	public static Coroutine WaitToDoUnscaled(this MonoBehaviour monoBehaviour, Action action, float waitDuration)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayToDo_003Ed__6))]
	private static IEnumerator DelayToDo(Action action, float waitDuration)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayToDoUnscaled_003Ed__7))]
	private static IEnumerator DelayToDoUnscaled(Action action, float waitDuration)
	{
		return null;
	}

	public static Coroutine WaitToDoUntil(this MonoBehaviour monoBehaviour, Action action, Func<bool> predicate)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayToDoUntil_003Ed__9))]
	private static IEnumerator DelayToDoUntil(Action action, Func<bool> predicate)
	{
		return null;
	}

	public static Coroutine PlayTextTransitionUnscaledTime(this Text text, TextFormatDelegateInt textFormat, int start, int end, float duration, float delay = 0f, Action onDone = null)
	{
		return null;
	}

	public static Coroutine PlayTextTransitionUnscaledTime(this Text text, string textFormat, int start, int end, float duration, float delay = 0f, Action onDone = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEPlayTextTransitionUnscaledTime_003Ed__13))]
	private static IEnumerator IEPlayTextTransitionUnscaledTime(Text text, TextFormatDelegateInt textFormat, int start, int end, float duration, float delay, Action onDone)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEPlayTextTransitionUnscaledTime_003Ed__14))]
	private static IEnumerator IEPlayTextTransitionUnscaledTime(Text text, string textFormat, int start, int end, float duration, float delay, Action onDone)
	{
		return null;
	}

	public static Coroutine PlayTextTransitionUnscaledTime(this TextMeshProUGUI text, TextFormatDelegateInt textFormat, int start, int end, float duration, float delay = 0f, Action onDone = null)
	{
		return null;
	}

	public static Coroutine PlayTextTransitionUnscaledTime(this TextMeshProUGUI text, string textFormat, int start, int end, float duration, float delay = 0f, Action onDone = null)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEPlayTextTransitionUnscaledTime_003Ed__17))]
	private static IEnumerator IEPlayTextTransitionUnscaledTime(TextMeshProUGUI text, TextFormatDelegateInt textFormat, int start, int end, float duration, float delay, Action onDone)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEPlayTextTransitionUnscaledTime_003Ed__18))]
	private static IEnumerator IEPlayTextTransitionUnscaledTime(TextMeshProUGUI text, string textFormat, int start, int end, float duration, float delay, Action onDone)
	{
		return null;
	}
}
}
