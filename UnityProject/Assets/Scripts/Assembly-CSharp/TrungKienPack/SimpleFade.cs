using DG.Tweening;
using UnityEngine;

namespace TrungKienPack
{
	public class SimpleFade : MonoBehaviour
	{
		[SerializeField]
		private SpriteRenderer[] arrSpr;

		[SerializeField]
		private float duration = 1f;

		private float currentAlpha;

		public void SetFade(float value)
		{
			DOTween.To(alpha =>
			{
				if (arrSpr == null)
				{
					return;
				}
				for (int i = 0; i < arrSpr.Length; i++)
				{
					SpriteRenderer spr = arrSpr[i];
					Color color = spr.color;
					color.a = alpha;
					spr.color = color;
				}
			}, currentAlpha, value, duration).OnComplete(() => currentAlpha = value);
		}
	}
}
