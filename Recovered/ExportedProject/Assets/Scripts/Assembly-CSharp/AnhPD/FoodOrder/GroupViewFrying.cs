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
		private Color burnColor;

		public override void Play(float duration)
		{
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		public void StartBurning(float duration)
		{
		}

		public void HalfBurned()
		{
		}

		public void ResetToCooked()
		{
		}

		public void Burned()
		{
		}

		private void Update()
		{
		}
	}
}
