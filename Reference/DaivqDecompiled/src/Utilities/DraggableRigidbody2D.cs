using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

namespace Utilities;

[RequireComponent(typeof(Rigidbody2D))]
public class DraggableRigidbody2D : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CDragObject_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public DraggableRigidbody2D _003C_003E4__this;

		private float _003ColdDrag_003E5__2;

		private float _003ColdAngularDrag_003E5__3;

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
		public _003CDragObject_003Ed__36(int _003C_003E1__state)
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
	private sealed class _003CIERotateToSpecificAngle_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public DraggableRigidbody2D _003C_003E4__this;

		private float _003CtimeStart_003E5__2;

		private WaitForFixedUpdate _003CwaitFixedUpdate_003E5__3;

		private float _003CstartAngle_003E5__4;

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
		public _003CIERotateToSpecificAngle_003Ed__35(int _003C_003E1__state)
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

	private float _cachedGravityScale;

	private Vector2 _offset;

	private TargetJoint2D _targetJoint;

	[Header("Joint2D properties")]
	public float maxForce;

	public float dampingRatio;

	public float frequency;

	public float drag;

	public float angularDrag;

	public bool isFreezeRotationOnDrag;

	public bool isUseCenterOfMassAsDragPoint;

	private Vector2 _cacheCenterOfMass;

	[Header("Rotate to specific angle on drag")]
	public bool isRotateToSpecificAngleOnDrag;

	public float specificAngle;

	public float durationRotateToSpecificAngle;

	public AnimationCurve angularLerpEase;

	[Header("On End Drag")]
	public float velocityMulOnEndRelease;

	public float clampVelocityOnEndRelease;

	[Header("Drag Event")]
	public UnityEvent OnStartDrag;

	public UnityEvent OnEndDrag;

	public BoolModifierWithRegisteredSource isPreventDrag;

	private bool _isFreezeRotationOrigin;

	public Rigidbody2D Rb { get; private set; }

	public bool IsDragging { get; private set; }

	private void Awake()
	{
	}

	private void OnChangedCanDrag()
	{
	}

	private void OnMouseDown()
	{
	}

	private Vector2 GetMouseWorldPos()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	private void OnMouseDrag()
	{
	}

	private void OnMouseUp()
	{
	}

	[IteratorStateMachine(typeof(_003CIERotateToSpecificAngle_003Ed__35))]
	private IEnumerator IERotateToSpecificAngle()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDragObject_003Ed__36))]
	private IEnumerator DragObject()
	{
		return null;
	}
}
