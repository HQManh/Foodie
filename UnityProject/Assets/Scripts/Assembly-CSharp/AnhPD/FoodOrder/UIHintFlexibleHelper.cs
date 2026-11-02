using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using Utilities;

namespace AnhPD.FoodOrder
{
	// Uses the source MonoSingleton (Utilities): the precompiled EssentialSystemR1 one never registered Instance, so the capture was never reachable.
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

		// One capture item per prefab; it is re-displayed for every id instead of being instantiated again.
		private readonly Dictionary<FlexibleDragItem, FlexibleDragItem> _captureItems = new Dictionary<FlexibleDragItem, FlexibleDragItem>();

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
			_relHeight.Remove(id);
			MeasureRelativeHeight(id, config);
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
			// How tall this dish is drawn compared with its plain reference dish (FlexibleDragItem.ReferenceIdOf), so a dish with extra
			// layers or toppings gets proportionally more room in the order layout instead of being squeezed to the same height.
			LevelInfo info = MessyController.Ins != null ? MessyController.Ins.Info : null;
			FlexibleDragItem prefab = info != null ? info.GetIngredientPrefab(FlexibleId.BaseOf(id)) as FlexibleDragItem : null;
			if (prefab == null || !_captureItems.TryGetValue(prefab, out FlexibleDragItem item) || item == null)
			{
				_relHeight[id] = 1f;
				return 1f;
			}
			float height = FrameHeight(item, id, config);
			string referenceId = item.ReferenceIdOf(id);
			float referenceHeight = height;
			if (!string.IsNullOrEmpty(referenceId) && referenceId != id)
			{
				if (!_refHeight.TryGetValue(referenceId, out referenceHeight))
				{
					referenceHeight = FrameHeight(item, referenceId, config);
					_refHeight[referenceId] = referenceHeight;
				}
			}
			float relative = (height > 0f && referenceHeight > 0f) ? height / referenceHeight : 1f;
			_relHeight[id] = relative;
			return relative;
		}

		// Height of the dish drawn for longId, in world units (cut to the hint crop when the display config has one).
		private float FrameHeight(FlexibleDragItem item, string longId, RcDisplayConfig config)
		{
			ShowDish(item, longId);
			float height = TryGetFrameBounds(item, config, out Bounds bounds) ? bounds.size.y : 0f;
			item.gameObject.SetActive(false);
			return height;
		}

		// Puts the capture item at the helper's origin showing longId at full size.
		private void ShowDish(FlexibleDragItem item, string longId)
		{
			Transform tf = item.transform;
			tf.SetParent(content, false);
			tf.localPosition = Vector3.zero;
			tf.localRotation = Quaternion.identity;
			tf.localScale = Vector3.one;
			item.gameObject.SetActive(true);
			item.Display(longId);
			// Display plays an appear tween that starts from zero scale; finish it so the dish is at full size.
			tf.DOComplete(true);
			tf.localScale = Vector3.one;
		}

		public Texture2D CaptureTexture(FlexibleDragItem prefab, string id, RcDisplayConfig config)
		{
			if (prefab == null || subCamera == null || content == null)
			{
				return null;
			}
			if (!_captureItems.TryGetValue(prefab, out FlexibleDragItem item) || item == null)
			{
				item = Instantiate(prefab, content);
				// The capture item is only drawn: it must not take clicks or physics.
				foreach (Collider2D collider in item.GetComponentsInChildren<Collider2D>(true))
				{
					collider.enabled = false;
				}
				_captureItems[prefab] = item;
			}
			return CaptureItem(item, id, config);
		}

		private Texture2D CaptureItem(FlexibleDragItem item, string id, RcDisplayConfig config)
		{
			ShowDish(item, id);
			FrameSize(item, config, out int width, out int height);
			FitToCamera(item, width, height, 1f, config);
			Texture2D texture = Render(width, height);
			item.gameObject.SetActive(false);
			return texture;
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
			if (subCamera == null || !TryGetFrameBounds(item, config, out Bounds bounds))
			{
				return;
			}
			// Orthographic fit: the whole dish plus framePadding on every side, centred on the dish.
			float aspect = (float)width / Mathf.Max(1, height);
			float half = Mathf.Max(bounds.extents.y, bounds.extents.x / aspect) * (1f + framePadding * 2f);
			subCamera.orthographicSize = Mathf.Max(0.01f, half);
			Vector3 position = subCamera.transform.position;
			position.x = bounds.center.x;
			position.y = bounds.center.y;
			subCamera.transform.position = position;
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
			bounds = default;
			bool found = false;
			foreach (SpriteRenderer renderer in root.GetComponentsInChildren<SpriteRenderer>(false))
			{
				if (renderer.sprite == null || !renderer.enabled)
				{
					continue;
				}
				if (!found)
				{
					bounds = renderer.bounds;
					found = true;
				}
				else
				{
					bounds.Encapsulate(renderer.bounds);
				}
			}
			return found;
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
