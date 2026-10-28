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
		}

		public override void SetPaused(bool paused)
		{
		}

		public override void Stop()
		{
		}
	}
}
