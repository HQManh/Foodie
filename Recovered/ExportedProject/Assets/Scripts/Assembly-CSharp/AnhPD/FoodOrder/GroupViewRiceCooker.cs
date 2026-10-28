using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewRiceCooker : StationGroupView
	{
		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private string riceId;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fillRiceAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string riceIdleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string fillWaterAnim;

		[SerializeField]
		private AudioClip fillRiceSfx;

		[SerializeField]
		private float fillRiceSfxDelay;

		[SerializeField]
		private AudioClip fillWaterSfx;

		[SerializeField]
		private float fillWaterSfxDelay;

		private Tween _fillRiceSfxTween;

		private Tween _fillWaterSfxTween;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		private bool _isPaused;

		private float _pausedTimeScale;

		public override bool IsIntakeBusy => false;

		private void Start()
		{
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		private void PlayDelayedSfx(AudioClip clip, float delay, ref Tween tween)
		{
		}

		private new static void SetTweenPaused(Tween tween, bool paused)
		{
		}

		public override void Play(float duration)
		{
		}

		private void OnFillWaterStart(float animRate)
		{
		}

		public override float GetPlayDuration(float duration)
		{
			return 0f;
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void PlayIdle()
		{
		}

		private static void PlaySfx(AudioClip clip)
		{
		}

		private Spine.AnimationState StateOf()
		{
			return null;
		}
	}
}
