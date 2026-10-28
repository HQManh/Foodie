using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class ProgressRunnerSlider : AbstractProgressRunner
	{
		[SerializeField]
		private Slider slider;

		public override void SetProgress(float value)
		{
		}

		public override Tween BuildTween(float duration, Action onHalfway, Action onComplete)
		{
			return null;
		}
	}
}
