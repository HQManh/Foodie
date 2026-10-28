using System;
using System.Collections.Generic;
using CakeOrder.InGame.IceCream;
using UnityEngine;

namespace AnhPD.FoodOrder
{
	public abstract class IceCreamScoopDisplay : IceCreamPieceDisplay
	{
		[Serializable]
		public class ScoopSprite
		{
			public IceCreamPiece piece;

			public Sprite sprite;
		}

		[SerializeField]
		private List<ScoopSprite> scoopSprites = new List<ScoopSprite>();

		public override bool CanShow(IceCreamPiece piece)
		{
			if (IceCreamPieceTable.IsFlavor(piece))
			{
				return SpriteOf(piece) != null;
			}
			return base.CanShow(piece);
		}

		protected static int CountScoops(PieceSet pieces)
		{
			int total = 0;
			for (int kind = 0; kind < 0x30; kind++)
			{
				if (IceCreamPieceTable.IsFlavor((IceCreamPiece)kind))
				{
					total += pieces[kind];
				}
			}
			return total;
		}

		protected int SetScoops(SpriteRenderer[] renderers, PieceSet pieces, IReadOnlyList<int> order = null)
		{
			PieceSet used = PieceSet.Empty;
			int j = 0;
			if (order != null)
			{
				for (int i = 0; i < order.Count; i++)
				{
					int kind = order[i];
					if (kind < 0x30 && used[kind] < pieces[kind] && IceCreamPieceTable.IsFlavor((IceCreamPiece)kind))
					{
						used = used.Add(kind);
						SetScoop(renderers[j], SpriteFor(j, (IceCreamPiece)kind));
						j++;
					}
				}
			}
			for (int kind2 = 0; kind2 < 0x30 && j < renderers.Length; kind2++)
			{
				if (IceCreamPieceTable.IsFlavor((IceCreamPiece)kind2))
				{
					int remaining = pieces[kind2] - used[kind2];
					for (int n = 0; n < remaining && j < renderers.Length; n++)
					{
						SetScoop(renderers[j], SpriteFor(j, (IceCreamPiece)kind2));
						j++;
					}
				}
			}
			for (int r = j; r < renderers.Length; r++)
			{
				SetScoop(renderers[r], null);
			}
			return j;
		}

		protected virtual Sprite SpriteFor(int index, IceCreamPiece piece)
		{
			return SpriteOf(piece);
		}

		private static void SetScoop(SpriteRenderer renderer, Sprite sprite)
		{
			if (renderer != null)
			{
				renderer.sprite = sprite;
				renderer.gameObject.SetActive(sprite != null);
			}
		}

		private Sprite SpriteOf(IceCreamPiece piece)
		{
			for (int i = 0; i < scoopSprites.Count; i++)
			{
				ScoopSprite scoopSprite = scoopSprites[i];
				if (scoopSprite != null && scoopSprite.piece == piece)
				{
					return scoopSprite.sprite;
				}
			}
			return null;
		}
	}
}
