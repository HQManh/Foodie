using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewCoke : StationGroupView
	{
		[SerializeField]
		private AudioSource sfxPouring;

		[SerializeField]
		private Transform top;

		[SerializeField]
		private Transform bot;

		[SerializeField]
		private GameObject lightBub;

		[SerializeField]
		private LineRenderer line;

		[SerializeField]
		private SpriteRenderer waterInCup;

		[SerializeField]
		private SpriteRenderer waterSurface;

		[SerializeField]
		private SpriteRenderer cupFont;

		[SerializeField]
		private SpriteRenderer cupBack;

		[SerializeField]
		private float extendDuration = 0.3f;

		[SerializeField]
		private float surfaceFadeDuration = 0.1f;

		[SerializeField]
		private Vector3 surfaceRiseOffset = new Vector3(0f, 0.3f, 0f);

		[SerializeField]
		private float surfaceScaleUp = 1.15f;

		[SerializeField]
		private Vector3 surfaceStartLocalPos;

		[SerializeField]
		private Vector3 surfaceStartScale = Vector3.one;

		[Tooltip("KÃ©o cá»‘c ra: háº¡ bot xuá»‘ng ngáº§n nÃ\u00a0y (local Y) Ä‘á»ƒ dÃ²ng nÆ°á»›c rÆ¡i dÃ\u00a0i hÆ¡n nhÆ° khÃ\u00b4ng bá»‹ cá»‘c há»©ng.")]
		[SerializeField]
		private float botDropOffset = 0.3f;

		private Sequence _seq;

		private Vector3 _botHomeLocalPos;

		private bool _botCached;

		private void Awake()
		{
			CacheBotHome();
		}

		private void CacheBotHome()
		{
			if (!_botCached)
			{
				_botHomeLocalPos = bot.localPosition;
				_botCached = true;
			}
		}

		public override void Play(float duration)
		{
			gameObject.SetActive(true);
			ResetVisual();
			float riseDuration = Mathf.Max(0f, duration - extendDuration - surfaceFadeDuration);
			_seq = DOTween.Sequence();
			_seq.Append(GetExtendTween());
			_seq.Append(waterSurface.DOFade(1f, surfaceFadeDuration));
			_seq.Append(GetRiseTween(riseDuration));
			sfxPouring.Play();
			lightBub.SetActive(true);
		}

		public void HoldStream()
		{
			CacheBotHome();
			if (_seq != null)
			{
				_seq.Kill();
			}
			_seq = null;
			gameObject.SetActive(true);
			bot.localPosition = _botHomeLocalPos;
			waterSurface.transform.localPosition = surfaceStartLocalPos + surfaceRiseOffset;
			waterSurface.transform.localScale = surfaceStartScale * surfaceScaleUp;
			waterSurface.SetAlpha(1f);
			waterInCup.SetAlpha(1f);
			line.positionCount = 2;
			line.SetPosition(0, top.position);
			line.SetPosition(1, bot.position);
			line.enabled = true;
			ShowCup(true);
			sfxPouring.Play();
		}

		public void SetCupTakenOut(bool takenOut)
		{
			SetBotLowered(takenOut);
			ShowCup(!takenOut);
		}

		public void SetBotLowered(bool lowered)
		{
			CacheBotHome();
			Vector3 pos = _botHomeLocalPos;
			if (lowered)
			{
				pos += Vector3.down * botDropOffset;
			}
			bot.localPosition = pos;
			if (line != null && line.enabled)
			{
				line.SetPosition(1, bot.position);
			}
		}

		private void ShowCup(bool show)
		{
			if (cupFont != null)
			{
				cupFont.enabled = show;
			}
			if (cupBack != null)
			{
				cupBack.enabled = show;
			}
			if (waterInCup != null)
			{
				waterInCup.enabled = show;
			}
			if (waterSurface != null)
			{
				waterSurface.enabled = show;
			}
		}

		private Tween GetExtendTween()
		{
			return DOVirtual.Float(0f, 1f, extendDuration, delegate(float t)
			{
				Vector3 a = top.position;
				Vector3 b = bot.position;
				line.SetPosition(1, Vector3.Lerp(a, b, Mathf.Clamp01(t)));
			});
		}

		private Tween GetSurfaceFadeTween()
		{
			return waterSurface.DOFade(1f, surfaceFadeDuration);
		}

		private Tween GetRiseTween(float dur)
		{
			Sequence sequence = DOTween.Sequence();
			sequence.Join(waterSurface.transform.DOLocalMove(surfaceStartLocalPos + surfaceRiseOffset, dur));
			sequence.Join(waterSurface.transform.DOScale(surfaceStartScale * surfaceScaleUp, dur));
			sequence.Join(waterInCup.DOFade(1f, dur));
			sequence.Join(DOVirtual.Float(0f, 1f, dur, delegate
			{
				line.SetPosition(1, bot.position);
			}));
			return sequence;
		}

		private void ResetVisual()
		{
			CacheBotHome();
			bot.localPosition = _botHomeLocalPos;
			line.positionCount = 2;
			line.SetPosition(0, top.position);
			line.SetPosition(1, top.position);
			line.enabled = true;
			waterSurface.transform.localPosition = surfaceStartLocalPos;
			waterSurface.transform.localScale = surfaceStartScale;
			waterSurface.SetAlpha(0f);
			waterInCup.SetAlpha(0f);
			ShowCup(true);
		}

		public override void SetPaused(bool paused)
		{
			SetTweenPaused(_seq, paused);
			SetAudioPaused(sfxPouring, paused);
		}

		public override void Stop()
		{
			if (_seq != null)
			{
				_seq.Kill();
			}
			_seq = null;
			ResetVisual();
			line.enabled = false;
			gameObject.SetActive(false);
			sfxPouring.Stop();
			lightBub.SetActive(false);
		}

		private void Init()
		{
			surfaceStartLocalPos = waterSurface.transform.localPosition;
			surfaceStartScale = waterSurface.transform.localScale;
		}
	}
}
