using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	[AddComponentMenu("Layout/Adaptive Horizontal Layout Group")]
	public class AdaptiveHorizontalLayoutGroup : HorizontalLayoutGroup
	{
		[Header("Adaptive — Padding Left/Right")]
		[SerializeField]
		[Min(0f)]
		private int minPadding;

		[SerializeField]
		[Min(0f)]
		private int maxPadding = 80;

		[Header("Item Count (mốc nội suy theo số child active)")]
		[SerializeField]
		[Min(0f)]
		private int minItemCount = 1;

		[SerializeField]
		[Min(1f)]
		private int maxItemCount = 5;

		private float GetRatio(int activeCount)
		{
			if (maxItemCount - minItemCount == 0 || minItemCount > maxItemCount)
			{
				return 0f;
			}
			return Mathf.Clamp01((float)(activeCount - minItemCount) / (float)(maxItemCount - minItemCount));
		}

		private void ApplyAdaptivePadding(int activeCount)
		{
			float ratio = Mathf.Max(0f, GetRatio(activeCount));
			int num = Mathf.RoundToInt(ratio * (float)(maxPadding - minPadding) + (float)minPadding);
			base.padding.left = num;
			base.padding.right = num;
		}

		public override void CalculateLayoutInputHorizontal()
		{
			base.CalculateLayoutInputHorizontal();
			ApplyAdaptivePadding(base.rectChildren.Count);
			base.CalculateLayoutInputHorizontal();
		}

		public void Refresh()
		{
			SetDirty();
		}
	}
}
