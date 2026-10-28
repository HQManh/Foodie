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
		}

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
