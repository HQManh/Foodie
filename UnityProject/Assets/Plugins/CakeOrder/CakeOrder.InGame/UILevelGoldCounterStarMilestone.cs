using System;
using CakeOrder.BaseUI;
using UnityEngine;
using UnityEngine.UI;

namespace CakeOrder.InGame
{

public class UILevelGoldCounterStarMilestone : UIElementWithAnim
{
	[Serializable]
	public class VisualConfig
	{
		public Sprite spriteBubbleGray;

		public Sprite spriteBubblePassed;

		public Sprite spriteStarGray;

		public Sprite spriteStarPassed;

		public float scaleBubbleGray;

		public float scaleBubblePassed;

		public float durationScaleBubble;
	}

	private VisualConfig _visualConfig;

	[SerializeField]
	private Image _imgBubble;

	[SerializeField]
	private Image _imgStar;

	public int Index { get; private set; }

	public int Value { get; private set; }

	public bool IsPassed { get; private set; }

	public void SettUp(VisualConfig visualConfig, int index, int value)
	{
	}

	public void HighlightPassed()
	{
	}
}
}
