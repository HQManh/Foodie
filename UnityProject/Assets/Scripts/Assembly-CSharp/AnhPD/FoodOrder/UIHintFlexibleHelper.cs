using System.Collections.Generic;
using EssentialSystemR1;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class UIHintFlexibleHelper : MonoSingleton<UIHintFlexibleHelper>
	{
		[SerializeField]
		private Camera subCamera;

		[SerializeField]
		private Transform content;

		[Tooltip("Khoảng trống chừa quanh món khi fit vào khung camera (tỉ lệ theo khung)")]
		[SerializeField]
		[Range(0f, 0.4f)]
		private float framePadding;

		private FlexibleDragItem _flexibleItem;

		private readonly Dictionary<string, Sprite> _cache = new Dictionary<string, Sprite>();

		[Tooltip("Cạnh dài của ảnh chụp (px). Cạnh ngắn theo tỉ lệ món — ảnh không còn vuông")]
		[SerializeField]
		[Min(16f)]
		private int captureLongSide;

		private const float MinSideRatio = 0.125f;

		private readonly Dictionary<string, float> _relHeight = new Dictionary<string, float>();

		private readonly Dictionary<string, float> _refHeight = new Dictionary<string, float>();

		public Sprite CaptureSprite(string id)
		{
			Sprite cached;
			if (_cache.TryGetValue(id, out cached))
			{
				return cached;
			}
			LevelInfo info = MessyController.Ins != null ? MessyController.Ins.Info : null;
			if (info == null)
			{
				return null;
			}
			string baseId = FlexibleId.BaseOf(id);
			FlexibleDragItem prefab = info.GetIngredientPrefab(baseId) as FlexibleDragItem;
			RcDisplayConfig config = info.GetDisplayConfig(baseId);
			Texture2D texture = CaptureTexture(prefab, id, config);
			if (texture == null)
			{
				return null;
			}
			int width = texture.width;
			int height = texture.height;
			Sprite sprite = Sprite.Create(texture, new Rect(0f, 0f, width, height), new Vector2(0.5f, 0.5f), Mathf.Max(width, height));
			_cache[id] = sprite;
			MeasureRelativeHeight(id, config);
			_relHeight.Remove(id);
			return sprite;
		}

		public float RelativeHeight(string id)
		{
			if (!_relHeight.ContainsKey(id))
			{
				CaptureSprite(id);
			}
			float value;
			if (!_relHeight.TryGetValue(id, out value))
			{
				value = 1f;
			}
			return value;
		}

		private float MeasureRelativeHeight(string id, RcDisplayConfig config)
		{
			// TODO(unrecovered): the vtable +0x288 getter is FlexibleDragItem.ReferenceIdOf (now in the stubs), but the rest depends on FrameHeight, which is still unrecovered (its virtual slots 0x258/0x260 are unnamed); not applied.
			return 1f;
		}

		private static float FrameHeight(FlexibleDragItem item, string longId, RcDisplayConfig config)
		{
			// TODO(unrecovered): sets the item's scale from a static config (singleton +0xb8 fields) and measures bounds through TryGetFrameBounds; the scale source and the virtual call (vtable +0x260 / +0x188 / +0x1a8) have no stub names.
			return 0f;
		}

		public Texture2D CaptureTexture(FlexibleDragItem prefab, string id, RcDisplayConfig config)
		{
			// TODO(unrecovered): recycles the previous capture through a pooled object dictionary reached via a chain of singletons (DAT_091b4c88 +0x20 +0xc0 +0x10 +0xb8), and instantiates the capture item from that pool; the pool and chain have no stub names.
			return null;
		}

		private Texture2D CaptureItem(FlexibleDragItem item, string id, RcDisplayConfig config)
		{
			// TODO(unrecovered): depends on the item's virtual setup calls (vtable +0x198 / +0x260), FrameSize, FitToCamera and Render, none of which have stub names for the virtual slots.
			return null;
		}

		private void FrameSize(FlexibleDragItem item, RcDisplayConfig config, out int width, out int height)
		{
			int side = captureLongSide;
			width = side;
			height = side;
			Bounds bounds;
			if (!TryGetFrameBounds(item, config, out bounds))
			{
				return;
			}
			if (bounds.size.x <= 0f || bounds.size.y <= 0f)
			{
				return;
			}
			float aspect = Mathf.Clamp(bounds.size.x / bounds.size.y, MinSideRatio, 8f);
			if (aspect >= 1f)
			{
				int h = Mathf.RoundToInt(side / aspect);
				height = h < 2 ? 1 : h;
			}
			else
			{
				int w = Mathf.RoundToInt(side * aspect);
				width = w < 2 ? 1 : w;
			}
		}

		private void FitToCamera(FlexibleDragItem item, int width, int height, float scale, RcDisplayConfig config)
		{
			// TODO(unrecovered): camera fit math uses the subCamera projection and the framePadding/config fields with unknown virtual setup; not reproduced.
		}

		private static bool TryGetFrameBounds(FlexibleDragItem item, RcDisplayConfig config, out Bounds bounds)
		{
			bool ok = TryGetSpriteBounds(item.gameObject, out bounds);
			if (config != null && ok && config.hintCrop)
			{
				// Clip the bounds to the part above hintCropY. The pseudocode computes a TransformPoint
				// on item.Tf but never uses its result, so the cut is taken from the config directly.
				float cut = config.hintCropY;
				float top = bounds.center.y + bounds.extents.y;
				if (bounds.center.y - bounds.extents.y < cut && cut < top)
				{
					float halfHeight = (top - cut) * 0.5f;
					bounds = new Bounds(
						new Vector3(bounds.center.x, cut + halfHeight, bounds.center.z),
						new Vector3(bounds.size.x, halfHeight * 2f, bounds.size.z));
				}
			}
			return ok;
		}

		private static bool TryGetSpriteBounds(GameObject root, out Bounds bounds)
		{
			// TODO(unrecovered): the sprite bounds helper is a static in an unrecovered helper class (FUN_03f95a6c chain not in stubs).
			bounds = default;
			return false;
		}

		private Texture2D Render(int width, int height)
		{
			if (subCamera == null)
			{
				return null;
			}
			RenderTexture target = RenderTexture.GetTemporary(width, height, 24);
			RenderTexture previousTarget = subCamera.targetTexture;
			subCamera.targetTexture = target;
			subCamera.aspect = (float)width / height;
			subCamera.Render();
			subCamera.ResetAspect();
			RenderTexture.active = target;
			Texture2D texture = new Texture2D(width, height, TextureFormat.RGBA32, false);
			texture.ReadPixels(new Rect(0f, 0f, width, height), 0, 0);
			texture.Apply();
			RenderTexture.active = null;
			subCamera.targetTexture = previousTarget;
			RenderTexture.ReleaseTemporary(target);
			return texture;
		}
	}
}
