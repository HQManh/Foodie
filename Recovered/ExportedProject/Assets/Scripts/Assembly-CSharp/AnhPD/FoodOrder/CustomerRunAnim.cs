using System;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CustomerRunAnim : MonoBehaviour
	{
		public enum Eff
		{
			None = 0,
			Stop = 1,
			Pass = 2
		}

		private const int BodyTrack = 0;

		private const int EffTrack = 1;

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string run;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string run2;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string stop;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string effStop;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string effPass;

		[SerializeField]
		[Range(0f, 1f)]
		private float run2Chance;

		[SerializeField]
		[Min(0f)]
		private float effMixOut;

		private Eff _eff;

		private Spine.AnimationState State => null;

		public bool IsRunning => false;

		private void Reset()
		{
		}

		public void Run()
		{
		}

		public void SetEff(Eff eff)
		{
		}

		private void PlayLap()
		{
		}

		public void Stop(Action onDone)
		{
		}

		private bool Has(string anim)
		{
			return false;
		}
	}
}
