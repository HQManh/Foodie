using System.Collections.Generic;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class UIHintRecipe : MonoBehaviour
	{
		[SerializeField]
		private UIHintRecipeComponent prefab;

		[SerializeField]
		private GameObject plusPrefab;

		[SerializeField]
		private int maxPerRow;

		[SerializeField]
		private float rowSpacing;

		[SerializeField]
		private bool edgePadding;

		private RectTransform _rt;

		private readonly List<UIHintRecipeComponent> _listComponent;

		private readonly List<GameObject> _listPlus;

		private RectTransform Rt => null;

		public void Init(List<RcDisplayConfig> listInfo)
		{
		}

		private void ApplyLayout(int visibleCount)
		{
		}

		private void TestLayout()
		{
		}

		private void LayoutRects(List<RectTransform> items, List<RectTransform> pluses, float itemW, float itemH, float plusW, float plusH)
		{
		}

		private static void SetRect(RectTransform rt, float x, float y)
		{
		}
	}
}
