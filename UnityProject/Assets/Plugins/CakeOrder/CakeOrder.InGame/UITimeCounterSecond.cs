using System;
using CakeOrder.BaseUI;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace CakeOrder.InGame
{

public class UITimeCounterSecond : UIElementWithAnim
{
	public enum CountMode
	{
		Auto,
		CountDown,
		CountUp
	}

	[Serializable]
	public class VisualConfig
	{
		public int alertTimeThreshold;

		public float punchScaleAmount;

		public float punchScaleDuration;

		public string separator;
	}

	public delegate int GetTimeSpanValue();

	[SerializeField]
	private TextMeshProUGUI _textTime;

	[SerializeField]
	private VisualConfig _visualConfig;

	[SerializeField]
	private CountMode _countMode;

	private GetTimeSpanValue _delegateGetCurrentTime;

	private GetTimeSpanValue _delegateGetMaxTime;

	private int _currentDisplayedValue;

	private Tween _cachePunchScale;

	public void SetUp(GetTimeSpanValue getCurrent, GetTimeSpanValue getMax, CountMode countMode = CountMode.Auto)
	{
	}

	private void Update()
	{
	}
}
}
