using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewBoil : StationGroupView
	{
		[SerializeField]
		private SpriteRenderer[] raw;

		[SerializeField]
		private SpriteRenderer[] done;

		[SerializeField]
		private AudioSource sfxBoil;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		private Sequence _fade;

		private void OnEnable()
		{
			for (int i = 0; i < raw.Length; i++)
			{
				raw[i].SetAlpha(1f);
			}
			for (int j = 0; j < done.Length; j++)
			{
				done[j].SetAlpha(0f);
			}
		}

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			if (_fade != null)
			{
				_fade.Kill();
			}
			_fade = DOTween.Sequence();
			for (int i = 0; i < raw.Length; i++)
			{
				raw[i].SetAlpha(1f);
				_fade.Join(raw[i].DOFade(0f, duration));
			}
			for (int j = 0; j < done.Length; j++)
			{
				done[j].SetAlpha(0f);
				_fade.Join(done[j].DOFade(1f, duration));
			}
			sfxBoil.Play();
			if (vfxSmoke != null)
			{
				vfxSmoke.Play();
			}
		}

		public override void Stop()
		{
			sfxBoil.Stop();
			if (vfxSmoke != null)
			{
				vfxSmoke.Stop();
			}
			gameObject.SetActive(false);
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_fade, paused);
			SetAudioPaused(sfxBoil, paused);
		}
	}
}
