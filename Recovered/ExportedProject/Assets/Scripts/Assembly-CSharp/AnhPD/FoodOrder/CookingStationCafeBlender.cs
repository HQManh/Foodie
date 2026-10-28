using System;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class CookingStationCafeBlender : CookingStation
	{
		[SerializeField]
		private SkeletonAnimation blenderAnim;

		[SpineAnimation(null, null, true, false, false, dataField = "blenderAnim")]
		[SerializeField]
		private string animLidOpen;

		[SpineAnimation(null, null, true, false, false, dataField = "blenderAnim")]
		[SerializeField]
		private string animDropCoffee;

		[SpineAnimation(null, null, true, false, false, dataField = "blenderAnim")]
		[SerializeField]
		private string animBlenderGrind;

		[SerializeField]
		private SkeletonAnimation trayAnim;

		[SpineAnimation(null, null, true, false, false, dataField = "trayAnim")]
		[SerializeField]
		private string animTrayIn;

		[SpineAnimation(null, null, true, false, false, dataField = "trayAnim")]
		[SerializeField]
		private string animTrayOut;

		[SpineAnimation(null, null, true, false, false, dataField = "trayAnim")]
		[SerializeField]
		private string animTrayGrind;

		[SpineAnimation(null, null, true, false, false, dataField = "trayAnim")]
		[SerializeField]
		private string animTrayIdleOut;

		[SerializeField]
		private AudioClip sfxLidOpen;

		[SerializeField]
		private AudioClip sfxDropCoffee;

		[SerializeField]
		private AudioClip sfxTrayOut;

		[SerializeField]
		private AudioClip sfxTrayIn;

		[Range(0f, 1f)]
		[SerializeField]
		private float sfxVolume;

		[SerializeField]
		private AudioSource sfxBlendLoop;

		private const float ReleaseRetryInterval = 0.3f;

		private int _trayCount;

		private string _trayResultId;

		private bool _lidClosed;

		private bool _hasQueued;

		private InteractVector _queued;

		private float _nextReleaseRetry;

		private bool _trayReady;

		private bool _trayHoldingForBeans;

		public bool IsTrayLoaded => false;

		protected override void Awake()
		{
		}

		protected override void Update()
		{
		}

		private void OnDisable()
		{
		}

		public override void PutInIngredient(InteractVector vector)
		{
		}

		protected override bool CanStartProcess(InteractVector vector)
		{
			return false;
		}

		private void TryStartQueued()
		{
		}

		protected override int GetSpawnableCount(int groupIndex, int want)
		{
			return 0;
		}

		protected override bool FinishingBreaksJam(int groupIndex)
		{
			return false;
		}

		protected override void SpawnResult(int groupIndex, int num)
		{
		}

		protected override void HandleComplete(int groupIndex, bool isResultSpawned, int num)
		{
		}

		private void TickRelease()
		{
		}

		protected override void OnGridCellFreed(GridCellFreedEvent evt)
		{
		}

		private void TryRelease()
		{
		}

		private bool CanReleaseNow()
		{
			return false;
		}

		private void ReleaseTrayContent()
		{
		}

		protected override void OnWorkingChanged(bool working)
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void PlayTrayOut()
		{
		}

		private void PlayTrayIn()
		{
		}

		private void OnTrayArrived()
		{
		}

		private void CloseLid()
		{
		}

		private void OpenLid()
		{
		}

		private void PlaySfx(AudioClip clip)
		{
		}

		private void SetBlendLoop(bool on)
		{
		}

		private void PlayOnce(SkeletonAnimation skeleton, string anim, Action onDone = null)
		{
		}

		private void PlayLoop(SkeletonAnimation skeleton, string anim)
		{
		}

		private static void HoldEnd(SkeletonAnimation skeleton, string anim)
		{
		}

		private static bool IsPlaying(SkeletonAnimation skeleton, string anim)
		{
			return false;
		}

		private static Spine.AnimationState StateOf(SkeletonAnimation skeleton)
		{
			return null;
		}

		private void ApplyTimeScale()
		{
		}
	}
}
