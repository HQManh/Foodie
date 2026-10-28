using UnityEngine;
using UnityEngine.UI;

namespace AnhPD.FoodOrder
{
	public class UISandwichStackDisplay : MonoBehaviour
	{
		[SerializeField]
		private UISandwichLayer[] imgFillings;

		[SerializeField]
		private Image bottom;

		[SerializeField]
		private Image top;

		private UISandwichLayer[] _orderedFillings;

		private UISandwichLayer[] OrderedFillings => null;

		public void Display(PieceSet pieces)
		{
		}

		public void SetTint(Color tint)
		{
		}

		public void SetAlpha(float alpha)
		{
		}

		private static void Tint(Image image, Color tint)
		{
		}

		private static void Alpha(Image image, float alpha)
		{
		}
	}
}
