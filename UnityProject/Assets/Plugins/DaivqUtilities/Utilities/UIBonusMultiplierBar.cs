using System;
using System.Runtime.CompilerServices;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Utilities
{

public class UIBonusMultiplierBar : MonoBehaviour
{
	[Serializable]
	public class VisualConfig
	{
		public float durationShowPointer;

		public float lerpSpeedTweenHighlight;
	}

	[SerializeField]
	private RectTransform _pointer;

	[SerializeField]
	private float[] _arrBonusBarThresholds;

	[SerializeField]
	private Image[] _imgsHighlight;

	[SerializeField]
	private TextMeshProUGUI[] _txts;

	[SerializeField]
	private string _txtFormat;

	[SerializeField]
	private float[] _multipliers;

	[SerializeField]
	private AnimationCurve _curvePointerMove;

	[SerializeField]
	private float _durationPointerMoveCycle;

	[SerializeField]
	private VisualConfig _visualConfig;

	private bool _isRunningPointer;

	private Tween _tweenShowHidePointer;

	public int CurrentBonusMultiplierIndex { get; private set; }

	public float CurrentBonusMultiplier => 0f;

	public event Action<float> onBonusMultiplierChanged;

	private void Awake()
	{
	}

	public void StartRunPointer()
	{
	}

	public void StopRunPointer()
	{
	}

	private void Update()
	{
	}
}
}
