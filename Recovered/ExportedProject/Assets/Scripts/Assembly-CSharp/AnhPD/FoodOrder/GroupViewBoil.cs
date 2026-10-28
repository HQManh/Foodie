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
	}
}
