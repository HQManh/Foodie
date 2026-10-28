using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewSoup : StationGroupView
	{
		[SerializeField]
		private SpriteRenderer doneSprite;

		[SerializeField]
		private AudioSource sfxBoil;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		private Tween _fade;

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			sfxBoil.Play();
			vfxSmoke.Play();
			doneSprite.SetAlpha(0f);
			_fade = doneSprite.DOFade(1f, duration - 0.5f).SetEase(Ease.Linear);
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_fade, paused);
			SetAudioPaused(sfxBoil, paused);
		}

		public override void Stop()
		{
			doneSprite.SetAlpha(0f);
			sfxBoil.Stop();
			vfxSmoke.Stop();
			gameObject.SetActive(false);
		}
	}
}
