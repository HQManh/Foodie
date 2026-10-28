using System;
using CakeOrder.BaseUI;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace CakeOrder.InGame
{

public class UITimeCounterTimeSpan : UIElementWithAnim
{
	private enum DisplayUnit
	{
		None,
		Year,
		Month,
		Day,
		Hour,
		Minute,
		Second
	}

	[Serializable]
	public class VisualConfig
	{
		public int alertTimeThreshold;

		public float punchScaleAmount;

		public float punchScaleDuration;

		public bool useUnitString;

		public string separator;
	}

	public delegate TimeSpan GetTimeSpanValue();

	[SerializeField]
	private TextMeshProUGUI _textTime;

	[SerializeField]
	private VisualConfig _visualConfig;

	private GetTimeSpanValue _delegateGetCurrentTime;

	private GetTimeSpanValue _delegateGetMaxTime;

	private DisplayUnit[] _currentDisplayedUnits;

	private int[] _currentDisplayedValues;

	private Tween _cachePunchScale;

	private static string DisplayUnitToString(DisplayUnit unit)
	{
		return null;
	}

	public void SetUp(GetTimeSpanValue getCurrent, GetTimeSpanValue getMax)
	{
	}

	private void Update()
	{
	}
}
}
