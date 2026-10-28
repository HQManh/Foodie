using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;

namespace AnhPD.Cook
{
	public class AppearEffect : MonoBehaviour
	{
		public enum AppearType
		{
			Appear = 0,
			FallAppear = 1,
			FadeIn = 5,
			FallAppearLocal = 7,
			AppearVertical = 8,
			ScaleUp = 9
		}

		public float distance = 5f;

		public float delay;

		[SerializeField]
		private SpriteRenderer spriteRenderer;

		public AppearType type;

		public bool isPlayOnEnable = true;

		public UnityEvent onAppeared;

		private void OnEnable()
		{
			if (isPlayOnEnable)
			{
				PlayEffect();
			}
		}

		public void PlayEffect()
		{
			switch (type)
			{
			case AppearType.Appear:
				base.transform.Appear(0.1f);
				break;
			case AppearType.FallAppear:
				base.transform.FallAppear(0.1f, 0.5f, 0.2f);
				break;
			case AppearType.FadeIn:
				spriteRenderer.SetAlpha(0f);
				spriteRenderer.DOFade(1f, 1f);
				break;
			case AppearType.FallAppearLocal:
				base.transform.FallAppearLocal(0.1f, 1f, 0.2f);
				break;
			case AppearType.AppearVertical:
				base.transform.localPosition = base.transform.localPosition + Vector3.up * distance;
				base.transform.MoveY(0f - distance, 1f, false, delay, delegate
				{
					onAppeared?.Invoke();
				});
				break;
			case AppearType.ScaleUp:
				base.transform.localScale = Vector3.zero;
				base.transform.DOScale(1f, 0.3f).SetEase(Ease.OutBack);
				break;
			}
		}
	}
}
