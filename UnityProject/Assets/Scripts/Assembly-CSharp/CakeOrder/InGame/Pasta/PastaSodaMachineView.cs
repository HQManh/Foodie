using AnhPD.FoodOrder;
using DG.Tweening;
using UnityEngine;

namespace CakeOrder.InGame.Pasta
{
	public sealed class PastaSodaMachineView : GroupViewSpineAnimation
	{
		[SerializeField]
		private GameObject idleVisual;

		[Header("Cup landing (baked from pour_coke_p2 frame 0)")]
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
		private float landingBlendDuration;

		private void Awake()
		{
			if (idleVisual != null)
			{
				idleVisual.SetActive(true);
			}
			if (SpineAnimation == null)
			{
				return;
			}
			SpineAnimation.gameObject.SetActive(false);
		}

		public override Tween CreateIngredientFlight(DragItem item, int slotIndex)
		{
			if (item == null || landingTarget == null || landingMesh == null || landingMaterial == null || landingSprite == null)
			{
				return null;
			}

			// Find the item's enabled, active sprite renderer that shows the landing sprite.
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
			Tween landTween = jump;
			landTween.OnUpdate(() => Fade(landTween));
			landTween.OnComplete(() => Restore());

			Sequence sequence = DOTween.Sequence();
			// TODO(unrecovered): pseudocode inserts an unidentified tween on item.Tf (DAT_091dbfd8) with a follow-up ease before appending the jump.
			sequence.Append(landTween);
			sequence.AppendCallback(() => Restore());
			return sequence;
		}

		public override void Play(float duration)
		{
			if (idleVisual != null)
			{
				idleVisual.SetActive(false);
			}
			base.Play(duration);
			if (SpineAnimation == null)
			{
				return;
			}
			Spine.Skeleton skeleton = SpineAnimation.Skeleton;
			if (skeleton == null)
			{
				return;
			}
			SpineAnimation.Update(0f);
			if (SpineAnimation != null && SpineAnimation.Skeleton != null)
			{
				SpineAnimation.Skeleton.UpdateWorldTransform(Spine.Skeleton.Physics.None);
			}
			if (SpineAnimation != null)
			{
				SpineAnimation.LateUpdate();
			}
		}

		public override float GetPlayDuration(float fallbackDuration)
		{
			float fromBase = base.GetPlayDuration(0f);
			float result = Mathf.Max(0f, fallbackDuration);
			if (fromBase > 0f)
			{
				result = fromBase;
			}
			return result;
		}

		public override float GetProcessDuration(float fallbackDuration)
		{
			// TODO(unrecovered): pseudocode tail-calls a virtual slot (0x198, arg from 0x1a0) on this object; target not identified. Returning 0.
			return 0f;
		}

		public override void Stop()
		{
			base.Stop();
			if (idleVisual != null)
			{
				idleVisual.SetActive(true);
			}
		}
	}
}
