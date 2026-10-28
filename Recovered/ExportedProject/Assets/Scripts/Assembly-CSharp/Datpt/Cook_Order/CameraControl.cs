using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace Datpt.Cook_Order
{
	public class CameraControl : MonoBehaviour
	{
		[CompilerGenerated]
		private sealed class _003CIEFixCamera_003Ed__14 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CameraControl _003C_003E4__this;

			public float start;

			public float target;

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
			public _003CIEFixCamera_003Ed__14(int _003C_003E1__state)
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
		private sealed class _003CShakeCoroutine_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CameraControl _003C_003E4__this;

			private float _003Celapsed_003E5__2;

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
			public _003CShakeCoroutine_003Ed__16(int _003C_003E1__state)
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
		private Camera camera;

		[SerializeField]
		private float min;

		[SerializeField]
		private float max;

		[SerializeField]
		private float shakeDuration;

		[SerializeField]
		private float shakeMagnitude;

		private const string ON_SIZE_CAMERA_CHANGE = "OSCC";

		private Vector3 originalPos;

		public float CurrentOrthographicSize => 0f;

		public float OrthographicSize { get; private set; }

		private void Start()
		{
		}

		[IteratorStateMachine(typeof(_003CIEFixCamera_003Ed__14))]
		private IEnumerator IEFixCamera(float start, float target)
		{
			return null;
		}

		public void OnShake()
		{
		}

		[IteratorStateMachine(typeof(_003CShakeCoroutine_003Ed__16))]
		private IEnumerator ShakeCoroutine()
		{
			return null;
		}

		public void MoveTo(Vector3 target, float duration)
		{
		}

		public void ZoomTo(float target, float duration, Action onComplete = null, Ease ease = Ease.Linear)
		{
		}
	}
}
