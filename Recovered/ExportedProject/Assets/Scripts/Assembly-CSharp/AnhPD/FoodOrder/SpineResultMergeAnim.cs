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
			public List<GameObject> hideWhilePlaying;
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
		private List<IngAnim> perIngredient;

		[SerializeField]
		private float timeoutFallback;

		private const float TimeoutMargin = 0.5f;

		private readonly List<GameObject> _hidden;

		private SkeletonAnimation _playing;

		private IngAnim EntryFor(string ingBaseId)
		{
			return null;
		}

		private SkeletonAnimation SkeletonFor(string ingBaseId)
		{
			return null;
		}

		private string AnimFor(string ingBaseId)
		{
			return null;
		}

		private (string, AudioClip) SfxFor(string ingBaseId)
		{
			return default;
		}

		private void ApplySkin(SkeletonAnimation skeleton, string ingBaseId)
		{
		}

		private static Spine.Animation FindClip(SkeletonAnimation skeleton, string animName)
		{
			return null;
		}

		public override bool Handles(string ingBaseId)
		{
			return false;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			return 0f;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
		}

		private void OnDisable()
		{
		}

		private void Hide(IngAnim entry)
		{
		}

		private void ShowHidden()
		{
		}

		private void Deactivate(SkeletonAnimation skeleton)
		{
		}
	}
}
