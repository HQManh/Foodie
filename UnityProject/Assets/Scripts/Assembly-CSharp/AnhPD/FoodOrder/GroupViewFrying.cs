using CakeOrder;
using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewFrying : StationGroupView
	{
		[SerializeField]
		private SpriteRenderer[] raw;

		[SerializeField]
		private SpriteRenderer[] done;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		[SerializeField]
		private ParticleSystem vfxGlow;

		[SerializeField]
		private BoilOil oil;

		[SerializeField]
		private AudioClip sfxFry;

		private Tween _tweenScale;

		private Sequence _tweenFry;

		private float _cooldown;

		private bool _isRed;

		private bool _isBurning;

		[SerializeField]
		private Color burnColor = new Color(0.869f, 0.722f, 0.529f, 1f);

		public override void Play(float duration)
		{
			if (sfxFry != null)
			{
				AudioManagerCakeOrder.Instance.PlaySfx(sfxFry, 1f, (AudioManagerCakeOrder.AudioTrack)5);
			}
			gameObject.SetActive(true);
			if (oil != null)
			{
				oil.StartBoiling();
			}
			vfxSmoke.Play();
			if (vfxGlow != null)
			{
				vfxGlow.Play();
			}
			if (_tweenScale != null)
			{
				_tweenScale.Kill();
			}
			transform.localScale = Vector3.one;
			transform.DOShakePosition(0.1f, Vector3.one * 0.1f, 10, 90f, false, true).SetDelay(0.25f).SetEase(Ease.Linear).SetLoops(-1, LoopType.Yoyo);
			if (_tweenFry != null)
			{
				_tweenFry.Kill();
			}
			_tweenFry = DOTween.Sequence();
			for (int i = 0; i < raw.Length; i++)
			{
				raw[i].SetAlpha(1f);
				_tweenFry.Join(raw[i].DOFade(0f, duration));
			}
			for (int j = 0; j < done.Length; j++)
			{
				done[j].SetAlpha(0f);
				_tweenFry.Join(done[j].DOFade(1f, duration));
			}
		}

		public override void Stop()
		{
			_tweenScale.Complete();
			if (oil != null)
			{
				oil.StopBoiling();
			}
			transform.DOComplete();
			vfxSmoke.Stop();
			if (vfxGlow != null)
			{
				vfxGlow.Stop();
				vfxGlow.Clear();
			}
			if (_tweenFry != null)
			{
				_tweenFry.Complete();
			}
			for (int i = 0; i < done.Length; i++)
			{
				done[i].color = Color.white;
				done[i].SetAlpha(0f);
			}
			_isRed = false;
			_isBurning = false;
			gameObject.SetActive(false);
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_tweenFry, paused);
			SetTargetTweensPaused(transform, paused);
			if (oil != null)
			{
				oil.SetPaused(paused);
			}
			if (vfxGlow != null)
			{
				if (paused)
				{
					vfxGlow.Stop();
					vfxGlow.Clear();
				}
				else
				{
					vfxGlow.Play();
				}
			}
		}

		public void StartBurning(float duration)
		{
			if (_tweenFry != null)
			{
				_tweenFry.Complete();
			}
			_isBurning = true;
		}

		public void HalfBurned()
		{
			_tweenScale = transform.DOPunchScale(Vector3.one * 0.1f, 0.3f, 1, 1f).SetLoops(-1, LoopType.Restart);
		}

		public void ResetToCooked()
		{
			_isRed = false;
			if (_tweenScale != null)
			{
				_tweenScale.Kill();
			}
			transform.DOComplete();
			transform.localScale = Vector3.one;
			if (_tweenFry != null)
			{
				_tweenFry.Complete();
			}
			for (int i = 0; i < done.Length; i++)
			{
				done[i].color = Color.white;
				done[i].SetAlpha(1f);
			}
		}

		public void Burned()
		{
			transform.DOComplete();
			gameObject.SetActive(false);
			if (oil != null)
			{
				oil.StopBoiling();
			}
			_isBurning = false;
		}

		private void Update()
		{
			if (!_isBurning)
			{
				return;
			}
			_cooldown -= Time.deltaTime;
			if (_cooldown <= 0f)
			{
				for (int i = 0; i < done.Length; i++)
				{
					done[i].color = _isRed ? Color.white : burnColor;
				}
				_cooldown = 0.2f;
				_isRed = !_isRed;
			}
		}
	}
}
