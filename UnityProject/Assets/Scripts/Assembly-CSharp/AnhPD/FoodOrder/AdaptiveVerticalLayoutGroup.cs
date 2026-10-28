using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[AddComponentMenu("Layout/Adaptive Vertical Layout Group")]
	public class AdaptiveVerticalLayoutGroup : VerticalLayoutGroup
	{
		private struct Fit
		{
			public float Aspect;

			public float Scale;

			public float Cap;
		}

		[Header("Adaptive — Child Size")]
		[Tooltip("Chiều cao tối đa của món ở dạng gốc (không trang trí); món nhiều trang trí cao hơn theo tỉ lệ. 0 = cao hết khung")]
		[FormerlySerializedAs("maxSize")]
		[SerializeField]
		[Min(0f)]
		private float maxItemHeight = 160f;

		[Tooltip("Chiều rộng tối đa mỗi slot, 0 = rộng hết khung")]
		[SerializeField]
		[Min(0f)]
		private float maxItemWidth;

		private readonly List<Vector2> _sizes = new List<Vector2>();

		private readonly List<Fit> _fits = new List<Fit>();

		private void UpdateSizes()
		{
			_sizes.Clear();
			_fits.Clear();
			int count = base.rectChildren.Count;
			if (count == 0)
			{
				return;
			}
			Rect rect = base.rectTransform.rect;
			float availWidth = rect.width - (float)base.padding.horizontal;
			float availHeight = rect.height - (float)base.padding.vertical - base.spacing * (float)(count - 1);
			if (availWidth <= 0f || availHeight <= 0f)
			{
				float fallback = Mathf.Max(0f, maxItemHeight);
				for (int i = 0; i < count; i++)
				{
					_sizes.Add(new Vector2(fallback, fallback));
				}
				return;
			}
			float widthCap = availWidth;
			if (maxItemWidth > 0f)
			{
				widthCap = Mathf.Min(maxItemWidth, availWidth);
			}
			float maxUnit = 0f;
			for (int j = 0; j < count; j++)
			{
				ReadChild(base.rectChildren[j], out var aspect, out var scale);
				float cap = widthCap / aspect;
				_fits.Add(new Fit
				{
					Aspect = aspect,
					Scale = scale,
					Cap = cap
				});
				maxUnit = Mathf.Max(maxUnit, cap / scale);
			}
			float unit = maxUnit;
			if (maxItemHeight > 0f)
			{
				unit = Mathf.Min(maxUnit, maxItemHeight);
			}
			if (TotalHeight(unit) > availHeight)
			{
				float low = 0f;
				float high = unit;
				for (int k = 0; k < 24; k++)
				{
					float mid = (high + low) * 0.5f;
					if (TotalHeight(mid) <= availHeight)
					{
						low = mid;
					}
					else
					{
						high = mid;
					}
				}
				unit = low;
			}
			foreach (Fit fit in _fits)
			{
				float height = HeightOf(fit, unit);
				_sizes.Add(new Vector2(fit.Aspect * height, height));
			}
		}

		private static float HeightOf(Fit fit, float s)
		{
			return Mathf.Min(fit.Cap, fit.Scale * s);
		}

		private float TotalHeight(float s)
		{
			float num = 0f;
			foreach (Fit fit in _fits)
			{
				num += HeightOf(fit, s);
			}
			return num;
		}

		private static void ReadChild(RectTransform child, out float aspect, out float scale)
		{
			aspect = 1f;
			scale = 1f;
			if (child.TryGetComponent<FOrderItem>(out var item))
			{
				if (item.ContentAspect > 0f)
				{
					aspect = item.ContentAspect;
				}
				if (item.ContentScale > 0f)
				{
					scale = item.ContentScale;
				}
			}
		}

		public override void CalculateLayoutInputHorizontal()
		{
			base.CalculateLayoutInputHorizontal();
			UpdateSizes();
			float maxWidth = 0f;
			foreach (Vector2 size in _sizes)
			{
				if (maxWidth <= size.x)
				{
					maxWidth = size.x;
				}
			}
			SetLayoutInputForAxis(maxWidth + (float)base.padding.horizontal, maxWidth + (float)base.padding.horizontal, -1f, 0);
		}

		public override void CalculateLayoutInputVertical()
		{
			float num = ContentHeight() + (float)base.padding.vertical;
			SetLayoutInputForAxis(num, num, -1f, 1);
		}

		public override void SetLayoutHorizontal()
		{
			for (int i = 0; i < base.rectChildren.Count; i++)
			{
				float x = _sizes[i].x;
				SetChildAlongAxis(base.rectChildren[i], 0, GetStartOffset(0, x), x);
			}
		}

		public override void SetLayoutVertical()
		{
			float startOffset = GetStartOffset(1, ContentHeight());
			for (int i = 0; i < base.rectChildren.Count; i++)
			{
				float y = _sizes[i].y;
				SetChildAlongAxis(base.rectChildren[i], 1, startOffset, y);
				startOffset += y + base.spacing;
			}
		}

		private float ContentHeight()
		{
			if (_sizes.Count == 0)
			{
				return 0f;
			}
			float num = base.spacing * (float)(_sizes.Count - 1);
			foreach (Vector2 size in _sizes)
			{
				num += size.y;
			}
			return num;
		}

		public void Refresh()
		{
			SetDirty();
		}
	}
}
