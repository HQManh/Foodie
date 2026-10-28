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
		private int maxPadding;

		[Header("Item Count (mốc nội suy theo số child active)")]
		[SerializeField]
		[Min(0f)]
		private int minItemCount;

		[SerializeField]
		[Min(1f)]
		private int maxItemCount;

		private float GetRatio(int activeCount)
		{
			return 0f;
		}

		private void ApplyAdaptivePadding(int activeCount)
		{
		}

		public override void CalculateLayoutInputHorizontal()
		{
		}

		public void Refresh()
		{
		}
	}
}
