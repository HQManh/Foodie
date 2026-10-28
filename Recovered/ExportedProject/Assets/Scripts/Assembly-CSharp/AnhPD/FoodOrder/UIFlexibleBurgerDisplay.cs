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

		private readonly List<FlexibleBurger.FillingType> _ordered;

		private readonly Dictionary<FlexibleBurger.FillingType, int> _usedPerType;

		private readonly Dictionary<FlexibleBurger.FillingType, List<Image>> _clones;

		public void Display(List<FlexibleBurger.FillingType> list, bool showTop = true)
		{
		}

		private Image GetRender(UIBurgerFilling filling, int indexInType)
		{
			return null;
		}

		private void HideAllFillings()
		{
		}

		public void SetTint(Color tint)
		{
		}

		private static void TintImage(Image image, Color tint)
		{
		}

		public void SetAlpha(float alpha)
		{
		}

		private static void AlphaImage(Image image, float alpha)
		{
		}

		private UIBurgerFilling FindFilling(FlexibleBurger.FillingType type)
		{
			return null;
		}
	}
}
