using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace _GAME.Utils;

public static class HelperMonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CDelayFrames_003Ed__17 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CDelayFrames_003Ed__17(int _003C_003E1__state)
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
	private sealed class _003CDelayOneFrame_003Ed__15 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CDelayOneFrame_003Ed__15(int _003C_003E1__state)
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
	private sealed class _003CDelayToDo_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CDelayToDo_003Ed__20(int _003C_003E1__state)
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
	private sealed class _003CDelayToDoUnscaled_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CDelayToDoUnscaled_003Ed__21(int _003C_003E1__state)
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
	private sealed class _003CDelayToDoUntil_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CDelayToDoUntil_003Ed__23(int _003C_003E1__state)
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

	public static void SetActive(this List<MonoBehaviour> mbs, bool active)
	{
	}

	public static void SetActive(this MonoBehaviour mb, bool active)
	{
	}

	public static bool ActiveSelf(this MonoBehaviour mb)
	{
		return false;
	}

	public static Vector3 Position(this MonoBehaviour mb)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	public static void SetPosition(this MonoBehaviour obj, MonoBehaviour dst)
	{
	}

	public static void SetPosition(this MonoBehaviour obj, Transform position)
	{
	}

	public static void SetPosition(this MonoBehaviour obj, Vector3 position)
	{
	}

	public static void SetLocalPosition(this MonoBehaviour obj, Vector3 position)
	{
	}

	public static void SetPosX(this MonoBehaviour obj, float posX)
	{
	}

	public static void SetLocalPosX(this MonoBehaviour obj, float posX)
	{
	}

	public static void SetPosY(this MonoBehaviour obj, float posY)
	{
	}

	public static void SetLocalPosY(this MonoBehaviour obj, float posY)
	{
	}

	public static void SetPosZ(this MonoBehaviour obj, float posZ)
	{
	}

	public static void SetLocalPosZ(this MonoBehaviour obj, float posZ)
	{
	}

	public static Coroutine WaitOneFrame(this MonoBehaviour monoBehaviour, Action action)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayOneFrame_003Ed__15))]
	private static IEnumerator DelayOneFrame(Action action)
	{
		return null;
	}

	public static Coroutine WaitFrames(this MonoBehaviour monoBehaviour, Action action, int numFrames)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayFrames_003Ed__17))]
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

	[IteratorStateMachine(typeof(_003CDelayToDo_003Ed__20))]
	private static IEnumerator DelayToDo(Action action, float waitDuration)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayToDoUnscaled_003Ed__21))]
	private static IEnumerator DelayToDoUnscaled(Action action, float waitDuration)
	{
		return null;
	}

	public static Coroutine WaitToDoUntil(this MonoBehaviour monoBehaviour, Action action, Func<bool> predicate)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDelayToDoUntil_003Ed__23))]
	private static IEnumerator DelayToDoUntil(Action action, Func<bool> predicate)
	{
		return null;
	}
}
