using DG.Tweening;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewCutting : StationGroupView
	{
		[SerializeField]
		private Transform knife;

		[SerializeField]
		private AudioClip sfxCut;

		[SerializeField]
		private ParticleSystem vfx;

		[SerializeField]
		private GameObject[] cutState;

		[SerializeField]
		private float knifeStartAngle;

		[SerializeField]
		private float knifeEndAngle;

		[SerializeField]
		private float cutInterval;

		private int _count;

		private Sequence _chopSeq;

		public override void Play(float duration)
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void ResetState()
		{
		}

		private void ShowState(int index)
		{
		}

		public override void Stop()
		{
		}
	}
}
