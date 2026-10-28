using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UIFlexibleBurgerDisplay : MonoBehaviour
	{
		[SerializeField]
		private UIBurgerFilling[] imgFillings;

		[SerializeField]
		private Image bottom;

		[SerializeField]
		private Image top;

		private readonly List<FlexibleBurger.FillingType> _ordered = new List<FlexibleBurger.FillingType>();

		private readonly Dictionary<FlexibleBurger.FillingType, int> _usedPerType = new Dictionary<FlexibleBurger.FillingType, int>();

		private readonly Dictionary<FlexibleBurger.FillingType, List<Image>> _clones = new Dictionary<FlexibleBurger.FillingType, List<Image>>();

		public void Display(List<FlexibleBurger.FillingType> list, bool showTop = true)
		{
			HideAllFillings();
			BurgerPieceTable.InterleaveFillings(list, _ordered);
			_usedPerType.Clear();
			int siblingIndex = 0;
			if (bottom != null)
			{
				bottom.gameObject.SetActive(true);
				bottom.transform.SetSiblingIndex(0);
				siblingIndex = 1;
			}
			foreach (FlexibleBurger.FillingType type in _ordered)
			{
				UIBurgerFilling filling = FindFilling(type);
				if (filling == null || filling.render == null)
				{
					continue;
				}
				int used;
				_usedPerType.TryGetValue(type, out used);
				_usedPerType[type] = used + 1;
				Image render = GetRender(filling, used);
				if (render != null)
				{
					render.gameObject.SetActive(true);
					render.transform.SetSiblingIndex(siblingIndex);
					siblingIndex++;
				}
			}
			if (top == null)
			{
				return;
			}
			top.gameObject.SetActive(showTop);
			top.transform.SetSiblingIndex(siblingIndex);
		}

		private Image GetRender(UIBurgerFilling filling, int indexInType)
		{
			if (indexInType < 1)
			{
				return filling != null ? filling.render : null;
			}
			if (filling == null || filling.render == null)
			{
				return null;
			}
			List<Image> clones;
			if (!_clones.TryGetValue(filling.type, out clones))
			{
				clones = new List<Image>();
				_clones[filling.type] = clones;
			}
			while (indexInType > clones.Count)
			{
				Image source = filling.render;
				Image clone = Instantiate(source, source.transform.parent, false);
				clone.name = string.Format("{0} ({1})", source.name, clones.Count + 2) /* literal recovered by guess */;
				clones.Add(clone);
			}
			return clones[indexInType - 1];
		}

		private void HideAllFillings()
		{
			if (imgFillings != null)
			{
				foreach (UIBurgerFilling filling in imgFillings)
				{
					if (filling != null && filling.render != null)
					{
						filling.render.gameObject.SetActive(false);
					}
				}
			}
			foreach (List<Image> clones in _clones.Values)
			{
				foreach (Image clone in clones)
				{
					if (clone != null)
					{
						clone.gameObject.SetActive(false);
					}
				}
			}
		}

		public void SetTint(Color tint)
		{
			TintImage(bottom, tint);
			TintImage(top, tint);
			if (imgFillings != null)
			{
				foreach (UIBurgerFilling filling in imgFillings)
				{
					if (filling != null)
					{
						TintImage(filling.render, tint);
					}
				}
			}
			foreach (List<Image> clones in _clones.Values)
			{
				foreach (Image clone in clones)
				{
					TintImage(clone, tint);
				}
			}
		}

		private static void TintImage(Image image, Color tint)
		{
			if (image != null)
			{
				image.color = tint;
			}
		}

		public void SetAlpha(float alpha)
		{
			AlphaImage(bottom, alpha);
			AlphaImage(top, alpha);
			if (imgFillings != null)
			{
				foreach (UIBurgerFilling filling in imgFillings)
				{
					if (filling != null)
					{
						AlphaImage(filling.render, alpha);
					}
				}
			}
			foreach (List<Image> clones in _clones.Values)
			{
				foreach (Image clone in clones)
				{
					AlphaImage(clone, alpha);
				}
			}
		}

		private static void AlphaImage(Image image, float alpha)
		{
			if (image != null)
			{
				Color c = image.color;
				c.a = alpha;
				image.color = c;
			}
		}

		private UIBurgerFilling FindFilling(FlexibleBurger.FillingType type)
		{
			if (imgFillings == null)
			{
				return null;
			}
			foreach (UIBurgerFilling filling in imgFillings)
			{
				if (filling != null && filling.type == type)
				{
					return filling;
				}
			}
			return null;
		}
	}
}
