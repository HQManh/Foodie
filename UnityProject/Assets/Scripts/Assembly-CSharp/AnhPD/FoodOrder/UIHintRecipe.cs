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

		private readonly List<UIHintRecipeComponent> _listComponent = new List<UIHintRecipeComponent>();

		private readonly List<GameObject> _listPlus = new List<GameObject>();

		private RectTransform Rt
		{
			get
			{
				if (_rt == null)
				{
					_rt = (RectTransform)transform;
				}
				return _rt;
			}
		}

		public void Init(List<RcDisplayConfig> listInfo)
		{
			gameObject.SetActive(true);
			if (listInfo == null)
			{
				return;
			}
			int count = listInfo.Count;
			int plusCount = 0;
			if (count >= 1)
			{
				int rows = maxPerRow != 0 ? (int)((float)count / maxPerRow) : 0;
				plusCount = count - rows;
			}
			while (_listComponent.Count < count)
			{
				UIHintRecipeComponent item = Instantiate(prefab, transform, false);
				_listComponent.Add(item);
			}
			for (int i = 0; i < count; i++)
			{
				_listComponent[i].Init(listInfo[i]);
			}
			for (int j = count; j < _listComponent.Count; j++)
			{
				_listComponent[j].gameObject.SetActive(false);
			}
			while (_listPlus.Count < plusCount)
			{
				GameObject plus = Instantiate(plusPrefab, transform, false);
				_listPlus.Add(plus);
			}
			for (int k = 0; k < plusCount; k++)
			{
				_listPlus[k].SetActive(true);
			}
			for (int l = plusCount; l < _listPlus.Count; l++)
			{
				_listPlus[l].SetActive(false);
			}
			ApplyLayout(count);
		}

		private void ApplyLayout(int visibleCount)
		{
			// TODO(unrecovered): the row/column size math reads RectTransform rects and the rowSpacing/edgePadding fields and calls LayoutRects (now in this stub at line 94); LayoutRects' own packing body is still unrecovered (see below), so the size math is not applied.
		}

		private void TestLayout()
		{
			// TODO(unrecovered): debug-only layout harness; not reproduced.
		}

		private void LayoutRects(List<RectTransform> items, List<RectTransform> pluses, float itemW, float itemH, float plusW, float plusH)
		{
			// TODO(unrecovered): row packing over the item and plus rects (LayoutRebuilder/Canvas forced updates and SetSizeWithCurrentAnchors) is not reproduced.
		}

		private static void SetRect(RectTransform rt, float x, float y)
		{
			// TODO(unrecovered): arguments are passed through a float/layout helper whose signature is not in the stubs.
		}
	}
}
