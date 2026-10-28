using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace Utilities;

public class Vfx2dTransform : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIEPlayAnim_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public Vfx2dTransform _003C_003E4__this;

		private Vector3 _003Cpos_003E5__2;

		private Vector3 _003Ceuler_003E5__3;

		private float _003CdeltaTime_003E5__4;

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
		public _003CIEPlayAnim_003Ed__16(int _003C_003E1__state)
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

	public Transform mainTransform;

	public float duration;

	public float speed;

	public bool isUseTimeScale;

	public AnimationCurve scaleCurve;

	public AnimationCurve posXCurve;

	public AnimationCurve posYCurve;

	public AnimationCurve rotateZCurve;

	public GameObject fxObj;

	private Coroutine _corPlayAnim;

	public void SetUp()
	{
	}

	public void Play(Vector3 position)
	{
	}

	public void Play(Vector3 position, Quaternion quaternion)
	{
	}

	public void Play(Vector3 position, Vector3 scale)
	{
	}

	public void Play(Vector3 position, Quaternion quaternion, Vector3 scale)
	{
	}

	public void Play()
	{
	}

	[IteratorStateMachine(typeof(_003CIEPlayAnim_003Ed__16))]
	private IEnumerator IEPlayAnim()
	{
		return null;
	}
}
