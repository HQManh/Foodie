using System;
using System.Collections.Generic;
using AnhPD.FoodOrder;
using DG.Tweening;
using Spine;
using Spine.Unity;
using UnityEngine;
using UnityEngine.Serialization;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaSpineToolView : StationGroupView
	{
		[Serializable]
		private sealed class IngredientAnimation
		{
			public string ingredientId;

			[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation", fallbackToTextField = true)]
			public string animation;

			[Min(0f)]
			public float handoffTime;

			public AudioClip sfx;

			[FormerlySerializedAs("delaySfx")]
			[Min(0f)]
			public float sfxStartTime;

			[Header("Baked landing pose")]
			public Transform landingTarget;

			public Mesh landingMesh;

			public Material landingMaterial;

			public Sprite landingSprite;
		}

		[SerializeField]
		private SkeletonAnimation skeletonAnimation;

		[SerializeField]
		private GameObject legacyIdleVisual;

		[SpineAnimation(null, null, true, false, false, dataField = "skeletonAnimation", fallbackToTextField = true)]
		[SerializeField]
		private string idleAnimation;

		[SerializeField]
		private List<IngredientAnimation> ingredients;

		[SerializeField]
		private GameObject[] activeDuringProcess;

		[SerializeField]
		private ParticleSystem processVfx;

		[SerializeField]
		[Range(0.01f, 0.3f)]
		private float landingBlendDuration;

		private IngredientAnimation current;

		private bool isPaused;

		private PastaSpineSfxPlayer sfxPlayer;

		private PastaSpineSfxPlayer SfxPlayer => null;

		private void Awake()
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

		private void ResetVisual()
		{
		}

		private IngredientAnimation FindIngredient(string ingId)
		{
			return null;
		}

		private Spine.Animation AnimationOf(string clip)
		{
			return null;
		}

		private Spine.AnimationState StateOf()
		{
			return null;
		}

		private void SetProcessObjectsActive(bool active)
		{
		}
	}
}
