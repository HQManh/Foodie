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
			return false;
		}

		public override float GetMaxDuration(string ingBaseId)
		{
			return 0f;
		}

		public override void Play(DragItem result, string ingBaseId, Action onComplete)
		{
		}

		protected override void PlayTest(string ingBaseId)
		{
		}

		private void PlayMerge(Func<SkeletonData, Skin> skinFor, Action onComplete)
		{
		}

		private Skin SkinFor(FlexibleDragItem result, SkeletonData data)
		{
			return null;
		}

		private Spine.Animation FindClip()
		{
			return null;
		}

		private void Deactivate()
		{
		}
	}
}
