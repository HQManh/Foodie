using System;
using System.Collections.Generic;
using CakeOrder.InGame.Sandwich;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public class FruitSandwichDisplay : SandwichDisplayBase
	{
		[Serializable]
		public class PieceSprite
		{
			public SandwichPiece piece;

			public Sprite sprite;
		}

		[SerializeField]
		private List<GameObject> creams = new List<GameObject>();

		[SerializeField]
		[Min(1f)]
		private int slotsPerGroup = 4;

		[SerializeField]
		private List<SpriteRenderer> slots = new List<SpriteRenderer>();

		[SerializeField]
		private List<PieceSprite> sprites = new List<PieceSprite>();

		private readonly List<Sprite> _present = new List<Sprite>();

		public override bool CanShow(SandwichPiece piece)
		{
			Sprite sprite;
			return TryGetSprite((int)piece, out sprite);
		}

		public override void Display(PieceSet pieces)
		{
			int num = pieces[(int)SandwichPiece.WhippedCream];
			foreach (GameObject cream in creams)
			{
				if (cream != null)
				{
					cream.SetActive(num > 0);
				}
			}
			_present.Clear();
			foreach (var (kind, count) in pieces)
			{
				if (count > 0 && TryGetSprite(kind, out var sprite))
				{
					_present.Add(sprite);
				}
			}
			for (int i = 0; i < slots.Count; i++)
			{
				SpriteRenderer spriteRenderer = slots[i];
				if (spriteRenderer != null)
				{
					int count2 = _present.Count;
					spriteRenderer.gameObject.SetActive(count2 > 0);
					if (count2 > 0)
					{
						spriteRenderer.sprite = _present[i % slotsPerGroup % count2];
					}
				}
			}
		}

		private bool TryGetSprite(int kind, out Sprite sprite)
		{
			foreach (PieceSprite item in sprites)
			{
				if (item != null && (int)item.piece == kind && item.sprite != null)
				{
					sprite = item.sprite;
					return true;
				}
			}
			sprite = null;
			return false;
		}
	}
}
