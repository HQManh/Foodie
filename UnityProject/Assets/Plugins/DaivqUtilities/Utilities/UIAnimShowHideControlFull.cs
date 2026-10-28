using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

namespace Utilities
{

public class UIAnimShowHideControlFull : UIAnimShowHideControl
{
	[Serializable]
	public class StateConfig
	{
		public Vector2 anchoredPos;

		public Vector3 rotateAngle;

		public Vector3 scale;

		public float alpha;

		public float duration;

		public Ease easeMove;

		public Ease easeRotate;

		public Ease easeScale;

		public Ease easeAlpha;
	}

	[CompilerGenerated]
	private sealed class _003CIEHide_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAnimShowHideControlFull _003C_003E4__this;

		private Vector2 _003CanchorePosStart_003E5__2;

		private Vector3 _003CrotateAngleStart_003E5__3;

		private Vector3 _003CscaleStart_003E5__4;

		private float _003CalphaStart_003E5__5;

		private float _003CtimeStart_003E5__6;

		private Vector2 _003CanchoredPos_003E5__7;

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
		public _003CIEHide_003Ed__21(int _003C_003E1__state)
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
	private sealed class _003CIEShow_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public UIAnimShowHideControlFull _003C_003E4__this;

		private float _003CtimeStart_003E5__2;

		private Vector2 _003CanchoredPos_003E5__3;

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
		public _003CIEShow_003Ed__20(int _003C_003E1__state)
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

	[Header("Ref")]
	[SerializeField]
	private RectTransform _frame;

	[SerializeField]
	private CanvasGroup _alphaGroup;

	[Header("State")]
	[SerializeField]
	private StateConfig _stateHide;

	[SerializeField]
	private StateConfig _stateShow;

	[SerializeField]
	private bool _useAnchoredPosX;

	[SerializeField]
	private bool _useAnchoredPosY;

	[Tooltip("Read the two anchoredPos values as offsets from wherever the frame was authored, rather than as absolute positions. Lets one prefab drive instances placed at different offsets. Off by default, so existing anims keep their absolute behaviour.")]
	[SerializeField]
	private bool _anchoredPosRelativeToStart;

	private Vector2 _anchoredPosStart;

	private bool _isAnchoredPosStartCached;

	private float? _showAlphaOverride;

	private float ShowAlpha => 0f;

	private Vector2 AnchoredPosStart => default(Vector2);

	public void OverrideShowAlpha(float? alpha)
	{
	}

	private float AlphaOf(StateConfig state)
	{
		return 0f;
	}

	private Vector2 AnchoredPosOf(StateConfig state)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector2);
	}

	public override void HideImmediate()
	{
	}

	public override void ShowImmediate()
	{
	}

	[IteratorStateMachine(typeof(_003CIEShow_003Ed__20))]
	protected override IEnumerator IEShow()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CIEHide_003Ed__21))]
	protected override IEnumerator IEHide()
	{
		return null;
	}

	private void ApplyState(StateConfig state, bool applyAnchoredPos = true)
	{
	}
}
}
