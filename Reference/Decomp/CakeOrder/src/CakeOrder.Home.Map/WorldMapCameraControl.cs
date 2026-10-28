using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Lean.Touch;
using UnityEngine;

namespace CakeOrder.Home.Map;

public class WorldMapCameraControl : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CAutoMoveAndZoomCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float delay;

		public float zoom;

		public WorldMapCameraControl _003C_003E4__this;

		public Vector3 pos;

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
		public _003CAutoMoveAndZoomCoroutine_003Ed__10(int _003C_003E1__state)
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
	private LeanPinchZoomCamera _pinchZoomCamera;

	[SerializeField]
	private LeanDragCameraWithLimit _dragCamera;

	private Coroutine _autoMoveCoroutine;

	public float MaxZoom => 0f;

	public float MinZoom => 0f;

	public void SetLimit(Vector2 minLimit, Vector2 maxLimit)
	{
	}

	public void ActivateControl(Vector3 initPos, float initZoom = -1f, bool updateImmediate = false)
	{
	}

	public void AutoMoveAndZoom(Vector3 pos, float zoom = -1f, float delay = 0f)
	{
	}

	[IteratorStateMachine(typeof(_003CAutoMoveAndZoomCoroutine_003Ed__10))]
	private IEnumerator AutoMoveAndZoomCoroutine(Vector3 pos, float zoom, float delay)
	{
		return null;
	}

	public void DeactivateControl()
	{
	}
}
