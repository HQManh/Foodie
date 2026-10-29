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
		private float pourMilkSfxDelay = 0.2f;

		[SerializeField]
		private AudioClip blendSfx;

		[Header("Playback")]
		[SerializeField]
		[Min(0.01f)]
		private float speedMultiplier = 1f;

		[Header("Ingredient Skins")]
		[SpineSkin(null, null, false, false, false, false, dataField = "skeletonAnimation", fallbackToTextField = true)]
		[SerializeField]
		private string emptySkin;

		[SerializeField]
		private List<IngredientSkin> ingredientSkins = new List<IngredientSkin>();

		[Header("Ingredient landing (baked from Spine frame 0)")]
		[SerializeField]
		private List<IngredientLanding> ingredientLandings = new List<IngredientLanding>();

		[SerializeField]
		[Range(0.01f, 0.3f)]
		private float landingBlendDuration = 0.12f;

		private bool hasMilk;

		private bool intakeBusy;

		private bool isPaused;

		private string ingredientId;

		private TrackEntry intakeEntry;

		private float pausedSkeletonTimeScale;

		private float pausedTrackTimeScale;

		private PastaSpineSfxPlayer sfxPlayer;

		public override bool IsIntakeBusy => intakeBusy;

		private float PlaybackSpeed => Mathf.Max(0.01f, speedMultiplier);

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

		public override void OnBaseTaken(string ingId)
		{
			hasMilk = true;
			if (string.IsNullOrEmpty(ingredientId))
			{
				PlayIntake(milkIntoEmpty, milkIdle, pourMilkSfx);
			}
			else
			{
				PlayIntake(milkIntoIngredients, null, pourMilkSfx);
			}
		}

		public override void OnSlotFilled(int slotIndex, string ingId, ExecutionContext ctx)
		{
			gameObject.SetActive(true);
			// literal recovered by guess: the empty-ingredient sentinel
			if (hasMilk && ingId == /* literal recovered by guess */ "")
			{
				return;
			}
			ingredientId = ingId;
			ApplyIngredientSkin(ingId);
			if (!hasMilk)
			{
				PlayIntake(ingredientsIntoEmpty, ingredientsIdle, null);
			}
			else
			{
				PlayIntake(ingredientsIntoMilk, null, null);
			}
		}

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			if (item == null || ingredientLandings == null)
			{
				return null;
			}
			string itemId = item.GetId();
			IngredientLanding landing = null;
			foreach (IngredientLanding candidate in ingredientLandings)
			{
				if (candidate != null && candidate.ingredientId == itemId)
				{
					landing = candidate;
					break;
				}
			}
			if (landing == null || landing.target == null || landing.mesh == null || landing.material == null || landing.sprite == null)
			{
				return null;
			}

			// Find the item's enabled, active sprite renderer that shows the landing sprite.
			SpriteRenderer sourceRenderer = null;
			foreach (SpriteRenderer sr in item.GetComponentsInChildren<SpriteRenderer>(true))
			{
				if (sr.sprite == landing.sprite && sr.enabled && sr.gameObject.activeInHierarchy)
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

			Mesh mesh = Instantiate(landing.mesh);
			MeshFilter filter = clone.AddComponent<MeshFilter>();
			filter.sharedMesh = mesh;

			MeshRenderer meshRenderer = clone.AddComponent<MeshRenderer>();
			meshRenderer.sharedMaterial = landing.material;
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

			Tween jump = item.JumpToMovingTargetTween(landing.target, false, 0.5f, true, false);
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
			gameObject.SetActive(true);
			Spine.AnimationState state = StateOf();
			Spine.Animation anim = AnimationOf(blend);
			if (state == null || anim == null)
			{
				return;
			}
			intakeBusy = false;
			intakeEntry = null;
			TrackEntry entry = state.SetAnimation(0, anim, false);
			if (entry != null)
			{
				entry.TimeScale = isPaused ? 0f : 1f;
				if (skeletonAnimation != null)
				{
					skeletonAnimation.timeScale = isPaused ? 0f : PlaybackSpeed;
				}
				PastaSpineSfxPlayer sfx = SfxPlayer;
				if (sfx != null)
				{
					sfx.Play(blendSfx, 0f, 0f, PlaybackSpeed);
					return;
				}
			}
		}

		public override float GetPlayDuration(float fallbackDuration)
		{
			// TODO(unrecovered): pseudocode forwards to a virtual slot (0x1a8) with no float argument; target not identified. Returning fallback.
			return fallbackDuration;
		}

		public override float GetProcessDuration(float fallbackDuration)
		{
			Spine.Animation anim = AnimationOf(blend);
			if (anim == null || anim.Duration <= 0f)
			{
				return Mathf.Max(0f, fallbackDuration);
			}
			return anim.Duration / PlaybackSpeed;
		}

		public override void Stop()
		{
			ResetVisual();
		}

		public override void SetPaused(bool paused)
		{
			isPaused = paused;
			if (sfxPlayer != null)
			{
				sfxPlayer.SetPaused(paused);
			}
			if (skeletonAnimation == null)
			{
				return;
			}
			Spine.AnimationState state = StateOf();
			TrackEntry current = state != null ? state.GetCurrent(0) : null;
			if (!paused)
			{
				skeletonAnimation.timeScale = pausedSkeletonTimeScale <= 0f ? 1f : pausedSkeletonTimeScale;
				if (current != null)
				{
					current.TimeScale = pausedTrackTimeScale <= 0f ? 1f : pausedTrackTimeScale;
				}
				skeletonAnimation.Update(0f);
			}
			else
			{
				if (skeletonAnimation.timeScale > 0f)
				{
					pausedSkeletonTimeScale = skeletonAnimation.timeScale;
				}
				if (current != null)
				{
					if (current.TimeScale > 0f)
					{
						pausedTrackTimeScale = current.TimeScale;
					}
					current.TimeScale = 0f;
				}
				skeletonAnimation.timeScale = 0f;
			}
		}

		private void PlayIntake(string clip, string idle, AudioClip startSfx = null)
		{
			Spine.AnimationState state = StateOf();
			Spine.Animation anim = AnimationOf(clip);
			if (state == null || anim == null)
			{
				intakeBusy = false;
				return;
			}
			intakeBusy = true;
			intakeEntry = state.SetAnimation(0, anim, false);
			if (intakeEntry == null)
			{
				return;
			}
			intakeEntry.TimeScale = isPaused ? 0f : 1f;
			if (skeletonAnimation != null)
			{
				skeletonAnimation.timeScale = isPaused ? 0f : PlaybackSpeed;
			}
			PastaSpineSfxPlayer sfx = SfxPlayer;
			if (sfx == null)
			{
				return;
			}
			float delay = startSfx != null ? pourMilkSfxDelay : 0f;
			sfx.Play(startSfx, 0f, delay, PlaybackSpeed);
			intakeEntry.Complete += entry =>
			{
				if (intakeEntry != entry)
				{
					return;
				}
				intakeBusy = false;
				intakeEntry = null;
			};
			Spine.Animation idleAnim = AnimationOf(idle);
			if (idleAnim == null)
			{
				return;
			}
			state.AddAnimation(0, idleAnim, true, 0f);
		}

		private void ApplyIngredientSkin(string ingId)
		{
			string skinName = null;
			if (ingredientSkins != null)
			{
				foreach (IngredientSkin entry in ingredientSkins)
				{
					if (entry != null && entry.ingredientId == ingId)
					{
						skinName = entry.skin;
						break;
					}
				}
			}
			ApplySkin(skinName);
		}

		private void ApplySkin(string skinName)
		{
			if (skeletonAnimation == null)
			{
				return;
			}
			Spine.AnimationState state = StateOf();
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (state == null || skeleton == null)
			{
				return;
			}
			if (string.IsNullOrEmpty(skinName))
			{
				skinName = emptySkin;
			}
			Skin skin = skeleton.Data.FindSkin(skinName);
			if (skin != null)
			{
				skeleton.SetSkin(skin);
				skeleton.SetSlotsToSetupPose();
				state.Apply(skeleton);
			}
		}

		private void ResetVisual()
		{
			hasMilk = false;
			isPaused = false;
			ingredientId = null;
			intakeEntry = null;
			intakeBusy = false;
			pausedTrackTimeScale = 1f;
			pausedSkeletonTimeScale = PlaybackSpeed;
			if (sfxPlayer != null)
			{
				sfxPlayer.Stop();
				// TODO(unrecovered): pseudocode also clears two private fields (+0x3c, +0x38) on the SFX player; not accessible from this stub.
			}
			Spine.AnimationState state = StateOf();
			if (state == null)
			{
				return;
			}
			state.ClearTrack(0);
			if (skeletonAnimation == null)
			{
				return;
			}
			Skeleton skeleton = skeletonAnimation.Skeleton;
			if (skeleton != null)
			{
				skeleton.SetToSetupPose();
			}
			ApplySkin(emptySkin);
			if (skeletonAnimation != null)
			{
				skeletonAnimation.timeScale = PlaybackSpeed;
				skeletonAnimation.Update(0f);
				skeletonAnimation.LateUpdate();
			}
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
	}
}
