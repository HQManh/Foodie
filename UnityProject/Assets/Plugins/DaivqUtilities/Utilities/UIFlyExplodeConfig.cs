using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities
{

[Serializable]
public class UIFlyExplodeConfig
{
	[CompilerGenerated]
	private sealed class _003CPlay_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIFlyExplodeConfig _003C_003E4__this;

		public Transform target;

		public float waitAfter;

		private float _003CburstTime_003E5__2;

		private float _003CendMul_003E5__3;

		private Vector2 _003Cdirection_003E5__4;

		private float _003CstartSpeed_003E5__5;

		private CanvasGroup _003CalphaGroup_003E5__6;

		private Vector3 _003CstartLocal_003E5__7;

		private float _003Ctime_003E5__8;

		private Vector3 _003Cdrift_003E5__9;

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
		public _003CPlay_003Ed__11(int _003C_003E1__state)
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

	[Tooltip("Distance from the spawn point an object ends its burst at, in canvas units (the parent's local space).")]
	[Min(0f)]
	public float radiusMin;

	[Min(0f)]
	public float radiusMax;

	[Tooltip("Objects spawned per frame; the rest follow on the next frames.")]
	[Min(1f)]
	public int maxSpawnPerFrame;

	[Min(0.01f)]
	public float duration;

	[Tooltip("Speed at the end of the burst as a multiple of the starting speed. It slows down linearly; 0 = comes to rest, above 0 = it keeps drifting at that speed until its flight starts.")]
	[Min(0f)]
	public float endVelocityMul;

	[Tooltip("Over the burst (0..1): object scale. Out quad by default.")]
	public AnimationCurve scaleEase;

	[Tooltip("Over the burst (0..1): object alpha. Out quad by default.")]
	public AnimationCurve alphaEase;

	public float Duration => 0f;

	public static AnimationCurve OutQuad()
	{
		return null;
	}

	public void Prepare(Transform target)
	{
	}

	[IteratorStateMachine(typeof(_003CPlay_003Ed__11))]
	public IEnumerator Play(Transform target, float waitAfter = 0f)
	{
		return null;
	}

	private static CanvasGroup GetAlphaGroup(Transform target)
	{
		return null;
	}
}
}
