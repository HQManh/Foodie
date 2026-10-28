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
		private float min = 5f;

		[SerializeField]
		private float max = 6.25f;

		[SerializeField]
		private float shakeDuration = 0.2f;

		[SerializeField]
		private float shakeMagnitude = 0.2f;

		private const string ON_SIZE_CAMERA_CHANGE = "OSCC";

		private Vector3 originalPos;

		public float CurrentOrthographicSize => camera != null ? camera.orthographicSize : 0f;

		public float OrthographicSize { get; private set; }

		private void Start()
		{
			float ratio = (float)Screen.height / Screen.width;
			float size = Utilities.GetValue(ratio, 16f / 9f, 20f / 9f, min, max);
			Datpt.ObserverPattern.EventManager.EmitEventData(ON_SIZE_CAMERA_CHANGE, size / 5f);
			StartCoroutine(IEFixCamera(5f, size));
			OrthographicSize = size;
		}

		[IteratorStateMachine(typeof(_003CIEFixCamera_003Ed__14))]
		private IEnumerator IEFixCamera(float start, float target)
		{
			yield return null;

			float elapsed = 0f;
			do
			{
				elapsed = Mathf.Min(elapsed + Time.unscaledDeltaTime, 0.2f);
				float t = Mathf.Clamp01(elapsed / 0.2f);
				camera.orthographicSize = start + t * (target - start);
			}
			while (elapsed < 0.2f);
		}

		public void OnShake()
		{
			StopAllCoroutines();
			StartCoroutine(ShakeCoroutine());
		}

		[IteratorStateMachine(typeof(_003CShakeCoroutine_003Ed__16))]
		private IEnumerator ShakeCoroutine()
		{
			float elapsed = 0f;
			originalPos = transform.localPosition;
			while (elapsed < shakeDuration)
			{
				Vector3 r = UnityEngine.Random.insideUnitSphere;
				transform.localPosition = new Vector3(
					r.x * shakeMagnitude + originalPos.x,
					r.y * shakeMagnitude + originalPos.y,
					originalPos.z);
				elapsed += Time.deltaTime;
				yield return null;
			}

			transform.localPosition = originalPos;
		}

		public void MoveTo(Vector3 target, float duration)
		{
			transform.DOMove(target, duration)
				.SetEase(Ease.Linear)
				.OnComplete(() => { transform.position = target; })
				.SetUpdate(true);
		}

		public void ZoomTo(float target, float duration, Action onComplete = null, Ease ease = Ease.Linear)
		{
			camera.DOOrthoSize(target, duration)
				.SetEase(ease)
				.OnComplete(() =>
				{
					if (onComplete != null)
					{
						onComplete.Invoke();
					}

					if (camera != null)
					{
						camera.orthographicSize = target;
					}
				})
				.SetUpdate(true);
		}
	}
}
