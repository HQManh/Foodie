using System;
using System.Collections.Generic;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class SpineResultMergeAnim : ItemResultMergeAnim
	{
		[Serializable]
		private class IngAnim
		{
			public string ingBaseId;

			public SkeletonAnimation skeleton;

			[SpineAnimation(null, null, true, false, false, dataField = "skeleton", fallbackToTextField = true)]
			public string animName;

			[SpineSkin(null, null, false, false, false, false, dataField = "skeleton", fallbackToTextField = true)]
			public string skinName;

			[SpineEvent(null, null, true, false, false, dataField = "skeleton", fallbackToTextField = true)]
			public string sfxEvent;

			public AudioClip sfx;

			[Tooltip("Tắt trong lúc anim này chạy, bật lại khi xong: hình của món mà anim đã vẽ thay (vd sandwich khi anim kem chạy).")]
			public List<GameObject> hideWhilePlaying = new List<GameObject>();
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string mergeAnim;

		[SerializeField]
		[SpineEvent(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string mergeSfxEvent;

		[SerializeField]
		private AudioClip mergeSfx;

		[SerializeField]
		private List<IngAnim> perIngredient = new List<IngAnim>();

		[SerializeField]
		private float timeoutFallback = 3f;

		private const float TimeoutMargin = 0.5f;

		private readonly List<GameObject> _hidden = new List<GameObject>();

		private SkeletonAnimation _playing;

		private IngAnim EntryFor(string ingBaseId)
		{
			if (perIngredient == null || string.IsNullOrEmpty(ingBaseId))
			{
				return null;
			}
			foreach (IngAnim entry in perIngredient)
			{
				if (entry != null && entry.ingBaseId == ingBaseId)
				{
					return entry;
				}
			}
			return null;
		}

		private SkeletonAnimation SkeletonFor(string ingBaseId)
		{
			IngAnim entry = EntryFor(ingBaseId);
			if (entry != null && entry.skeleton != null)
			{
				return entry.skeleton;
			}
			return skeletonAnimation;
		}

		private string AnimFor(string ingBaseId)
		{
			IngAnim entry = EntryFor(ingBaseId);
			return entry != null ? entry.animName : mergeAnim;
		}

		private (string, AudioClip) SfxFor(string ingBaseId)
		{
			IngAnim entry = EntryFor(ingBaseId);
			if (entry != null)
			{
				return (entry.sfxEvent, entry.sfx);
			}
			return (mergeSfxEvent, mergeSfx);
		}

		private void ApplySkin(SkeletonAnimation skeleton, string ingBaseId)
		{
			if (skeleton == null)
			{
				return;
			}
			var s = skeleton.Skeleton;
			if (s == null)
			{
				return;
			}
			IngAnim entry = EntryFor(ingBaseId);
			string skin = (entry != null && !string.IsNullOrEmpty(entry.skinName)) ? entry.skinName : skeleton.initialSkinName;
			if (string.IsNullOrEmpty(skin))
			{
				return;
			}
			var found = s.Data.FindSkin(skin);
			if (found != null && s.Skin != found)
			{
				s.SetSkin(found);
			}
		}

		private static Spine.Animation FindClip(SkeletonAnimation skeleton, string animName)
		{
			if (skeleton == null || string.IsNullOrEmpty(animName))
			{
				return null;
			}
			var s = skeleton.Skeleton;
			SkeletonData data;
			if (s == null)
			{
				if (skeleton.skeletonDataAsset == null)
				{
					return null;
				}
				data = skeleton.skeletonDataAsset.GetSkeletonData(true);
			}
			else
			{
				data = s.Data;
			}
			return data != null ? data.FindAnimation(animName) : null;
		}

		public override bool Handles(string ingBaseId)
		{
			return FindClip(SkeletonFor(ingBaseId), AnimFor(ingBaseId)) != null;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			Spine.Animation clip = FindClip(SkeletonFor(ingBaseId), AnimFor(ingBaseId));
			if (clip == null)
			{
				return timeoutFallback;
			}
			return clip.Duration + TimeoutMargin;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
			// TODO(unrecovered): chained Spine TrackEntry Complete/Event callbacks, a display-class Finish closure and APDUtilities.Appear; callees not fully in stubs.
		}

		private void OnDisable()
		{
			ShowHidden();
		}

		private void Hide(IngAnim entry)
		{
			if (entry == null || entry.hideWhilePlaying == null)
			{
				return;
			}
			foreach (GameObject go in entry.hideWhilePlaying)
			{
				if (go != null && go.activeSelf)
				{
					go.SetActive(false);
					_hidden.Add(go);
				}
			}
		}

		private void ShowHidden()
		{
			foreach (GameObject go in _hidden)
			{
				if (go != null)
				{
					go.SetActive(true);
				}
			}
			_hidden.Clear();
		}

		private void Deactivate(SkeletonAnimation skeleton)
		{
			if (skeleton == null)
			{
				return;
			}
			if (_playing == skeleton)
			{
				_playing = null;
			}
			skeleton.AnimationState?.ClearTrack(0);
			var s = skeleton.Skeleton;
			if (s != null)
			{
				s.SetToSetupPose();
				skeleton.Update(0f);
				skeleton.LateUpdate();
			}
			skeleton.gameObject.SetActive(false);
		}
	}
}
