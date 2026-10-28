using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MoreMountains.NiceVibrations;
using UnityEngine;

namespace Utilities
{

[RequireComponent(typeof(DraggableObject))]
public class DraggableObjectEffectLiftShadow : MonoBehaviour
{
	[Serializable]
	public class GeneralConfig
	{
		public float lerpSpeed;

		public float maxLerpDuration;

		[Header("Main")]
		public float liftHeightOnDrag;

		public float scaleMulOnDrag;

		public float rotateOnDrag;

		[Range(0f, 1f)]
		public float minRotateRatio;

		[Header("Shadow")]
		public float shadowScaleMulOnDrag;

		public float shadowAlphaMulOnDrag;

		[Header("Audio-Haptic")]
		public AudioSource audioSource;

		public AudioClip sfxPick;

		public HapticTypes hapticPick;

		public AudioClip sfxRelease;

		public HapticTypes hapticRelease;
	}

	[CompilerGenerated]
	private sealed class _003CIETweenDrag_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public DraggableObjectEffectLiftShadow _003C_003E4__this;

		private float _003CtimeEnd_003E5__2;

		private Vector3 _003CliftPos_003E5__3;

		private float _003Crotate_003E5__4;

		private Quaternion _003Crot_003E5__5;

		private Vector3 _003Cscale_003E5__6;

		private Vector3 _003CshadowScale_003E5__7;

		private Color _003CshadowColor_003E5__8;

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
		public _003CIETweenDrag_003Ed__30(int _003C_003E1__state)
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
	private sealed class _003CIETweenNormal_003Ed__32 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public DraggableObjectEffectLiftShadow _003C_003E4__this;

		private float _003CtimeEnd_003E5__2;

		private Quaternion _003CoriginRot_003E5__3;

		private Color _003CshadowColor_003E5__4;

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
		public _003CIETweenNormal_003Ed__32(int _003C_003E1__state)
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
	private DraggableObject _draggable;

	[SerializeField]
	private Transform _liftTransform;

	[SerializeField]
	private Transform _scaleTransform;

	[SerializeField]
	private Transform _rotateTransform;

	[SerializeField]
	private SpriteRenderer _shadowRenderer;

	[SerializeField]
	private Transform _shadowTransform;

	[SerializeField]
	private GeneralConfig _generalConfig;

	private Vector3 _originPos;

	private float _originAngle;

	private Vector3 _originScale;

	private Vector3 _originShadowScale;

	private float _originShadowAlpha;

	private Coroutine _corTween;

	private bool _isSetUp;

	public event Action onTweenDrag;

	public event Action onTweenNormal;

	public event Action onSetDrag;

	public event Action onSetNormal;

	private void SetUpOriginData()
	{
	}

	private void OnStartDrag()
	{
	}

	private void OnEndDrag()
	{
	}

	[IteratorStateMachine(typeof(_003CIETweenDrag_003Ed__30))]
	private IEnumerator IETweenDrag()
	{
		return null;
	}

	private void SetDragImmediate()
	{
	}

	[IteratorStateMachine(typeof(_003CIETweenNormal_003Ed__32))]
	private IEnumerator IETweenNormal()
	{
		return null;
	}

	private void SetNormalImmediate()
	{
	}

	private void OnEnable()
	{
	}
}
}
