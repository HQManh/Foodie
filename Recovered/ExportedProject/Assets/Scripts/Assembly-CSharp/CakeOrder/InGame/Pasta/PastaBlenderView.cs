using System;
using System.Collections.Generic;
using AnhPD.FoodOrder;
using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaBlenderView : StationGroupView
	{
		[Serializable]
		private sealed class IngredientSkin
		{
			public string ingredientId;

			[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation", fallbackToTextField = true)]
			public string skin;
		}

		[Serializable]
		private sealed class IngredientLanding
		{
			public string ingredientId;

			public Transform target;

			public Mesh mesh;

			public Material material;

			public Sprite sprite;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[Header("Animations")]
		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string milkIntoEmpty;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string milkIdle;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string ingredientsIntoEmpty;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string ingredientsIdle;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string ingredientsIntoMilk;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string milkIntoIngredients;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation")]
		[SerializeField]
		private string blend;

		[Header("SFX")]
		[SerializeField]
		private AudioClip pourMilkSfx;

		[SerializeField]
		[Min(0f)]
		private float pourMilkSfxDelay;

		[SerializeField]
		private AudioClip blendSfx;

		[Header("Playback")]
		[SerializeField]
		[Min(0.01f)]
		private float speedMultiplier;

		[Header("Ingredient Skins")]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation", fallbackToTextField = true)]
		[SerializeField]
		private string emptySkin;

		[SerializeField]
		private List<IngredientSkin> ingredientSkins;

		[Header("Ingredient landing (baked from Spine frame 0)")]
		[SerializeField]
		private List<IngredientLanding> ingredientLandings;

		[SerializeField]
		[Range(0.01f, 0.3f)]
		private float landingBlendDuration;

		private bool hasMilk;

		private bool intakeBusy;

		private bool isPaused;

		private string ingredientId;

		private TrackEntry intakeEntry;

		private float pausedSkeletonTimeScale;

		private float pausedTrackTimeScale;

		private PastaSpineSfxPlayer sfxPlayer;

		public override bool IsIntakeBusy => false;

		private float PlaybackSpeed => 0f;

		private PastaSpineSfxPlayer SfxPlayer => null;

		private void Awake()
		{
		}

		public override void OnBaseTaken(string ingId)
		{
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
		}

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			return null;
		}

		public override void Play(float duration)
		{
		}

		public override float GetPlayDuration(float fallbackDuration)
		{
			return 0f;
		}

		public override float GetProcessDuration(float fallbackDuration)
		{
			return 0f;
		}

		public override void Stop()
		{
		}

		public override void SetPaused(bool paused)
		{
		}

		private void PlayIntake(string clip, string idle, AudioClip startSfx = null)
		{
		}

		private void ApplyIngredientSkin(string ingId)
		{
		}

		private void ApplySkin(string skinName)
		{
		}

		private void ResetVisual()
		{
		}

		private Spine.Animation AnimationOf(string clip)
		{
			return null;
		}

		private Spine.AnimationState StateOf()
		{
			return null;
		}
	}
}
