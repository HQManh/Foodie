using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CakeOrder.BaseUI;
using DG.Tweening;
using TMPro;
using UnityEngine;
using Utilities;

namespace CakeOrder.Home.Map
{

public class HomeLevelNode : UIElementWithAnim
{
	public enum NodeState
	{
		Locked,
		Unlocked,
		Played
	}

	public enum SelectState
	{
		Normal,
		Selected
	}

	[Serializable]
	public class VisualConfig
	{
		public float durationTweenOnSelecting;

		public float durationTweenOnDeselecting;

		public float scaleFocusOnSelecting;

		public float scaleFocusOnDeselecting;

		public Color colorTintOnSelecting;

		public Color colorTintOnDeselecting;

		public float lerpSpeed;

		public float durationShowStars;
	}

	[CompilerGenerated]
	private sealed class _003CIETweenToScaleAndTint_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float duration;

		public HomeLevelNode _003C_003E4__this;

		public Color targetTint;

		public float targetScale;

		private float _003CtimeEnd_003E5__2;

		private float _003ClerpRatio_003E5__3;

		private Color[] _003CdestinationColors_003E5__4;

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
		public _003CIETweenToScaleAndTint_003Ed__44(int _003C_003E1__state)
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
	private ForwardMouseEvent _mouseEventHandler;

	[Header("Visual by Node State")]
	[SerializeField]
	private GameObject[] _objEnableOnLocked;

	[SerializeField]
	private GameObject[] _objEnableOnUnlocked;

	[SerializeField]
	private Transform _starSection;

	[SerializeField]
	private Transform[] _starRenderers;

	private float[] _originScaleStarRenderers;

	private float _starSectionOriginScale;

	private const string LocDayN = "day_n";

	[Header("Title")]
	[SerializeField]
	private TextMeshPro[] _txtTitle;

	[Header("Visuals on selecting")]
	[SerializeField]
	private SpriteRenderer[] _visualsTintOnSelecting;

	[SerializeField]
	private Transform _scaleAnchorSelection;

	[SerializeField]
	private Transform _focusContainer;

	private Color[] _originColorVisualsTintOnSelecting;

	private VisualConfig _visualConfig;

	private bool _isPlayAnimUnlock;

	private int _numStars;

	private Tween[] _tweenShowStars;

	private Coroutine _corTweenScaleAndTint;

	public int LevelIndex { get; set; }

	public NodeState CurrentNodeState { get; private set; }

	public SelectState CurrentSelectState { get; private set; }

	public Transform FocusContainer => null;

	public event Action<HomeLevelNode> onSelectNode;

	private void Awake()
	{
	}

	public void SetUp(VisualConfig visualConfig, int levelIndex, Vector3 localPosition, NodeState currentNodeState, int numStars, bool playAnimUnlock)
	{
	}

	protected override void OnDoneShow()
	{
	}

	private void OnDisable()
	{
	}

	public void UpdateSelectState(SelectState newState, float delay = 0f)
	{
	}

	public void SetSelectStateImmediate(SelectState newState)
	{
	}

	[IteratorStateMachine(typeof(_003CIETweenToScaleAndTint_003Ed__44))]
	private IEnumerator IETweenToScaleAndTint(float targetScale, Color targetTint, float duration)
	{
		return null;
	}

	private void SetScaleAndTintImmediate(float targetScale, Color targetTint)
	{
	}
}
}
