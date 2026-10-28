using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities
{

[Serializable]
public class PrefabQueuePool<T> where T : Component
{
	[CompilerGenerated]
	private sealed class _003CIEPrePoolIterate_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrefabQueuePool<T> _003C_003E4__this;

		public int numSpawnPerFrame;

		public int prePoolAmount;

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
		public _003CIEPrePoolIterate_003Ed__8(int _003C_003E1__state)
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
	private sealed class _003CIEPrePoolMaxIterate_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public PrefabQueuePool<T> _003C_003E4__this;

		public int numSpawnPerFrame;

		public int maxPoolAmount;

		private int _003Ccounter_003E5__2;

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
		public _003CIEPrePoolMaxIterate_003Ed__10(int _003C_003E1__state)
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

	private T _prefab;

	private Transform _container;

	private Queue<T> _queue = new Queue<T>();

	private int _countMaxSpawned;

	public int CountMaxSpawned => 0;

	public PrefabQueuePool(T prefab, Transform container, int capacity)
	{
	}

	public void PrePool(int prePoolAmount)
	{
	}

	[IteratorStateMachine(typeof(PrefabQueuePool<>._003CIEPrePoolIterate_003Ed__8))]
	public IEnumerator IEPrePoolIterate(int prePoolAmount, int numSpawnPerFrame = 1)
	{
		return null;
	}

	public void PrePoolMax(int maxPoolAmount)
	{
	}

	[IteratorStateMachine(typeof(PrefabQueuePool<>._003CIEPrePoolMaxIterate_003Ed__10))]
	public IEnumerator IEPrePoolMaxIterate(int maxPoolAmount, int numSpawnPerFrame = 1)
	{
		return null;
	}

	public T UseGameObject()
	{
		return default(T);
	}

	public void ReturnGameObject(T gameObjectComponent)
	{
	}

	public void DestroyPool()
	{
	}
}
}
