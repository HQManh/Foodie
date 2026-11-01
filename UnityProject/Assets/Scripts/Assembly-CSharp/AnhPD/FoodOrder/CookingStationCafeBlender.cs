using CakeOrder;
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
		private float sfxVolume = 1f;

		[SerializeField]
		private AudioSource sfxBlendLoop;

		private const float ReleaseRetryInterval = 0.3f;

		private int _trayCount;

		private string _trayResultId;

		private bool _lidClosed;

		private bool _hasQueued;

		private InteractVector _queued;

		private float _nextReleaseRetry;

		private bool _trayReady = true;

		private bool _trayHoldingForBeans;

		public bool IsTrayLoaded => _trayCount > 0;

		protected override void Awake()
		{
			base.Awake();
			_lidClosed = false;
			HoldEnd(blenderAnim, animLidOpen);
		}

		protected override void Update()
		{
			base.Update();
			TickRelease();
		}

		private void OnDisable()
		{
			_trayReady = true;
			_trayHoldingForBeans = false;
			_lidClosed = false;
			HoldEnd(blenderAnim, animLidOpen);
			HoldEnd(trayAnim, animTrayIn);
			SetBlendLoop(on: false);
		}

		public override void PutInIngredient(InteractVector vector)
		{
			_queued = vector;
			_hasQueued = true;
			base.PutInIngredient(vector);
			CloseLid();
			if (_trayHoldingForBeans)
			{
				PlayTrayIn();
			}
		}

		protected override bool CanStartProcess(InteractVector vector)
		{
			if (_lidClosed && _trayReady)
			{
				return _trayCount < 1;
			}
			return false;
		}

		private void TryStartQueued()
		{
			if (_hasQueued && CanStartProcess(_queued))
			{
				_orchestrator.TryStartProcess(_queued);
			}
		}

		protected override int GetSpawnableCount(int groupIndex, int want)
		{
			return want;
		}

		protected override bool FinishingBreaksJam(int groupIndex)
		{
			if (!MessyController.Ins)
			{
				return false;
			}
			StationInteractGroup stationInteractGroup = groups[groupIndex];
			foreach (DragItem dragItem in MessyController.Ins.GetDragItems())
			{
				if ((bool)dragItem && dragItem.Cell != null && stationInteractGroup.AcceptsId(dragItem.GetId()))
				{
					return true;
				}
			}
			return false;
		}

		protected override void SpawnResult(int groupIndex, int num)
		{
			if (num > 0)
			{
				_trayResultId = ResolveResultId(groupIndex);
				_trayCount += num;
			}
		}

		protected override void HandleComplete(int groupIndex, bool isResultSpawned, int num)
		{
			base.HandleComplete(groupIndex, isResultSpawned, num);
			_hasQueued = false;
			OpenLid();
		}

		private void TickRelease()
		{
			if (_trayCount > 0 && !IsPaused && _nextReleaseRetry <= Time.time)
			{
				_nextReleaseRetry = Time.time + 0.3f;
				TryRelease();
			}
		}

		protected override void OnGridCellFreed(GridCellFreedEvent evt)
		{
			base.OnGridCellFreed(evt);
			if (!IsPaused)
			{
				TryRelease();
			}
		}

		private void TryRelease()
		{
			if (CanReleaseNow())
			{
				if (_trayHoldingForBeans)
				{
					ReleaseTrayContent();
				}
				else if (_trayReady)
				{
					PlayTrayOut();
				}
			}
		}

		private bool CanReleaseNow()
		{
			if (_trayCount > 0 && !string.IsNullOrEmpty(_trayResultId) && (bool)MessyController.Ins)
			{
				LevelInfo info = MessyController.Ins.Info;
				if (info != null)
				{
					CookingStation station;
					return info.TryGetInteractableStation(_trayResultId, center.position, out station);
				}
			}
			return false;
		}

		private void ReleaseTrayContent()
		{
			if (!MessyController.Ins)
			{
				return;
			}
			LevelInfo info = MessyController.Ins.Info;
			if (info == null || string.IsNullOrEmpty(_trayResultId))
			{
				return;
			}
			CookingStation station;
			while (_trayCount > 0 && info.TryGetInteractableStation(_trayResultId, center.position, out station))
			{
				MessyController.Ins.SpawnIngredient(_trayResultId, 1, center.position, DragOrigin.Station);
				_trayCount--;
			}
		}

		protected override void OnWorkingChanged(bool working)
		{
			if (working)
			{
				PlayLoop(blenderAnim, animBlenderGrind);
				PlayLoop(trayAnim, animTrayGrind);
				SetBlendLoop(on: true);
				return;
			}
			SetBlendLoop(on: false);
			if (IsPlaying(blenderAnim, animBlenderGrind))
			{
				OpenLid();
			}
			if (IsPlaying(trayAnim, animTrayGrind))
			{
				HoldEnd(trayAnim, animTrayIn);
			}
		}

		public override void SetPaused(bool paused)
		{
			base.SetPaused(paused);
			ApplyTimeScale();
			if ((bool)sfxBlendLoop)
			{
				if (paused)
				{
					sfxBlendLoop.Pause();
				}
				else
				{
					sfxBlendLoop.UnPause();
				}
			}
		}

		private void PlayTrayOut()
		{
			_trayReady = false;
			_trayHoldingForBeans = false;
			PlaySfx(sfxTrayOut);
			PlayOnce(trayAnim, animTrayOut, delegate
			{
				ReleaseTrayContent();
				if (_hasQueued)
				{
					PlayTrayIn();
				}
				else
				{
					_trayHoldingForBeans = true;
					PlayLoop(trayAnim, animTrayIdleOut);
				}
			});
		}

		private void PlayTrayIn()
		{
			_trayHoldingForBeans = false;
			PlaySfx(sfxTrayIn);
			PlayOnce(trayAnim, animTrayIn, OnTrayArrived);
		}

		private void OnTrayArrived()
		{
			_trayReady = true;
			TryStartQueued();
		}

		private void CloseLid()
		{
			if (_lidClosed)
			{
				TryStartQueued();
				return;
			}
			PlaySfx(sfxDropCoffee);
			PlayOnce(blenderAnim, animDropCoffee, delegate
			{
				_lidClosed = true;
				TryStartQueued();
			});
		}

		private void OpenLid()
		{
			_lidClosed = false;
			PlaySfx(sfxLidOpen);
			PlayOnce(blenderAnim, animLidOpen);
		}

		private void PlaySfx(AudioClip clip)
		{
			if ((bool)clip)
			{
				if (AudioManagerCakeOrder.Instance != null) AudioManagerCakeOrder.Instance.PlaySfx(clip, sfxVolume, (AudioManagerCakeOrder.AudioTrack)5);
			}
		}

		private void SetBlendLoop(bool on)
		{
			if (!sfxBlendLoop)
			{
				return;
			}
			if (!on)
			{
				sfxBlendLoop.Stop();
				return;
			}
			sfxBlendLoop.loop = true;
			if (!sfxBlendLoop.isPlaying)
			{
				sfxBlendLoop.Play();
			}
		}

		private void PlayOnce(SkeletonAnimation skeleton, string anim, Action onDone = null)
		{
			Spine.AnimationState animationState = StateOf(skeleton);
			if (animationState != null && !string.IsNullOrEmpty(anim))
			{
				TrackEntry trackEntry = animationState.SetAnimation(0, anim, false);
				ApplyTimeScale();
				if (trackEntry != null)
				{
					if (onDone != null)
					{
						trackEntry.Complete += delegate
						{
							onDone();
						};
					}
					return;
				}
			}
			onDone?.Invoke();
		}

		private void PlayLoop(SkeletonAnimation skeleton, string anim)
		{
			Spine.AnimationState animationState = StateOf(skeleton);
			if (animationState != null && !string.IsNullOrEmpty(anim))
			{
				animationState.SetAnimation(0, anim, true);
				ApplyTimeScale();
			}
		}

		private static void HoldEnd(SkeletonAnimation skeleton, string anim)
		{
			Spine.AnimationState animationState = StateOf(skeleton);
			if (animationState != null && !string.IsNullOrEmpty(anim))
			{
				TrackEntry trackEntry = animationState.SetAnimation(0, anim, false);
				if (trackEntry != null)
				{
					trackEntry.TrackTime = trackEntry.AnimationEnd;
				}
			}
		}

		private static bool IsPlaying(SkeletonAnimation skeleton, string anim)
		{
			if (!string.IsNullOrEmpty(anim))
			{
				Spine.AnimationState animationState = StateOf(skeleton);
				if (animationState != null)
				{
					TrackEntry current = animationState.GetCurrent(0);
					if (current != null && current.Animation != null)
					{
						return current.Animation.Name == anim;
					}
				}
			}
			return false;
		}

		private static Spine.AnimationState StateOf(SkeletonAnimation skeleton)
		{
			if (!skeleton)
			{
				return null;
			}
			if (skeleton.AnimationState == null)
			{
				skeleton.Initialize(false);
			}
			return skeleton.AnimationState;
		}

		private void ApplyTimeScale()
		{
			float timeScale = (IsPaused ? 0f : 1f);
			if ((bool)blenderAnim)
			{
				blenderAnim.timeScale = timeScale;
			}
			if ((bool)trayAnim)
			{
				trayAnim.timeScale = timeScale;
			}
		}
	}
}
