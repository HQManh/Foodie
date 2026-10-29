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

		private PastaSpineSfxPlayer SfxPlayer
		{
			get
			{
				if (sfxPlayer == null)
				{
					sfxPlayer = GetComponent<PastaSpineSfxPlayer>();
					if (sfxPlayer == null)
					{
						sfxPlayer = gameObject.AddComponent<PastaSpineSfxPlayer>();
					}
					sfxPlayer.SetPaused(isPaused);
				}
				return sfxPlayer;
			}
		}

		private void Awake()
		{
			ResetVisual();
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			current = FindIngredient(ingId);
		}

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			if (item == null)
			{
				return null;
			}
			IngredientAnimation landing = FindIngredient(item.GetId());
			if (landing == null || landing.landingTarget == null || landing.landingMesh == null || landing.landingMaterial == null || landing.landingSprite == null)
			{
				return null;
			}

			// Find the item's enabled, active sprite renderer that shows the landing sprite.
			SpriteRenderer sourceRenderer = null;
			foreach (SpriteRenderer sr in item.GetComponentsInChildren<SpriteRenderer>(true))
			{
				if (sr.sprite == landing.landingSprite && sr.enabled && sr.gameObject.activeInHierarchy)
				{
					sourceRenderer = sr;
					break;
				}
			}
			if (sourceRenderer == null)
			{
				return null;
			}

			Color baseColor = sourceRenderer.color;
			Quaternion baseRotation = item.Tf.rotation;

			GameObject clone = new GameObject("IngredientFlight");
			clone.layer = item.gameObject.layer;
			clone.transform.SetParent(item.Tf, false);

			Mesh mesh = Instantiate(landing.landingMesh);
			MeshFilter filter = clone.AddComponent<MeshFilter>();
			filter.sharedMesh = mesh;

			MeshRenderer meshRenderer = clone.AddComponent<MeshRenderer>();
			meshRenderer.sharedMaterial = landing.landingMaterial;
			meshRenderer.sortingLayerID = sourceRenderer.sortingLayerID;
			meshRenderer.sortingOrder = sourceRenderer.sortingOrder;
			meshRenderer.enabled = false;

			Color32[] sourceColors = mesh.colors32;
			Color32[] fadedColors = new Color32[sourceColors.Length];
			bool restored = false;

			void Restore()
			{
				if (restored)
				{
					return;
				}
				restored = true;
				if (sourceRenderer != null)
				{
					sourceRenderer.color = baseColor;
				}
				if (item.Tf != null)
				{
					item.Tf.rotation = baseRotation;
				}
				if (clone != null)
				{
					clone.SetActive(false);
					Destroy(clone);
				}
				if (mesh != null)
				{
					Destroy(mesh);
				}
			}

			void Fade(Tween tween)
			{
				float elapsed = tween.Elapsed(true);
				float blend = Mathf.Min(0.5f, landingBlendDuration);
				float start = landingBlendDuration >= 0.01f ? 0.5f - blend : 0.49f;
				float t = 0f;
				if (start != 0.5f)
				{
					t = Mathf.Clamp01((elapsed - start) / (0.5f - start));
				}
				if (sourceRenderer != null)
				{
					sourceRenderer.color = new Color(baseColor.r, baseColor.g, baseColor.b, (1f - t) * baseColor.a);
				}
				meshRenderer.enabled = t > 0f;
				for (int i = 0; i < sourceColors.Length; i++)
				{
					Color32 c = sourceColors[i];
					fadedColors[i] = new Color32((byte)(c.r * t), (byte)(c.g * t), (byte)(c.b * t), (byte)(c.a * t));
				}
				if (mesh != null)
				{
					mesh.colors32 = fadedColors;
				}
			}

			Tween jump = item.JumpToMovingTargetTween(landing.landingTarget, false, 0.5f, true, false);
			Tween landTween = jump;
			landTween.OnUpdate(() => Fade(landTween));
			landTween.OnComplete(() => Restore());

			DG.Tweening.Sequence sequence = DOTween.Sequence();
			// TODO(unrecovered): pseudocode inserts an unidentified tween on item.Tf (DAT_091dbfd8) with a follow-up ease before appending the jump.
			sequence.Append(landTween);
			sequence.AppendCallback(() => Restore());
			return sequence;
		}

		public override void Play(float duration)
		{
			if (sfxPlayer != null)
			{
				sfxPlayer.Stop();
			}
			if (current == null || skeletonAnimation == null)
			{
				return;
			}
			Spine.Animation anim = AnimationOf(current.animation);
			Spine.AnimationState state = StateOf();
			if (anim == null || state == null)
			{
				return;
			}
			SetProcessObjectsActive(true);
			gameObject.SetActive(true);
			if (skeletonAnimation == null)
			{
				return;
			}
			skeletonAnimation.gameObject.SetActive(true);
			if (legacyIdleVisual != null)
			{
				legacyIdleVisual.SetActive(false);
			}
			if (processVfx != null)
			{
				processVfx.Play();
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			skeleton.SetToSetupPose();
			TrackEntry entry = state.SetAnimation(0, anim, false);
			if (current == null || entry == null)
			{
				return;
			}
			float handoff = current.handoffTime;
			float clamped = Mathf.Min(handoff, anim.Duration);
			entry.TrackTime = handoff >= 0f ? clamped : 0f;
			skeletonAnimation.timeScale = isPaused ? 0f : 1f;
			skeletonAnimation.Update(0f);
			if (skeletonAnimation.Skeleton != null)
			{
				skeletonAnimation.Skeleton.UpdateWorldTransform(Spine.Skeleton.Physics.None);
			}
			skeletonAnimation.LateUpdate();
			if (current != null)
			{
				SfxPlayer.Play(current.sfx, current.handoffTime, current.sfxStartTime, 1f);
			}
		}

		public override float GetPlayDuration(float fallbackDuration)
		{
			// TODO(unrecovered): pseudocode forwards to a virtual slot (0x1a8) with a default argument; target not identified. Returning fallback.
			return fallbackDuration;
		}

		public override float GetProcessDuration(float fallbackDuration)
		{
			if (current != null)
			{
				Spine.Animation anim = AnimationOf(current.animation);
				if (anim != null && current.handoffTime < anim.Duration)
				{
					return anim.Duration - current.handoffTime;
				}
			}
			return Mathf.Max(0f, fallbackDuration);
		}

		public override void Stop()
		{
			ResetVisual();
		}

		public override void SetPaused(bool paused)
		{
			if (isPaused == paused)
			{
				return;
			}
			isPaused = paused;
			if (skeletonAnimation != null)
			{
				skeletonAnimation.timeScale = paused ? 0f : 1f;
			}
			if (sfxPlayer != null)
			{
				sfxPlayer.SetPaused(paused);
			}
		}

		private void ResetVisual()
		{
			if (sfxPlayer != null)
			{
				sfxPlayer.ResetState();
			}
			if (processVfx != null)
			{
				processVfx.Stop(true);
			}
			current = null;
			isPaused = false;
			SetProcessObjectsActive(false);
			if (legacyIdleVisual != null)
			{
				legacyIdleVisual.SetActive(true);
			}
			if (skeletonAnimation == null)
			{
				return;
			}
			Spine.AnimationState state = StateOf();
			if (state != null)
			{
				state.ClearTrack(0);
			}
			skeletonAnimation.timeScale = 1f;
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null)
			{
				skeleton.SetToSetupPose();
			}
			Spine.Animation anim = AnimationOf(idleAnimation);
			if (state == null || anim == null)
			{
				skeletonAnimation.gameObject.SetActive(false);
				return;
			}
			skeletonAnimation.gameObject.SetActive(true);
			state.SetAnimation(0, anim, true);
			skeletonAnimation.Update(0f);
			skeletonAnimation.LateUpdate();
		}

		private IngredientAnimation FindIngredient(string ingId)
		{
			if (ingredients == null)
			{
				return null;
			}
			foreach (IngredientAnimation entry in ingredients)
			{
				if (entry != null && entry.ingredientId == ingId)
				{
					return entry;
				}
			}
			return null;
		}

		private Spine.Animation AnimationOf(string clip)
		{
			if (string.IsNullOrEmpty(clip) || skeletonAnimation == null || skeletonAnimation.skeletonDataAsset == null)
			{
				return null;
			}
			SkeletonData data = skeletonAnimation.skeletonDataAsset.GetSkeletonData(true);
			if (data == null)
			{
				return null;
			}
			return data.FindAnimation(clip);
		}

		private Spine.AnimationState StateOf()
		{
			if (skeletonAnimation == null)
			{
				return null;
			}
			if (skeletonAnimation.AnimationState == null)
			{
				skeletonAnimation.Initialize(false);
			}
			return skeletonAnimation.AnimationState;
		}

		private void SetProcessObjectsActive(bool active)
		{
			if (activeDuringProcess == null)
			{
				return;
			}
			foreach (GameObject go in activeDuringProcess)
			{
				if (go != null)
				{
					go.SetActive(active);
				}
			}
		}
	}
}
