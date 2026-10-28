using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Utilities;

namespace CakeOrder.BaseUI
{

public class UIInGameChallengeConditionCounter : UINumberCounterAbstract
{
	[Serializable]
	public class VisualConfig
	{
		public Graphic[] graphics;

		public Gradient[] gradientByProgress;

		public void ApplyProgress(float progress)
		{
		}
	}

	[SerializeField]
	private Slider _sliderProgress;

	[SerializeField]
	private TextMeshProUGUI _textProgress;

	[SerializeField]
	private GameObject[] _objsOnExceedThreshold;

	[SerializeField]
	private string _textProgressFormat;

	[SerializeField]
	private VisualConfig _visualConfig;

	private int _currentAmount;

	private int _threshold;

	private int _prevTextProgressAmount;

	public void SetUpData(int threshold, int initValue = 0)
	{
	}

	protected override int GetAmountData()
	{
		return 0;
	}

	public override void UpdateAmountImmediate(int value)
	{
	}

	public override void UpdateAmount(int value, Action onDoneAnim = null)
	{
	}

	private void OnUpdateAmount(int amount)
	{
	}

	protected override void UpdateVisualAmount(float amount)
	{
	}
}
}
