using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.DataSO;
using CakeOrder.UI;
using DG.Tweening;
using Spine.Unity;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.InGame;

public class InGameUITutorialProcessBooster : UITutorialProcessBase
{
	[Serializable]
	public class VisualConfig
	{
		[Header("Box Show")]
		public Vector2 boxInitPosition;

		public Vector2 boxEndPosition;

		public float boxInitScale;

		public float boxEndScale;

		public float delayShowBoxReward;

		public float durationShowBox;

		public float durationAnimOpenBox;

		[Header("Booster Fly")]
		public float delayBoosterItemFly;

		public float durationBoosterFly;

		public AnimationCurve curveBoosterFly;

		public AnimationCurve curveScaleObjFly;

		[Tooltip("Upward arc along the flight, multiplied by flyHeight.")]
		public AnimationCurve curveHeightFly;

		[Tooltip("Peak height of the arc, in canvas units (pixels of the reference resolution).")]
		public float flyHeight;
	}

	[Serializable]
	public class AnimUnlockBoosterConfig
	{
		public float delayShowAnimUnlock;

		public Ease easeFadeInRay;

		public float alphaRay;

		[Header("First phase")]
		public float durationPhase1;

		public float lockShakeStrength1;

		public float lockShakeFrequency1;

		[Header("Second phase")]
		public float durationPhase2;

		public float lockShakeStrength2;

		public float lockShakeFrequency2;

		[Header("Third phase")]
		public float delayExplode;

		public float durationRayFadeout;

		public Ease easeFadeOutRay;

		[Header("Sfx")]
		public AudioClip sfxStartUnlock;

		public AudioClip sfxExplodeUnlock;
	}

	[CompilerGenerated]
	private sealed class _003CIEShowBoosterFlyAndUnlock_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InGameUITutorialProcessBooster _003C_003E4__this;

		private float _003Ctime_003E5__2;

		private Vector3 _003CposStart_003E5__3;

		private Vector3 _003CposEnd_003E5__4;

		private Vector3 _003CheightOffset_003E5__5;

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
		public _003CIEShowBoosterFlyAndUnlock_003Ed__35(int _003C_003E1__state)
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
	private sealed class _003CIEShowStepOpenBox_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InGameUITutorialProcessBooster _003C_003E4__this;

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
		public _003CIEShowStepOpenBox_003Ed__33(int _003C_003E1__state)
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
	private sealed class _003CIEUnlockAndUseBooster_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InGameUITutorialProcessBooster _003C_003E4__this;

		private UIButtonHUDBooster _003CbuttonBooster_003E5__2;

		private float _003CtimeStart_003E5__3;

		private Color _003CcolorRay_003E5__4;

		private Vector2 _003CrandomOffset_003E5__5;

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
		public _003CIEUnlockAndUseBooster_003Ed__37(int _003C_003E1__state)
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
	private sealed class _003CProcess_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public InGameUITutorialProcessBooster _003C_003E4__this;

		public Action onComplete;

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
		public _003CProcess_003Ed__38(int _003C_003E1__state)
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
	private VisualConfig _visualConfig;

	[SerializeField]
	private bool _skipDropBox;

	[Header("Open Box")]
	[SerializeField]
	private int _rewardNum;

	[SerializeField]
	private SkeletonGraphic _box;

	[SerializeField]
	private CanvasGroup _canvasGroupBox;

	[SerializeField]
	private RectTransform _boxRect;

	[SpineAnimation(null, null, true, false, false)]
	[SerializeField]
	private string _animShow;

	[SpineAnimation(null, null, true, false, false)]
	[SerializeField]
	private string _animIdle;

	[SpineAnimation(null, null, true, false, false)]
	[SerializeField]
	private string _animOpen;

	[SpineAnimation(null, null, true, false, false)]
	[SerializeField]
	private string _animLoopOpened;

	[SerializeField]
	private ForwardUIPointerEvent _triggerZone;

	[SerializeField]
	private AudioClip _sfxOpenBox;

	private Sequence _seqShowBox;

	[Header("Booster Fly and Unlock")]
	[SerializeField]
	private Image _imgBoosterFly;

	[Header("Fx Unlock Booster")]
	[SerializeField]
	private RectTransform _sectionFxUnlockBoosterBehind;

	[SerializeField]
	private RectTransform _sectionFxUnlockBoosterInFront;

	[SerializeField]
	private Image _fxUnlockRaySmall;

	[SerializeField]
	private Image _fxUnlockRayBig;

	[SerializeField]
	private GameObject _fxExplodeUnlockBooster;

	[SerializeField]
	private AnimUnlockBoosterConfig _animUnlockBoosterConfig;

	[Header("Using")]
	private const string LocTxtClickUseBooster = "tut_try_booster";

	private bool _isClickedButtonUseBooster;

	protected InGameUITutorialControl.References _references;

	private InGameUITutorialControl.TutorialType _tutType;

	private int _index;

	private CakeCurrencySO _boosterSO;

	private bool _isClosePopupReward;

	[Header("Step 1: Click button to go to details mode")]
	public float delayStep1;

	private bool _isBoxClicked;

	public void SetReferences(InGameUITutorialControl.References references, InGameUITutorialControl.TutorialType tutType, int index, CakeCurrencySO boosterSO)
	{
	}

	public override void SetUp(VisualElements visualElements)
	{
	}

	[IteratorStateMachine(typeof(_003CIEShowStepOpenBox_003Ed__33))]
	private IEnumerator IEShowStepOpenBox()
	{
		return null;
	}

	private void TakeReward()
	{
	}

	[IteratorStateMachine(typeof(_003CIEShowBoosterFlyAndUnlock_003Ed__35))]
	private IEnumerator IEShowBoosterFlyAndUnlock()
	{
		return null;
	}

	private static Vector3 GetLastTouchWorldPosition(RectTransform target, Vector3 fallback)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0008: Unknown result type (might be due to invalid IL or missing references)
		return default(Vector3);
	}

	[IteratorStateMachine(typeof(_003CIEUnlockAndUseBooster_003Ed__37))]
	private IEnumerator IEUnlockAndUseBooster()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CProcess_003Ed__38))]
	public override IEnumerator Process(Action onComplete)
	{
		return null;
	}

	private void OnClickButtonUseBooster(UIButtonHUD button)
	{
	}

	private void OnDestroy()
	{
	}
}
