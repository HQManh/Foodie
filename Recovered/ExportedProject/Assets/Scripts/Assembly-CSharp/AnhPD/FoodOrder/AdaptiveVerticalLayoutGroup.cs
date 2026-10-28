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
		private float maxItemHeight;

		[Tooltip("Chiều rộng tối đa mỗi slot, 0 = rộng hết khung")]
		[SerializeField]
		[Min(0f)]
		private float maxItemWidth;

		private readonly List<Vector2> _sizes;

		private readonly List<Fit> _fits;

		private void UpdateSizes()
		{
		}

		private static float HeightOf(Fit fit, float s)
		{
			return 0f;
		}

		private float TotalHeight(float s)
		{
			return 0f;
		}

		private static void ReadChild(RectTransform child, out float aspect, out float scale)
		{
			aspect = default;
			scale = default;
		}

		public override void CalculateLayoutInputHorizontal()
		{
		}

		public override void CalculateLayoutInputVertical()
		{
		}

		public override void SetLayoutHorizontal()
		{
		}

		public override void SetLayoutVertical()
		{
		}

		private float ContentHeight()
		{
			return 0f;
		}

		public void Refresh()
		{
		}
	}
}
