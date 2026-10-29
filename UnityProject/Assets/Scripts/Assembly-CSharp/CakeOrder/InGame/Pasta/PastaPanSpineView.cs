using AnhPD.FoodOrder;
using DG.Tweening;
using Spine.Unity;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaPanSpineView : GroupViewSpineAnimation
	{
		[SerializeField]
		private GameObject idlePan;

		[Header("Ingredient landing (baked from Spine frame 0)")]
		[SerializeField]
		private Transform landingTarget;

		[SerializeField]
		private Mesh landingMesh;

		[SerializeField]
		private Material landingMaterial;

		[SerializeField]
		private Sprite landingSprite;

		[SerializeField]
		[Range(0.01f, 0.3f)]
		private float landingBlendDuration = 0.12f;

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			if (item == null || landingTarget == null || landingMesh == null || landingMaterial == null || landingSprite == null)
			{
				return null;
			}

			SpriteRenderer sourceRenderer = null;
			foreach (SpriteRenderer sr in item.GetComponentsInChildren<SpriteRenderer>(true))
			{
				if (sr.sprite == landingSprite && sr.enabled && sr.gameObject.activeInHierarchy)
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

			Mesh mesh = Instantiate(landingMesh);
			MeshFilter filter = clone.AddComponent<MeshFilter>();
			filter.sharedMesh = mesh;

			MeshRenderer meshRenderer = clone.AddComponent<MeshRenderer>();
			meshRenderer.sharedMaterial = landingMaterial;
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

			Tween jump = item.JumpToMovingTargetTween(landingTarget, false, 0.5f, true, false);
			jump.OnUpdate(() => Fade(jump));
			jump.OnComplete(() => Restore());

			Sequence sequence = DOTween.Sequence();
			// TODO(unrecovered): pseudocode inserts an unidentified tween on item.Tf (DAT_091dbfd8) with a follow-up ease before appending the jump.
			sequence.Append(jump);
			sequence.AppendCallback(() => Restore());
			return sequence;
		}

		public override void OnProcessStart(ExecutionContext ctx)
		{
			SetIdlePanVisible(false);
			base.OnProcessStart(ctx);
		}

		public override void Play(float duration)
		{
			SetIdlePanVisible(false);
			base.Play(duration);
			// The base class keeps its SkeletonAnimation in a private field; reach it through the component.
			SkeletonAnimation skeletonAnimation = GetComponent<SkeletonAnimation>();
			if (skeletonAnimation == null || skeletonAnimation.Skeleton == null)
			{
				return;
			}
			skeletonAnimation.Skeleton.UpdateWorldTransform(Spine.Skeleton.Physics.None);
			skeletonAnimation.LateUpdate();
		}

		public override void Stop()
		{
			if (gameObject.activeSelf)
			{
				base.Stop();
				SetIdlePanVisible(true);
			}
		}

		public override void SetPaused(bool paused)
		{
			if (gameObject.activeSelf)
			{
				base.SetPaused(paused);
			}
		}

		private void SetIdlePanVisible(bool visible)
		{
			if (idlePan != null)
			{
				idlePan.SetActive(visible);
			}
		}
	}
}
