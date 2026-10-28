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
					return _003C_003E2__current;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return _003C_003E2__current;
				}
			}

			[DebuggerHidden]
			public _003CMonitorTriggerHealth_003Ed__2(int _003C_003E1__state)
			{
				this._003C_003E1__state = _003C_003E1__state;
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				if (_003C_003E1__state == 0)
				{
					_003C_003E1__state = -1;
					_003C_003E2__current = null;
					_003C_003E1__state = 1;
					return true;
				}
				if (_003C_003E1__state == 1)
				{
					_003C_003E1__state = -1;
					if (trigger == null)
					{
						throw new NullReferenceException();
					}
					if (!trigger.IsCalledOnDestroy)
					{
						if (targetGameObject == null)
						{
							// TODO(unrecovered): the original calls ObservableDestroyTrigger.OnDestroy(), which is private to that class and not reachable from this helper.
						}
						else
						{
							_003C_003E2__current = null;
							_003C_003E1__state = 1;
							return true;
						}
					}
				}
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
				throw new NotSupportedException();
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
			return new _003CMonitorTriggerHealth_003Ed__2(0)
			{
				trigger = trigger,
				targetGameObject = targetGameObject
			};
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
