using System;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class AbstractProgressRunner : MonoBehaviour
	{
		public abstract Tween BuildTween(float duration, Action onHalfway, Action onComplete);

		public abstract void SetProgress(float progress);
	}
}
