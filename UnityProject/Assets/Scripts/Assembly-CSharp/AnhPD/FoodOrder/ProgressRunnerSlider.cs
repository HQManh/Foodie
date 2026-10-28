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
			if (slider != null)
			{
				slider.value = value;
			}
		}

		public override Tween BuildTween(float duration, Action onHalfway, Action onComplete)
		{
			if (onHalfway == null)
			{
				return slider.DOValue(1f, duration).SetEase(Ease.Linear).OnComplete(() => onComplete?.Invoke());
			}
			Sequence sequence = DOTween.Sequence();
			sequence.Append(slider.DOValue(0.5f, duration * 0.5f).SetEase(Ease.Linear));
			sequence.AppendCallback(() => onHalfway?.Invoke());
			sequence.Append(slider.DOValue(1f, duration * 0.5f).SetEase(Ease.Linear));
			sequence.OnComplete(() => onComplete?.Invoke());
			return sequence;
		}
	}
}
