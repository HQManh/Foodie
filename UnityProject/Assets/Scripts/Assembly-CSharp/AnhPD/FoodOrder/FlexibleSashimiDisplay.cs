using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sushi;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FlexibleSashimiDisplay : MonoBehaviour
	{
		[Serializable]
		public class FishSprite
		{
			public SushiPiece piece;

			public Sprite sprite;
		}

		[Serializable]
		public class Layout
		{
			public GameObject root;

			public List<SpriteRenderer> fish = new List<SpriteRenderer>();

			public List<GameObject> leaves = new List<GameObject>();
		}

		[Tooltip("Index 0 = 1 loại cá, 1 = 2 loại, 2 = 3 loại. Thứ tự fish = thứ tự loại cá.")]
		[SerializeField]
		private List<Layout> layouts = new List<Layout>();

		[SerializeField]
		private List<FishSprite> fishSprites = new List<FishSprite>();

		[SerializeField]
		private SushiPiece leafPiece = SushiPiece.Shiso;

		[Tooltip("Topping: bật/tắt theo piece, không chiếm slot cá.")]
		[SerializeField]
		private List<FlexibleSushiDisplay.PieceVisual> toppings = new List<FlexibleSushiDisplay.PieceVisual>();

		private readonly List<int> _kinds = new List<int>();

		public bool CanShow(SushiPiece piece)
		{
			if (leafPiece == piece)
			{
				return layouts.Exists((Layout l) => l != null && l.leaves.Count > 0);
			}
			if (SushiPieceTable.IsFish(piece))
			{
				return SpriteOf((int)piece) != null;
			}
			for (int i = 0; i < toppings.Count; i++)
			{
				FlexibleSushiDisplay.PieceVisual pieceVisual = toppings[i];
				if (pieceVisual != null && pieceVisual.piece == piece && pieceVisual.visual != null && !pieceVisual.hideWhenPresent)
				{
					return true;
				}
			}
			return false;
		}

		public void Display(PieceSet pieces)
		{
			_kinds.Clear();
			foreach (var (kind, _) in pieces)
			{
				if (SushiPieceTable.IsFish((SushiPiece)kind))
				{
					_kinds.Add(kind);
				}
			}
			int num = Math.Min(_kinds.Count, layouts.Count);
			int leafCount = pieces[(int)leafPiece];
			for (int i = 0; i < layouts.Count; i++)
			{
				Layout layout = layouts[i];
				if (layout == null)
				{
					continue;
				}
				if (layout.root != null)
				{
					layout.root.SetActive(i == num - 1);
				}
				if (i != num - 1)
				{
					continue;
				}
				for (int j = 0; j < layout.fish.Count; j++)
				{
					Show(layout.fish[j], (j < _kinds.Count) ? SpriteOf(_kinds[j]) : null);
				}
				for (int k = 0; k < layout.leaves.Count; k++)
				{
					if (layout.leaves[k] != null)
					{
						layout.leaves[k].SetActive(leafCount > 0);
					}
				}
			}
			for (int l = 0; l < toppings.Count; l++)
			{
				FlexibleSushiDisplay.PieceVisual pieceVisual = toppings[l];
				if (pieceVisual != null && pieceVisual.visual != null)
				{
					pieceVisual.visual.SetActive(pieceVisual.WantsActive(pieces));
				}
			}
		}

		private static void Show(SpriteRenderer renderer, Sprite sprite)
		{
			if (renderer != null)
			{
				renderer.sprite = sprite;
				renderer.gameObject.SetActive(sprite != null);
			}
		}

		private Sprite SpriteOf(int kind)
		{
			for (int i = 0; i < fishSprites.Count; i++)
			{
				if (fishSprites[i] != null && (int)fishSprites[i].piece == kind)
				{
					return fishSprites[i].sprite;
				}
			}
			return null;
		}
	}
}
