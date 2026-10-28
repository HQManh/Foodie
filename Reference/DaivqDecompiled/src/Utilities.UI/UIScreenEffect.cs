using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities.UI;

public class UIScreenEffect : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class _003CIEHide_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIScreenEffect _003C_003E4__this;

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
		public _003CIEHide_003Ed__26(int _003C_003E1__state)
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
	private sealed class _003CIERunAnim_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIScreenEffect _003C_003E4__this;

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
		public _003CIERunAnim_003Ed__25(int _003C_003E1__state)
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
	private bool _isUseScaleTime;

	public float duration;

	public float speed;

	[SerializeField]
	private Graphic[] _graphics;

	[SerializeField]
	private RectTransform[] _sideGraphicsTransform;

	[SerializeField]
	private float _lerpSpeed;

	private const float TimeOvershot = 0.1f;

	[SerializeField]
	private bool _useGradient;

	[SerializeField]
	private Gradient _gradient;

	[SerializeField]
	private CanvasGroup _canvasGroup;

	[SerializeField]
	private AnimationCurve _alphaCurve;

	[SerializeField]
	private GameObject[] _fxObjs;

	private IParticleEffect[] _fxs;

	[SerializeField]
	private Color _baseColor;

	[SerializeField]
	private float _baseAlpha;

	[SerializeField]
	private float _targetWidth;

	private float _progress;

	private float _timeStartTrigger;

	private Coroutine _corRunAnim;

	public void SetBaseAlpha(float alpha)
	{
	}

	public void SetBaseColor(Color color)
	{
	}

	public void SetWidth(float width)
	{
	}

	public void Trigger()
	{
	}

	public void Stop()
	{
	}

	private void UpdateColor()
	{
	}

	[IteratorStateMachine(typeof(_003CIERunAnim_003Ed__25))]
	private IEnumerator IERunAnim()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEHide_003Ed__26))]
	private IEnumerator IEHide()
	{
		return null;
	}

	private void OnDisable()
	{
	}
}
