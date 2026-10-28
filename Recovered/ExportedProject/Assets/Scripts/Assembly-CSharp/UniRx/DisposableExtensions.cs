using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UniRx.Triggers;
using UnityEngine;

namespace UniRx
{
	public static class DisposableExtensions
	{
		[CompilerGenerated]
		private sealed class _003CMonitorTriggerHealth_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public ObservableDestroyTrigger trigger;

			public GameObject targetGameObject;

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
			public _003CMonitorTriggerHealth_003Ed__2(int _003C_003E1__state)
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

		public static T AddTo<T>(this T disposable, ICollection<IDisposable> container) where T : IDisposable
		{
			return default;
		}

		public static T AddTo<T>(this T disposable, GameObject gameObject) where T : IDisposable
		{
			return default;
		}

		[IteratorStateMachine(typeof(_003CMonitorTriggerHealth_003Ed__2))]
		private static IEnumerator MonitorTriggerHealth(ObservableDestroyTrigger trigger, GameObject targetGameObject)
		{
			return null;
		}

		public static T AddTo<T>(this T disposable, Component gameObjectComponent) where T : IDisposable
		{
			return default;
		}

		public static T AddTo<T>(this T disposable, ICollection<IDisposable> container, GameObject gameObject) where T : IDisposable
		{
			return default;
		}

		public static T AddTo<T>(this T disposable, ICollection<IDisposable> container, Component gameObjectComponent) where T : IDisposable
		{
			return default;
		}
	}
}
