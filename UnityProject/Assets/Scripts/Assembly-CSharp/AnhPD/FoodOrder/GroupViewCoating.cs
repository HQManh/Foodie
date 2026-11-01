using CakeOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewCoating : StationGroupView
	{
		[SerializeField]
		private SpriteRenderer[] coating;

		[SerializeField]
		private ParticleSystem vfxCoating;

		[SerializeField]
		private AudioClip sfxCoating;

		public bool isJump;

		[SerializeField]
		private Vector2 startPos;

		private Sequence _fade;

		private float _stepRate;

		private void Init()
		{
			startPos = transform.localPosition;
		}

		private void OnEnable()
		{
			SetCoatingAlpha(0f);
			_stepRate = 0f;
		}

		private void SetCoatingAlpha(float alpha)
		{
			for (int i = 0; i < coating.Length; i++)
			{
				coating[i].SetAlpha(alpha);
			}
		}

		public override void Play(float duration)
		{
			transform.localPosition = startPos;
			gameObject.SetActive(true);
			SetCoatingAlpha(0f);
			if (_fade != null)
			{
				_fade.Kill();
			}
			_fade = DOTween.Sequence();
			for (int i = 0; i < coating.Length; i++)
			{
				_fade.Join(coating[i].DOFade(1f, duration));
			}
			if (!isJump)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfxCoating, 0.5f, (AudioManagerCakeOrder.AudioTrack)5);
				transform.DOPunchRotation(new Vector3(0f, 0f, 5f), 0.1f, 10, 1f).SetLoops(-1).SetDelay(0.25f).OnStepComplete(delegate
				{
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfxCoating, 0.5f, (AudioManagerCakeOrder.AudioTrack)5);
				});
			}
			else
			{
				transform.DOPunchPosition(Vector3.up * 0.5f, 0.3f, 1, 1f).SetLoops(-1).SetDelay(0.25f).OnStepComplete(delegate
				{
					vfxCoating.Play();
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfxCoating, 0.5f, (AudioManagerCakeOrder.AudioTrack)5);
				});
			}
		}

		public override void Stop()
		{
			transform.DOComplete();
			transform.DOKill();
			gameObject.SetActive(false);
		}

		public override void SetPaused(bool paused)
		{
			SetTargetTweensPaused(transform, paused);
			SetTweenPaused(_fade, paused);
		}

		public override void PlayStep(float rate)
		{
			base.PlayStep(rate);
			if (!isJump)
			{
				bool rotated = transform.localEulerAngles.z != 0f;
				transform.DOComplete(true);
				transform.DOPunchPosition(Vector3.up * 0.3f, 0.15f, 1, 1f);
				transform.DOLocalRotate(new Vector3(0f, 0f, rotated ? 120f : 60f), 0.15f).OnComplete(delegate
				{
					transform.localEulerAngles = new Vector3(0f, 0f, rotated ? 0f : 180f);
					DoneAnimation();
				});
			}
			else
			{
				transform.localPosition = startPos;
				transform.DOComplete(true);
				transform.DOPunchPosition(Vector3.up * 0.5f, 0.3f, 1, 1f).SetDelay(Random.Range(0f, 0.1f)).OnComplete(DoneAnimation);
			}

			void DoneAnimation()
			{
				if (_stepRate < rate)
				{
					_stepRate = rate;
					SetCoatingAlpha(rate);
				}
				if (vfxCoating != null)
				{
					vfxCoating.Play();
				}
				if (sfxCoating != null)
				{
					if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(sfxCoating, 0.5f, (AudioManagerCakeOrder.AudioTrack)5);
				}
			}
		}
	}
}
