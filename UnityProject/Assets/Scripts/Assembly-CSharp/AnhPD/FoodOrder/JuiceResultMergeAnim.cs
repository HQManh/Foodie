using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class JuiceResultMergeAnim : ItemResultMergeAnim
	{
		[Serializable]
		private class FlavorSkin
		{
			public SandwichPiece piece;

			[SpineSkin(null, null, false, false, false, false, fallbackToTextField = true)]
			public string skin;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		private string mergeAnim;

		[SerializeField]
		private string iceId;

		[SerializeField]
		private List<FlavorSkin> flavorSkins;

		[SerializeField]
		private AudioClip mergeSfx;

		[SerializeField]
		private float timeoutFallback;

		private const float TimeoutMargin = 0.5f;

		private int _testFlavor;

		public override bool Handles(string ingBaseId)
		{
			if (ingBaseId == iceId)
			{
				return FindClip() != null;
			}
			return false;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			Spine.Animation animation = FindClip();
			if (animation == null)
			{
				return timeoutFallback;
			}
			return animation.Duration + 0.5f;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
			PlayMerge(delegate(SkeletonData data)
			{
				return SkinFor(result as FlexibleDragItem, data);
			}, delegate
			{
				if (result)
				{
					result.transform.Appear(0.1f);
				}
				onComplete?.Invoke();
			});
		}

		protected override void PlayTest(string ingBaseId)
		{
			string skin = null;
			if (flavorSkins != null && flavorSkins.Count > 0)
			{
				skin = flavorSkins[_testFlavor++ % flavorSkins.Count].skin;
			}
			PlayMerge((SkeletonData data) => string.IsNullOrEmpty(skin) ? null : data.FindSkin(skin), null);
		}

		private void PlayMerge(Func<SkeletonData, Skin> skinFor, Action onComplete)
		{
			bool finished = false;
			void Finish()
			{
				if (!finished)
				{
					finished = true;
					Deactivate();
					onComplete?.Invoke();
				}
			}
			if (!skeletonAnimation || string.IsNullOrEmpty(mergeAnim))
			{
				Finish();
				return;
			}
			skeletonAnimation.gameObject.SetActive(value: true);
			Spine.AnimationState animationState = skeletonAnimation.AnimationState;
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (animationState == null || skeleton == null)
			{
				Finish();
				return;
			}
			Skin skin = skinFor(skeleton.Data);
			if (skin != null)
			{
				skeleton.SetSkin(skin);
			}
			skeleton.SetToSetupPose();
			TrackEntry trackEntry = animationState.SetAnimation(0, mergeAnim, loop: false);
			if (trackEntry == null)
			{
				Finish();
				return;
			}
			trackEntry.Complete += delegate
			{
				Finish();
			};
			PlayMergeSfx(mergeSfx);
		}

		private Skin SkinFor(FlexibleDragItem result, SkeletonData data)
		{
			if (!result)
			{
				return null;
			}
			PieceSet pieces = result.Pieces;
			foreach (FlavorSkin flavorSkin in flavorSkins)
			{
				if (flavorSkin != null && !string.IsNullOrEmpty(flavorSkin.skin) && pieces[(int)flavorSkin.piece] >= 1)
				{
					return data.FindSkin(flavorSkin.skin);
				}
			}
			return null;
		}

		private Spine.Animation FindClip()
		{
			if (!skeletonAnimation || string.IsNullOrEmpty(mergeAnim))
			{
				return null;
			}
			SkeletonData skeletonData;
			if (skeletonAnimation.Skeleton != null)
			{
				skeletonData = skeletonAnimation.Skeleton.Data;
			}
			else
			{
				if (!skeletonAnimation.skeletonDataAsset)
				{
					return null;
				}
				skeletonData = skeletonAnimation.skeletonDataAsset.GetSkeletonData(quiet: true);
			}
			return skeletonData?.FindAnimation(mergeAnim);
		}

		private void Deactivate()
		{
			if (!skeletonAnimation)
			{
				return;
			}
			Spine.AnimationState animationState = skeletonAnimation.AnimationState;
			if (animationState != null)
			{
				animationState.ClearTrack(0);
			}
			if (skeletonAnimation.Skeleton != null)
			{
				skeletonAnimation.Skeleton.SetToSetupPose();
				skeletonAnimation.Update(0f);
				skeletonAnimation.LateUpdate();
			}
			skeletonAnimation.gameObject.SetActive(value: false);
		}
	}
}
