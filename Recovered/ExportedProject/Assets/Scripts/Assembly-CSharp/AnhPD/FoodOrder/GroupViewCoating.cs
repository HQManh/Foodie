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
		}

		private void OnEnable()
		{
		}

		private void SetCoatingAlpha(float alpha)
		{
		}

		public override void Play(float duration)
		{
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		public override void PlayStep(float rate)
		{
		}
	}
}
