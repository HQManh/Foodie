using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewToaster : StationGroupView
	{
		[SerializeField]
		private Transform tf;

		[SerializeField]
		private SpriteRenderer toasted;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		[SerializeField]
		private AudioSource sfxBake;

		private Vector2 _startPos;

		private Tween _fade;

		private void Awake()
		{
			_startPos = tf.localPosition;
		}

		public override void Play(float duration)
		{
			sfxBake.Play();
			tf.gameObject.SetActive(true);
			vfxSmoke.Play();
			tf.localPosition = _startPos;
			tf.DOPunchPosition(Vector3.up * 0.3f, 0.3f, 1, 1f).SetLoops(-1, LoopType.Restart);
			toasted.SetAlpha(0f);
			_fade = toasted.DOFade(1f, duration);
		}

		public override void SetPaused(bool paused)
		{
			StationGroupView.SetTargetTweensPaused(tf, paused);
			StationGroupView.SetTweenPaused(_fade, paused);
			StationGroupView.SetAudioPaused(sfxBake, paused);
		}

		public override void Stop()
		{
			sfxBake.Stop();
			vfxSmoke.Stop();
			tf.DOComplete();
			tf.DOKill();
			tf.gameObject.SetActive(false);
		}
	}
}
