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
		private float extendDuration;

		[SerializeField]
		private float surfaceFadeDuration;

		[SerializeField]
		private Vector3 surfaceRiseOffset;

		[SerializeField]
		private float surfaceScaleUp;

		[SerializeField]
		private Vector3 surfaceStartLocalPos;

		[SerializeField]
		private Vector3 surfaceStartScale;

		[Tooltip("KÃ©o cá»‘c ra: háº¡ bot xuá»‘ng ngáº§n nÃ\u00a0y (local Y) Ä‘á»ƒ dÃ²ng nÆ°á»›c rÆ¡i dÃ\u00a0i hÆ¡n nhÆ° khÃ\u00b4ng bá»‹ cá»‘c há»©ng.")]
		[SerializeField]
		private float botDropOffset;

		private Sequence _seq;

		private Vector3 _botHomeLocalPos;

		private bool _botCached;

		private void Awake()
		{
		}

		private void CacheBotHome()
		{
		}

		public override void Play(float duration)
		{
		}

		public void HoldStream()
		{
		}

		public void SetCupTakenOut(bool takenOut)
		{
		}

		public void SetBotLowered(bool lowered)
		{
		}

		private void ShowCup(bool show)
		{
		}

		private Tween GetExtendTween()
		{
			return null;
		}

		private Tween GetSurfaceFadeTween()
		{
			return null;
		}

		private Tween GetRiseTween(float dur)
		{
			return null;
		}

		private void ResetVisual()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		public override void Stop()
		{
		}

		private void Init()
		{
		}
	}
}
