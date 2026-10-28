using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewCuttingShake : StationGroupView
	{
		[SerializeField]
		private Transform knife;

		[SerializeField]
		private AudioClip sfxCut;

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private int cutNumber;

		private Sequence _chopSeq;

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
