using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class GroupViewTeapot : StationGroupView
	{
		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private string cupId;

		[SerializeField]
		private string teaId;

		[SerializeField]
		private string waterId;

		[SerializeField]
		private SkeletonAnimation cupSkeleton;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string openAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string idleAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putTeaAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putTeaToWaterAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putWaterAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string putWaterToTeaAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string pourAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string pourEndAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupEmptyAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupPourAnim;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupFilledAnim;

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupPourSfxEvent;

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "cupSkeleton")]
		private string cupPourEndEvent;

		[SerializeField]
		private float cupPourDelay;

		[SerializeField]
		private float cupPourX;

		[SerializeField]
		private float cupSlideOutTime;

		[SerializeField]
		private AudioClip putTeaSfx;

		[SerializeField]
		private AudioClip putWaterSfx;

		[SerializeField]
		private float putWaterSfxDelay;

		[SerializeField]
		private AudioClip pourSfx;

		[SerializeField]
		private AudioClip lidSfx;

		[SerializeField]
		private ParticleSystem vfxSmoke;

		private const float MinPourTime = 0.1f;

		private bool _hasTea;

		private bool _hasWater;

		private bool _isPaused;

		private float _pausedTimeScale;

		private Tween _putSfxTween;

		private float _cupRestX;

		private TrackEntry _slideEntry;

		private float _slideStart;

		private float _slideTime;

		private float _slideFrom;

		private float _slideTo;

		public override bool IsIntakeBusy => false;

		private void Awake()
		{
		}

		private void Start()
		{
		}

		private void Update()
		{
		}

		private void StartCupSlide(TrackEntry entry, float to, float time)
		{
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		public override void Play(float duration)
		{
		}

		private void StopSmoke()
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

		private void SetCupX(float x)
		{
		}

		private void ShowCup(bool show)
		{
		}

		private void PlayCupEmpty()
		{
		}

		private void PlayCupPour(float timeScale)
		{
		}

		private void PlayPut(string anim, AudioClip sfx, float sfxDelay = 0f)
		{
		}

		private void PlayPutSfx(AudioClip clip, float delay)
		{
		}

		private TrackEntry Enqueue(Spine.AnimationState state, string anim)
		{
			return null;
		}

		private static float RemainingOfCurrent(Spine.AnimationState state)
		{
			return 0f;
		}

		private float LengthOf(string anim)
		{
			return 0f;
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

		private Spine.AnimationState CupStateOf()
		{
			return null;
		}
	}
}
