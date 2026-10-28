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

		private UISandwichLayer[] OrderedFillings
		{
			get
			{
				if (_orderedFillings == null)
				{
					_orderedFillings = (UISandwichLayer[])imgFillings.Clone();
					System.Array.Sort(_orderedFillings, (a, b) => SandwichPieceTable.FillingRank(a.piece).CompareTo(SandwichPieceTable.FillingRank(b.piece)));
				}
				return _orderedFillings;
			}
		}

		public void Display(PieceSet pieces)
		{
			if (imgFillings != null)
			{
				foreach (UISandwichLayer layer in imgFillings)
				{
					if (layer != null && layer.render != null)
					{
						layer.render.gameObject.SetActive(false);
					}
				}
			}
			int bunCount = pieces[0];
			int siblingIndex = 0;
			if (bottom != null)
			{
				bottom.gameObject.SetActive(bunCount > 0);
				bottom.transform.SetSiblingIndex(0);
				siblingIndex = 1;
			}
			UISandwichLayer[] ordered = OrderedFillings;
			if (ordered == null)
			{
				return;
			}
			foreach (UISandwichLayer layer2 in ordered)
			{
				if (layer2 == null || layer2.render == null)
				{
					continue;
				}
				if (pieces[(int)layer2.piece] != 0)
				{
					layer2.render.gameObject.SetActive(true);
					layer2.render.transform.SetSiblingIndex(siblingIndex);
					siblingIndex++;
				}
			}
			if (top == null)
			{
				return;
			}
			top.gameObject.SetActive(bunCount > 0);
			top.transform.SetSiblingIndex(siblingIndex);
		}

		public void SetTint(Color tint)
		{
			Tint(bottom, tint);
			Tint(top, tint);
			if (imgFillings != null)
			{
				foreach (UISandwichLayer layer in imgFillings)
				{
					if (layer != null)
					{
						Tint(layer.render, tint);
					}
				}
			}
		}

		public void SetAlpha(float alpha)
		{
			Alpha(bottom, alpha);
			Alpha(top, alpha);
			if (imgFillings != null)
			{
				foreach (UISandwichLayer layer in imgFillings)
				{
					if (layer != null)
					{
						Alpha(layer.render, alpha);
					}
				}
			}
		}

		private static void Tint(Image image, Color tint)
		{
			if (image != null)
			{
				image.color = tint;
			}
		}

		private static void Alpha(Image image, float alpha)
		{
			if (image != null)
			{
				Color c = image.color;
				c.a = alpha;
				image.color = c;
			}
		}
	}
}
