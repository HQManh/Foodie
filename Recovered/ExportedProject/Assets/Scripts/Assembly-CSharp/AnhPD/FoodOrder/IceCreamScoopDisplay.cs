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
		private List<ScoopSprite> scoopSprites;

		public override bool CanShow(IceCreamPiece piece)
		{
			return false;
		}

		protected static int CountScoops(PieceSet pieces)
		{
			return 0;
		}

		protected int SetScoops(SpriteRenderer[] renderers, PieceSet pieces, IReadOnlyList<int> order = null)
		{
			return 0;
		}

		protected virtual Sprite SpriteFor(int index, IceCreamPiece piece)
		{
			return null;
		}

		private static void SetScoop(SpriteRenderer renderer, Sprite sprite)
		{
		}

		private Sprite SpriteOf(IceCreamPiece piece)
		{
			return null;
		}
	}
}
